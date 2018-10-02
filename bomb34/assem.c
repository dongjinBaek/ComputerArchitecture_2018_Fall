
bomb:     file format elf64-x86-64


Disassembly of section .init:

0000000000400b00 <_init>:
  400b00:	48 83 ec 08          	sub    $0x8,%rsp
  400b04:	48 8b 05 ed 34 20 00 	mov    0x2034ed(%rip),%rax        # 603ff8 <_DYNAMIC+0x1d0>
  400b0b:	48 85 c0             	test   %rax,%rax
  400b0e:	74 05                	je     400b15 <_init+0x15>
  400b10:	e8 db 01 00 00       	callq  400cf0 <socket@plt+0x10>
  400b15:	48 83 c4 08          	add    $0x8,%rsp
  400b19:	c3                   	retq   

Disassembly of section .plt:

0000000000400b20 <getenv@plt-0x10>:
  400b20:	ff 35 e2 34 20 00    	pushq  0x2034e2(%rip)        # 604008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400b26:	ff 25 e4 34 20 00    	jmpq   *0x2034e4(%rip)        # 604010 <_GLOBAL_OFFSET_TABLE_+0x10>
  400b2c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400b30 <getenv@plt>:
  400b30:	ff 25 e2 34 20 00    	jmpq   *0x2034e2(%rip)        # 604018 <_GLOBAL_OFFSET_TABLE_+0x18>
  400b36:	68 00 00 00 00       	pushq  $0x0
  400b3b:	e9 e0 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400b40 <strcasecmp@plt>:
  400b40:	ff 25 da 34 20 00    	jmpq   *0x2034da(%rip)        # 604020 <_GLOBAL_OFFSET_TABLE_+0x20>
  400b46:	68 01 00 00 00       	pushq  $0x1
  400b4b:	e9 d0 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400b50 <__errno_location@plt>:
  400b50:	ff 25 d2 34 20 00    	jmpq   *0x2034d2(%rip)        # 604028 <_GLOBAL_OFFSET_TABLE_+0x28>
  400b56:	68 02 00 00 00       	pushq  $0x2
  400b5b:	e9 c0 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400b60 <strcpy@plt>:
  400b60:	ff 25 ca 34 20 00    	jmpq   *0x2034ca(%rip)        # 604030 <_GLOBAL_OFFSET_TABLE_+0x30>
  400b66:	68 03 00 00 00       	pushq  $0x3
  400b6b:	e9 b0 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400b70 <puts@plt>:
  400b70:	ff 25 c2 34 20 00    	jmpq   *0x2034c2(%rip)        # 604038 <_GLOBAL_OFFSET_TABLE_+0x38>
  400b76:	68 04 00 00 00       	pushq  $0x4
  400b7b:	e9 a0 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400b80 <write@plt>:
  400b80:	ff 25 ba 34 20 00    	jmpq   *0x2034ba(%rip)        # 604040 <_GLOBAL_OFFSET_TABLE_+0x40>
  400b86:	68 05 00 00 00       	pushq  $0x5
  400b8b:	e9 90 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400b90 <__stack_chk_fail@plt>:
  400b90:	ff 25 b2 34 20 00    	jmpq   *0x2034b2(%rip)        # 604048 <_GLOBAL_OFFSET_TABLE_+0x48>
  400b96:	68 06 00 00 00       	pushq  $0x6
  400b9b:	e9 80 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400ba0 <alarm@plt>:
  400ba0:	ff 25 aa 34 20 00    	jmpq   *0x2034aa(%rip)        # 604050 <_GLOBAL_OFFSET_TABLE_+0x50>
  400ba6:	68 07 00 00 00       	pushq  $0x7
  400bab:	e9 70 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400bb0 <close@plt>:
  400bb0:	ff 25 a2 34 20 00    	jmpq   *0x2034a2(%rip)        # 604058 <_GLOBAL_OFFSET_TABLE_+0x58>
  400bb6:	68 08 00 00 00       	pushq  $0x8
  400bbb:	e9 60 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400bc0 <read@plt>:
  400bc0:	ff 25 9a 34 20 00    	jmpq   *0x20349a(%rip)        # 604060 <_GLOBAL_OFFSET_TABLE_+0x60>
  400bc6:	68 09 00 00 00       	pushq  $0x9
  400bcb:	e9 50 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400bd0 <__libc_start_main@plt>:
  400bd0:	ff 25 92 34 20 00    	jmpq   *0x203492(%rip)        # 604068 <_GLOBAL_OFFSET_TABLE_+0x68>
  400bd6:	68 0a 00 00 00       	pushq  $0xa
  400bdb:	e9 40 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400be0 <fgets@plt>:
  400be0:	ff 25 8a 34 20 00    	jmpq   *0x20348a(%rip)        # 604070 <_GLOBAL_OFFSET_TABLE_+0x70>
  400be6:	68 0b 00 00 00       	pushq  $0xb
  400beb:	e9 30 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400bf0 <signal@plt>:
  400bf0:	ff 25 82 34 20 00    	jmpq   *0x203482(%rip)        # 604078 <_GLOBAL_OFFSET_TABLE_+0x78>
  400bf6:	68 0c 00 00 00       	pushq  $0xc
  400bfb:	e9 20 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c00 <gethostbyname@plt>:
  400c00:	ff 25 7a 34 20 00    	jmpq   *0x20347a(%rip)        # 604080 <_GLOBAL_OFFSET_TABLE_+0x80>
  400c06:	68 0d 00 00 00       	pushq  $0xd
  400c0b:	e9 10 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c10 <__memmove_chk@plt>:
  400c10:	ff 25 72 34 20 00    	jmpq   *0x203472(%rip)        # 604088 <_GLOBAL_OFFSET_TABLE_+0x88>
  400c16:	68 0e 00 00 00       	pushq  $0xe
  400c1b:	e9 00 ff ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c20 <strtol@plt>:
  400c20:	ff 25 6a 34 20 00    	jmpq   *0x20346a(%rip)        # 604090 <_GLOBAL_OFFSET_TABLE_+0x90>
  400c26:	68 0f 00 00 00       	pushq  $0xf
  400c2b:	e9 f0 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c30 <fflush@plt>:
  400c30:	ff 25 62 34 20 00    	jmpq   *0x203462(%rip)        # 604098 <_GLOBAL_OFFSET_TABLE_+0x98>
  400c36:	68 10 00 00 00       	pushq  $0x10
  400c3b:	e9 e0 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c40 <__isoc99_sscanf@plt>:
  400c40:	ff 25 5a 34 20 00    	jmpq   *0x20345a(%rip)        # 6040a0 <_GLOBAL_OFFSET_TABLE_+0xa0>
  400c46:	68 11 00 00 00       	pushq  $0x11
  400c4b:	e9 d0 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c50 <__printf_chk@plt>:
  400c50:	ff 25 52 34 20 00    	jmpq   *0x203452(%rip)        # 6040a8 <_GLOBAL_OFFSET_TABLE_+0xa8>
  400c56:	68 12 00 00 00       	pushq  $0x12
  400c5b:	e9 c0 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c60 <fopen@plt>:
  400c60:	ff 25 4a 34 20 00    	jmpq   *0x20344a(%rip)        # 6040b0 <_GLOBAL_OFFSET_TABLE_+0xb0>
  400c66:	68 13 00 00 00       	pushq  $0x13
  400c6b:	e9 b0 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c70 <gethostname@plt>:
  400c70:	ff 25 42 34 20 00    	jmpq   *0x203442(%rip)        # 6040b8 <_GLOBAL_OFFSET_TABLE_+0xb8>
  400c76:	68 14 00 00 00       	pushq  $0x14
  400c7b:	e9 a0 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c80 <exit@plt>:
  400c80:	ff 25 3a 34 20 00    	jmpq   *0x20343a(%rip)        # 6040c0 <_GLOBAL_OFFSET_TABLE_+0xc0>
  400c86:	68 15 00 00 00       	pushq  $0x15
  400c8b:	e9 90 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400c90 <connect@plt>:
  400c90:	ff 25 32 34 20 00    	jmpq   *0x203432(%rip)        # 6040c8 <_GLOBAL_OFFSET_TABLE_+0xc8>
  400c96:	68 16 00 00 00       	pushq  $0x16
  400c9b:	e9 80 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400ca0 <__fprintf_chk@plt>:
  400ca0:	ff 25 2a 34 20 00    	jmpq   *0x20342a(%rip)        # 6040d0 <_GLOBAL_OFFSET_TABLE_+0xd0>
  400ca6:	68 17 00 00 00       	pushq  $0x17
  400cab:	e9 70 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400cb0 <sleep@plt>:
  400cb0:	ff 25 22 34 20 00    	jmpq   *0x203422(%rip)        # 6040d8 <_GLOBAL_OFFSET_TABLE_+0xd8>
  400cb6:	68 18 00 00 00       	pushq  $0x18
  400cbb:	e9 60 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400cc0 <__ctype_b_loc@plt>:
  400cc0:	ff 25 1a 34 20 00    	jmpq   *0x20341a(%rip)        # 6040e0 <_GLOBAL_OFFSET_TABLE_+0xe0>
  400cc6:	68 19 00 00 00       	pushq  $0x19
  400ccb:	e9 50 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400cd0 <__sprintf_chk@plt>:
  400cd0:	ff 25 12 34 20 00    	jmpq   *0x203412(%rip)        # 6040e8 <_GLOBAL_OFFSET_TABLE_+0xe8>
  400cd6:	68 1a 00 00 00       	pushq  $0x1a
  400cdb:	e9 40 fe ff ff       	jmpq   400b20 <_init+0x20>

0000000000400ce0 <socket@plt>:
  400ce0:	ff 25 0a 34 20 00    	jmpq   *0x20340a(%rip)        # 6040f0 <_GLOBAL_OFFSET_TABLE_+0xf0>
  400ce6:	68 1b 00 00 00       	pushq  $0x1b
  400ceb:	e9 30 fe ff ff       	jmpq   400b20 <_init+0x20>

Disassembly of section .plt.got:

0000000000400cf0 <.plt.got>:
  400cf0:	ff 25 02 33 20 00    	jmpq   *0x203302(%rip)        # 603ff8 <_DYNAMIC+0x1d0>
  400cf6:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

0000000000400d00 <_start>:
  400d00:	31 ed                	xor    %ebp,%ebp
  400d02:	49 89 d1             	mov    %rdx,%r9
  400d05:	5e                   	pop    %rsi
  400d06:	48 89 e2             	mov    %rsp,%rdx
  400d09:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  400d0d:	50                   	push   %rax
  400d0e:	54                   	push   %rsp
  400d0f:	49 c7 c0 00 25 40 00 	mov    $0x402500,%r8
  400d16:	48 c7 c1 90 24 40 00 	mov    $0x402490,%rcx
  400d1d:	48 c7 c7 f6 0d 40 00 	mov    $0x400df6,%rdi
  400d24:	e8 a7 fe ff ff       	callq  400bd0 <__libc_start_main@plt>
  400d29:	f4                   	hlt    
  400d2a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400d30 <deregister_tm_clones>:
  400d30:	b8 87 47 60 00       	mov    $0x604787,%eax
  400d35:	55                   	push   %rbp
  400d36:	48 2d 80 47 60 00    	sub    $0x604780,%rax
  400d3c:	48 83 f8 0e          	cmp    $0xe,%rax
  400d40:	48 89 e5             	mov    %rsp,%rbp
  400d43:	76 1b                	jbe    400d60 <deregister_tm_clones+0x30>
  400d45:	b8 00 00 00 00       	mov    $0x0,%eax
  400d4a:	48 85 c0             	test   %rax,%rax
  400d4d:	74 11                	je     400d60 <deregister_tm_clones+0x30>
  400d4f:	5d                   	pop    %rbp
  400d50:	bf 80 47 60 00       	mov    $0x604780,%edi
  400d55:	ff e0                	jmpq   *%rax
  400d57:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  400d5e:	00 00 
  400d60:	5d                   	pop    %rbp
  400d61:	c3                   	retq   
  400d62:	0f 1f 40 00          	nopl   0x0(%rax)
  400d66:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400d6d:	00 00 00 

0000000000400d70 <register_tm_clones>:
  400d70:	be 80 47 60 00       	mov    $0x604780,%esi
  400d75:	55                   	push   %rbp
  400d76:	48 81 ee 80 47 60 00 	sub    $0x604780,%rsi
  400d7d:	48 c1 fe 03          	sar    $0x3,%rsi
  400d81:	48 89 e5             	mov    %rsp,%rbp
  400d84:	48 89 f0             	mov    %rsi,%rax
  400d87:	48 c1 e8 3f          	shr    $0x3f,%rax
  400d8b:	48 01 c6             	add    %rax,%rsi
  400d8e:	48 d1 fe             	sar    %rsi
  400d91:	74 15                	je     400da8 <register_tm_clones+0x38>
  400d93:	b8 00 00 00 00       	mov    $0x0,%eax
  400d98:	48 85 c0             	test   %rax,%rax
  400d9b:	74 0b                	je     400da8 <register_tm_clones+0x38>
  400d9d:	5d                   	pop    %rbp
  400d9e:	bf 80 47 60 00       	mov    $0x604780,%edi
  400da3:	ff e0                	jmpq   *%rax
  400da5:	0f 1f 00             	nopl   (%rax)
  400da8:	5d                   	pop    %rbp
  400da9:	c3                   	retq   
  400daa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400db0 <__do_global_dtors_aux>:
  400db0:	80 3d f1 39 20 00 00 	cmpb   $0x0,0x2039f1(%rip)        # 6047a8 <completed.7594>
  400db7:	75 11                	jne    400dca <__do_global_dtors_aux+0x1a>
  400db9:	55                   	push   %rbp
  400dba:	48 89 e5             	mov    %rsp,%rbp
  400dbd:	e8 6e ff ff ff       	callq  400d30 <deregister_tm_clones>
  400dc2:	5d                   	pop    %rbp
  400dc3:	c6 05 de 39 20 00 01 	movb   $0x1,0x2039de(%rip)        # 6047a8 <completed.7594>
  400dca:	f3 c3                	repz retq 
  400dcc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400dd0 <frame_dummy>:
  400dd0:	bf 20 3e 60 00       	mov    $0x603e20,%edi
  400dd5:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  400dd9:	75 05                	jne    400de0 <frame_dummy+0x10>
  400ddb:	eb 93                	jmp    400d70 <register_tm_clones>
  400ddd:	0f 1f 00             	nopl   (%rax)
  400de0:	b8 00 00 00 00       	mov    $0x0,%eax
  400de5:	48 85 c0             	test   %rax,%rax
  400de8:	74 f1                	je     400ddb <frame_dummy+0xb>
  400dea:	55                   	push   %rbp
  400deb:	48 89 e5             	mov    %rsp,%rbp
  400dee:	ff d0                	callq  *%rax
  400df0:	5d                   	pop    %rbp
  400df1:	e9 7a ff ff ff       	jmpq   400d70 <register_tm_clones>

