#include "cachelab.h"
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int v;

typedef struct {
	int valid;
	int tag;
	int accessTime;
} Line;

typedef struct {
	Line* lines;
} Set;

typedef struct {
	int s;
	long S;
	int E;
	int b;
	long B;
	int time;
	int hitCount;
	int missCount;
	int evictionCount;
	Set* sets;
} Cache;

void initCache(Cache* cache) {
	cache->S = 1 << cache->s;
	cache->B = 1 << cache->b;
	cache->sets = (Set*) malloc(cache->S * sizeof(Set));
	for (int i = 0; i < cache->S; ++i) {
		cache->sets[i].lines = (Line*) calloc(cache->E, sizeof(Line));
	}
}

void freeCache(Cache* cache) {
	for (int i = 0; i < cache->S; ++i) {
		free(cache->sets[i].lines);
	}
	free(cache);
}


void accessMemory(Cache* cache, int addr) {
	long setId = (addr >> cache->b) & (cache->S - 1);
	long tag = (addr >> (cache->b + cache->s));
	printf("  %ld   %ld  \n", setId, tag);
	for (int i = 0; i < cache->E; ++i) {
		if (cache->sets[setId].lines[i].tag == tag && cache->sets[setId].lines[i].valid) {
			++cache->hitCount;
			if (v)
				printf("hit ");
			cache->sets[setId].lines[i].accessTime = ++cache->time;
			return;
		}
	}
	++cache->missCount;
	if (v)
		printf("miss ");
	for (int i = 0; i < cache->E; ++i) {
		if (cache->sets[setId].lines[i].valid == 0) {
			cache->sets[setId].lines[i].valid = 1;
			cache->sets[setId].lines[i].tag = tag;
			cache->sets[setId].lines[i].accessTime = ++cache->time;
			return;
		}
	}
	
	++cache->evictionCount;
	if (v)
		printf("eviction ");
	int minAccessTime = 987654321;
	int evictionLine = -1;
	for (int i = 0; i < cache->E; ++i) {
		if (cache->sets[setId].lines[i].accessTime < minAccessTime) {
			minAccessTime = cache->sets[setId].lines[i].accessTime;
			evictionLine = i;
		}
	}
	cache->sets[setId].lines[evictionLine].accessTime = ++cache->time;
	cache->sets[setId].lines[evictionLine].tag = tag;
}


int main(int argc, char** argv)
{
	Cache* cache = (Cache*) malloc(sizeof(Cache));

	char opt;
	FILE* tracefile;
	while (-1 != (opt = getopt(argc, argv, "vhs:E:b:t:"))) {
		switch (opt) {
			case 'v':
				v = 1;
				break;
			case 'h':
				break;
			case 's':
				cache->s = atoi(optarg);
				break;
			case 'E':
				cache->E = atoi(optarg);
				break;
			case 'b':
				cache->b = atoi(optarg);
				break;
			case 't':
				tracefile = fopen(optarg, "r");
				break;
		}
	}

	initCache(cache);
	char op[2];
	int addr, sz;
	while (fscanf(tracefile, "%s %x%*c%d", op, &addr, &sz) != -1){
		if (v) {
			printf("\n%c %x ", op[0], addr);
		}
		switch (op[0]) {
			case 'I':
				break;
			case 'M':
				accessMemory(cache, addr);
			case 'L':
			case 'S':
				accessMemory(cache, addr);
				break;
		}
	}
    printSummary(cache->hitCount, cache->missCount, cache->evictionCount);
	freeCache(cache);
    return 0;
}