0000000000400df6 <main>:
  400df6:	53                   	push   %rbx
  400df7:	83 ff 01             	cmp    $0x1,%edi
  400dfa:	75 10                	jne    400e0c <main+0x16>
  400dfc:	48 8b 05 8d 39 20 00 	mov    0x20398d(%rip),%rax        # 604790 <stdin@@GLIBC_2.2.5>
  400e03:	48 89 05 a6 39 20 00 	mov    %rax,0x2039a6(%rip)        # 6047b0 <infile>
  400e0a:	eb 63                	jmp    400e6f <main+0x79>
  400e0c:	48 89 f3             	mov    %rsi,%rbx
  400e0f:	83 ff 02             	cmp    $0x2,%edi
  400e12:	75 3a                	jne    400e4e <main+0x58>
  400e14:	48 8b 7e 08          	mov    0x8(%rsi),%rdi
  400e18:	be 14 25 40 00       	mov    $0x402514,%esi
  400e1d:	e8 3e fe ff ff       	callq  400c60 <fopen@plt>
  400e22:	48 89 05 87 39 20 00 	mov    %rax,0x203987(%rip)        # 6047b0 <infile>
  400e29:	48 85 c0             	test   %rax,%rax
  400e2c:	75 41                	jne    400e6f <main+0x79>
  400e2e:	48 8b 4b 08          	mov    0x8(%rbx),%rcx
  400e32:	48 8b 13             	mov    (%rbx),%rdx
  400e35:	be 16 25 40 00       	mov    $0x402516,%esi
  400e3a:	bf 01 00 00 00       	mov    $0x1,%edi
  400e3f:	e8 0c fe ff ff       	callq  400c50 <__printf_chk@plt>
  400e44:	bf 08 00 00 00       	mov    $0x8,%edi
  400e49:	e8 32 fe ff ff       	callq  400c80 <exit@plt>
  400e4e:	48 8b 16             	mov    (%rsi),%rdx
  400e51:	be 33 25 40 00       	mov    $0x402533,%esi
  400e56:	bf 01 00 00 00       	mov    $0x1,%edi
  400e5b:	b8 00 00 00 00       	mov    $0x0,%eax
  400e60:	e8 eb fd ff ff       	callq  400c50 <__printf_chk@plt>
  400e65:	bf 08 00 00 00       	mov    $0x8,%edi
  400e6a:	e8 11 fe ff ff       	callq  400c80 <exit@plt>
  400e6f:	e8 ca 05 00 00       	callq  40143e <initialize_bomb>
  400e74:	bf 98 25 40 00       	mov    $0x402598,%edi
  400e79:	e8 f2 fc ff ff       	callq  400b70 <puts@plt>
  400e7e:	bf d8 25 40 00       	mov    $0x4025d8,%edi
  400e83:	e8 e8 fc ff ff       	callq  400b70 <puts@plt>
  400e88:	e8 93 08 00 00       	callq  401720 <read_line>
  400e8d:	48 89 c7             	mov    %rax,%rdi
  400e90:	e8 98 00 00 00       	callq  400f2d <phase_1>
  400e95:	e8 ac 09 00 00       	callq  401846 <phase_defused>
  400e9a:	bf 08 26 40 00       	mov    $0x402608,%edi
  400e9f:	e8 cc fc ff ff       	callq  400b70 <puts@plt>
  400ea4:	e8 77 08 00 00       	callq  401720 <read_line>
  400ea9:	48 89 c7             	mov    %rax,%rdi
  400eac:	e8 98 00 00 00       	callq  400f49 <phase_2>
  400eb1:	e8 90 09 00 00       	callq  401846 <phase_defused>
  400eb6:	bf 4d 25 40 00       	mov    $0x40254d,%edi
  400ebb:	e8 b0 fc ff ff       	callq  400b70 <puts@plt>
  400ec0:	e8 5b 08 00 00       	callq  401720 <read_line>
  400ec5:	48 89 c7             	mov    %rax,%rdi
  400ec8:	e8 e0 00 00 00       	callq  400fad <phase_3>
  400ecd:	e8 74 09 00 00       	callq  401846 <phase_defused>
  400ed2:	bf 6b 25 40 00       	mov    $0x40256b,%edi
  400ed7:	e8 94 fc ff ff       	callq  400b70 <puts@plt>
  400edc:	e8 3f 08 00 00       	callq  401720 <read_line>
  400ee1:	48 89 c7             	mov    %rax,%rdi
  400ee4:	e8 a9 01 00 00       	callq  401092 <phase_4>
  400ee9:	e8 58 09 00 00       	callq  401846 <phase_defused>
  400eee:	bf 38 26 40 00       	mov    $0x402638,%edi
  400ef3:	e8 78 fc ff ff       	callq  400b70 <puts@plt>
  400ef8:	e8 23 08 00 00       	callq  401720 <read_line>
  400efd:	48 89 c7             	mov    %rax,%rdi
  400f00:	e8 00 02 00 00       	callq  401105 <phase_5>
  400f05:	e8 3c 09 00 00       	callq  401846 <phase_defused>
  400f0a:	bf 7a 25 40 00       	mov    $0x40257a,%edi
  400f0f:	e8 5c fc ff ff       	callq  400b70 <puts@plt>
  400f14:	e8 07 08 00 00       	callq  401720 <read_line>
  400f19:	48 89 c7             	mov    %rax,%rdi
  400f1c:	e8 61 02 00 00       	callq  401182 <phase_6>
  400f21:	e8 20 09 00 00       	callq  401846 <phase_defused>
  400f26:	b8 00 00 00 00       	mov    $0x0,%eax
  400f2b:	5b                   	pop    %rbx
  400f2c:	c3                   	retq   

0000000000400f2d <phase_1>:
  400f2d:	48 83 ec 08          	sub    $0x8,%rsp
  400f31:	be 60 26 40 00       	mov    $0x402660,%esi
  400f36:	e8 9c 04 00 00       	callq  4013d7 <strings_not_equal>
  400f3b:	85 c0                	test   %eax,%eax
  400f3d:	74 05                	je     400f44 <phase_1+0x17>
  400f3f:	e8 67 07 00 00       	callq  4016ab <explode_bomb>
  400f44:	48 83 c4 08          	add    $0x8,%rsp
  400f48:	c3                   	retq   

0000000000400f49 <phase_2>:
  400f49:	55                   	push   %rbp
  400f4a:	53                   	push   %rbx
  400f4b:	48 83 ec 28          	sub    $0x28,%rsp
  400f4f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400f56:	00 00 
  400f58:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
  400f5d:	31 c0                	xor    %eax,%eax
  400f5f:	48 89 e6             	mov    %rsp,%rsi
  400f62:	e8 7a 07 00 00       	callq  4016e1 <read_six_numbers>
  400f67:	83 3c 24 01          	cmpl   $0x1,(%rsp)
  400f6b:	74 05                	je     400f72 <phase_2+0x29>
  400f6d:	e8 39 07 00 00       	callq  4016ab <explode_bomb>
  400f72:	48 89 e3             	mov    %rsp,%rbx
  400f75:	48 8d 6c 24 14       	lea    0x14(%rsp),%rbp
  400f7a:	8b 03                	mov    (%rbx),%eax
  400f7c:	01 c0                	add    %eax,%eax
  400f7e:	39 43 04             	cmp    %eax,0x4(%rbx)
  400f81:	74 05                	je     400f88 <phase_2+0x3f>
  400f83:	e8 23 07 00 00       	callq  4016ab <explode_bomb>
  400f88:	48 83 c3 04          	add    $0x4,%rbx
  400f8c:	48 39 eb             	cmp    %rbp,%rbx
  400f8f:	75 e9                	jne    400f7a <phase_2+0x31>
  400f91:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
  400f96:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  400f9d:	00 00 
  400f9f:	74 05                	je     400fa6 <phase_2+0x5d>
  400fa1:	e8 ea fb ff ff       	callq  400b90 <__stack_chk_fail@plt>
  400fa6:	48 83 c4 28          	add    $0x28,%rsp
  400faa:	5b                   	pop    %rbx
  400fab:	5d                   	pop    %rbp
  400fac:	c3                   	retq   

0000000000400fad <phase_3>:
  400fad:	48 83 ec 18          	sub    $0x18,%rsp
  400fb1:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400fb8:	00 00 
  400fba:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  400fbf:	31 c0                	xor    %eax,%eax
  400fc1:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
  400fc6:	48 89 e2             	mov    %rsp,%rdx
  400fc9:	be 5d 29 40 00       	mov    $0x40295d,%esi
  400fce:	e8 6d fc ff ff       	callq  400c40 <__isoc99_sscanf@plt>
  400fd3:	83 f8 01             	cmp    $0x1,%eax
  400fd6:	7f 05                	jg     400fdd <phase_3+0x30>
  400fd8:	e8 ce 06 00 00       	callq  4016ab <explode_bomb>
  400fdd:	83 3c 24 07          	cmpl   $0x7,(%rsp)
  400fe1:	77 3b                	ja     40101e <phase_3+0x71>
  400fe3:	8b 04 24             	mov    (%rsp),%eax
  400fe6:	ff 24 c5 c0 26 40 00 	jmpq   *0x4026c0(,%rax,8)
  400fed:	b8 91 00 00 00       	mov    $0x91,%eax
  400ff2:	eb 3b                	jmp    40102f <phase_3+0x82>
  400ff4:	b8 fb 00 00 00       	mov    $0xfb,%eax
  400ff9:	eb 34                	jmp    40102f <phase_3+0x82>
  400ffb:	b8 82 03 00 00       	mov    $0x382,%eax
  401000:	eb 2d                	jmp    40102f <phase_3+0x82>
  401002:	b8 bb 03 00 00       	mov    $0x3bb,%eax
  401007:	eb 26                	jmp    40102f <phase_3+0x82>
  401009:	b8 57 01 00 00       	mov    $0x157,%eax
  40100e:	eb 1f                	jmp    40102f <phase_3+0x82>
  401010:	b8 d2 03 00 00       	mov    $0x3d2,%eax
  401015:	eb 18                	jmp    40102f <phase_3+0x82>
  401017:	b8 4c 02 00 00       	mov    $0x24c,%eax
  40101c:	eb 11                	jmp    40102f <phase_3+0x82>
  40101e:	e8 88 06 00 00       	callq  4016ab <explode_bomb>
  401023:	b8 00 00 00 00       	mov    $0x0,%eax
  401028:	eb 05                	jmp    40102f <phase_3+0x82>
  40102a:	b8 68 02 00 00       	mov    $0x268,%eax
  40102f:	3b 44 24 04          	cmp    0x4(%rsp),%eax
  401033:	74 05                	je     40103a <phase_3+0x8d>
  401035:	e8 71 06 00 00       	callq  4016ab <explode_bomb>
  40103a:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
  40103f:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  401046:	00 00 
  401048:	74 05                	je     40104f <phase_3+0xa2>
  40104a:	e8 41 fb ff ff       	callq  400b90 <__stack_chk_fail@plt>
  40104f:	48 83 c4 18          	add    $0x18,%rsp
  401053:	c3                   	retq   

0000000000401054 <func4>:
  401054:	48 83 ec 08          	sub    $0x8,%rsp
  401058:	89 d0                	mov    %edx,%eax
  40105a:	29 f0                	sub    %esi,%eax
  40105c:	89 c1                	mov    %eax,%ecx
  40105e:	c1 e9 1f             	shr    $0x1f,%ecx
  401061:	01 c8                	add    %ecx,%eax
  401063:	d1 f8                	sar    %eax
  401065:	8d 0c 30             	lea    (%rax,%rsi,1),%ecx
  401068:	39 f9                	cmp    %edi,%ecx
  40106a:	7e 0c                	jle    401078 <func4+0x24>
  40106c:	8d 51 ff             	lea    -0x1(%rcx),%edx
  40106f:	e8 e0 ff ff ff       	callq  401054 <func4>
  401074:	01 c0                	add    %eax,%eax
  401076:	eb 15                	jmp    40108d <func4+0x39>
  401078:	b8 00 00 00 00       	mov    $0x0,%eax
  40107d:	39 f9                	cmp    %edi,%ecx
  40107f:	7d 0c                	jge    40108d <func4+0x39>
  401081:	8d 71 01             	lea    0x1(%rcx),%esi
  401084:	e8 cb ff ff ff       	callq  401054 <func4>
  401089:	8d 44 00 01          	lea    0x1(%rax,%rax,1),%eax
  40108d:	48 83 c4 08          	add    $0x8,%rsp
  401091:	c3                   	retq   

0000000000401092 <phase_4>:
  401092:	48 83 ec 18          	sub    $0x18,%rsp
  401096:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40109d:	00 00 
  40109f:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  4010a4:	31 c0                	xor    %eax,%eax
  4010a6:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
  4010ab:	48 89 e2             	mov    %rsp,%rdx
  4010ae:	be 5d 29 40 00       	mov    $0x40295d,%esi
  4010b3:	e8 88 fb ff ff       	callq  400c40 <__isoc99_sscanf@plt>
  4010b8:	83 f8 02             	cmp    $0x2,%eax
  4010bb:	75 06                	jne    4010c3 <phase_4+0x31>
  4010bd:	83 3c 24 0e          	cmpl   $0xe,(%rsp)
  4010c1:	76 05                	jbe    4010c8 <phase_4+0x36>
  4010c3:	e8 e3 05 00 00       	callq  4016ab <explode_bomb>
  4010c8:	ba 0e 00 00 00       	mov    $0xe,%edx
  4010cd:	be 00 00 00 00       	mov    $0x0,%esi
  4010d2:	8b 3c 24             	mov    (%rsp),%edi
  4010d5:	e8 7a ff ff ff       	callq  401054 <func4>
  4010da:	83 f8 01             	cmp    $0x1,%eax
  4010dd:	75 07                	jne    4010e6 <phase_4+0x54>
  4010df:	83 7c 24 04 01       	cmpl   $0x1,0x4(%rsp)
  4010e4:	74 05                	je     4010eb <phase_4+0x59>
  4010e6:	e8 c0 05 00 00       	callq  4016ab <explode_bomb>
  4010eb:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
  4010f0:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  4010f7:	00 00 
  4010f9:	74 05                	je     401100 <phase_4+0x6e>
  4010fb:	e8 90 fa ff ff       	callq  400b90 <__stack_chk_fail@plt>
  401100:	48 83 c4 18          	add    $0x18,%rsp
  401104:	c3                   	retq   

0000000000401105 <phase_5>:
  401105:	53                   	push   %rbx
  401106:	48 83 ec 10          	sub    $0x10,%rsp
  40110a:	48 89 fb             	mov    %rdi,%rbx
  40110d:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401114:	00 00 
  401116:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  40111b:	31 c0                	xor    %eax,%eax
  40111d:	e8 97 02 00 00       	callq  4013b9 <string_length>
  401122:	83 f8 06             	cmp    $0x6,%eax
  401125:	74 05                	je     40112c <phase_5+0x27>
  401127:	e8 7f 05 00 00       	callq  4016ab <explode_bomb>
  40112c:	b8 00 00 00 00       	mov    $0x0,%eax
  401131:	0f b6 14 03          	movzbl (%rbx,%rax,1),%edx
  401135:	83 e2 0f             	and    $0xf,%edx
  401138:	0f b6 92 00 27 40 00 	movzbl 0x402700(%rdx),%edx
  40113f:	88 14 04             	mov    %dl,(%rsp,%rax,1)
  401142:	48 83 c0 01          	add    $0x1,%rax
  401146:	48 83 f8 06          	cmp    $0x6,%rax
  40114a:	75 e5                	jne    401131 <phase_5+0x2c>
  40114c:	c6 44 24 06 00       	movb   $0x0,0x6(%rsp)
  401151:	be b6 26 40 00       	mov    $0x4026b6,%esi
  401156:	48 89 e7             	mov    %rsp,%rdi
  401159:	e8 79 02 00 00       	callq  4013d7 <strings_not_equal>
  40115e:	85 c0                	test   %eax,%eax
  401160:	74 05                	je     401167 <phase_5+0x62>
  401162:	e8 44 05 00 00       	callq  4016ab <explode_bomb>
  401167:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
  40116c:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  401173:	00 00 
  401175:	74 05                	je     40117c <phase_5+0x77>
  401177:	e8 14 fa ff ff       	callq  400b90 <__stack_chk_fail@plt>
  40117c:	48 83 c4 10          	add    $0x10,%rsp
  401180:	5b                   	pop    %rbx
  401181:	c3                   	retq   

0000000000401182 <phase_6>:
  401182:	41 56                	push   %r14
  401184:	41 55                	push   %r13
  401186:	41 54                	push   %r12
  401188:	55                   	push   %rbp
  401189:	53                   	push   %rbx
  40118a:	48 83 ec 60          	sub    $0x60,%rsp
  40118e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401195:	00 00 
  401197:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
  40119c:	31 c0                	xor    %eax,%eax
  40119e:	48 89 e6             	mov    %rsp,%rsi
  4011a1:	e8 3b 05 00 00       	callq  4016e1 <read_six_numbers>
  4011a6:	49 89 e4             	mov    %rsp,%r12
  4011a9:	49 89 e5             	mov    %rsp,%r13
  4011ac:	41 be 00 00 00 00    	mov    $0x0,%r14d
  4011b2:	4c 89 ed             	mov    %r13,%rbp
  4011b5:	41 8b 45 00          	mov    0x0(%r13),%eax
  4011b9:	83 e8 01             	sub    $0x1,%eax
  4011bc:	83 f8 05             	cmp    $0x5,%eax
  4011bf:	76 05                	jbe    4011c6 <phase_6+0x44>
  4011c1:	e8 e5 04 00 00       	callq  4016ab <explode_bomb>
  4011c6:	41 83 c6 01          	add    $0x1,%r14d
  4011ca:	41 83 fe 06          	cmp    $0x6,%r14d
  4011ce:	74 21                	je     4011f1 <phase_6+0x6f>
  4011d0:	44 89 f3             	mov    %r14d,%ebx
  4011d3:	48 63 c3             	movslq %ebx,%rax
  4011d6:	8b 04 84             	mov    (%rsp,%rax,4),%eax
  4011d9:	39 45 00             	cmp    %eax,0x0(%rbp)
  4011dc:	75 05                	jne    4011e3 <phase_6+0x61>
  4011de:	e8 c8 04 00 00       	callq  4016ab <explode_bomb>
  4011e3:	83 c3 01             	add    $0x1,%ebx
  4011e6:	83 fb 05             	cmp    $0x5,%ebx
  4011e9:	7e e8                	jle    4011d3 <phase_6+0x51>
  4011eb:	49 83 c5 04          	add    $0x4,%r13
  4011ef:	eb c1                	jmp    4011b2 <phase_6+0x30>
  4011f1:	48 8d 4c 24 18       	lea    0x18(%rsp),%rcx
  4011f6:	ba 07 00 00 00       	mov    $0x7,%edx
  4011fb:	89 d0                	mov    %edx,%eax
  4011fd:	41 2b 04 24          	sub    (%r12),%eax
  401201:	41 89 04 24          	mov    %eax,(%r12)
  401205:	49 83 c4 04          	add    $0x4,%r12
  401209:	4c 39 e1             	cmp    %r12,%rcx
  40120c:	75 ed                	jne    4011fb <phase_6+0x79>
  40120e:	be 00 00 00 00       	mov    $0x0,%esi
  401213:	eb 1a                	jmp    40122f <phase_6+0xad>
  401215:	48 8b 52 08          	mov    0x8(%rdx),%rdx
  401219:	83 c0 01             	add    $0x1,%eax
  40121c:	39 c8                	cmp    %ecx,%eax
  40121e:	75 f5                	jne    401215 <phase_6+0x93>
  401220:	48 89 54 74 20       	mov    %rdx,0x20(%rsp,%rsi,2)
  401225:	48 83 c6 04          	add    $0x4,%rsi
  401229:	48 83 fe 18          	cmp    $0x18,%rsi
  40122d:	74 14                	je     401243 <phase_6+0xc1>
  40122f:	8b 0c 34             	mov    (%rsp,%rsi,1),%ecx
  401232:	b8 01 00 00 00       	mov    $0x1,%eax
  401237:	ba f0 42 60 00       	mov    $0x6042f0,%edx
  40123c:	83 f9 01             	cmp    $0x1,%ecx
  40123f:	7f d4                	jg     401215 <phase_6+0x93>
  401241:	eb dd                	jmp    401220 <phase_6+0x9e>
  401243:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
  401248:	48 8d 44 24 20       	lea    0x20(%rsp),%rax
  40124d:	48 8d 74 24 48       	lea    0x48(%rsp),%rsi
  401252:	48 89 d9             	mov    %rbx,%rcx
  401255:	48 8b 50 08          	mov    0x8(%rax),%rdx
  401259:	48 89 51 08          	mov    %rdx,0x8(%rcx)
  40125d:	48 83 c0 08          	add    $0x8,%rax
  401261:	48 89 d1             	mov    %rdx,%rcx
  401264:	48 39 c6             	cmp    %rax,%rsi
  401267:	75 ec                	jne    401255 <phase_6+0xd3>
  401269:	48 c7 42 08 00 00 00 	movq   $0x0,0x8(%rdx)
  401270:	00 
  401271:	bd 05 00 00 00       	mov    $0x5,%ebp
  401276:	48 8b 43 08          	mov    0x8(%rbx),%rax
  40127a:	8b 00                	mov    (%rax),%eax
  40127c:	39 03                	cmp    %eax,(%rbx)
  40127e:	7d 05                	jge    401285 <phase_6+0x103>
  401280:	e8 26 04 00 00       	callq  4016ab <explode_bomb>
  401285:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
  401289:	83 ed 01             	sub    $0x1,%ebp
  40128c:	75 e8                	jne    401276 <phase_6+0xf4>
  40128e:	48 8b 44 24 58       	mov    0x58(%rsp),%rax
  401293:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  40129a:	00 00 
  40129c:	74 05                	je     4012a3 <phase_6+0x121>
  40129e:	e8 ed f8 ff ff       	callq  400b90 <__stack_chk_fail@plt>
  4012a3:	48 83 c4 60          	add    $0x60,%rsp
  4012a7:	5b                   	pop    %rbx
  4012a8:	5d                   	pop    %rbp
  4012a9:	41 5c                	pop    %r12
  4012ab:	41 5d                	pop    %r13
  4012ad:	41 5e                	pop    %r14
  4012af:	c3                   	retq   

00000000004012b0 <fun7>:
  4012b0:	48 83 ec 08          	sub    $0x8,%rsp
  4012b4:	48 85 ff             	test   %rdi,%rdi
  4012b7:	74 2b                	je     4012e4 <fun7+0x34>
  4012b9:	8b 17                	mov    (%rdi),%edx
  4012bb:	39 f2                	cmp    %esi,%edx
  4012bd:	7e 0d                	jle    4012cc <fun7+0x1c>
  4012bf:	48 8b 7f 08          	mov    0x8(%rdi),%rdi
  4012c3:	e8 e8 ff ff ff       	callq  4012b0 <fun7>
  4012c8:	01 c0                	add    %eax,%eax
  4012ca:	eb 1d                	jmp    4012e9 <fun7+0x39>
  4012cc:	b8 00 00 00 00       	mov    $0x0,%eax
  4012d1:	39 f2                	cmp    %esi,%edx
  4012d3:	74 14                	je     4012e9 <fun7+0x39>
  4012d5:	48 8b 7f 10          	mov    0x10(%rdi),%rdi
  4012d9:	e8 d2 ff ff ff       	callq  4012b0 <fun7>
  4012de:	8d 44 00 01          	lea    0x1(%rax,%rax,1),%eax
  4012e2:	eb 05                	jmp    4012e9 <fun7+0x39>
  4012e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4012e9:	48 83 c4 08          	add    $0x8,%rsp
  4012ed:	c3                   	retq   

00000000004012ee <secret_phase>:
  4012ee:	53                   	push   %rbx
  4012ef:	e8 2c 04 00 00       	callq  401720 <read_line>
  4012f4:	ba 0a 00 00 00       	mov    $0xa,%edx
  4012f9:	be 00 00 00 00       	mov    $0x0,%esi
  4012fe:	48 89 c7             	mov    %rax,%rdi
  401301:	e8 1a f9 ff ff       	callq  400c20 <strtol@plt>
  401306:	48 89 c3             	mov    %rax,%rbx
  401309:	8d 40 ff             	lea    -0x1(%rax),%eax
  40130c:	3d e8 03 00 00       	cmp    $0x3e8,%eax
  401311:	76 05                	jbe    401318 <secret_phase+0x2a>
  401313:	e8 93 03 00 00       	callq  4016ab <explode_bomb>
  401318:	89 de                	mov    %ebx,%esi
  40131a:	bf 10 41 60 00       	mov    $0x604110,%edi
  40131f:	e8 8c ff ff ff       	callq  4012b0 <fun7>
  401324:	85 c0                	test   %eax,%eax
  401326:	74 05                	je     40132d <secret_phase+0x3f>
  401328:	e8 7e 03 00 00       	callq  4016ab <explode_bomb>
  40132d:	bf 90 26 40 00       	mov    $0x402690,%edi
  401332:	e8 39 f8 ff ff       	callq  400b70 <puts@plt>
  401337:	e8 0a 05 00 00       	callq  401846 <phase_defused>
  40133c:	5b                   	pop    %rbx
  40133d:	c3                   	retq   

000000000040133e <sig_handler>:
  40133e:	48 83 ec 08          	sub    $0x8,%rsp
  401342:	bf 10 27 40 00       	mov    $0x402710,%edi
  401347:	e8 24 f8 ff ff       	callq  400b70 <puts@plt>
  40134c:	bf 03 00 00 00       	mov    $0x3,%edi
  401351:	e8 5a f9 ff ff       	callq  400cb0 <sleep@plt>
  401356:	be d9 28 40 00       	mov    $0x4028d9,%esi
  40135b:	bf 01 00 00 00       	mov    $0x1,%edi
  401360:	b8 00 00 00 00       	mov    $0x0,%eax
  401365:	e8 e6 f8 ff ff       	callq  400c50 <__printf_chk@plt>
  40136a:	48 8b 3d 0f 34 20 00 	mov    0x20340f(%rip),%rdi        # 604780 <__TMC_END__>
  401371:	e8 ba f8 ff ff       	callq  400c30 <fflush@plt>
  401376:	bf 01 00 00 00       	mov    $0x1,%edi
  40137b:	e8 30 f9 ff ff       	callq  400cb0 <sleep@plt>
  401380:	bf e1 28 40 00       	mov    $0x4028e1,%edi
  401385:	e8 e6 f7 ff ff       	callq  400b70 <puts@plt>
  40138a:	bf 10 00 00 00       	mov    $0x10,%edi
  40138f:	e8 ec f8 ff ff       	callq  400c80 <exit@plt>

0000000000401394 <invalid_phase>:
  401394:	48 83 ec 08          	sub    $0x8,%rsp
  401398:	48 89 fa             	mov    %rdi,%rdx
  40139b:	be e9 28 40 00       	mov    $0x4028e9,%esi
  4013a0:	bf 01 00 00 00       	mov    $0x1,%edi
  4013a5:	b8 00 00 00 00       	mov    $0x0,%eax
  4013aa:	e8 a1 f8 ff ff       	callq  400c50 <__printf_chk@plt>
  4013af:	bf 08 00 00 00       	mov    $0x8,%edi
  4013b4:	e8 c7 f8 ff ff       	callq  400c80 <exit@plt>

00000000004013b9 <string_length>:
  4013b9:	80 3f 00             	cmpb   $0x0,(%rdi)
  4013bc:	74 13                	je     4013d1 <string_length+0x18>
  4013be:	b8 00 00 00 00       	mov    $0x0,%eax
  4013c3:	48 83 c7 01          	add    $0x1,%rdi
  4013c7:	83 c0 01             	add    $0x1,%eax
  4013ca:	80 3f 00             	cmpb   $0x0,(%rdi)
  4013cd:	75 f4                	jne    4013c3 <string_length+0xa>
  4013cf:	f3 c3                	repz retq 
  4013d1:	b8 00 00 00 00       	mov    $0x0,%eax
  4013d6:	c3                   	retq   

00000000004013d7 <strings_not_equal>:
  4013d7:	41 54                	push   %r12
  4013d9:	55                   	push   %rbp
  4013da:	53                   	push   %rbx
  4013db:	48 89 fb             	mov    %rdi,%rbx
  4013de:	48 89 f5             	mov    %rsi,%rbp
  4013e1:	e8 d3 ff ff ff       	callq  4013b9 <string_length>
  4013e6:	41 89 c4             	mov    %eax,%r12d
  4013e9:	48 89 ef             	mov    %rbp,%rdi
  4013ec:	e8 c8 ff ff ff       	callq  4013b9 <string_length>
  4013f1:	ba 01 00 00 00       	mov    $0x1,%edx
  4013f6:	41 39 c4             	cmp    %eax,%r12d
  4013f9:	75 3c                	jne    401437 <strings_not_equal+0x60>
  4013fb:	0f b6 03             	movzbl (%rbx),%eax
  4013fe:	84 c0                	test   %al,%al
  401400:	74 22                	je     401424 <strings_not_equal+0x4d>
  401402:	3a 45 00             	cmp    0x0(%rbp),%al
  401405:	74 07                	je     40140e <strings_not_equal+0x37>
  401407:	eb 22                	jmp    40142b <strings_not_equal+0x54>
  401409:	3a 45 00             	cmp    0x0(%rbp),%al
  40140c:	75 24                	jne    401432 <strings_not_equal+0x5b>
  40140e:	48 83 c3 01          	add    $0x1,%rbx
  401412:	48 83 c5 01          	add    $0x1,%rbp
  401416:	0f b6 03             	movzbl (%rbx),%eax
  401419:	84 c0                	test   %al,%al
  40141b:	75 ec                	jne    401409 <strings_not_equal+0x32>
  40141d:	ba 00 00 00 00       	mov    $0x0,%edx
  401422:	eb 13                	jmp    401437 <strings_not_equal+0x60>
  401424:	ba 00 00 00 00       	mov    $0x0,%edx
  401429:	eb 0c                	jmp    401437 <strings_not_equal+0x60>
  40142b:	ba 01 00 00 00       	mov    $0x1,%edx
  401430:	eb 05                	jmp    401437 <strings_not_equal+0x60>
  401432:	ba 01 00 00 00       	mov    $0x1,%edx
  401437:	89 d0                	mov    %edx,%eax
  401439:	5b                   	pop    %rbx
  40143a:	5d                   	pop    %rbp
  40143b:	41 5c                	pop    %r12
  40143d:	c3                   	retq   

000000000040143e <initialize_bomb>:
  40143e:	53                   	push   %rbx
  40143f:	48 81 ec 50 20 00 00 	sub    $0x2050,%rsp
  401446:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40144d:	00 00 
  40144f:	48 89 84 24 48 20 00 	mov    %rax,0x2048(%rsp)
  401456:	00 
  401457:	31 c0                	xor    %eax,%eax
  401459:	be 3e 13 40 00       	mov    $0x40133e,%esi
  40145e:	bf 02 00 00 00       	mov    $0x2,%edi
  401463:	e8 88 f7 ff ff       	callq  400bf0 <signal@plt>
  401468:	be 40 00 00 00       	mov    $0x40,%esi
  40146d:	48 89 e7             	mov    %rsp,%rdi
  401470:	e8 fb f7 ff ff       	callq  400c70 <gethostname@plt>
  401475:	85 c0                	test   %eax,%eax
  401477:	75 13                	jne    40148c <initialize_bomb+0x4e>
  401479:	48 8b 3d 00 2f 20 00 	mov    0x202f00(%rip),%rdi        # 604380 <host_table>
  401480:	bb 88 43 60 00       	mov    $0x604388,%ebx
  401485:	48 85 ff             	test   %rdi,%rdi
  401488:	75 16                	jne    4014a0 <initialize_bomb+0x62>
  40148a:	eb 52                	jmp    4014de <initialize_bomb+0xa0>
  40148c:	bf 48 27 40 00       	mov    $0x402748,%edi
  401491:	e8 da f6 ff ff       	callq  400b70 <puts@plt>
  401496:	bf 08 00 00 00       	mov    $0x8,%edi
  40149b:	e8 e0 f7 ff ff       	callq  400c80 <exit@plt>
  4014a0:	48 89 e6             	mov    %rsp,%rsi
  4014a3:	e8 98 f6 ff ff       	callq  400b40 <strcasecmp@plt>
  4014a8:	85 c0                	test   %eax,%eax
  4014aa:	74 46                	je     4014f2 <initialize_bomb+0xb4>
  4014ac:	48 83 c3 08          	add    $0x8,%rbx
  4014b0:	48 8b 7b f8          	mov    -0x8(%rbx),%rdi
  4014b4:	48 85 ff             	test   %rdi,%rdi
  4014b7:	75 e7                	jne    4014a0 <initialize_bomb+0x62>
  4014b9:	eb 23                	jmp    4014de <initialize_bomb+0xa0>
  4014bb:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
  4014c0:	be fa 28 40 00       	mov    $0x4028fa,%esi
  4014c5:	bf 01 00 00 00       	mov    $0x1,%edi
  4014ca:	b8 00 00 00 00       	mov    $0x0,%eax
  4014cf:	e8 7c f7 ff ff       	callq  400c50 <__printf_chk@plt>
  4014d4:	bf 08 00 00 00       	mov    $0x8,%edi
  4014d9:	e8 a2 f7 ff ff       	callq  400c80 <exit@plt>
  4014de:	bf 80 27 40 00       	mov    $0x402780,%edi
  4014e3:	e8 88 f6 ff ff       	callq  400b70 <puts@plt>
  4014e8:	bf 08 00 00 00       	mov    $0x8,%edi
  4014ed:	e8 8e f7 ff ff       	callq  400c80 <exit@plt>
  4014f2:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  4014f7:	e8 49 0d 00 00       	callq  402245 <init_driver>
  4014fc:	85 c0                	test   %eax,%eax
  4014fe:	78 bb                	js     4014bb <initialize_bomb+0x7d>
  401500:	48 8b 84 24 48 20 00 	mov    0x2048(%rsp),%rax
  401507:	00 
  401508:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  40150f:	00 00 
  401511:	74 05                	je     401518 <initialize_bomb+0xda>
  401513:	e8 78 f6 ff ff       	callq  400b90 <__stack_chk_fail@plt>
  401518:	48 81 c4 50 20 00 00 	add    $0x2050,%rsp
  40151f:	5b                   	pop    %rbx
  401520:	c3                   	retq   

0000000000401521 <initialize_bomb_solve>:
  401521:	f3 c3                	repz retq 

0000000000401523 <blank_line>:
  401523:	55                   	push   %rbp
  401524:	53                   	push   %rbx
  401525:	48 83 ec 08          	sub    $0x8,%rsp
  401529:	48 89 fd             	mov    %rdi,%rbp
  40152c:	eb 17                	jmp    401545 <blank_line+0x22>
  40152e:	e8 8d f7 ff ff       	callq  400cc0 <__ctype_b_loc@plt>
  401533:	48 83 c5 01          	add    $0x1,%rbp
  401537:	48 0f be db          	movsbq %bl,%rbx
  40153b:	48 8b 00             	mov    (%rax),%rax
  40153e:	f6 44 58 01 20       	testb  $0x20,0x1(%rax,%rbx,2)
  401543:	74 0f                	je     401554 <blank_line+0x31>
  401545:	0f b6 5d 00          	movzbl 0x0(%rbp),%ebx
  401549:	84 db                	test   %bl,%bl
  40154b:	75 e1                	jne    40152e <blank_line+0xb>
  40154d:	b8 01 00 00 00       	mov    $0x1,%eax
  401552:	eb 05                	jmp    401559 <blank_line+0x36>
  401554:	b8 00 00 00 00       	mov    $0x0,%eax
  401559:	48 83 c4 08          	add    $0x8,%rsp
  40155d:	5b                   	pop    %rbx
  40155e:	5d                   	pop    %rbp
  40155f:	c3                   	retq   

0000000000401560 <skip>:
  401560:	53                   	push   %rbx
  401561:	48 63 05 44 32 20 00 	movslq 0x203244(%rip),%rax        # 6047ac <num_input_strings>
  401568:	48 8d 3c 80          	lea    (%rax,%rax,4),%rdi
  40156c:	48 c1 e7 04          	shl    $0x4,%rdi
  401570:	48 81 c7 c0 47 60 00 	add    $0x6047c0,%rdi
  401577:	48 8b 15 32 32 20 00 	mov    0x203232(%rip),%rdx        # 6047b0 <infile>
  40157e:	be 50 00 00 00       	mov    $0x50,%esi
  401583:	e8 58 f6 ff ff       	callq  400be0 <fgets@plt>
  401588:	48 89 c3             	mov    %rax,%rbx
  40158b:	48 85 c0             	test   %rax,%rax
  40158e:	74 0c                	je     40159c <skip+0x3c>
  401590:	48 89 c7             	mov    %rax,%rdi
  401593:	e8 8b ff ff ff       	callq  401523 <blank_line>
  401598:	85 c0                	test   %eax,%eax
  40159a:	75 c5                	jne    401561 <skip+0x1>
  40159c:	48 89 d8             	mov    %rbx,%rax
  40159f:	5b                   	pop    %rbx
  4015a0:	c3                   	retq   

00000000004015a1 <send_msg>:
  4015a1:	48 81 ec 18 40 00 00 	sub    $0x4018,%rsp
  4015a8:	41 89 f8             	mov    %edi,%r8d
  4015ab:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  4015b2:	00 00 
  4015b4:	48 89 84 24 08 40 00 	mov    %rax,0x4008(%rsp)
  4015bb:	00 
  4015bc:	31 c0                	xor    %eax,%eax
  4015be:	8b 35 e8 31 20 00    	mov    0x2031e8(%rip),%esi        # 6047ac <num_input_strings>
  4015c4:	8d 46 ff             	lea    -0x1(%rsi),%eax
  4015c7:	48 98                	cltq   
  4015c9:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
  4015cd:	48 c1 e2 04          	shl    $0x4,%rdx
  4015d1:	48 81 c2 c0 47 60 00 	add    $0x6047c0,%rdx
  4015d8:	b8 00 00 00 00       	mov    $0x0,%eax
  4015dd:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  4015e4:	48 89 d7             	mov    %rdx,%rdi
  4015e7:	f2 ae                	repnz scas %es:(%rdi),%al
  4015e9:	48 f7 d1             	not    %rcx
  4015ec:	48 83 c1 63          	add    $0x63,%rcx
  4015f0:	48 81 f9 00 20 00 00 	cmp    $0x2000,%rcx
  4015f7:	76 19                	jbe    401612 <send_msg+0x71>
  4015f9:	be b8 27 40 00       	mov    $0x4027b8,%esi
  4015fe:	bf 01 00 00 00       	mov    $0x1,%edi
  401603:	e8 48 f6 ff ff       	callq  400c50 <__printf_chk@plt>
  401608:	bf 08 00 00 00       	mov    $0x8,%edi
  40160d:	e8 6e f6 ff ff       	callq  400c80 <exit@plt>
  401612:	45 85 c0             	test   %r8d,%r8d
  401615:	41 b9 1c 29 40 00    	mov    $0x40291c,%r9d
  40161b:	b8 14 29 40 00       	mov    $0x402914,%eax
  401620:	4c 0f 45 c8          	cmovne %rax,%r9
  401624:	52                   	push   %rdx
  401625:	56                   	push   %rsi
  401626:	44 8b 05 47 2d 20 00 	mov    0x202d47(%rip),%r8d        # 604374 <bomb_id>
  40162d:	b9 25 29 40 00       	mov    $0x402925,%ecx
  401632:	ba 00 20 00 00       	mov    $0x2000,%edx
  401637:	be 01 00 00 00       	mov    $0x1,%esi
  40163c:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
  401641:	b8 00 00 00 00       	mov    $0x0,%eax
  401646:	e8 85 f6 ff ff       	callq  400cd0 <__sprintf_chk@plt>
  40164b:	4c 8d 84 24 10 20 00 	lea    0x2010(%rsp),%r8
  401652:	00 
  401653:	b9 00 00 00 00       	mov    $0x0,%ecx
  401658:	48 8d 54 24 10       	lea    0x10(%rsp),%rdx
  40165d:	be 50 43 60 00       	mov    $0x604350,%esi
  401662:	bf 68 43 60 00       	mov    $0x604368,%edi
  401667:	e8 ae 0d 00 00       	callq  40241a <driver_post>
  40166c:	48 83 c4 10          	add    $0x10,%rsp
  401670:	85 c0                	test   %eax,%eax
  401672:	79 17                	jns    40168b <send_msg+0xea>
  401674:	48 8d bc 24 00 20 00 	lea    0x2000(%rsp),%rdi
  40167b:	00 
  40167c:	e8 ef f4 ff ff       	callq  400b70 <puts@plt>
  401681:	bf 00 00 00 00       	mov    $0x0,%edi
  401686:	e8 f5 f5 ff ff       	callq  400c80 <exit@plt>
  40168b:	48 8b 84 24 08 40 00 	mov    0x4008(%rsp),%rax
  401692:	00 
  401693:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  40169a:	00 00 
  40169c:	74 05                	je     4016a3 <send_msg+0x102>
  40169e:	e8 ed f4 ff ff       	callq  400b90 <__stack_chk_fail@plt>
  4016a3:	48 81 c4 18 40 00 00 	add    $0x4018,%rsp
  4016aa:	c3                   	retq   

00000000004016ab <explode_bomb>:
  4016ab:	48 83 ec 08          	sub    $0x8,%rsp
  4016af:	bf 31 29 40 00       	mov    $0x402931,%edi
  4016b4:	e8 b7 f4 ff ff       	callq  400b70 <puts@plt>
  4016b9:	bf 3a 29 40 00       	mov    $0x40293a,%edi
  4016be:	e8 ad f4 ff ff       	callq  400b70 <puts@plt>
  4016c3:	bf 00 00 00 00       	mov    $0x0,%edi
  4016c8:	e8 d4 fe ff ff       	callq  4015a1 <send_msg>
  4016cd:	bf e0 27 40 00       	mov    $0x4027e0,%edi
  4016d2:	e8 99 f4 ff ff       	callq  400b70 <puts@plt>
  4016d7:	bf 08 00 00 00       	mov    $0x8,%edi
  4016dc:	e8 9f f5 ff ff       	callq  400c80 <exit@plt>

00000000004016e1 <read_six_numbers>:
  4016e1:	48 83 ec 08          	sub    $0x8,%rsp
  4016e5:	48 89 f2             	mov    %rsi,%rdx
  4016e8:	48 8d 4e 04          	lea    0x4(%rsi),%rcx
  4016ec:	48 8d 46 14          	lea    0x14(%rsi),%rax
  4016f0:	50                   	push   %rax
  4016f1:	48 8d 46 10          	lea    0x10(%rsi),%rax
  4016f5:	50                   	push   %rax
  4016f6:	4c 8d 4e 0c          	lea    0xc(%rsi),%r9
  4016fa:	4c 8d 46 08          	lea    0x8(%rsi),%r8
  4016fe:	be 51 29 40 00       	mov    $0x402951,%esi
  401703:	b8 00 00 00 00       	mov    $0x0,%eax
  401708:	e8 33 f5 ff ff       	callq  400c40 <__isoc99_sscanf@plt>
  40170d:	48 83 c4 10          	add    $0x10,%rsp
  401711:	83 f8 05             	cmp    $0x5,%eax
  401714:	7f 05                	jg     40171b <read_six_numbers+0x3a>
  401716:	e8 90 ff ff ff       	callq  4016ab <explode_bomb>
  40171b:	48 83 c4 08          	add    $0x8,%rsp
  40171f:	c3                   	retq   

0000000000401720 <read_line>:
  401720:	48 83 ec 08          	sub    $0x8,%rsp
  401724:	b8 00 00 00 00       	mov    $0x0,%eax
  401729:	e8 32 fe ff ff       	callq  401560 <skip>
  40172e:	48 85 c0             	test   %rax,%rax
  401731:	75 6e                	jne    4017a1 <read_line+0x81>
  401733:	48 8b 05 56 30 20 00 	mov    0x203056(%rip),%rax        # 604790 <stdin@@GLIBC_2.2.5>
  40173a:	48 39 05 6f 30 20 00 	cmp    %rax,0x20306f(%rip)        # 6047b0 <infile>
  401741:	75 14                	jne    401757 <read_line+0x37>
  401743:	bf 63 29 40 00       	mov    $0x402963,%edi
  401748:	e8 23 f4 ff ff       	callq  400b70 <puts@plt>
  40174d:	bf 08 00 00 00       	mov    $0x8,%edi
  401752:	e8 29 f5 ff ff       	callq  400c80 <exit@plt>
  401757:	bf 81 29 40 00       	mov    $0x402981,%edi
  40175c:	e8 cf f3 ff ff       	callq  400b30 <getenv@plt>
  401761:	48 85 c0             	test   %rax,%rax
  401764:	74 0a                	je     401770 <read_line+0x50>
  401766:	bf 00 00 00 00       	mov    $0x0,%edi
  40176b:	e8 10 f5 ff ff       	callq  400c80 <exit@plt>
  401770:	48 8b 05 19 30 20 00 	mov    0x203019(%rip),%rax        # 604790 <stdin@@GLIBC_2.2.5>
  401777:	48 89 05 32 30 20 00 	mov    %rax,0x203032(%rip)        # 6047b0 <infile>
  40177e:	b8 00 00 00 00       	mov    $0x0,%eax
  401783:	e8 d8 fd ff ff       	callq  401560 <skip>
  401788:	48 85 c0             	test   %rax,%rax
  40178b:	75 14                	jne    4017a1 <read_line+0x81>
  40178d:	bf 63 29 40 00       	mov    $0x402963,%edi
  401792:	e8 d9 f3 ff ff       	callq  400b70 <puts@plt>
  401797:	bf 00 00 00 00       	mov    $0x0,%edi
  40179c:	e8 df f4 ff ff       	callq  400c80 <exit@plt>
  4017a1:	8b 35 05 30 20 00    	mov    0x203005(%rip),%esi        # 6047ac <num_input_strings>
  4017a7:	48 63 c6             	movslq %esi,%rax
  4017aa:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
  4017ae:	48 c1 e2 04          	shl    $0x4,%rdx
  4017b2:	48 81 c2 c0 47 60 00 	add    $0x6047c0,%rdx
  4017b9:	b8 00 00 00 00       	mov    $0x0,%eax
  4017be:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  4017c5:	48 89 d7             	mov    %rdx,%rdi
  4017c8:	f2 ae                	repnz scas %es:(%rdi),%al
  4017ca:	48 f7 d1             	not    %rcx
  4017cd:	48 83 e9 01          	sub    $0x1,%rcx
  4017d1:	83 f9 4e             	cmp    $0x4e,%ecx
  4017d4:	7e 46                	jle    40181c <read_line+0xfc>
  4017d6:	bf 8c 29 40 00       	mov    $0x40298c,%edi
  4017db:	e8 90 f3 ff ff       	callq  400b70 <puts@plt>
  4017e0:	8b 05 c6 2f 20 00    	mov    0x202fc6(%rip),%eax        # 6047ac <num_input_strings>
  4017e6:	8d 50 01             	lea    0x1(%rax),%edx
  4017e9:	89 15 bd 2f 20 00    	mov    %edx,0x202fbd(%rip)        # 6047ac <num_input_strings>
  4017ef:	48 98                	cltq   
  4017f1:	48 6b c0 50          	imul   $0x50,%rax,%rax
  4017f5:	48 bf 2a 2a 2a 74 72 	movabs $0x636e7572742a2a2a,%rdi
  4017fc:	75 6e 63 
  4017ff:	48 89 b8 c0 47 60 00 	mov    %rdi,0x6047c0(%rax)
  401806:	48 bf 61 74 65 64 2a 	movabs $0x2a2a2a64657461,%rdi
  40180d:	2a 2a 00 
  401810:	48 89 b8 c8 47 60 00 	mov    %rdi,0x6047c8(%rax)
  401817:	e8 8f fe ff ff       	callq  4016ab <explode_bomb>
  40181c:	83 e9 01             	sub    $0x1,%ecx
  40181f:	48 63 c9             	movslq %ecx,%rcx
  401822:	48 63 c6             	movslq %esi,%rax
  401825:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401829:	48 c1 e0 04          	shl    $0x4,%rax
  40182d:	c6 84 01 c0 47 60 00 	movb   $0x0,0x6047c0(%rcx,%rax,1)
  401834:	00 
  401835:	8d 46 01             	lea    0x1(%rsi),%eax
  401838:	89 05 6e 2f 20 00    	mov    %eax,0x202f6e(%rip)        # 6047ac <num_input_strings>
  40183e:	48 89 d0             	mov    %rdx,%rax
  401841:	48 83 c4 08          	add    $0x8,%rsp
  401845:	c3                   	retq   

0000000000401846 <phase_defused>:
  401846:	48 83 ec 78          	sub    $0x78,%rsp
  40184a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401851:	00 00 
  401853:	48 89 44 24 68       	mov    %rax,0x68(%rsp)
  401858:	31 c0                	xor    %eax,%eax
  40185a:	bf 01 00 00 00       	mov    $0x1,%edi
  40185f:	e8 3d fd ff ff       	callq  4015a1 <send_msg>
  401864:	83 3d 41 2f 20 00 06 	cmpl   $0x6,0x202f41(%rip)        # 6047ac <num_input_strings>
  40186b:	75 6d                	jne    4018da <phase_defused+0x94>
  40186d:	4c 8d 44 24 10       	lea    0x10(%rsp),%r8
  401872:	48 8d 4c 24 0c       	lea    0xc(%rsp),%rcx
  401877:	48 8d 54 24 08       	lea    0x8(%rsp),%rdx
  40187c:	be a7 29 40 00       	mov    $0x4029a7,%esi
  401881:	bf b0 48 60 00       	mov    $0x6048b0,%edi
  401886:	b8 00 00 00 00       	mov    $0x0,%eax
  40188b:	e8 b0 f3 ff ff       	callq  400c40 <__isoc99_sscanf@plt>
  401890:	83 f8 03             	cmp    $0x3,%eax
  401893:	75 31                	jne    4018c6 <phase_defused+0x80>
  401895:	be b0 29 40 00       	mov    $0x4029b0,%esi
  40189a:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
  40189f:	e8 33 fb ff ff       	callq  4013d7 <strings_not_equal>
  4018a4:	85 c0                	test   %eax,%eax
  4018a6:	75 1e                	jne    4018c6 <phase_defused+0x80>
  4018a8:	bf 08 28 40 00       	mov    $0x402808,%edi
  4018ad:	e8 be f2 ff ff       	callq  400b70 <puts@plt>
  4018b2:	bf 30 28 40 00       	mov    $0x402830,%edi
  4018b7:	e8 b4 f2 ff ff       	callq  400b70 <puts@plt>
  4018bc:	b8 00 00 00 00       	mov    $0x0,%eax
  4018c1:	e8 28 fa ff ff       	callq  4012ee <secret_phase>
  4018c6:	bf 68 28 40 00       	mov    $0x402868,%edi
  4018cb:	e8 a0 f2 ff ff       	callq  400b70 <puts@plt>
  4018d0:	bf 98 28 40 00       	mov    $0x402898,%edi
  4018d5:	e8 96 f2 ff ff       	callq  400b70 <puts@plt>
  4018da:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
  4018df:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  4018e6:	00 00 
  4018e8:	74 05                	je     4018ef <phase_defused+0xa9>
  4018ea:	e8 a1 f2 ff ff       	callq  400b90 <__stack_chk_fail@plt>
  4018ef:	48 83 c4 78          	add    $0x78,%rsp
  4018f3:	c3                   	retq   

00000000004018f4 <sigalrm_handler>:
  4018f4:	48 83 ec 08          	sub    $0x8,%rsp
  4018f8:	b9 00 00 00 00       	mov    $0x0,%ecx
  4018fd:	ba c0 29 40 00       	mov    $0x4029c0,%edx
  401902:	be 01 00 00 00       	mov    $0x1,%esi
  401907:	48 8b 3d 92 2e 20 00 	mov    0x202e92(%rip),%rdi        # 6047a0 <stderr@@GLIBC_2.2.5>
  40190e:	b8 00 00 00 00       	mov    $0x0,%eax
  401913:	e8 88 f3 ff ff       	callq  400ca0 <__fprintf_chk@plt>
  401918:	bf 01 00 00 00       	mov    $0x1,%edi
  40191d:	e8 5e f3 ff ff       	callq  400c80 <exit@plt>

0000000000401922 <rio_readlineb>:
  401922:	41 56                	push   %r14
  401924:	41 55                	push   %r13
  401926:	41 54                	push   %r12
  401928:	55                   	push   %rbp
  401929:	53                   	push   %rbx
  40192a:	48 83 ec 10          	sub    $0x10,%rsp
  40192e:	48 89 fb             	mov    %rdi,%rbx
  401931:	49 89 f5             	mov    %rsi,%r13
  401934:	49 89 d6             	mov    %rdx,%r14
  401937:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  40193e:	00 00 
  401940:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
  401945:	31 c0                	xor    %eax,%eax
  401947:	41 bc 01 00 00 00    	mov    $0x1,%r12d
  40194d:	48 8d 6f 10          	lea    0x10(%rdi),%rbp
  401951:	48 83 fa 01          	cmp    $0x1,%rdx
  401955:	77 2c                	ja     401983 <rio_readlineb+0x61>
  401957:	eb 6d                	jmp    4019c6 <rio_readlineb+0xa4>
  401959:	ba 00 20 00 00       	mov    $0x2000,%edx
  40195e:	48 89 ee             	mov    %rbp,%rsi
  401961:	8b 3b                	mov    (%rbx),%edi
  401963:	e8 58 f2 ff ff       	callq  400bc0 <read@plt>
  401968:	89 43 04             	mov    %eax,0x4(%rbx)
  40196b:	85 c0                	test   %eax,%eax
  40196d:	79 0c                	jns    40197b <rio_readlineb+0x59>
  40196f:	e8 dc f1 ff ff       	callq  400b50 <__errno_location@plt>
  401974:	83 38 04             	cmpl   $0x4,(%rax)
  401977:	74 0a                	je     401983 <rio_readlineb+0x61>
  401979:	eb 6c                	jmp    4019e7 <rio_readlineb+0xc5>
  40197b:	85 c0                	test   %eax,%eax
  40197d:	74 71                	je     4019f0 <rio_readlineb+0xce>
  40197f:	48 89 6b 08          	mov    %rbp,0x8(%rbx)
  401983:	8b 43 04             	mov    0x4(%rbx),%eax
  401986:	85 c0                	test   %eax,%eax
  401988:	7e cf                	jle    401959 <rio_readlineb+0x37>
  40198a:	48 8b 53 08          	mov    0x8(%rbx),%rdx
  40198e:	0f b6 0a             	movzbl (%rdx),%ecx
  401991:	88 4c 24 07          	mov    %cl,0x7(%rsp)
  401995:	48 83 c2 01          	add    $0x1,%rdx
  401999:	48 89 53 08          	mov    %rdx,0x8(%rbx)
  40199d:	83 e8 01             	sub    $0x1,%eax
  4019a0:	89 43 04             	mov    %eax,0x4(%rbx)
  4019a3:	49 83 c5 01          	add    $0x1,%r13
  4019a7:	41 88 4d ff          	mov    %cl,-0x1(%r13)
  4019ab:	80 f9 0a             	cmp    $0xa,%cl
  4019ae:	75 0a                	jne    4019ba <rio_readlineb+0x98>
  4019b0:	eb 14                	jmp    4019c6 <rio_readlineb+0xa4>
  4019b2:	41 83 fc 01          	cmp    $0x1,%r12d
  4019b6:	75 0e                	jne    4019c6 <rio_readlineb+0xa4>
  4019b8:	eb 16                	jmp    4019d0 <rio_readlineb+0xae>
  4019ba:	41 83 c4 01          	add    $0x1,%r12d
  4019be:	49 63 c4             	movslq %r12d,%rax
  4019c1:	4c 39 f0             	cmp    %r14,%rax
  4019c4:	72 bd                	jb     401983 <rio_readlineb+0x61>
  4019c6:	41 c6 45 00 00       	movb   $0x0,0x0(%r13)
  4019cb:	49 63 c4             	movslq %r12d,%rax
  4019ce:	eb 05                	jmp    4019d5 <rio_readlineb+0xb3>
  4019d0:	b8 00 00 00 00       	mov    $0x0,%eax
  4019d5:	48 8b 4c 24 08       	mov    0x8(%rsp),%rcx
  4019da:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  4019e1:	00 00 
  4019e3:	74 22                	je     401a07 <rio_readlineb+0xe5>
  4019e5:	eb 1b                	jmp    401a02 <rio_readlineb+0xe0>
  4019e7:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  4019ee:	eb 05                	jmp    4019f5 <rio_readlineb+0xd3>
  4019f0:	b8 00 00 00 00       	mov    $0x0,%eax
  4019f5:	85 c0                	test   %eax,%eax
  4019f7:	74 b9                	je     4019b2 <rio_readlineb+0x90>
  4019f9:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  401a00:	eb d3                	jmp    4019d5 <rio_readlineb+0xb3>
  401a02:	e8 89 f1 ff ff       	callq  400b90 <__stack_chk_fail@plt>
  401a07:	48 83 c4 10          	add    $0x10,%rsp
  401a0b:	5b                   	pop    %rbx
  401a0c:	5d                   	pop    %rbp
  401a0d:	41 5c                	pop    %r12
  401a0f:	41 5d                	pop    %r13
  401a11:	41 5e                	pop    %r14
  401a13:	c3                   	retq   

0000000000401a14 <submitr>:
  401a14:	41 57                	push   %r15
  401a16:	41 56                	push   %r14
  401a18:	41 55                	push   %r13
  401a1a:	41 54                	push   %r12
  401a1c:	55                   	push   %rbp
  401a1d:	53                   	push   %rbx
  401a1e:	48 81 ec 68 a0 00 00 	sub    $0xa068,%rsp
  401a25:	49 89 fd             	mov    %rdi,%r13
  401a28:	89 f5                	mov    %esi,%ebp
  401a2a:	48 89 14 24          	mov    %rdx,(%rsp)
  401a2e:	48 89 4c 24 08       	mov    %rcx,0x8(%rsp)
  401a33:	4c 89 44 24 18       	mov    %r8,0x18(%rsp)
  401a38:	4c 89 4c 24 10       	mov    %r9,0x10(%rsp)
  401a3d:	48 8b 9c 24 a0 a0 00 	mov    0xa0a0(%rsp),%rbx
  401a44:	00 
  401a45:	4c 8b bc 24 a8 a0 00 	mov    0xa0a8(%rsp),%r15
  401a4c:	00 
  401a4d:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  401a54:	00 00 
  401a56:	48 89 84 24 58 a0 00 	mov    %rax,0xa058(%rsp)
  401a5d:	00 
  401a5e:	31 c0                	xor    %eax,%eax
  401a60:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%rsp)
  401a67:	00 
  401a68:	ba 00 00 00 00       	mov    $0x0,%edx
  401a6d:	be 01 00 00 00       	mov    $0x1,%esi
  401a72:	bf 02 00 00 00       	mov    $0x2,%edi
  401a77:	e8 64 f2 ff ff       	callq  400ce0 <socket@plt>
  401a7c:	85 c0                	test   %eax,%eax
  401a7e:	79 50                	jns    401ad0 <submitr+0xbc>
  401a80:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  401a87:	3a 20 43 
  401a8a:	49 89 07             	mov    %rax,(%r15)
  401a8d:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  401a94:	20 75 6e 
  401a97:	49 89 47 08          	mov    %rax,0x8(%r15)
  401a9b:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401aa2:	74 6f 20 
  401aa5:	49 89 47 10          	mov    %rax,0x10(%r15)
  401aa9:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  401ab0:	65 20 73 
  401ab3:	49 89 47 18          	mov    %rax,0x18(%r15)
  401ab7:	41 c7 47 20 6f 63 6b 	movl   $0x656b636f,0x20(%r15)
  401abe:	65 
  401abf:	66 41 c7 47 24 74 00 	movw   $0x74,0x24(%r15)
  401ac6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401acb:	e9 12 06 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401ad0:	41 89 c4             	mov    %eax,%r12d
  401ad3:	4c 89 ef             	mov    %r13,%rdi
  401ad6:	e8 25 f1 ff ff       	callq  400c00 <gethostbyname@plt>
  401adb:	48 85 c0             	test   %rax,%rax
  401ade:	75 6b                	jne    401b4b <submitr+0x137>
  401ae0:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  401ae7:	3a 20 44 
  401aea:	49 89 07             	mov    %rax,(%r15)
  401aed:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  401af4:	20 75 6e 
  401af7:	49 89 47 08          	mov    %rax,0x8(%r15)
  401afb:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401b02:	74 6f 20 
  401b05:	49 89 47 10          	mov    %rax,0x10(%r15)
  401b09:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  401b10:	76 65 20 
  401b13:	49 89 47 18          	mov    %rax,0x18(%r15)
  401b17:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  401b1e:	72 20 61 
  401b21:	49 89 47 20          	mov    %rax,0x20(%r15)
  401b25:	41 c7 47 28 64 64 72 	movl   $0x65726464,0x28(%r15)
  401b2c:	65 
  401b2d:	66 41 c7 47 2c 73 73 	movw   $0x7373,0x2c(%r15)
  401b34:	41 c6 47 2e 00       	movb   $0x0,0x2e(%r15)
  401b39:	44 89 e7             	mov    %r12d,%edi
  401b3c:	e8 6f f0 ff ff       	callq  400bb0 <close@plt>
  401b41:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401b46:	e9 97 05 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401b4b:	48 c7 44 24 30 00 00 	movq   $0x0,0x30(%rsp)
  401b52:	00 00 
  401b54:	48 c7 44 24 38 00 00 	movq   $0x0,0x38(%rsp)
  401b5b:	00 00 
  401b5d:	66 c7 44 24 30 02 00 	movw   $0x2,0x30(%rsp)
  401b64:	48 63 50 14          	movslq 0x14(%rax),%rdx
  401b68:	48 8b 40 18          	mov    0x18(%rax),%rax
  401b6c:	48 8d 7c 24 34       	lea    0x34(%rsp),%rdi
  401b71:	b9 0c 00 00 00       	mov    $0xc,%ecx
  401b76:	48 8b 30             	mov    (%rax),%rsi
  401b79:	e8 92 f0 ff ff       	callq  400c10 <__memmove_chk@plt>
  401b7e:	66 c1 cd 08          	ror    $0x8,%bp
  401b82:	66 89 6c 24 32       	mov    %bp,0x32(%rsp)
  401b87:	ba 10 00 00 00       	mov    $0x10,%edx
  401b8c:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
  401b91:	44 89 e7             	mov    %r12d,%edi
  401b94:	e8 f7 f0 ff ff       	callq  400c90 <connect@plt>
  401b99:	85 c0                	test   %eax,%eax
  401b9b:	79 5d                	jns    401bfa <submitr+0x1e6>
  401b9d:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  401ba4:	3a 20 55 
  401ba7:	49 89 07             	mov    %rax,(%r15)
  401baa:	48 b8 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rax
  401bb1:	20 74 6f 
  401bb4:	49 89 47 08          	mov    %rax,0x8(%r15)
  401bb8:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  401bbf:	65 63 74 
  401bc2:	49 89 47 10          	mov    %rax,0x10(%r15)
  401bc6:	48 b8 20 74 6f 20 74 	movabs $0x20656874206f7420,%rax
  401bcd:	68 65 20 
  401bd0:	49 89 47 18          	mov    %rax,0x18(%r15)
  401bd4:	41 c7 47 20 73 65 72 	movl   $0x76726573,0x20(%r15)
  401bdb:	76 
  401bdc:	66 41 c7 47 24 65 72 	movw   $0x7265,0x24(%r15)
  401be3:	41 c6 47 26 00       	movb   $0x0,0x26(%r15)
  401be8:	44 89 e7             	mov    %r12d,%edi
  401beb:	e8 c0 ef ff ff       	callq  400bb0 <close@plt>
  401bf0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401bf5:	e9 e8 04 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401bfa:	49 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%r9
  401c01:	b8 00 00 00 00       	mov    $0x0,%eax
  401c06:	4c 89 c9             	mov    %r9,%rcx
  401c09:	48 89 df             	mov    %rbx,%rdi
  401c0c:	f2 ae                	repnz scas %es:(%rdi),%al
  401c0e:	48 f7 d1             	not    %rcx
  401c11:	48 89 ce             	mov    %rcx,%rsi
  401c14:	4c 89 c9             	mov    %r9,%rcx
  401c17:	48 8b 3c 24          	mov    (%rsp),%rdi
  401c1b:	f2 ae                	repnz scas %es:(%rdi),%al
  401c1d:	49 89 c8             	mov    %rcx,%r8
  401c20:	4c 89 c9             	mov    %r9,%rcx
  401c23:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
  401c28:	f2 ae                	repnz scas %es:(%rdi),%al
  401c2a:	48 f7 d1             	not    %rcx
  401c2d:	48 89 ca             	mov    %rcx,%rdx
  401c30:	4c 89 c9             	mov    %r9,%rcx
  401c33:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
  401c38:	f2 ae                	repnz scas %es:(%rdi),%al
  401c3a:	4c 29 c2             	sub    %r8,%rdx
  401c3d:	48 29 ca             	sub    %rcx,%rdx
  401c40:	48 8d 44 76 fd       	lea    -0x3(%rsi,%rsi,2),%rax
  401c45:	48 8d 44 02 7b       	lea    0x7b(%rdx,%rax,1),%rax
  401c4a:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
  401c50:	76 73                	jbe    401cc5 <submitr+0x2b1>
  401c52:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  401c59:	3a 20 52 
  401c5c:	49 89 07             	mov    %rax,(%r15)
  401c5f:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  401c66:	20 73 74 
  401c69:	49 89 47 08          	mov    %rax,0x8(%r15)
  401c6d:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
  401c74:	74 6f 6f 
  401c77:	49 89 47 10          	mov    %rax,0x10(%r15)
  401c7b:	48 b8 20 6c 61 72 67 	movabs $0x202e656772616c20,%rax
  401c82:	65 2e 20 
  401c85:	49 89 47 18          	mov    %rax,0x18(%r15)
  401c89:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
  401c90:	61 73 65 
  401c93:	49 89 47 20          	mov    %rax,0x20(%r15)
  401c97:	48 b8 20 53 55 42 4d 	movabs $0x5254494d42555320,%rax
  401c9e:	49 54 52 
  401ca1:	49 89 47 28          	mov    %rax,0x28(%r15)
  401ca5:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
  401cac:	55 46 00 
  401caf:	49 89 47 30          	mov    %rax,0x30(%r15)
  401cb3:	44 89 e7             	mov    %r12d,%edi
  401cb6:	e8 f5 ee ff ff       	callq  400bb0 <close@plt>
  401cbb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401cc0:	e9 1d 04 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401cc5:	48 8d 94 24 50 40 00 	lea    0x4050(%rsp),%rdx
  401ccc:	00 
  401ccd:	b9 00 04 00 00       	mov    $0x400,%ecx
  401cd2:	b8 00 00 00 00       	mov    $0x0,%eax
  401cd7:	48 89 d7             	mov    %rdx,%rdi
  401cda:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  401cdd:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  401ce4:	48 89 df             	mov    %rbx,%rdi
  401ce7:	f2 ae                	repnz scas %es:(%rdi),%al
  401ce9:	48 89 c8             	mov    %rcx,%rax
  401cec:	48 f7 d0             	not    %rax
  401cef:	48 83 e8 01          	sub    $0x1,%rax
  401cf3:	85 c0                	test   %eax,%eax
  401cf5:	0f 84 90 04 00 00    	je     40218b <submitr+0x777>
  401cfb:	8d 40 ff             	lea    -0x1(%rax),%eax
  401cfe:	4c 8d 74 03 01       	lea    0x1(%rbx,%rax,1),%r14
  401d03:	48 89 d5             	mov    %rdx,%rbp
  401d06:	49 bd d9 ff 00 00 00 	movabs $0x2000000000ffd9,%r13
  401d0d:	00 20 00 
  401d10:	44 0f b6 03          	movzbl (%rbx),%r8d
  401d14:	41 8d 40 d6          	lea    -0x2a(%r8),%eax
  401d18:	3c 35                	cmp    $0x35,%al
  401d1a:	77 06                	ja     401d22 <submitr+0x30e>
  401d1c:	49 0f a3 c5          	bt     %rax,%r13
  401d20:	72 0d                	jb     401d2f <submitr+0x31b>
  401d22:	44 89 c0             	mov    %r8d,%eax
  401d25:	83 e0 df             	and    $0xffffffdf,%eax
  401d28:	83 e8 41             	sub    $0x41,%eax
  401d2b:	3c 19                	cmp    $0x19,%al
  401d2d:	77 0a                	ja     401d39 <submitr+0x325>
  401d2f:	44 88 45 00          	mov    %r8b,0x0(%rbp)
  401d33:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401d37:	eb 6c                	jmp    401da5 <submitr+0x391>
  401d39:	41 80 f8 20          	cmp    $0x20,%r8b
  401d3d:	75 0a                	jne    401d49 <submitr+0x335>
  401d3f:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
  401d43:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401d47:	eb 5c                	jmp    401da5 <submitr+0x391>
  401d49:	41 8d 40 e0          	lea    -0x20(%r8),%eax
  401d4d:	3c 5f                	cmp    $0x5f,%al
  401d4f:	76 0a                	jbe    401d5b <submitr+0x347>
  401d51:	41 80 f8 09          	cmp    $0x9,%r8b
  401d55:	0f 85 a3 03 00 00    	jne    4020fe <submitr+0x6ea>
  401d5b:	45 0f b6 c0          	movzbl %r8b,%r8d
  401d5f:	b9 98 2a 40 00       	mov    $0x402a98,%ecx
  401d64:	ba 08 00 00 00       	mov    $0x8,%edx
  401d69:	be 01 00 00 00       	mov    $0x1,%esi
  401d6e:	48 8d bc 24 50 80 00 	lea    0x8050(%rsp),%rdi
  401d75:	00 
  401d76:	b8 00 00 00 00       	mov    $0x0,%eax
  401d7b:	e8 50 ef ff ff       	callq  400cd0 <__sprintf_chk@plt>
  401d80:	0f b6 84 24 50 80 00 	movzbl 0x8050(%rsp),%eax
  401d87:	00 
  401d88:	88 45 00             	mov    %al,0x0(%rbp)
  401d8b:	0f b6 84 24 51 80 00 	movzbl 0x8051(%rsp),%eax
  401d92:	00 
  401d93:	88 45 01             	mov    %al,0x1(%rbp)
  401d96:	0f b6 84 24 52 80 00 	movzbl 0x8052(%rsp),%eax
  401d9d:	00 
  401d9e:	88 45 02             	mov    %al,0x2(%rbp)
  401da1:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
  401da5:	48 83 c3 01          	add    $0x1,%rbx
  401da9:	49 39 de             	cmp    %rbx,%r14
  401dac:	0f 85 5e ff ff ff    	jne    401d10 <submitr+0x2fc>
  401db2:	e9 d4 03 00 00       	jmpq   40218b <submitr+0x777>
  401db7:	48 89 da             	mov    %rbx,%rdx
  401dba:	48 89 ee             	mov    %rbp,%rsi
  401dbd:	44 89 e7             	mov    %r12d,%edi
  401dc0:	e8 bb ed ff ff       	callq  400b80 <write@plt>
  401dc5:	48 85 c0             	test   %rax,%rax
  401dc8:	7f 0f                	jg     401dd9 <submitr+0x3c5>
  401dca:	e8 81 ed ff ff       	callq  400b50 <__errno_location@plt>
  401dcf:	83 38 04             	cmpl   $0x4,(%rax)
  401dd2:	75 12                	jne    401de6 <submitr+0x3d2>
  401dd4:	b8 00 00 00 00       	mov    $0x0,%eax
  401dd9:	48 01 c5             	add    %rax,%rbp
  401ddc:	48 29 c3             	sub    %rax,%rbx
  401ddf:	75 d6                	jne    401db7 <submitr+0x3a3>
  401de1:	4d 85 ed             	test   %r13,%r13
  401de4:	79 5f                	jns    401e45 <submitr+0x431>
  401de6:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  401ded:	3a 20 43 
  401df0:	49 89 07             	mov    %rax,(%r15)
  401df3:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  401dfa:	20 75 6e 
  401dfd:	49 89 47 08          	mov    %rax,0x8(%r15)
  401e01:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401e08:	74 6f 20 
  401e0b:	49 89 47 10          	mov    %rax,0x10(%r15)
  401e0f:	48 b8 77 72 69 74 65 	movabs $0x6f74206574697277,%rax
  401e16:	20 74 6f 
  401e19:	49 89 47 18          	mov    %rax,0x18(%r15)
  401e1d:	48 b8 20 74 68 65 20 	movabs $0x7265732065687420,%rax
  401e24:	73 65 72 
  401e27:	49 89 47 20          	mov    %rax,0x20(%r15)
  401e2b:	41 c7 47 28 76 65 72 	movl   $0x726576,0x28(%r15)
  401e32:	00 
  401e33:	44 89 e7             	mov    %r12d,%edi
  401e36:	e8 75 ed ff ff       	callq  400bb0 <close@plt>
  401e3b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401e40:	e9 9d 02 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401e45:	44 89 64 24 40       	mov    %r12d,0x40(%rsp)
  401e4a:	c7 44 24 44 00 00 00 	movl   $0x0,0x44(%rsp)
  401e51:	00 
  401e52:	48 8d 44 24 50       	lea    0x50(%rsp),%rax
  401e57:	48 89 44 24 48       	mov    %rax,0x48(%rsp)
  401e5c:	ba 00 20 00 00       	mov    $0x2000,%edx
  401e61:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  401e68:	00 
  401e69:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  401e6e:	e8 af fa ff ff       	callq  401922 <rio_readlineb>
  401e73:	48 85 c0             	test   %rax,%rax
  401e76:	7f 74                	jg     401eec <submitr+0x4d8>
  401e78:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  401e7f:	3a 20 43 
  401e82:	49 89 07             	mov    %rax,(%r15)
  401e85:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  401e8c:	20 75 6e 
  401e8f:	49 89 47 08          	mov    %rax,0x8(%r15)
  401e93:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401e9a:	74 6f 20 
  401e9d:	49 89 47 10          	mov    %rax,0x10(%r15)
  401ea1:	48 b8 72 65 61 64 20 	movabs $0x7269662064616572,%rax
  401ea8:	66 69 72 
  401eab:	49 89 47 18          	mov    %rax,0x18(%r15)
  401eaf:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
  401eb6:	61 64 65 
  401eb9:	49 89 47 20          	mov    %rax,0x20(%r15)
  401ebd:	48 b8 72 20 66 72 6f 	movabs $0x73206d6f72662072,%rax
  401ec4:	6d 20 73 
  401ec7:	49 89 47 28          	mov    %rax,0x28(%r15)
  401ecb:	41 c7 47 30 65 72 76 	movl   $0x65767265,0x30(%r15)
  401ed2:	65 
  401ed3:	66 41 c7 47 34 72 00 	movw   $0x72,0x34(%r15)
  401eda:	44 89 e7             	mov    %r12d,%edi
  401edd:	e8 ce ec ff ff       	callq  400bb0 <close@plt>
  401ee2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401ee7:	e9 f6 01 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401eec:	4c 8d 84 24 50 80 00 	lea    0x8050(%rsp),%r8
  401ef3:	00 
  401ef4:	48 8d 4c 24 2c       	lea    0x2c(%rsp),%rcx
  401ef9:	48 8d 94 24 50 60 00 	lea    0x6050(%rsp),%rdx
  401f00:	00 
  401f01:	be 9f 2a 40 00       	mov    $0x402a9f,%esi
  401f06:	48 8d bc 24 50 20 00 	lea    0x2050(%rsp),%rdi
  401f0d:	00 
  401f0e:	b8 00 00 00 00       	mov    $0x0,%eax
  401f13:	e8 28 ed ff ff       	callq  400c40 <__isoc99_sscanf@plt>
  401f18:	44 8b 44 24 2c       	mov    0x2c(%rsp),%r8d
  401f1d:	41 81 f8 c8 00 00 00 	cmp    $0xc8,%r8d
  401f24:	0f 84 be 00 00 00    	je     401fe8 <submitr+0x5d4>
  401f2a:	4c 8d 8c 24 50 80 00 	lea    0x8050(%rsp),%r9
  401f31:	00 
  401f32:	b9 e8 29 40 00       	mov    $0x4029e8,%ecx
  401f37:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  401f3e:	be 01 00 00 00       	mov    $0x1,%esi
  401f43:	4c 89 ff             	mov    %r15,%rdi
  401f46:	b8 00 00 00 00       	mov    $0x0,%eax
  401f4b:	e8 80 ed ff ff       	callq  400cd0 <__sprintf_chk@plt>
  401f50:	44 89 e7             	mov    %r12d,%edi
  401f53:	e8 58 ec ff ff       	callq  400bb0 <close@plt>
  401f58:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401f5d:	e9 80 01 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401f62:	ba 00 20 00 00       	mov    $0x2000,%edx
  401f67:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  401f6e:	00 
  401f6f:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  401f74:	e8 a9 f9 ff ff       	callq  401922 <rio_readlineb>
  401f79:	48 85 c0             	test   %rax,%rax
  401f7c:	7f 6a                	jg     401fe8 <submitr+0x5d4>
  401f7e:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  401f85:	3a 20 43 
  401f88:	49 89 07             	mov    %rax,(%r15)
  401f8b:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  401f92:	20 75 6e 
  401f95:	49 89 47 08          	mov    %rax,0x8(%r15)
  401f99:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401fa0:	74 6f 20 
  401fa3:	49 89 47 10          	mov    %rax,0x10(%r15)
  401fa7:	48 b8 72 65 61 64 20 	movabs $0x6165682064616572,%rax
  401fae:	68 65 61 
  401fb1:	49 89 47 18          	mov    %rax,0x18(%r15)
  401fb5:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
  401fbc:	66 72 6f 
  401fbf:	49 89 47 20          	mov    %rax,0x20(%r15)
  401fc3:	48 b8 6d 20 73 65 72 	movabs $0x726576726573206d,%rax
  401fca:	76 65 72 
  401fcd:	49 89 47 28          	mov    %rax,0x28(%r15)
  401fd1:	41 c6 47 30 00       	movb   $0x0,0x30(%r15)
  401fd6:	44 89 e7             	mov    %r12d,%edi
  401fd9:	e8 d2 eb ff ff       	callq  400bb0 <close@plt>
  401fde:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401fe3:	e9 fa 00 00 00       	jmpq   4020e2 <submitr+0x6ce>
  401fe8:	80 bc 24 50 20 00 00 	cmpb   $0xd,0x2050(%rsp)
  401fef:	0d 
  401ff0:	0f 85 6c ff ff ff    	jne    401f62 <submitr+0x54e>
  401ff6:	80 bc 24 51 20 00 00 	cmpb   $0xa,0x2051(%rsp)
  401ffd:	0a 
  401ffe:	0f 85 5e ff ff ff    	jne    401f62 <submitr+0x54e>
  402004:	80 bc 24 52 20 00 00 	cmpb   $0x0,0x2052(%rsp)
  40200b:	00 
  40200c:	0f 85 50 ff ff ff    	jne    401f62 <submitr+0x54e>
  402012:	ba 00 20 00 00       	mov    $0x2000,%edx
  402017:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  40201e:	00 
  40201f:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
  402024:	e8 f9 f8 ff ff       	callq  401922 <rio_readlineb>
  402029:	48 85 c0             	test   %rax,%rax
  40202c:	7f 70                	jg     40209e <submitr+0x68a>
  40202e:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402035:	3a 20 43 
  402038:	49 89 07             	mov    %rax,(%r15)
  40203b:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  402042:	20 75 6e 
  402045:	49 89 47 08          	mov    %rax,0x8(%r15)
  402049:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402050:	74 6f 20 
  402053:	49 89 47 10          	mov    %rax,0x10(%r15)
  402057:	48 b8 72 65 61 64 20 	movabs $0x6174732064616572,%rax
  40205e:	73 74 61 
  402061:	49 89 47 18          	mov    %rax,0x18(%r15)
  402065:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
  40206c:	65 73 73 
  40206f:	49 89 47 20          	mov    %rax,0x20(%r15)
  402073:	48 b8 61 67 65 20 66 	movabs $0x6d6f726620656761,%rax
  40207a:	72 6f 6d 
  40207d:	49 89 47 28          	mov    %rax,0x28(%r15)
  402081:	48 b8 20 73 65 72 76 	movabs $0x72657672657320,%rax
  402088:	65 72 00 
  40208b:	49 89 47 30          	mov    %rax,0x30(%r15)
  40208f:	44 89 e7             	mov    %r12d,%edi
  402092:	e8 19 eb ff ff       	callq  400bb0 <close@plt>
  402097:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40209c:	eb 44                	jmp    4020e2 <submitr+0x6ce>
  40209e:	48 8d b4 24 50 20 00 	lea    0x2050(%rsp),%rsi
  4020a5:	00 
  4020a6:	4c 89 ff             	mov    %r15,%rdi
  4020a9:	e8 b2 ea ff ff       	callq  400b60 <strcpy@plt>
  4020ae:	44 89 e7             	mov    %r12d,%edi
  4020b1:	e8 fa ea ff ff       	callq  400bb0 <close@plt>
  4020b6:	41 0f b6 17          	movzbl (%r15),%edx
  4020ba:	b8 4f 00 00 00       	mov    $0x4f,%eax
  4020bf:	29 d0                	sub    %edx,%eax
  4020c1:	75 15                	jne    4020d8 <submitr+0x6c4>
  4020c3:	41 0f b6 57 01       	movzbl 0x1(%r15),%edx
  4020c8:	b8 4b 00 00 00       	mov    $0x4b,%eax
  4020cd:	29 d0                	sub    %edx,%eax
  4020cf:	75 07                	jne    4020d8 <submitr+0x6c4>
  4020d1:	41 0f b6 47 02       	movzbl 0x2(%r15),%eax
  4020d6:	f7 d8                	neg    %eax
  4020d8:	85 c0                	test   %eax,%eax
  4020da:	0f 95 c0             	setne  %al
  4020dd:	0f b6 c0             	movzbl %al,%eax
  4020e0:	f7 d8                	neg    %eax
  4020e2:	48 8b 8c 24 58 a0 00 	mov    0xa058(%rsp),%rcx
  4020e9:	00 
  4020ea:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  4020f1:	00 00 
  4020f3:	0f 84 12 01 00 00    	je     40220b <submitr+0x7f7>
  4020f9:	e9 08 01 00 00       	jmpq   402206 <submitr+0x7f2>
  4020fe:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  402105:	3a 20 52 
  402108:	49 89 07             	mov    %rax,(%r15)
  40210b:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  402112:	20 73 74 
  402115:	49 89 47 08          	mov    %rax,0x8(%r15)
  402119:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
  402120:	63 6f 6e 
  402123:	49 89 47 10          	mov    %rax,0x10(%r15)
  402127:	48 b8 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rax
  40212e:	20 61 6e 
  402131:	49 89 47 18          	mov    %rax,0x18(%r15)
  402135:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
  40213c:	67 61 6c 
  40213f:	49 89 47 20          	mov    %rax,0x20(%r15)
  402143:	48 b8 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rax
  40214a:	6e 70 72 
  40214d:	49 89 47 28          	mov    %rax,0x28(%r15)
  402151:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
  402158:	6c 65 20 
  40215b:	49 89 47 30          	mov    %rax,0x30(%r15)
  40215f:	48 b8 63 68 61 72 61 	movabs $0x6574636172616863,%rax
  402166:	63 74 65 
  402169:	49 89 47 38          	mov    %rax,0x38(%r15)
  40216d:	66 41 c7 47 40 72 2e 	movw   $0x2e72,0x40(%r15)
  402174:	41 c6 47 42 00       	movb   $0x0,0x42(%r15)
  402179:	44 89 e7             	mov    %r12d,%edi
  40217c:	e8 2f ea ff ff       	callq  400bb0 <close@plt>
  402181:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402186:	e9 57 ff ff ff       	jmpq   4020e2 <submitr+0x6ce>
  40218b:	48 8d 9c 24 50 20 00 	lea    0x2050(%rsp),%rbx
  402192:	00 
  402193:	48 83 ec 08          	sub    $0x8,%rsp
  402197:	48 8d 84 24 58 40 00 	lea    0x4058(%rsp),%rax
  40219e:	00 
  40219f:	50                   	push   %rax
  4021a0:	ff 74 24 20          	pushq  0x20(%rsp)
  4021a4:	ff 74 24 30          	pushq  0x30(%rsp)
  4021a8:	4c 8b 4c 24 28       	mov    0x28(%rsp),%r9
  4021ad:	4c 8b 44 24 20       	mov    0x20(%rsp),%r8
  4021b2:	b9 18 2a 40 00       	mov    $0x402a18,%ecx
  4021b7:	ba 00 20 00 00       	mov    $0x2000,%edx
  4021bc:	be 01 00 00 00       	mov    $0x1,%esi
  4021c1:	48 89 df             	mov    %rbx,%rdi
  4021c4:	b8 00 00 00 00       	mov    $0x0,%eax
  4021c9:	e8 02 eb ff ff       	callq  400cd0 <__sprintf_chk@plt>
  4021ce:	b8 00 00 00 00       	mov    $0x0,%eax
  4021d3:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  4021da:	48 89 df             	mov    %rbx,%rdi
  4021dd:	f2 ae                	repnz scas %es:(%rdi),%al
  4021df:	48 89 c8             	mov    %rcx,%rax
  4021e2:	48 f7 d0             	not    %rax
  4021e5:	4c 8d 68 ff          	lea    -0x1(%rax),%r13
  4021e9:	48 83 c4 20          	add    $0x20,%rsp
  4021ed:	4c 89 eb             	mov    %r13,%rbx
  4021f0:	48 8d ac 24 50 20 00 	lea    0x2050(%rsp),%rbp
  4021f7:	00 
  4021f8:	4d 85 ed             	test   %r13,%r13
  4021fb:	0f 85 b6 fb ff ff    	jne    401db7 <submitr+0x3a3>
  402201:	e9 3f fc ff ff       	jmpq   401e45 <submitr+0x431>
  402206:	e8 85 e9 ff ff       	callq  400b90 <__stack_chk_fail@plt>
  40220b:	48 81 c4 68 a0 00 00 	add    $0xa068,%rsp
  402212:	5b                   	pop    %rbx
  402213:	5d                   	pop    %rbp
  402214:	41 5c                	pop    %r12
  402216:	41 5d                	pop    %r13
  402218:	41 5e                	pop    %r14
  40221a:	41 5f                	pop    %r15
  40221c:	c3                   	retq   

000000000040221d <init_timeout>:
  40221d:	85 ff                	test   %edi,%edi
  40221f:	74 22                	je     402243 <init_timeout+0x26>
  402221:	53                   	push   %rbx
  402222:	89 fb                	mov    %edi,%ebx
  402224:	be f4 18 40 00       	mov    $0x4018f4,%esi
  402229:	bf 0e 00 00 00       	mov    $0xe,%edi
  40222e:	e8 bd e9 ff ff       	callq  400bf0 <signal@plt>
  402233:	85 db                	test   %ebx,%ebx
  402235:	bf 00 00 00 00       	mov    $0x0,%edi
  40223a:	0f 49 fb             	cmovns %ebx,%edi
  40223d:	e8 5e e9 ff ff       	callq  400ba0 <alarm@plt>
  402242:	5b                   	pop    %rbx
  402243:	f3 c3                	repz retq 

0000000000402245 <init_driver>:
  402245:	55                   	push   %rbp
  402246:	53                   	push   %rbx
  402247:	48 83 ec 28          	sub    $0x28,%rsp
  40224b:	48 89 fd             	mov    %rdi,%rbp
  40224e:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  402255:	00 00 
  402257:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
  40225c:	31 c0                	xor    %eax,%eax
  40225e:	be 01 00 00 00       	mov    $0x1,%esi
  402263:	bf 0d 00 00 00       	mov    $0xd,%edi
  402268:	e8 83 e9 ff ff       	callq  400bf0 <signal@plt>
  40226d:	be 01 00 00 00       	mov    $0x1,%esi
  402272:	bf 1d 00 00 00       	mov    $0x1d,%edi
  402277:	e8 74 e9 ff ff       	callq  400bf0 <signal@plt>
  40227c:	be 01 00 00 00       	mov    $0x1,%esi
  402281:	bf 1d 00 00 00       	mov    $0x1d,%edi
  402286:	e8 65 e9 ff ff       	callq  400bf0 <signal@plt>
  40228b:	ba 00 00 00 00       	mov    $0x0,%edx
  402290:	be 01 00 00 00       	mov    $0x1,%esi
  402295:	bf 02 00 00 00       	mov    $0x2,%edi
  40229a:	e8 41 ea ff ff       	callq  400ce0 <socket@plt>
  40229f:	85 c0                	test   %eax,%eax
  4022a1:	79 4f                	jns    4022f2 <init_driver+0xad>
  4022a3:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4022aa:	3a 20 43 
  4022ad:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4022b1:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4022b8:	20 75 6e 
  4022bb:	48 89 45 08          	mov    %rax,0x8(%rbp)
  4022bf:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4022c6:	74 6f 20 
  4022c9:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4022cd:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  4022d4:	65 20 73 
  4022d7:	48 89 45 18          	mov    %rax,0x18(%rbp)
  4022db:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  4022e2:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  4022e8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4022ed:	e9 0c 01 00 00       	jmpq   4023fe <init_driver+0x1b9>
  4022f2:	89 c3                	mov    %eax,%ebx
  4022f4:	bf b0 2a 40 00       	mov    $0x402ab0,%edi
  4022f9:	e8 02 e9 ff ff       	callq  400c00 <gethostbyname@plt>
  4022fe:	48 85 c0             	test   %rax,%rax
  402301:	75 68                	jne    40236b <init_driver+0x126>
  402303:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  40230a:	3a 20 44 
  40230d:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402311:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  402318:	20 75 6e 
  40231b:	48 89 45 08          	mov    %rax,0x8(%rbp)
  40231f:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402326:	74 6f 20 
  402329:	48 89 45 10          	mov    %rax,0x10(%rbp)
  40232d:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  402334:	76 65 20 
  402337:	48 89 45 18          	mov    %rax,0x18(%rbp)
  40233b:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  402342:	72 20 61 
  402345:	48 89 45 20          	mov    %rax,0x20(%rbp)
  402349:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
  402350:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
  402356:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  40235a:	89 df                	mov    %ebx,%edi
  40235c:	e8 4f e8 ff ff       	callq  400bb0 <close@plt>
  402361:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402366:	e9 93 00 00 00       	jmpq   4023fe <init_driver+0x1b9>
  40236b:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  402372:	00 
  402373:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
  40237a:	00 00 
  40237c:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
  402382:	48 63 50 14          	movslq 0x14(%rax),%rdx
  402386:	48 8b 40 18          	mov    0x18(%rax),%rax
  40238a:	48 8d 7c 24 04       	lea    0x4(%rsp),%rdi
  40238f:	b9 0c 00 00 00       	mov    $0xc,%ecx
  402394:	48 8b 30             	mov    (%rax),%rsi
  402397:	e8 74 e8 ff ff       	callq  400c10 <__memmove_chk@plt>
  40239c:	66 c7 44 24 02 3b 6e 	movw   $0x6e3b,0x2(%rsp)
  4023a3:	ba 10 00 00 00       	mov    $0x10,%edx
  4023a8:	48 89 e6             	mov    %rsp,%rsi
  4023ab:	89 df                	mov    %ebx,%edi
  4023ad:	e8 de e8 ff ff       	callq  400c90 <connect@plt>
  4023b2:	85 c0                	test   %eax,%eax
  4023b4:	79 32                	jns    4023e8 <init_driver+0x1a3>
  4023b6:	41 b8 b0 2a 40 00    	mov    $0x402ab0,%r8d
  4023bc:	b9 70 2a 40 00       	mov    $0x402a70,%ecx
  4023c1:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  4023c8:	be 01 00 00 00       	mov    $0x1,%esi
  4023cd:	48 89 ef             	mov    %rbp,%rdi
  4023d0:	b8 00 00 00 00       	mov    $0x0,%eax
  4023d5:	e8 f6 e8 ff ff       	callq  400cd0 <__sprintf_chk@plt>
  4023da:	89 df                	mov    %ebx,%edi
  4023dc:	e8 cf e7 ff ff       	callq  400bb0 <close@plt>
  4023e1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4023e6:	eb 16                	jmp    4023fe <init_driver+0x1b9>
  4023e8:	89 df                	mov    %ebx,%edi
  4023ea:	e8 c1 e7 ff ff       	callq  400bb0 <close@plt>
  4023ef:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
  4023f5:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
  4023f9:	b8 00 00 00 00       	mov    $0x0,%eax
  4023fe:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
  402403:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
  40240a:	00 00 
  40240c:	74 05                	je     402413 <init_driver+0x1ce>
  40240e:	e8 7d e7 ff ff       	callq  400b90 <__stack_chk_fail@plt>
  402413:	48 83 c4 28          	add    $0x28,%rsp
  402417:	5b                   	pop    %rbx
  402418:	5d                   	pop    %rbp
  402419:	c3                   	retq   

000000000040241a <driver_post>:
  40241a:	53                   	push   %rbx
  40241b:	4c 89 c3             	mov    %r8,%rbx
  40241e:	85 c9                	test   %ecx,%ecx
  402420:	74 24                	je     402446 <driver_post+0x2c>
  402422:	be c3 2a 40 00       	mov    $0x402ac3,%esi
  402427:	bf 01 00 00 00       	mov    $0x1,%edi
  40242c:	b8 00 00 00 00       	mov    $0x0,%eax
  402431:	e8 1a e8 ff ff       	callq  400c50 <__printf_chk@plt>
  402436:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  40243b:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  40243f:	b8 00 00 00 00       	mov    $0x0,%eax
  402444:	eb 41                	jmp    402487 <driver_post+0x6d>
  402446:	48 85 ff             	test   %rdi,%rdi
  402449:	74 2e                	je     402479 <driver_post+0x5f>
  40244b:	80 3f 00             	cmpb   $0x0,(%rdi)
  40244e:	74 29                	je     402479 <driver_post+0x5f>
  402450:	41 50                	push   %r8
  402452:	52                   	push   %rdx
  402453:	41 b9 da 2a 40 00    	mov    $0x402ada,%r9d
  402459:	49 89 f0             	mov    %rsi,%r8
  40245c:	48 89 f9             	mov    %rdi,%rcx
  40245f:	ba de 2a 40 00       	mov    $0x402ade,%edx
  402464:	be 6e 3b 00 00       	mov    $0x3b6e,%esi
  402469:	bf b0 2a 40 00       	mov    $0x402ab0,%edi
  40246e:	e8 a1 f5 ff ff       	callq  401a14 <submitr>
  402473:	48 83 c4 10          	add    $0x10,%rsp
  402477:	eb 0e                	jmp    402487 <driver_post+0x6d>
  402479:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  40247e:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  402482:	b8 00 00 00 00       	mov    $0x0,%eax
  402487:	5b                   	pop    %rbx
  402488:	c3                   	retq   
  402489:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000402490 <__libc_csu_init>:
  402490:	41 57                	push   %r15
  402492:	41 56                	push   %r14
  402494:	41 89 ff             	mov    %edi,%r15d
  402497:	41 55                	push   %r13
  402499:	41 54                	push   %r12
  40249b:	4c 8d 25 6e 19 20 00 	lea    0x20196e(%rip),%r12        # 603e10 <__frame_dummy_init_array_entry>
  4024a2:	55                   	push   %rbp
  4024a3:	48 8d 2d 6e 19 20 00 	lea    0x20196e(%rip),%rbp        # 603e18 <__init_array_end>
  4024aa:	53                   	push   %rbx
  4024ab:	49 89 f6             	mov    %rsi,%r14
  4024ae:	49 89 d5             	mov    %rdx,%r13
  4024b1:	4c 29 e5             	sub    %r12,%rbp
  4024b4:	48 83 ec 08          	sub    $0x8,%rsp
  4024b8:	48 c1 fd 03          	sar    $0x3,%rbp
  4024bc:	e8 3f e6 ff ff       	callq  400b00 <_init>
  4024c1:	48 85 ed             	test   %rbp,%rbp
  4024c4:	74 20                	je     4024e6 <__libc_csu_init+0x56>
  4024c6:	31 db                	xor    %ebx,%ebx
  4024c8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  4024cf:	00 
  4024d0:	4c 89 ea             	mov    %r13,%rdx
  4024d3:	4c 89 f6             	mov    %r14,%rsi
  4024d6:	44 89 ff             	mov    %r15d,%edi
  4024d9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  4024dd:	48 83 c3 01          	add    $0x1,%rbx
  4024e1:	48 39 eb             	cmp    %rbp,%rbx
  4024e4:	75 ea                	jne    4024d0 <__libc_csu_init+0x40>
  4024e6:	48 83 c4 08          	add    $0x8,%rsp
  4024ea:	5b                   	pop    %rbx
  4024eb:	5d                   	pop    %rbp
  4024ec:	41 5c                	pop    %r12
  4024ee:	41 5d                	pop    %r13
  4024f0:	41 5e                	pop    %r14
  4024f2:	41 5f                	pop    %r15
  4024f4:	c3                   	retq   
  4024f5:	90                   	nop
  4024f6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  4024fd:	00 00 00 

0000000000402500 <__libc_csu_fini>:
  402500:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000402504 <_fini>:
  402504:	48 83 ec 08          	sub    $0x8,%rsp
  402508:	48 83 c4 08          	add    $0x8,%rsp
  40250c:	c3                   	retq   
