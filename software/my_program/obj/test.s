
main.elf:     file format elf32-loongarch
main.elf


Disassembly of section .start:

1c000000 <_start>:
kernel_entry():
1c000000:	1400040c 	lu12i.w	$r12,32(0x20)
1c000004:	0400102c 	csrwr	$r12,0x4

1c000008 <cpu_init>:
cpu_init():
1c000008:	02800001 	addi.w	$r1,$r0,0
1c00000c:	02800002 	addi.w	$r2,$r0,0
1c000010:	02800003 	addi.w	$r3,$r0,0
1c000014:	02800004 	addi.w	$r4,$r0,0
1c000018:	02800005 	addi.w	$r5,$r0,0
1c00001c:	02800006 	addi.w	$r6,$r0,0
1c000020:	02800007 	addi.w	$r7,$r0,0
1c000024:	02800008 	addi.w	$r8,$r0,0
1c000028:	02800009 	addi.w	$r9,$r0,0
1c00002c:	0280000a 	addi.w	$r10,$r0,0
1c000030:	0280000b 	addi.w	$r11,$r0,0
1c000034:	0280000c 	addi.w	$r12,$r0,0
1c000038:	0280000d 	addi.w	$r13,$r0,0
1c00003c:	0280000e 	addi.w	$r14,$r0,0
1c000040:	0280000f 	addi.w	$r15,$r0,0
1c000044:	02800010 	addi.w	$r16,$r0,0
1c000048:	02800011 	addi.w	$r17,$r0,0
1c00004c:	02800012 	addi.w	$r18,$r0,0
1c000050:	02800013 	addi.w	$r19,$r0,0
1c000054:	02800014 	addi.w	$r20,$r0,0
1c000058:	02800015 	addi.w	$r21,$r0,0
1c00005c:	02800016 	addi.w	$r22,$r0,0
1c000060:	02800017 	addi.w	$r23,$r0,0
1c000064:	02800018 	addi.w	$r24,$r0,0
1c000068:	02800019 	addi.w	$r25,$r0,0
1c00006c:	0280001a 	addi.w	$r26,$r0,0
1c000070:	0280001b 	addi.w	$r27,$r0,0
1c000074:	0280001c 	addi.w	$r28,$r0,0
1c000078:	0280001d 	addi.w	$r29,$r0,0
1c00007c:	0280001e 	addi.w	$r30,$r0,0
1c000080:	0280001f 	addi.w	$r31,$r0,0
1c000084:	1dc8006c 	pcaddu12i	$r12,-114685(0xe4003)
1c000088:	28aea18c 	ld.w	$r12,$r12,-1112(0xba8)
1c00008c:	1dc8006d 	pcaddu12i	$r13,-114685(0xe4003)
1c000090:	28aee1ad 	ld.w	$r13,$r13,-1096(0xbb8)
1c000094:	5800118d 	beq	$r12,$r13,16(0x10) # 1c0000a4 <cpu_init+0x9c>
1c000098:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c00009c:	29bff180 	st.w	$r0,$r12,-4(0xffc)
1c0000a0:	63fff98d 	blt	$r12,$r13,-8(0x3fff8) # 1c000098 <cpu_init+0x90>
1c0000a4:	5401a000 	bl	416(0x1a0) # 1c000244 <ex_base_init>
1c0000a8:	5401ac00 	bl	428(0x1ac) # 1c000254 <ex_table_init>
1c0000ac:	1dc80063 	pcaddu12i	$r3,-114685(0xe4003)
1c0000b0:	28ae7063 	ld.w	$r3,$r3,-1124(0xb9c)
1c0000b4:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0000b8:	1dc8006c 	pcaddu12i	$r12,-114685(0xe4003)
1c0000bc:	28ae518c 	ld.w	$r12,$r12,-1132(0xb94)
1c0000c0:	1dc8006d 	pcaddu12i	$r13,-114685(0xe4003)
1c0000c4:	28ab91ad 	ld.w	$r13,$r13,-1308(0xae4)
1c0000c8:	2980018d 	st.w	$r13,$r12,0
1c0000cc:	1dc8006d 	pcaddu12i	$r13,-114685(0xe4003)
1c0000d0:	28ab71ad 	ld.w	$r13,$r13,-1316(0xadc)
1c0000d4:	2980118d 	st.w	$r13,$r12,4(0x4)
1c0000d8:	1dc8006d 	pcaddu12i	$r13,-114685(0xe4003)
1c0000dc:	28ab51ad 	ld.w	$r13,$r13,-1324(0xad4)
1c0000e0:	2980218d 	st.w	$r13,$r12,8(0x8)
1c0000e4:	1dc8006d 	pcaddu12i	$r13,-114685(0xe4003)
1c0000e8:	28ab31ad 	ld.w	$r13,$r13,-1332(0xacc)
1c0000ec:	2980318d 	st.w	$r13,$r12,12(0xc)

1c0000f0 <cache_enable>:
cache_enable():
1c0000f0:	0380200c 	ori	$r12,$r0,0x8
1c0000f4:	0380600d 	ori	$r13,$r0,0x18
1c0000f8:	040001ac 	csrxchg	$r12,$r13,0x0
1c0000fc:	04060020 	csrwr	$r0,0x180
1c000100:	04060420 	csrwr	$r0,0x181
1c000104:	0380640c 	ori	$r12,$r0,0x19
1c000108:	0406002c 	csrwr	$r12,0x180
1c00010c:	1554000c 	lu12i.w	$r12,-352256(0xaa000)
1c000110:	0380258c 	ori	$r12,$r12,0x9
1c000114:	0406042c 	csrwr	$r12,0x181
1c000118:	0380400c 	ori	$r12,$r0,0x10
1c00011c:	0380600d 	ori	$r13,$r0,0x18
1c000120:	040001ac 	csrxchg	$r12,$r13,0x0
1c000124:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000128:	28aa4084 	ld.w	$r4,$r4,-1392(0xa90)
1c00012c:	54068400 	bl	1668(0x684) # 1c0007b0 <print>
1c000130:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000134:	28ac6084 	ld.w	$r4,$r4,-1256(0xb18)
1c000138:	54015000 	bl	336(0x150) # 1c000288 <Hex_to_ASCII>
1c00013c:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000140:	28a9f084 	ld.w	$r4,$r4,-1412(0xa7c)
1c000144:	54066c00 	bl	1644(0x66c) # 1c0007b0 <print>
1c000148:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c00014c:	28ac5084 	ld.w	$r4,$r4,-1260(0xb14)
1c000150:	54013800 	bl	312(0x138) # 1c000288 <Hex_to_ASCII>
1c000154:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000158:	28a9a084 	ld.w	$r4,$r4,-1432(0xa68)
1c00015c:	54065400 	bl	1620(0x654) # 1c0007b0 <print>
1c000160:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000164:	28ac6084 	ld.w	$r4,$r4,-1256(0xb18)
1c000168:	54012000 	bl	288(0x120) # 1c000288 <Hex_to_ASCII>
1c00016c:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000170:	28a95084 	ld.w	$r4,$r4,-1452(0xa54)
1c000174:	54063c00 	bl	1596(0x63c) # 1c0007b0 <print>
1c000178:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c00017c:	28abd084 	ld.w	$r4,$r4,-1292(0xaf4)
1c000180:	54010800 	bl	264(0x108) # 1c000288 <Hex_to_ASCII>
1c000184:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000188:	28a90084 	ld.w	$r4,$r4,-1472(0xa40)
1c00018c:	54062400 	bl	1572(0x624) # 1c0007b0 <print>
1c000190:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000194:	28aa7084 	ld.w	$r4,$r4,-1380(0xa9c)
1c000198:	5400f000 	bl	240(0xf0) # 1c000288 <Hex_to_ASCII>
1c00019c:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0001a0:	28a8b084 	ld.w	$r4,$r4,-1492(0xa2c)
1c0001a4:	54060c00 	bl	1548(0x60c) # 1c0007b0 <print>
1c0001a8:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0001ac:	28aa7084 	ld.w	$r4,$r4,-1380(0xa9c)
1c0001b0:	5400d800 	bl	216(0xd8) # 1c000288 <Hex_to_ASCII>
1c0001b4:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0001b8:	28a86084 	ld.w	$r4,$r4,-1512(0xa18)
1c0001bc:	5405f400 	bl	1524(0x5f4) # 1c0007b0 <print>
1c0001c0:	14000244 	lu12i.w	$r4,18(0x12)
1c0001c4:	0393e084 	ori	$r4,$r4,0x4f8
1c0001c8:	5400c000 	bl	192(0xc0) # 1c000288 <Hex_to_ASCII>
1c0001cc:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0001d0:	28a81084 	ld.w	$r4,$r4,-1532(0xa04)
1c0001d4:	5405dc00 	bl	1500(0x5dc) # 1c0007b0 <print>
1c0001d8:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0001dc:	28a7f084 	ld.w	$r4,$r4,-1540(0x9fc)
1c0001e0:	5405d000 	bl	1488(0x5d0) # 1c0007b0 <print>
1c0001e4:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0001e8:	28a7d084 	ld.w	$r4,$r4,-1548(0x9f4)
1c0001ec:	5405c400 	bl	1476(0x5c4) # 1c0007b0 <print>
1c0001f0:	02807065 	addi.w	$r5,$r3,28(0x1c)
1c0001f4:	02808066 	addi.w	$r6,$r3,32(0x20)
1c0001f8:	298000a0 	st.w	$r0,$r5,0
1c0001fc:	298000c0 	st.w	$r0,$r6,0
1c000200:	00150004 	move	$r4,$r0
1c000204:	54035c00 	bl	860(0x35c) # 1c000560 <main>
1c000208:	02bff063 	addi.w	$r3,$r3,-4(0xffc)
1c00020c:	29800064 	st.w	$r4,$r3,0
1c000210:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000214:	28a73084 	ld.w	$r4,$r4,-1588(0x9cc)
1c000218:	54059800 	bl	1432(0x598) # 1c0007b0 <print>
1c00021c:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000220:	28a71084 	ld.w	$r4,$r4,-1596(0x9c4)
1c000224:	54058c00 	bl	1420(0x58c) # 1c0007b0 <print>
1c000228:	28800064 	ld.w	$r4,$r3,0
1c00022c:	54005c00 	bl	92(0x5c) # 1c000288 <Hex_to_ASCII>
1c000230:	02801063 	addi.w	$r3,$r3,4(0x4)
1c000234:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c000238:	28a6c084 	ld.w	$r4,$r4,-1616(0x9b0)
1c00023c:	54057400 	bl	1396(0x574) # 1c0007b0 <print>
1c000240:	5402e000 	bl	736(0x2e0) # 1c000520 <_exit>

1c000244 <ex_base_init>:
ex_base_init():
1c000244:	1438000c 	lu12i.w	$r12,114688(0x1c000)
1c000248:	038e018c 	ori	$r12,$r12,0x380
1c00024c:	0400302c 	csrwr	$r12,0xc
1c000250:	4c000020 	jirl	$r0,$r1,0

1c000254 <ex_table_init>:
ex_table_init():
1c000254:	1dc8006c 	pcaddu12i	$r12,-114685(0xe4003)
1c000258:	28a8118c 	ld.w	$r12,$r12,-1532(0xa04)
1c00025c:	1dc8006d 	pcaddu12i	$r13,-114685(0xe4003)
1c000260:	28a701ad 	ld.w	$r13,$r13,-1600(0x9c0)
1c000264:	028001af 	addi.w	$r15,$r13,0
1c000268:	0380800e 	ori	$r14,$r0,0x20
1c00026c:	298001ac 	st.w	$r12,$r13,0
1c000270:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c000274:	02bffdce 	addi.w	$r14,$r14,-1(0xfff)
1c000278:	67fff5c0 	bge	$r14,$r0,-12(0x3fff4) # 1c00026c <ex_table_init+0x18>
1c00027c:	028001ed 	addi.w	$r13,$r15,0
1c000280:	2983f1ac 	st.w	$r12,$r13,252(0xfc)
1c000284:	4c000020 	jirl	$r0,$r1,0

1c000288 <Hex_to_ASCII>:
Hex_to_ASCII():
1c000288:	02bfe063 	addi.w	$r3,$r3,-8(0xff8)
1c00028c:	29800061 	st.w	$r1,$r3,0
1c000290:	0010100c 	add.w	$r12,$r0,$r4
1c000294:	2980106c 	st.w	$r12,$r3,4(0x4)
1c000298:	0380c004 	ori	$r4,$r0,0x30
1c00029c:	54034800 	bl	840(0x348) # 1c0005e4 <outbyte>
1c0002a0:	0381e004 	ori	$r4,$r0,0x78
1c0002a4:	54034000 	bl	832(0x340) # 1c0005e4 <outbyte>
1c0002a8:	0380e80f 	ori	$r15,$r0,0x3a
1c0002ac:	03808011 	ori	$r17,$r0,0x20
1c0002b0:	02bff231 	addi.w	$r17,$r17,-4(0xffc)
1c0002b4:	2880106c 	ld.w	$r12,$r3,4(0x4)
1c0002b8:	0017c58c 	srl.w	$r12,$r12,$r17
1c0002bc:	03403d90 	andi	$r16,$r12,0xf
1c0002c0:	0280c210 	addi.w	$r16,$r16,48(0x30)
1c0002c4:	60000a0f 	blt	$r16,$r15,8(0x8) # 1c0002cc <Hex_to_ASCII+0x44>
1c0002c8:	02809e10 	addi.w	$r16,$r16,39(0x27)
1c0002cc:	00100204 	add.w	$r4,$r16,$r0
1c0002d0:	54031400 	bl	788(0x314) # 1c0005e4 <outbyte>
1c0002d4:	5fffde20 	bne	$r17,$r0,-36(0x3ffdc) # 1c0002b0 <Hex_to_ASCII+0x28>
1c0002d8:	28800061 	ld.w	$r1,$r3,0
1c0002dc:	02802063 	addi.w	$r3,$r3,8(0x8)
1c0002e0:	4c000020 	jirl	$r0,$r1,0
	...
1c000380:	0400c03d 	csrwr	$r29,0x30
1c000384:	0400c43e 	csrwr	$r30,0x31
1c000388:	0400141d 	csrrd	$r29,0x5
1c00038c:	14007e1e 	lu12i.w	$r30,1008(0x3f0)
1c000390:	0014f7dd 	and	$r29,$r30,$r29
1c000394:	0044bbbd 	srli.w	$r29,$r29,0xe
1c000398:	1dc8007e 	pcaddu12i	$r30,-114685(0xe4003)
1c00039c:	28a213de 	ld.w	$r30,$r30,-1916(0x884)
1c0003a0:	00107bbd 	add.w	$r29,$r29,$r30
1c0003a4:	288003be 	ld.w	$r30,$r29,0
1c0003a8:	0400c01d 	csrrd	$r29,0x30
1c0003ac:	4c0003c0 	jirl	$r0,$r30,0

1c0003b0 <default_ex>:
default_ex():
1c0003b0:	29bff06c 	st.w	$r12,$r3,-4(0xffc)
1c0003b4:	29bfe06d 	st.w	$r13,$r3,-8(0xff8)
1c0003b8:	29bfd06e 	st.w	$r14,$r3,-12(0xff4)
1c0003bc:	29bfc06f 	st.w	$r15,$r3,-16(0xff0)
1c0003c0:	29bfb070 	st.w	$r16,$r3,-20(0xfec)
1c0003c4:	02bf9063 	addi.w	$r3,$r3,-28(0xfe4)
1c0003c8:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0003cc:	28a08084 	ld.w	$r4,$r4,-2016(0x820)
1c0003d0:	5403e000 	bl	992(0x3e0) # 1c0007b0 <print>
1c0003d4:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0003d8:	28a06084 	ld.w	$r4,$r4,-2024(0x818)
1c0003dc:	5403d400 	bl	980(0x3d4) # 1c0007b0 <print>
1c0003e0:	1dc80064 	pcaddu12i	$r4,-114685(0xe4003)
1c0003e4:	28a04084 	ld.w	$r4,$r4,-2032(0x810)
1c0003e8:	5403c800 	bl	968(0x3c8) # 1c0007b0 <print>
1c0003ec:	0400180c 	csrrd	$r12,0x6
1c0003f0:	02800184 	addi.w	$r4,$r12,0
1c0003f4:	57fe97ff 	bl	-364(0xffffe94) # 1c000288 <Hex_to_ASCII>
1c0003f8:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c0003fc:	289ff084 	ld.w	$r4,$r4,2044(0x7fc)
1c000400:	5403b000 	bl	944(0x3b0) # 1c0007b0 <print>
1c000404:	04001410 	csrrd	$r16,0x5
1c000408:	29800070 	st.w	$r16,$r3,0
1c00040c:	03bffc0f 	ori	$r15,$r0,0xfff
1c000410:	0014c1e4 	and	$r4,$r15,$r16
1c000414:	57fe77ff 	bl	-396(0xffffe74) # 1c000288 <Hex_to_ASCII>
1c000418:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c00041c:	289f8084 	ld.w	$r4,$r4,2016(0x7e0)
1c000420:	54039000 	bl	912(0x390) # 1c0007b0 <print>
1c000424:	28800070 	ld.w	$r16,$r3,0
1c000428:	0044c210 	srli.w	$r16,$r16,0x10
1c00042c:	0380fc0f 	ori	$r15,$r0,0x3f
1c000430:	0014c1e4 	and	$r4,$r15,$r16
1c000434:	57fe57ff 	bl	-428(0xffffe54) # 1c000288 <Hex_to_ASCII>
1c000438:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c00043c:	289f1084 	ld.w	$r4,$r4,1988(0x7c4)
1c000440:	54037000 	bl	880(0x370) # 1c0007b0 <print>
1c000444:	04001c04 	csrrd	$r4,0x7
1c000448:	57fe43ff 	bl	-448(0xffffe40) # 1c000288 <Hex_to_ASCII>
1c00044c:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c000450:	289ed084 	ld.w	$r4,$r4,1972(0x7b4)
1c000454:	54035c00 	bl	860(0x35c) # 1c0007b0 <print>
1c000458:	0400180c 	csrrd	$r12,0x6
1c00045c:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c000460:	0400182c 	csrwr	$r12,0x6
1c000464:	02807063 	addi.w	$r3,$r3,28(0x1c)
1c000468:	28bfb070 	ld.w	$r16,$r3,-20(0xfec)
1c00046c:	28bfc06f 	ld.w	$r15,$r3,-16(0xff0)
1c000470:	28bfd06e 	ld.w	$r14,$r3,-12(0xff4)
1c000474:	28bfe06d 	ld.w	$r13,$r3,-8(0xff8)
1c000478:	28bff06c 	ld.w	$r12,$r3,-4(0xffc)
1c00047c:	06488000 	idle	0x0

1c000480 <vir_read>:
vir_read():
1c000480:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c000484:	289e1084 	ld.w	$r4,$r4,1924(0x784)
1c000488:	54032800 	bl	808(0x328) # 1c0007b0 <print>
1c00048c:	4c000020 	jirl	$r0,$r1,0

1c000490 <vir_open>:
vir_open():
1c000490:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c000494:	289de084 	ld.w	$r4,$r4,1912(0x778)
1c000498:	54031800 	bl	792(0x318) # 1c0007b0 <print>
1c00049c:	4c000020 	jirl	$r0,$r1,0

1c0004a0 <vir_close>:
vir_close():
1c0004a0:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c0004a4:	289db084 	ld.w	$r4,$r4,1900(0x76c)
1c0004a8:	54030800 	bl	776(0x308) # 1c0007b0 <print>
1c0004ac:	4c000020 	jirl	$r0,$r1,0

1c0004b0 <vir_mon_printf>:
vir_mon_printf():
1c0004b0:	157f5fed 	lu12i.w	$r13,-263425(0xbfaff)
1c0004b4:	03bc41ad 	ori	$r13,$r13,0xf10
1c0004b8:	2800008c 	ld.b	$r12,$r4,0
1c0004bc:	298001ac 	st.w	$r12,$r13,0
1c0004c0:	4c000020 	jirl	$r0,$r1,0

1c0004c4 <handler_declare>:
handler_declare():
1c0004c4:	29bff074 	st.w	$r20,$r3,-4(0xffc)
1c0004c8:	29bfe075 	st.w	$r21,$r3,-8(0xff8)
1c0004cc:	00100094 	add.w	$r20,$r4,$r0
1c0004d0:	1dc80055 	pcaddu12i	$r21,-114686(0xe4002)
1c0004d4:	289d32b5 	ld.w	$r21,$r21,1868(0x74c)
1c0004d8:	004088a5 	slli.w	$r5,$r5,0x2
1c0004dc:	001016b5 	add.w	$r21,$r21,$r5
1c0004e0:	298002b4 	st.w	$r20,$r21,0
1c0004e4:	28bff074 	ld.w	$r20,$r3,-4(0xffc)
1c0004e8:	28bfe075 	ld.w	$r21,$r3,-8(0xff8)
1c0004ec:	4c000020 	jirl	$r0,$r1,0

1c0004f0 <handler_release>:
handler_release():
1c0004f0:	29bff074 	st.w	$r20,$r3,-4(0xffc)
1c0004f4:	29bfe075 	st.w	$r21,$r3,-8(0xff8)
1c0004f8:	1dc80054 	pcaddu12i	$r20,-114686(0xe4002)
1c0004fc:	289d8294 	ld.w	$r20,$r20,1888(0x760)
1c000500:	1dc80055 	pcaddu12i	$r21,-114686(0xe4002)
1c000504:	289c72b5 	ld.w	$r21,$r21,1820(0x71c)
1c000508:	00408884 	slli.w	$r4,$r4,0x2
1c00050c:	001012b5 	add.w	$r21,$r21,$r4
1c000510:	298002b4 	st.w	$r20,$r21,0
1c000514:	28bff074 	ld.w	$r20,$r3,-4(0xffc)
1c000518:	28bfe075 	ld.w	$r21,$r3,-8(0xff8)
1c00051c:	4c000020 	jirl	$r0,$r1,0

1c000520 <_exit>:
_exit():
1c000520:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c000524:	289bc084 	ld.w	$r4,$r4,1776(0x6f0)
1c000528:	54028800 	bl	648(0x288) # 1c0007b0 <print>
1c00052c:	157f5fed 	lu12i.w	$r13,-263425(0xbfaff)
1c000530:	03bc41ad 	ori	$r13,$r13,0xf10
1c000534:	0383fc0c 	ori	$r12,$r0,0xff
1c000538:	298001ac 	st.w	$r12,$r13,0
1c00053c:	1dc80044 	pcaddu12i	$r4,-114686(0xe4002)
1c000540:	289b6084 	ld.w	$r4,$r4,1752(0x6d8)
1c000544:	54026c00 	bl	620(0x26c) # 1c0007b0 <print>
1c000548:	002b0011 	syscall	0x11
1c00054c:	02bff063 	addi.w	$r3,$r3,-4(0xffc)
1c000550:	29800061 	st.w	$r1,$r3,0

1c000554 <_fini>:
_fini():
1c000554:	02bff063 	addi.w	$r3,$r3,-4(0xffc)
1c000558:	29800061 	st.w	$r1,$r3,0

Disassembly of section .main:

1c000560 <main>:
main():
1c000560:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c000564:	29803061 	st.w	$r1,$r3,12(0xc)
1c000568:	29802076 	st.w	$r22,$r3,8(0x8)
1c00056c:	02804076 	addi.w	$r22,$r3,16(0x10)
1c000570:	1dc80024 	pcaddu12i	$r4,-114687(0xe4001)
1c000574:	029ac084 	addi.w	$r4,$r4,1712(0x6b0)
1c000578:	5402b400 	bl	692(0x2b4) # 1c00082c <printf>
1c00057c:	0015000c 	move	$r12,$r0
1c000580:	00150184 	move	$r4,$r12
1c000584:	28803061 	ld.w	$r1,$r3,12(0xc)
1c000588:	28802076 	ld.w	$r22,$r3,8(0x8)
1c00058c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c000590:	4c000020 	jirl	$r0,$r1,0

1c000594 <read>:
read():
1c000594:	1dc8004c 	pcaddu12i	$r12,-114686(0xe4002)
1c000598:	289ae18c 	ld.w	$r12,$r12,1720(0x6b8)
1c00059c:	0280018c 	addi.w	$r12,$r12,0
1c0005a0:	2880018d 	ld.w	$r13,$r12,0
1c0005a4:	4c0001a0 	jirl	$r0,$r13,0

1c0005a8 <open>:
open():
1c0005a8:	1dc8004c 	pcaddu12i	$r12,-114686(0xe4002)
1c0005ac:	289a918c 	ld.w	$r12,$r12,1700(0x6a4)
1c0005b0:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c0005b4:	2880018d 	ld.w	$r13,$r12,0
1c0005b8:	4c0001a0 	jirl	$r0,$r13,0

1c0005bc <close>:
close():
1c0005bc:	1dc8004c 	pcaddu12i	$r12,-114686(0xe4002)
1c0005c0:	289a418c 	ld.w	$r12,$r12,1680(0x690)
1c0005c4:	0280218c 	addi.w	$r12,$r12,8(0x8)
1c0005c8:	2880018d 	ld.w	$r13,$r12,0
1c0005cc:	4c0001a0 	jirl	$r0,$r13,0

1c0005d0 <mon_printf>:
mon_printf():
1c0005d0:	1dc8004c 	pcaddu12i	$r12,-114686(0xe4002)
1c0005d4:	2899f18c 	ld.w	$r12,$r12,1660(0x67c)
1c0005d8:	0280318c 	addi.w	$r12,$r12,12(0xc)
1c0005dc:	2880018d 	ld.w	$r13,$r12,0
1c0005e0:	4c0001a0 	jirl	$r0,$r13,0

1c0005e4 <outbyte>:
outbyte():
1c0005e4:	02bfa063 	addi.w	$r3,$r3,-24(0xfe8)
1c0005e8:	29805061 	st.w	$r1,$r3,20(0x14)
1c0005ec:	29804076 	st.w	$r22,$r3,16(0x10)
1c0005f0:	00150076 	move	$r22,$r3
1c0005f4:	29000064 	st.b	$r4,$r3,0
1c0005f8:	29000460 	st.b	$r0,$r3,1(0x1)
1c0005fc:	00150064 	move	$r4,$r3
1c000600:	57ffd3ff 	bl	-48(0xfffffd0) # 1c0005d0 <mon_printf>
1c000604:	001502c3 	move	$r3,$r22
1c000608:	28805061 	ld.w	$r1,$r3,20(0x14)
1c00060c:	28804076 	ld.w	$r22,$r3,16(0x10)
1c000610:	02806063 	addi.w	$r3,$r3,24(0x18)
1c000614:	4c000020 	jirl	$r0,$r1,0

1c000618 <gettimeofday>:
gettimeofday():
1c000618:	157f5ff0 	lu12i.w	$r16,-263425(0xbfaff)
1c00061c:	28c0020c 	ld.d	$r12,$r16,0
1c000620:	28c0220d 	ld.d	$r13,$r16,8(0x8)
1c000624:	28c0420e 	ld.d	$r14,$r16,16(0x10)
1c000628:	28c0620f 	ld.d	$r15,$r16,24(0x18)
1c00062c:	58000c80 	beq	$r4,$r0,12(0xc) # 1c000638 <gettimeofday+0x20>
1c000630:	29c0008c 	st.d	$r12,$r4,0
1c000634:	29c0208d 	st.d	$r13,$r4,8(0x8)
1c000638:	58000ca0 	beq	$r5,$r0,12(0xc) # 1c000644 <gettimeofday+0x2c>
1c00063c:	29c000ae 	st.d	$r14,$r5,0
1c000640:	29c000af 	st.d	$r15,$r5,0
1c000644:	02c00404 	addi.d	$r4,$r0,1(0x1)
1c000648:	4c000020 	jirl	$r0,$r1,0

1c00064c <times_val>:
times_val():
1c00064c:	1400024c 	lu12i.w	$r12,18(0x12)
1c000650:	0393e18c 	ori	$r12,$r12,0x4f8
1c000654:	0000600d 	rdtimel.w	$r13,$r0
1c000658:	0000640e 	rdtimeh.w	$r14,$r0
1c00065c:	2980008d 	st.w	$r13,$r4,0
1c000660:	2980108e 	st.w	$r14,$r4,4(0x4)
1c000664:	298000ac 	st.w	$r12,$r5,0
1c000668:	4c000020 	jirl	$r0,$r1,0

1c00066c <sbrk>:
sbrk():
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:62
1c00066c:	1dc80047 	pcaddu12i	$r7,-114686(0xe4002)
1c000670:	289730e7 	ld.w	$r7,$r7,1484(0x5cc)
1c000674:	288000e9 	ld.w	$r9,$r7,0
1c000678:	1dc80048 	pcaddu12i	$r8,-114686(0xe4002)
1c00067c:	28980108 	ld.w	$r8,$r8,1536(0x600)
1c000680:	58005120 	beq	$r9,$r0,80(0x50) # 1c0006d0 <sbrk+0x64>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:65
1c000684:	00150006 	move	$r6,$r0
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:76
1c000688:	68001128 	bltu	$r9,$r8,16(0x10) # 1c000698 <sbrk+0x2c>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:76 (discriminator 1)
1c00068c:	1dc80048 	pcaddu12i	$r8,-114686(0xe4002)
1c000690:	28978108 	ld.w	$r8,$r8,1504(0x5e0)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:76
1c000694:	68003128 	bltu	$r9,$r8,48(0x30) # 1c0006c4 <sbrk+0x58>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:81
1c000698:	680014c4 	bltu	$r6,$r4,20(0x14) # 1c0006ac <sbrk+0x40>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:81 (discriminator 1)
1c00069c:	00101129 	add.w	$r9,$r9,$r4
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:81
1c0006a0:	1dc80048 	pcaddu12i	$r8,-114686(0xe4002)
1c0006a4:	28973108 	ld.w	$r8,$r8,1484(0x5cc)
1c0006a8:	6c001109 	bgeu	$r8,$r9,16(0x10) # 1c0006b8 <sbrk+0x4c>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:82
1c0006ac:	02bffc05 	addi.w	$r5,$r0,-1(0xfff)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:87
1c0006b0:	001500a4 	move	$r4,$r5
1c0006b4:	4c000020 	jirl	$r0,$r1,0
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:84
1c0006b8:	298000e9 	st.w	$r9,$r7,0
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:87
1c0006bc:	001500a4 	move	$r4,$r5
1c0006c0:	4c000020 	jirl	$r0,$r1,0
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:77
1c0006c4:	00112506 	sub.w	$r6,$r8,$r9
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:78
1c0006c8:	00150125 	move	$r5,$r9
1c0006cc:	53ffcfff 	b	-52(0xfffffcc) # 1c000698 <sbrk+0x2c>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:63
1c0006d0:	298000e8 	st.w	$r8,$r7,0
1c0006d4:	00150109 	move	$r9,$r8
1c0006d8:	53ffafff 	b	-84(0xfffffac) # 1c000684 <sbrk+0x18>

1c0006dc <times>:
times():
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:94
1c0006dc:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0006e0:	29806076 	st.w	$r22,$r3,24(0x18)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:97
1c0006e4:	02801065 	addi.w	$r5,$r3,4(0x4)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:94
1c0006e8:	00150096 	move	$r22,$r4
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:97
1c0006ec:	02802064 	addi.w	$r4,$r3,8(0x8)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:94
1c0006f0:	29807061 	st.w	$r1,$r3,28(0x1c)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:95
1c0006f4:	29802060 	st.w	$r0,$r3,8(0x8)
1c0006f8:	29803060 	st.w	$r0,$r3,12(0xc)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:96
1c0006fc:	29801060 	st.w	$r0,$r3,4(0x4)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:97
1c000700:	57ff4fff 	bl	-180(0xfffff4c) # 1c00064c <times_val>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:112
1c000704:	2880106b 	ld.w	$r11,$r3,4(0x4)
1c000708:	0280080f 	addi.w	$r15,$r0,2(0x2)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:99
1c00070c:	00150004 	move	$r4,$r0
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:101
1c000710:	00150009 	move	$r9,$r0
1c000714:	02800808 	addi.w	$r8,$r0,2(0x2)
1c000718:	02800410 	addi.w	$r16,$r0,1(0x1)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:108
1c00071c:	02bffd08 	addi.w	$r8,$r8,-1(0xfff)
1c000720:	00408908 	slli.w	$r8,$r8,0x2
1c000724:	02804067 	addi.w	$r7,$r3,16(0x10)
1c000728:	001020e8 	add.w	$r8,$r7,$r8
1c00072c:	28bfe10d 	ld.w	$r13,$r8,-8(0xff8)
1c000730:	02808005 	addi.w	$r5,$r0,32(0x20)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:103
1c000734:	15000006 	lu12i.w	$r6,-524288(0x80000)
1c000738:	50001c00 	b	28(0x1c) # 1c000754 <times+0x78>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:112
1c00073c:	00151104 	or	$r4,$r8,$r4
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:115
1c000740:	6800092b 	bltu	$r9,$r11,8(0x8) # 1c000748 <times+0x6c>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:116
1c000744:	00112d29 	sub.w	$r9,$r9,$r11
1c000748:	02bffca5 	addi.w	$r5,$r5,-1(0xfff)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:104
1c00074c:	004484c6 	srli.w	$r6,$r6,0x1
1c000750:	58003ca0 	beq	$r5,$r0,60(0x3c) # 1c00078c <times+0xb0>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:108
1c000754:	001499a7 	and	$r7,$r13,$r6
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:107
1c000758:	00408528 	slli.w	$r8,$r9,0x1
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:106
1c00075c:	0015012a 	move	$r10,$r9
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:108
1c000760:	00129c09 	sltu	$r9,$r0,$r7
1c000764:	00152129 	or	$r9,$r9,$r8
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:112
1c000768:	0012ad28 	sltu	$r8,$r9,$r11
1c00076c:	03c00508 	xori	$r8,$r8,0x1
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:111
1c000770:	00408484 	slli.w	$r4,$r4,0x1
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:112
1c000774:	67ffc940 	bge	$r10,$r0,-56(0x3ffc8) # 1c00073c <times+0x60>
1c000778:	02bffca5 	addi.w	$r5,$r5,-1(0xfff)
1c00077c:	03800484 	ori	$r4,$r4,0x1
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:114
1c000780:	00112d29 	sub.w	$r9,$r9,$r11
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:104
1c000784:	004484c6 	srli.w	$r6,$r6,0x1
1c000788:	5fffcca0 	bne	$r5,$r0,-52(0x3ffcc) # 1c000754 <times+0x78>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:101 (discriminator 2)
1c00078c:	02800408 	addi.w	$r8,$r0,1(0x1)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:101
1c000790:	58000df0 	beq	$r15,$r16,12(0xc) # 1c00079c <times+0xc0>
1c000794:	0280040f 	addi.w	$r15,$r0,1(0x1)
1c000798:	53ff87ff 	b	-124(0xfffff84) # 1c00071c <times+0x40>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:120
1c00079c:	298002c4 	st.w	$r4,$r22,0
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:122
1c0007a0:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0007a4:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0007a8:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0007ac:	4c000020 	jirl	$r0,$r1,0

1c0007b0 <print>:
print():
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../print.c:23
1c0007b0:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0007b4:	29802076 	st.w	$r22,$r3,8(0x8)
1c0007b8:	29803061 	st.w	$r1,$r3,12(0xc)
1c0007bc:	00150096 	move	$r22,$r4
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../print.c:24
1c0007c0:	28000084 	ld.b	$r4,$r4,0
1c0007c4:	58001480 	beq	$r4,$r0,20(0x14) # 1c0007d8 <print+0x28>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../print.c:25
1c0007c8:	028006d6 	addi.w	$r22,$r22,1(0x1)
1c0007cc:	57fe1bff 	bl	-488(0xffffe18) # 1c0005e4 <outbyte>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../print.c:24
1c0007d0:	280002c4 	ld.b	$r4,$r22,0
1c0007d4:	5ffff480 	bne	$r4,$r0,-12(0x3fff4) # 1c0007c8 <print+0x18>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../print.c:27
1c0007d8:	28803061 	ld.w	$r1,$r3,12(0xc)
1c0007dc:	28802076 	ld.w	$r22,$r3,8(0x8)
1c0007e0:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0007e4:	4c000020 	jirl	$r0,$r1,0

1c0007e8 <_printf_r>:
_printf_r():
1c0007e8:	02bf0063 	addi.w	$r3,$r3,-64(0xfc0)
1c0007ec:	2980a066 	st.w	$r6,$r3,40(0x28)
1c0007f0:	2980b067 	st.w	$r7,$r3,44(0x2c)
1c0007f4:	2980c068 	st.w	$r8,$r3,48(0x30)
1c0007f8:	2980d069 	st.w	$r9,$r3,52(0x34)
1c0007fc:	2980e06a 	st.w	$r10,$r3,56(0x38)
1c000800:	2980f06b 	st.w	$r11,$r3,60(0x3c)
1c000804:	001500a6 	move	$r6,$r5
1c000808:	28802085 	ld.w	$r5,$r4,8(0x8)
1c00080c:	0280a069 	addi.w	$r9,$r3,40(0x28)
1c000810:	00150127 	move	$r7,$r9
1c000814:	29807061 	st.w	$r1,$r3,28(0x1c)
1c000818:	29803069 	st.w	$r9,$r3,12(0xc)
1c00081c:	54006800 	bl	104(0x68) # 1c000884 <_vfprintf_r>
1c000820:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c000824:	02810063 	addi.w	$r3,$r3,64(0x40)
1c000828:	4c000020 	jirl	$r0,$r1,0

1c00082c <printf>:
printf():
1c00082c:	1dc8004d 	pcaddu12i	$r13,-114686(0xe4002)
1c000830:	289121ad 	ld.w	$r13,$r13,1096(0x448)
1c000834:	288001ad 	ld.w	$r13,$r13,0
1c000838:	02bf0063 	addi.w	$r3,$r3,-64(0xfc0)
1c00083c:	2980a066 	st.w	$r6,$r3,40(0x28)
1c000840:	2980b067 	st.w	$r7,$r3,44(0x2c)
1c000844:	2980c068 	st.w	$r8,$r3,48(0x30)
1c000848:	2980d069 	st.w	$r9,$r3,52(0x34)
1c00084c:	29809065 	st.w	$r5,$r3,36(0x24)
1c000850:	2980e06a 	st.w	$r10,$r3,56(0x38)
1c000854:	2980f06b 	st.w	$r11,$r3,60(0x3c)
1c000858:	288021a5 	ld.w	$r5,$r13,8(0x8)
1c00085c:	02809069 	addi.w	$r9,$r3,36(0x24)
1c000860:	00150086 	move	$r6,$r4
1c000864:	00150127 	move	$r7,$r9
1c000868:	001501a4 	move	$r4,$r13
1c00086c:	29807061 	st.w	$r1,$r3,28(0x1c)
1c000870:	29803069 	st.w	$r9,$r3,12(0xc)
1c000874:	54001000 	bl	16(0x10) # 1c000884 <_vfprintf_r>
1c000878:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00087c:	02810063 	addi.w	$r3,$r3,64(0x40)
1c000880:	4c000020 	jirl	$r0,$r1,0

1c000884 <_vfprintf_r>:
_vfprintf_r():
1c000884:	02bb8063 	addi.w	$r3,$r3,-288(0xee0)
1c000888:	29847061 	st.w	$r1,$r3,284(0x11c)
1c00088c:	29844078 	st.w	$r24,$r3,272(0x110)
1c000890:	2984207a 	st.w	$r26,$r3,264(0x108)
1c000894:	2983d07f 	st.w	$r31,$r3,244(0xf4)
1c000898:	001500b8 	move	$r24,$r5
1c00089c:	001500df 	move	$r31,$r6
1c0008a0:	29803067 	st.w	$r7,$r3,12(0xc)
1c0008a4:	29846076 	st.w	$r22,$r3,280(0x118)
1c0008a8:	29845077 	st.w	$r23,$r3,276(0x114)
1c0008ac:	29843079 	st.w	$r25,$r3,268(0x10c)
1c0008b0:	2984107b 	st.w	$r27,$r3,260(0x104)
1c0008b4:	2984007c 	st.w	$r28,$r3,256(0x100)
1c0008b8:	2983f07d 	st.w	$r29,$r3,252(0xfc)
1c0008bc:	2983e07e 	st.w	$r30,$r3,248(0xf8)
1c0008c0:	0015009a 	move	$r26,$r4
1c0008c4:	5444f800 	bl	17656(0x44f8) # 1c004dbc <_localeconv_r>
1c0008c8:	28800089 	ld.w	$r9,$r4,0
1c0008cc:	00150124 	move	$r4,$r9
1c0008d0:	2980c069 	st.w	$r9,$r3,48(0x30)
1c0008d4:	54645c00 	bl	25692(0x645c) # 1c006d30 <strlen>
1c0008d8:	2980d064 	st.w	$r4,$r3,52(0x34)
1c0008dc:	58000f40 	beq	$r26,$r0,12(0xc) # 1c0008e8 <_vfprintf_r+0x64>
1c0008e0:	2880e349 	ld.w	$r9,$r26,56(0x38)
1c0008e4:	580ab920 	beq	$r9,$r0,2744(0xab8) # 1c00139c <_vfprintf_r+0xb18>
1c0008e8:	28403308 	ld.h	$r8,$r24,12(0xc)
1c0008ec:	14000047 	lu12i.w	$r7,2(0x2)
1c0008f0:	0040c109 	slli.w	$r9,$r8,0x10
1c0008f4:	0044c129 	srli.w	$r9,$r9,0x10
1c0008f8:	00149d26 	and	$r6,$r9,$r7
1c0008fc:	5c0028c0 	bne	$r6,$r0,40(0x28) # 1c000924 <_vfprintf_r+0xa0>
1c000900:	28818306 	ld.w	$r6,$r24,96(0x60)
1c000904:	00151d09 	or	$r9,$r8,$r7
1c000908:	15ffffa8 	lu12i.w	$r8,-3(0xffffd)
1c00090c:	03bffd08 	ori	$r8,$r8,0xfff
1c000910:	0014a0c8 	and	$r8,$r6,$r8
1c000914:	29403309 	st.h	$r9,$r24,12(0xc)
1c000918:	0040c129 	slli.w	$r9,$r9,0x10
1c00091c:	29818308 	st.w	$r8,$r24,96(0x60)
1c000920:	0044c129 	srli.w	$r9,$r9,0x10
1c000924:	03402128 	andi	$r8,$r9,0x8
1c000928:	58011d00 	beq	$r8,$r0,284(0x11c) # 1c000a44 <_vfprintf_r+0x1c0>
1c00092c:	28804308 	ld.w	$r8,$r24,16(0x10)
1c000930:	58011500 	beq	$r8,$r0,276(0x114) # 1c000a44 <_vfprintf_r+0x1c0>
1c000934:	03406929 	andi	$r9,$r9,0x1a
1c000938:	02802808 	addi.w	$r8,$r0,10(0xa)
1c00093c:	58012928 	beq	$r9,$r8,296(0x128) # 1c000a64 <_vfprintf_r+0x1e0>
1c000940:	140000e9 	lu12i.w	$r9,7(0x7)
1c000944:	0282c079 	addi.w	$r25,$r3,176(0xb0)
1c000948:	03a0c129 	ori	$r9,$r9,0x830
1c00094c:	2981f079 	st.w	$r25,$r3,124(0x7c)
1c000950:	29821060 	st.w	$r0,$r3,132(0x84)
1c000954:	29820060 	st.w	$r0,$r3,128(0x80)
1c000958:	29809060 	st.w	$r0,$r3,36(0x24)
1c00095c:	2980a060 	st.w	$r0,$r3,40(0x28)
1c000960:	2980b060 	st.w	$r0,$r3,44(0x2c)
1c000964:	0015032d 	move	$r13,$r25
1c000968:	29804060 	st.w	$r0,$r3,16(0x10)
1c00096c:	2980e060 	st.w	$r0,$r3,56(0x38)
1c000970:	29801060 	st.w	$r0,$r3,4(0x4)
1c000974:	2940f869 	st.h	$r9,$r3,62(0x3e)
1c000978:	280003e9 	ld.b	$r9,$r31,0
1c00097c:	58013520 	beq	$r9,$r0,308(0x134) # 1c000ab0 <_vfprintf_r+0x22c>
1c000980:	02809408 	addi.w	$r8,$r0,37(0x25)
1c000984:	58124d28 	beq	$r9,$r8,4684(0x124c) # 1c001bd0 <_vfprintf_r+0x134c>
1c000988:	001503f6 	move	$r22,$r31
1c00098c:	50000c00 	b	12(0xc) # 1c000998 <_vfprintf_r+0x114>
1c000990:	5800f928 	beq	$r9,$r8,248(0xf8) # 1c000a88 <_vfprintf_r+0x204>
1c000994:	001502f6 	move	$r22,$r23
1c000998:	280006c9 	ld.b	$r9,$r22,1(0x1)
1c00099c:	028006d7 	addi.w	$r23,$r22,1(0x1)
1c0009a0:	5ffff120 	bne	$r9,$r0,-16(0x3fff0) # 1c000990 <_vfprintf_r+0x10c>
1c0009a4:	00117efb 	sub.w	$r27,$r23,$r31
1c0009a8:	58010b60 	beq	$r27,$r0,264(0x108) # 1c000ab0 <_vfprintf_r+0x22c>
1c0009ac:	28821068 	ld.w	$r8,$r3,132(0x84)
1c0009b0:	28820069 	ld.w	$r9,$r3,128(0x80)
1c0009b4:	298001bf 	st.w	$r31,$r13,0
1c0009b8:	00106d08 	add.w	$r8,$r8,$r27
1c0009bc:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0009c0:	29821068 	st.w	$r8,$r3,132(0x84)
1c0009c4:	29820069 	st.w	$r9,$r3,128(0x80)
1c0009c8:	298011bb 	st.w	$r27,$r13,4(0x4)
1c0009cc:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c0009d0:	6000c509 	blt	$r8,$r9,196(0xc4) # 1c000a94 <_vfprintf_r+0x210>
1c0009d4:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c0009d8:	28801068 	ld.w	$r8,$r3,4(0x4)
1c0009dc:	280006c9 	ld.b	$r9,$r22,1(0x1)
1c0009e0:	00106d08 	add.w	$r8,$r8,$r27
1c0009e4:	29801068 	st.w	$r8,$r3,4(0x4)
1c0009e8:	5800c920 	beq	$r9,$r0,200(0xc8) # 1c000ab0 <_vfprintf_r+0x22c>
1c0009ec:	280006f1 	ld.b	$r17,$r23,1(0x1)
1c0009f0:	028006ff 	addi.w	$r31,$r23,1(0x1)
1c0009f4:	29017c60 	st.b	$r0,$r3,95(0x5f)
1c0009f8:	00150005 	move	$r5,$r0
1c0009fc:	00150004 	move	$r4,$r0
1c000a00:	02bffc1e 	addi.w	$r30,$r0,-1(0xfff)
1c000a04:	00150016 	move	$r22,$r0
1c000a08:	00150012 	move	$r18,$r0
1c000a0c:	02816008 	addi.w	$r8,$r0,88(0x58)
1c000a10:	02802406 	addi.w	$r6,$r0,9(0x9)
1c000a14:	0280a80b 	addi.w	$r11,$r0,42(0x2a)
1c000a18:	0281b00a 	addi.w	$r10,$r0,108(0x6c)
1c000a1c:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c000a20:	0015023d 	move	$r29,$r17
1c000a24:	02bf83a9 	addi.w	$r9,$r29,-32(0xfe0)
1c000a28:	68011509 	bltu	$r8,$r9,276(0x114) # 1c000b3c <_vfprintf_r+0x2b8>
1c000a2c:	00408929 	slli.w	$r9,$r9,0x2
1c000a30:	1dc80027 	pcaddu12i	$r7,-114687(0xe4001)
1c000a34:	028910e7 	addi.w	$r7,$r7,580(0x244)
1c000a38:	00101d29 	add.w	$r9,$r9,$r7
1c000a3c:	28800129 	ld.w	$r9,$r9,0
1c000a40:	4c000120 	jirl	$r0,$r9,0
1c000a44:	00150305 	move	$r5,$r24
1c000a48:	00150344 	move	$r4,$r26
1c000a4c:	541db400 	bl	7604(0x1db4) # 1c002800 <__swsetup_r>
1c000a50:	5c1b2c80 	bne	$r4,$r0,6956(0x1b2c) # 1c00257c <_vfprintf_r+0x1cf8>
1c000a54:	2a403309 	ld.hu	$r9,$r24,12(0xc)
1c000a58:	02802808 	addi.w	$r8,$r0,10(0xa)
1c000a5c:	03406929 	andi	$r9,$r9,0x1a
1c000a60:	5ffee128 	bne	$r9,$r8,-288(0x3fee0) # 1c000940 <_vfprintf_r+0xbc>
1c000a64:	28403b09 	ld.h	$r9,$r24,14(0xe)
1c000a68:	63fed920 	blt	$r9,$r0,-296(0x3fed8) # 1c000940 <_vfprintf_r+0xbc>
1c000a6c:	28803067 	ld.w	$r7,$r3,12(0xc)
1c000a70:	001503e6 	move	$r6,$r31
1c000a74:	00150305 	move	$r5,$r24
1c000a78:	00150344 	move	$r4,$r26
1c000a7c:	541cc000 	bl	7360(0x1cc0) # 1c00273c <__sbprintf>
1c000a80:	29801064 	st.w	$r4,$r3,4(0x4)
1c000a84:	50005000 	b	80(0x50) # 1c000ad4 <_vfprintf_r+0x250>
1c000a88:	00117efb 	sub.w	$r27,$r23,$r31
1c000a8c:	5bff6360 	beq	$r27,$r0,-160(0x3ff60) # 1c0009ec <_vfprintf_r+0x168>
1c000a90:	53ff1fff 	b	-228(0xfffff1c) # 1c0009ac <_vfprintf_r+0x128>
1c000a94:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c000a98:	00150305 	move	$r5,$r24
1c000a9c:	00150344 	move	$r4,$r26
1c000aa0:	54644400 	bl	25668(0x6444) # 1c006ee4 <__sprint_r>
1c000aa4:	5c002480 	bne	$r4,$r0,36(0x24) # 1c000ac8 <_vfprintf_r+0x244>
1c000aa8:	0015032d 	move	$r13,$r25
1c000aac:	53ff2fff 	b	-212(0xfffff2c) # 1c0009d8 <_vfprintf_r+0x154>
1c000ab0:	28821069 	ld.w	$r9,$r3,132(0x84)
1c000ab4:	58001520 	beq	$r9,$r0,20(0x14) # 1c000ac8 <_vfprintf_r+0x244>
1c000ab8:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c000abc:	00150305 	move	$r5,$r24
1c000ac0:	00150344 	move	$r4,$r26
1c000ac4:	54642000 	bl	25632(0x6420) # 1c006ee4 <__sprint_r>
1c000ac8:	2a403309 	ld.hu	$r9,$r24,12(0xc)
1c000acc:	03410129 	andi	$r9,$r9,0x40
1c000ad0:	5c1aad20 	bne	$r9,$r0,6828(0x1aac) # 1c00257c <_vfprintf_r+0x1cf8>
1c000ad4:	28847061 	ld.w	$r1,$r3,284(0x11c)
1c000ad8:	28846076 	ld.w	$r22,$r3,280(0x118)
1c000adc:	28801064 	ld.w	$r4,$r3,4(0x4)
1c000ae0:	28845077 	ld.w	$r23,$r3,276(0x114)
1c000ae4:	28844078 	ld.w	$r24,$r3,272(0x110)
1c000ae8:	28843079 	ld.w	$r25,$r3,268(0x10c)
1c000aec:	2884207a 	ld.w	$r26,$r3,264(0x108)
1c000af0:	2884107b 	ld.w	$r27,$r3,260(0x104)
1c000af4:	2884007c 	ld.w	$r28,$r3,256(0x100)
1c000af8:	2883f07d 	ld.w	$r29,$r3,252(0xfc)
1c000afc:	2883e07e 	ld.w	$r30,$r3,248(0xf8)
1c000b00:	2883d07f 	ld.w	$r31,$r3,244(0xf4)
1c000b04:	02848063 	addi.w	$r3,$r3,288(0x120)
1c000b08:	4c000020 	jirl	$r0,$r1,0
1c000b0c:	00150016 	move	$r22,$r0
1c000b10:	02bf43b3 	addi.w	$r19,$r29,-48(0xfd0)
1c000b14:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c000b18:	00408ac9 	slli.w	$r9,$r22,0x2
1c000b1c:	283ffffd 	ld.b	$r29,$r31,-1(0xfff)
1c000b20:	00105936 	add.w	$r22,$r9,$r22
1c000b24:	004086d6 	slli.w	$r22,$r22,0x1
1c000b28:	00105a76 	add.w	$r22,$r19,$r22
1c000b2c:	02bf43b3 	addi.w	$r19,$r29,-48(0xfd0)
1c000b30:	6fffe4d3 	bgeu	$r6,$r19,-28(0x3ffe4) # 1c000b14 <_vfprintf_r+0x290>
1c000b34:	02bf83a9 	addi.w	$r9,$r29,-32(0xfe0)
1c000b38:	6ffef509 	bgeu	$r8,$r9,-268(0x3fef4) # 1c000a2c <_vfprintf_r+0x1a8>
1c000b3c:	5c1780a0 	bne	$r5,$r0,6016(0x1780) # 1c0022bc <_vfprintf_r+0x1a38>
1c000b40:	5bff73a0 	beq	$r29,$r0,-144(0x3ff70) # 1c000ab0 <_vfprintf_r+0x22c>
1c000b44:	2902207d 	st.b	$r29,$r3,136(0x88)
1c000b48:	29017c60 	st.b	$r0,$r3,95(0x5f)
1c000b4c:	0280041b 	addi.w	$r27,$r0,1(0x1)
1c000b50:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c000b54:	02822077 	addi.w	$r23,$r3,136(0x88)
1c000b58:	50027000 	b	624(0x270) # 1c000dc8 <_vfprintf_r+0x544>
1c000b5c:	03820252 	ori	$r18,$r18,0x80
1c000b60:	280003f1 	ld.b	$r17,$r31,0
1c000b64:	53febbff 	b	-328(0xffffeb8) # 1c000a1c <_vfprintf_r+0x198>
1c000b68:	280003fd 	ld.b	$r29,$r31,0
1c000b6c:	028007e9 	addi.w	$r9,$r31,1(0x1)
1c000b70:	581b67ab 	beq	$r29,$r11,7012(0x1b64) # 1c0026d4 <_vfprintf_r+0x1e50>
1c000b74:	02bf43b3 	addi.w	$r19,$r29,-48(0xfd0)
1c000b78:	0015013f 	move	$r31,$r9
1c000b7c:	0015001e 	move	$r30,$r0
1c000b80:	6bfea4d3 	bltu	$r6,$r19,-348(0x3fea4) # 1c000a24 <_vfprintf_r+0x1a0>
1c000b84:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c000b88:	00408bc7 	slli.w	$r7,$r30,0x2
1c000b8c:	283ffffd 	ld.b	$r29,$r31,-1(0xfff)
1c000b90:	001078e7 	add.w	$r7,$r7,$r30
1c000b94:	004084e7 	slli.w	$r7,$r7,0x1
1c000b98:	00104cfe 	add.w	$r30,$r7,$r19
1c000b9c:	02bf43b3 	addi.w	$r19,$r29,-48(0xfd0)
1c000ba0:	6fffe4d3 	bgeu	$r6,$r19,-28(0x3ffe4) # 1c000b84 <_vfprintf_r+0x300>
1c000ba4:	53fe83ff 	b	-384(0xffffe80) # 1c000a24 <_vfprintf_r+0x1a0>
1c000ba8:	280003f1 	ld.b	$r17,$r31,0
1c000bac:	03801252 	ori	$r18,$r18,0x4
1c000bb0:	53fe6fff 	b	-404(0xffffe6c) # 1c000a1c <_vfprintf_r+0x198>
1c000bb4:	280003f1 	ld.b	$r17,$r31,0
1c000bb8:	02800405 	addi.w	$r5,$r0,1(0x1)
1c000bbc:	0280ac04 	addi.w	$r4,$r0,43(0x2b)
1c000bc0:	53fe5fff 	b	-420(0xffffe5c) # 1c000a1c <_vfprintf_r+0x198>
1c000bc4:	28803069 	ld.w	$r9,$r3,12(0xc)
1c000bc8:	280003f1 	ld.b	$r17,$r31,0
1c000bcc:	28800136 	ld.w	$r22,$r9,0
1c000bd0:	02801129 	addi.w	$r9,$r9,4(0x4)
1c000bd4:	29803069 	st.w	$r9,$r3,12(0xc)
1c000bd8:	67fe46c0 	bge	$r22,$r0,-444(0x3fe44) # 1c000a1c <_vfprintf_r+0x198>
1c000bdc:	00115816 	sub.w	$r22,$r0,$r22
1c000be0:	03801252 	ori	$r18,$r18,0x4
1c000be4:	53fe3bff 	b	-456(0xffffe38) # 1c000a1c <_vfprintf_r+0x198>
1c000be8:	03800652 	ori	$r18,$r18,0x1
1c000bec:	280003f1 	ld.b	$r17,$r31,0
1c000bf0:	53fe2fff 	b	-468(0xffffe2c) # 1c000a1c <_vfprintf_r+0x198>
1c000bf4:	280003f1 	ld.b	$r17,$r31,0
1c000bf8:	5ffe2480 	bne	$r4,$r0,-476(0x3fe24) # 1c000a1c <_vfprintf_r+0x198>
1c000bfc:	02800405 	addi.w	$r5,$r0,1(0x1)
1c000c00:	02808004 	addi.w	$r4,$r0,32(0x20)
1c000c04:	53fe1bff 	b	-488(0xffffe18) # 1c000a1c <_vfprintf_r+0x198>
1c000c08:	5c191ca0 	bne	$r5,$r0,6428(0x191c) # 1c002524 <_vfprintf_r+0x1ca0>
1c000c0c:	1dc80029 	pcaddu12i	$r9,-114687(0xe4001)
1c000c10:	02812129 	addi.w	$r9,$r9,72(0x48)
1c000c14:	29804069 	st.w	$r9,$r3,16(0x10)
1c000c18:	03408249 	andi	$r9,$r18,0x20
1c000c1c:	58072120 	beq	$r9,$r0,1824(0x720) # 1c00133c <_vfprintf_r+0xab8>
1c000c20:	28803069 	ld.w	$r9,$r3,12(0xc)
1c000c24:	02bfe008 	addi.w	$r8,$r0,-8(0xff8)
1c000c28:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c000c2c:	0014a129 	and	$r9,$r9,$r8
1c000c30:	2880013b 	ld.w	$r27,$r9,0
1c000c34:	2880113c 	ld.w	$r28,$r9,4(0x4)
1c000c38:	02802128 	addi.w	$r8,$r9,8(0x8)
1c000c3c:	29803068 	st.w	$r8,$r3,12(0xc)
1c000c40:	03400648 	andi	$r8,$r18,0x1
1c000c44:	02800809 	addi.w	$r9,$r0,2(0x2)
1c000c48:	5804d500 	beq	$r8,$r0,1236(0x4d4) # 1c00111c <_vfprintf_r+0x898>
1c000c4c:	00157368 	or	$r8,$r27,$r28
1c000c50:	5804cd00 	beq	$r8,$r0,1228(0x4cc) # 1c00111c <_vfprintf_r+0x898>
1c000c54:	0280c008 	addi.w	$r8,$r0,48(0x30)
1c000c58:	29018068 	st.b	$r8,$r3,96(0x60)
1c000c5c:	2901847d 	st.b	$r29,$r3,97(0x61)
1c000c60:	03800a52 	ori	$r18,$r18,0x2
1c000c64:	5004b800 	b	1208(0x4b8) # 1c00111c <_vfprintf_r+0x898>
1c000c68:	5c18b4a0 	bne	$r5,$r0,6324(0x18b4) # 1c00251c <_vfprintf_r+0x1c98>
1c000c6c:	03408249 	andi	$r9,$r18,0x20
1c000c70:	5c073920 	bne	$r9,$r0,1848(0x738) # 1c0013a8 <_vfprintf_r+0xb24>
1c000c74:	28803069 	ld.w	$r9,$r3,12(0xc)
1c000c78:	03404248 	andi	$r8,$r18,0x10
1c000c7c:	2880013b 	ld.w	$r27,$r9,0
1c000c80:	02801129 	addi.w	$r9,$r9,4(0x4)
1c000c84:	5c070100 	bne	$r8,$r0,1792(0x700) # 1c001384 <_vfprintf_r+0xb00>
1c000c88:	03410248 	andi	$r8,$r18,0x40
1c000c8c:	5813dd00 	beq	$r8,$r0,5084(0x13dc) # 1c002068 <_vfprintf_r+0x17e4>
1c000c90:	0040c37b 	slli.w	$r27,$r27,0x10
1c000c94:	29803069 	st.w	$r9,$r3,12(0xc)
1c000c98:	0044c37b 	srli.w	$r27,$r27,0x10
1c000c9c:	0015001c 	move	$r28,$r0
1c000ca0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c000ca4:	50047800 	b	1144(0x478) # 1c00111c <_vfprintf_r+0x898>
1c000ca8:	28803069 	ld.w	$r9,$r3,12(0xc)
1c000cac:	29017c60 	st.b	$r0,$r3,95(0x5f)
1c000cb0:	28800137 	ld.w	$r23,$r9,0
1c000cb4:	02801127 	addi.w	$r7,$r9,4(0x4)
1c000cb8:	58101ee0 	beq	$r23,$r0,4124(0x101c) # 1c001cd4 <_vfprintf_r+0x1450>
1c000cbc:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c000cc0:	29803067 	st.w	$r7,$r3,12(0xc)
1c000cc4:	2980206d 	st.w	$r13,$r3,8(0x8)
1c000cc8:	29800072 	st.w	$r18,$r3,0
1c000ccc:	58132bc9 	beq	$r30,$r9,4904(0x1328) # 1c001ff4 <_vfprintf_r+0x1770>
1c000cd0:	001503c6 	move	$r6,$r30
1c000cd4:	00150005 	move	$r5,$r0
1c000cd8:	001502e4 	move	$r4,$r23
1c000cdc:	544a8000 	bl	19072(0x4a80) # 1c00575c <memchr>
1c000ce0:	28800072 	ld.w	$r18,$r3,0
1c000ce4:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c000ce8:	28803067 	ld.w	$r7,$r3,12(0xc)
1c000cec:	5817f480 	beq	$r4,$r0,6132(0x17f4) # 1c0024e0 <_vfprintf_r+0x1c5c>
1c000cf0:	00115c9c 	sub.w	$r28,$r4,$r23
1c000cf4:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c000cf8:	0014739b 	nor	$r27,$r28,$r28
1c000cfc:	0048ff7b 	srai.w	$r27,$r27,0x1f
1c000d00:	29803067 	st.w	$r7,$r3,12(0xc)
1c000d04:	29800072 	st.w	$r18,$r3,0
1c000d08:	29808060 	st.w	$r0,$r3,32(0x20)
1c000d0c:	0014ef9b 	and	$r27,$r28,$r27
1c000d10:	0015001e 	move	$r30,$r0
1c000d14:	5800c100 	beq	$r8,$r0,192(0xc0) # 1c000dd4 <_vfprintf_r+0x550>
1c000d18:	0280077b 	addi.w	$r27,$r27,1(0x1)
1c000d1c:	5000b800 	b	184(0xb8) # 1c000dd4 <_vfprintf_r+0x550>
1c000d20:	5c181ca0 	bne	$r5,$r0,6172(0x181c) # 1c00253c <_vfprintf_r+0x1cb8>
1c000d24:	03408249 	andi	$r9,$r18,0x20
1c000d28:	5c06a920 	bne	$r9,$r0,1704(0x6a8) # 1c0013d0 <_vfprintf_r+0xb4c>
1c000d2c:	28803069 	ld.w	$r9,$r3,12(0xc)
1c000d30:	03404248 	andi	$r8,$r18,0x10
1c000d34:	02801129 	addi.w	$r9,$r9,4(0x4)
1c000d38:	5c054100 	bne	$r8,$r0,1344(0x540) # 1c001278 <_vfprintf_r+0x9f4>
1c000d3c:	03410248 	andi	$r8,$r18,0x40
1c000d40:	58053900 	beq	$r8,$r0,1336(0x538) # 1c001278 <_vfprintf_r+0x9f4>
1c000d44:	28803068 	ld.w	$r8,$r3,12(0xc)
1c000d48:	29803069 	st.w	$r9,$r3,12(0xc)
1c000d4c:	2840011b 	ld.h	$r27,$r8,0
1c000d50:	0048ff7c 	srai.w	$r28,$r27,0x1f
1c000d54:	00150388 	move	$r8,$r28
1c000d58:	60053900 	blt	$r8,$r0,1336(0x538) # 1c001290 <_vfprintf_r+0xa0c>
1c000d5c:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c000d60:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c000d64:	5806bfc9 	beq	$r30,$r9,1724(0x6bc) # 1c001420 <_vfprintf_r+0xb9c>
1c000d68:	02bdfc07 	addi.w	$r7,$r0,-129(0xf7f)
1c000d6c:	00157369 	or	$r9,$r27,$r28
1c000d70:	00149e52 	and	$r18,$r18,$r7
1c000d74:	5c06ad20 	bne	$r9,$r0,1708(0x6ac) # 1c001420 <_vfprintf_r+0xb9c>
1c000d78:	5c06b7c0 	bne	$r30,$r0,1716(0x6b4) # 1c00142c <_vfprintf_r+0xba8>
1c000d7c:	29800072 	st.w	$r18,$r3,0
1c000d80:	0015001e 	move	$r30,$r0
1c000d84:	0015001c 	move	$r28,$r0
1c000d88:	00150337 	move	$r23,$r25
1c000d8c:	001503db 	move	$r27,$r30
1c000d90:	64000bdc 	bge	$r30,$r28,8(0x8) # 1c000d98 <_vfprintf_r+0x514>
1c000d94:	0015039b 	move	$r27,$r28
1c000d98:	29808060 	st.w	$r0,$r3,32(0x20)
1c000d9c:	5fff7d00 	bne	$r8,$r0,-132(0x3ff7c) # 1c000d18 <_vfprintf_r+0x494>
1c000da0:	50003400 	b	52(0x34) # 1c000dd4 <_vfprintf_r+0x550>
1c000da4:	28803068 	ld.w	$r8,$r3,12(0xc)
1c000da8:	29017c60 	st.b	$r0,$r3,95(0x5f)
1c000dac:	0280041b 	addi.w	$r27,$r0,1(0x1)
1c000db0:	28800109 	ld.w	$r9,$r8,0
1c000db4:	02801108 	addi.w	$r8,$r8,4(0x4)
1c000db8:	29803068 	st.w	$r8,$r3,12(0xc)
1c000dbc:	29022069 	st.b	$r9,$r3,136(0x88)
1c000dc0:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c000dc4:	02822077 	addi.w	$r23,$r3,136(0x88)
1c000dc8:	29800072 	st.w	$r18,$r3,0
1c000dcc:	0015001e 	move	$r30,$r0
1c000dd0:	29808060 	st.w	$r0,$r3,32(0x20)
1c000dd4:	28800069 	ld.w	$r9,$r3,0
1c000dd8:	03400934 	andi	$r20,$r9,0x2
1c000ddc:	58000a80 	beq	$r20,$r0,8(0x8) # 1c000de4 <_vfprintf_r+0x560>
1c000de0:	02800b7b 	addi.w	$r27,$r27,2(0x2)
1c000de4:	28800069 	ld.w	$r9,$r3,0
1c000de8:	03421133 	andi	$r19,$r9,0x84
1c000dec:	28821069 	ld.w	$r9,$r3,132(0x84)
1c000df0:	5c000e60 	bne	$r19,$r0,12(0xc) # 1c000dfc <_vfprintf_r+0x578>
1c000df4:	00116ec7 	sub.w	$r7,$r22,$r27
1c000df8:	600a7407 	blt	$r0,$r7,2676(0xa74) # 1c00186c <_vfprintf_r+0xfe8>
1c000dfc:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c000e00:	58003500 	beq	$r8,$r0,52(0x34) # 1c000e34 <_vfprintf_r+0x5b0>
1c000e04:	28820068 	ld.w	$r8,$r3,128(0x80)
1c000e08:	02817c67 	addi.w	$r7,$r3,95(0x5f)
1c000e0c:	02800529 	addi.w	$r9,$r9,1(0x1)
1c000e10:	02800508 	addi.w	$r8,$r8,1(0x1)
1c000e14:	298001a7 	st.w	$r7,$r13,0
1c000e18:	02800407 	addi.w	$r7,$r0,1(0x1)
1c000e1c:	298011a7 	st.w	$r7,$r13,4(0x4)
1c000e20:	29821069 	st.w	$r9,$r3,132(0x84)
1c000e24:	29820068 	st.w	$r8,$r3,128(0x80)
1c000e28:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c000e2c:	600b00e8 	blt	$r7,$r8,2816(0xb00) # 1c00192c <_vfprintf_r+0x10a8>
1c000e30:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c000e34:	58003680 	beq	$r20,$r0,52(0x34) # 1c000e68 <_vfprintf_r+0x5e4>
1c000e38:	28820068 	ld.w	$r8,$r3,128(0x80)
1c000e3c:	02818067 	addi.w	$r7,$r3,96(0x60)
1c000e40:	02800929 	addi.w	$r9,$r9,2(0x2)
1c000e44:	02800508 	addi.w	$r8,$r8,1(0x1)
1c000e48:	298001a7 	st.w	$r7,$r13,0
1c000e4c:	02800807 	addi.w	$r7,$r0,2(0x2)
1c000e50:	298011a7 	st.w	$r7,$r13,4(0x4)
1c000e54:	29821069 	st.w	$r9,$r3,132(0x84)
1c000e58:	29820068 	st.w	$r8,$r3,128(0x80)
1c000e5c:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c000e60:	600afce8 	blt	$r7,$r8,2812(0xafc) # 1c00195c <_vfprintf_r+0x10d8>
1c000e64:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c000e68:	02820008 	addi.w	$r8,$r0,128(0x80)
1c000e6c:	58076e68 	beq	$r19,$r8,1900(0x76c) # 1c0015d8 <_vfprintf_r+0xd54>
1c000e70:	001173de 	sub.w	$r30,$r30,$r28
1c000e74:	6008201e 	blt	$r0,$r30,2080(0x820) # 1c001694 <_vfprintf_r+0xe10>
1c000e78:	28800068 	ld.w	$r8,$r3,0
1c000e7c:	03440108 	andi	$r8,$r8,0x100
1c000e80:	5c061900 	bne	$r8,$r0,1560(0x618) # 1c001498 <_vfprintf_r+0xc14>
1c000e84:	28820068 	ld.w	$r8,$r3,128(0x80)
1c000e88:	00107129 	add.w	$r9,$r9,$r28
1c000e8c:	298001b7 	st.w	$r23,$r13,0
1c000e90:	02800508 	addi.w	$r8,$r8,1(0x1)
1c000e94:	298011bc 	st.w	$r28,$r13,4(0x4)
1c000e98:	29821069 	st.w	$r9,$r3,132(0x84)
1c000e9c:	29820068 	st.w	$r8,$r3,128(0x80)
1c000ea0:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c000ea4:	6000cce8 	blt	$r7,$r8,204(0xcc) # 1c000f70 <_vfprintf_r+0x6ec>
1c000ea8:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c000eac:	28800068 	ld.w	$r8,$r3,0
1c000eb0:	03401117 	andi	$r23,$r8,0x4
1c000eb4:	58000ee0 	beq	$r23,$r0,12(0xc) # 1c000ec0 <_vfprintf_r+0x63c>
1c000eb8:	00116ed7 	sub.w	$r23,$r22,$r27
1c000ebc:	6000d417 	blt	$r0,$r23,212(0xd4) # 1c000f90 <_vfprintf_r+0x70c>
1c000ec0:	64000adb 	bge	$r22,$r27,8(0x8) # 1c000ec8 <_vfprintf_r+0x644>
1c000ec4:	00150376 	move	$r22,$r27
1c000ec8:	28801068 	ld.w	$r8,$r3,4(0x4)
1c000ecc:	00105908 	add.w	$r8,$r8,$r22
1c000ed0:	29801068 	st.w	$r8,$r3,4(0x4)
1c000ed4:	5c086920 	bne	$r9,$r0,2152(0x868) # 1c00173c <_vfprintf_r+0xeb8>
1c000ed8:	29820060 	st.w	$r0,$r3,128(0x80)
1c000edc:	0015032d 	move	$r13,$r25
1c000ee0:	53fa9bff 	b	-1384(0xffffa98) # 1c000978 <_vfprintf_r+0xf4>
1c000ee4:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c000ee8:	00150305 	move	$r5,$r24
1c000eec:	00150344 	move	$r4,$r26
1c000ef0:	545ff400 	bl	24564(0x5ff4) # 1c006ee4 <__sprint_r>
1c000ef4:	5ffbd480 	bne	$r4,$r0,-1068(0x3fbd4) # 1c000ac8 <_vfprintf_r+0x244>
1c000ef8:	28819067 	ld.w	$r7,$r3,100(0x64)
1c000efc:	28821069 	ld.w	$r9,$r3,132(0x84)
1c000f00:	0015032d 	move	$r13,$r25
1c000f04:	5c1048e0 	bne	$r7,$r0,4168(0x1048) # 1c001f4c <_vfprintf_r+0x16c8>
1c000f08:	28800068 	ld.w	$r8,$r3,0
1c000f0c:	28809067 	ld.w	$r7,$r3,36(0x24)
1c000f10:	03400508 	andi	$r8,$r8,0x1
1c000f14:	00151d08 	or	$r8,$r8,$r7
1c000f18:	5bff9500 	beq	$r8,$r0,-108(0x3ff94) # 1c000eac <_vfprintf_r+0x628>
1c000f1c:	2880c068 	ld.w	$r8,$r3,48(0x30)
1c000f20:	2880d067 	ld.w	$r7,$r3,52(0x34)
1c000f24:	298001a8 	st.w	$r8,$r13,0
1c000f28:	28820068 	ld.w	$r8,$r3,128(0x80)
1c000f2c:	001024e9 	add.w	$r9,$r7,$r9
1c000f30:	298011a7 	st.w	$r7,$r13,4(0x4)
1c000f34:	02800508 	addi.w	$r8,$r8,1(0x1)
1c000f38:	29821069 	st.w	$r9,$r3,132(0x84)
1c000f3c:	29820068 	st.w	$r8,$r3,128(0x80)
1c000f40:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c000f44:	601388e8 	blt	$r7,$r8,5000(0x1388) # 1c0022cc <_vfprintf_r+0x1a48>
1c000f48:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c000f4c:	28809067 	ld.w	$r7,$r3,36(0x24)
1c000f50:	02800508 	addi.w	$r8,$r8,1(0x1)
1c000f54:	001024e9 	add.w	$r9,$r7,$r9
1c000f58:	298001b7 	st.w	$r23,$r13,0
1c000f5c:	298011a7 	st.w	$r7,$r13,4(0x4)
1c000f60:	29821069 	st.w	$r9,$r3,132(0x84)
1c000f64:	29820068 	st.w	$r8,$r3,128(0x80)
1c000f68:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c000f6c:	67ff3ce8 	bge	$r7,$r8,-196(0x3ff3c) # 1c000ea8 <_vfprintf_r+0x624>
1c000f70:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c000f74:	00150305 	move	$r5,$r24
1c000f78:	00150344 	move	$r4,$r26
1c000f7c:	545f6800 	bl	24424(0x5f68) # 1c006ee4 <__sprint_r>
1c000f80:	5ffb4880 	bne	$r4,$r0,-1208(0x3fb48) # 1c000ac8 <_vfprintf_r+0x244>
1c000f84:	28821069 	ld.w	$r9,$r3,132(0x84)
1c000f88:	0015032d 	move	$r13,$r25
1c000f8c:	53ff23ff 	b	-224(0xfffff20) # 1c000eac <_vfprintf_r+0x628>
1c000f90:	02804007 	addi.w	$r7,$r0,16(0x10)
1c000f94:	28820068 	ld.w	$r8,$r3,128(0x80)
1c000f98:	1dc80032 	pcaddu12i	$r18,-114687(0xe4001)
1c000f9c:	02b94252 	addi.w	$r18,$r18,-432(0xe50)
1c000fa0:	0280401c 	addi.w	$r28,$r0,16(0x10)
1c000fa4:	02801c1d 	addi.w	$r29,$r0,7(0x7)
1c000fa8:	600014f7 	blt	$r7,$r23,20(0x14) # 1c000fbc <_vfprintf_r+0x738>
1c000fac:	50005c00 	b	92(0x5c) # 1c001008 <_vfprintf_r+0x784>
1c000fb0:	02bfc2f7 	addi.w	$r23,$r23,-16(0xff0)
1c000fb4:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c000fb8:	64005397 	bge	$r28,$r23,80(0x50) # 1c001008 <_vfprintf_r+0x784>
1c000fbc:	02804129 	addi.w	$r9,$r9,16(0x10)
1c000fc0:	02800508 	addi.w	$r8,$r8,1(0x1)
1c000fc4:	298001b2 	st.w	$r18,$r13,0
1c000fc8:	298011bc 	st.w	$r28,$r13,4(0x4)
1c000fcc:	29821069 	st.w	$r9,$r3,132(0x84)
1c000fd0:	29820068 	st.w	$r8,$r3,128(0x80)
1c000fd4:	67ffdfa8 	bge	$r29,$r8,-36(0x3ffdc) # 1c000fb0 <_vfprintf_r+0x72c>
1c000fd8:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c000fdc:	00150305 	move	$r5,$r24
1c000fe0:	00150344 	move	$r4,$r26
1c000fe4:	29800072 	st.w	$r18,$r3,0
1c000fe8:	545efc00 	bl	24316(0x5efc) # 1c006ee4 <__sprint_r>
1c000fec:	5ffadc80 	bne	$r4,$r0,-1316(0x3fadc) # 1c000ac8 <_vfprintf_r+0x244>
1c000ff0:	02bfc2f7 	addi.w	$r23,$r23,-16(0xff0)
1c000ff4:	28821069 	ld.w	$r9,$r3,132(0x84)
1c000ff8:	28820068 	ld.w	$r8,$r3,128(0x80)
1c000ffc:	0015032d 	move	$r13,$r25
1c001000:	28800072 	ld.w	$r18,$r3,0
1c001004:	63ffbb97 	blt	$r28,$r23,-72(0x3ffb8) # 1c000fbc <_vfprintf_r+0x738>
1c001008:	00105d29 	add.w	$r9,$r9,$r23
1c00100c:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001010:	298001b2 	st.w	$r18,$r13,0
1c001014:	298011b7 	st.w	$r23,$r13,4(0x4)
1c001018:	29821069 	st.w	$r9,$r3,132(0x84)
1c00101c:	29820068 	st.w	$r8,$r3,128(0x80)
1c001020:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001024:	67fe9ce8 	bge	$r7,$r8,-356(0x3fe9c) # 1c000ec0 <_vfprintf_r+0x63c>
1c001028:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c00102c:	00150305 	move	$r5,$r24
1c001030:	00150344 	move	$r4,$r26
1c001034:	545eb000 	bl	24240(0x5eb0) # 1c006ee4 <__sprint_r>
1c001038:	5ffa9080 	bne	$r4,$r0,-1392(0x3fa90) # 1c000ac8 <_vfprintf_r+0x244>
1c00103c:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001040:	53fe83ff 	b	-384(0xffffe80) # 1c000ec0 <_vfprintf_r+0x63c>
1c001044:	5c14e8a0 	bne	$r5,$r0,5352(0x14e8) # 1c00252c <_vfprintf_r+0x1ca8>
1c001048:	03408249 	andi	$r9,$r18,0x20
1c00104c:	5c03ad20 	bne	$r9,$r0,940(0x3ac) # 1c0013f8 <_vfprintf_r+0xb74>
1c001050:	28803069 	ld.w	$r9,$r3,12(0xc)
1c001054:	03404248 	andi	$r8,$r18,0x10
1c001058:	2880013b 	ld.w	$r27,$r9,0
1c00105c:	02801129 	addi.w	$r9,$r9,4(0x4)
1c001060:	5c011d00 	bne	$r8,$r0,284(0x11c) # 1c00117c <_vfprintf_r+0x8f8>
1c001064:	03410248 	andi	$r8,$r18,0x40
1c001068:	580ff100 	beq	$r8,$r0,4080(0xff0) # 1c002058 <_vfprintf_r+0x17d4>
1c00106c:	0040c37b 	slli.w	$r27,$r27,0x10
1c001070:	29803069 	st.w	$r9,$r3,12(0xc)
1c001074:	0044c37b 	srli.w	$r27,$r27,0x10
1c001078:	0015001c 	move	$r28,$r0
1c00107c:	00150009 	move	$r9,$r0
1c001080:	50009c00 	b	156(0x9c) # 1c00111c <_vfprintf_r+0x898>
1c001084:	5c14b0a0 	bne	$r5,$r0,5296(0x14b0) # 1c002534 <_vfprintf_r+0x1cb0>
1c001088:	28803067 	ld.w	$r7,$r3,12(0xc)
1c00108c:	03408249 	andi	$r9,$r18,0x20
1c001090:	028010e8 	addi.w	$r8,$r7,4(0x4)
1c001094:	5c0b9920 	bne	$r9,$r0,2968(0xb98) # 1c001c2c <_vfprintf_r+0x13a8>
1c001098:	03404249 	andi	$r9,$r18,0x10
1c00109c:	5c0ccd20 	bne	$r9,$r0,3276(0xccc) # 1c001d68 <_vfprintf_r+0x14e4>
1c0010a0:	03410252 	andi	$r18,$r18,0x40
1c0010a4:	580cc640 	beq	$r18,$r0,3268(0xcc4) # 1c001d68 <_vfprintf_r+0x14e4>
1c0010a8:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0010ac:	29803068 	st.w	$r8,$r3,12(0xc)
1c0010b0:	28801068 	ld.w	$r8,$r3,4(0x4)
1c0010b4:	28800129 	ld.w	$r9,$r9,0
1c0010b8:	29400128 	st.h	$r8,$r9,0
1c0010bc:	53f8bfff 	b	-1860(0xffff8bc) # 1c000978 <_vfprintf_r+0xf4>
1c0010c0:	280003f1 	ld.b	$r17,$r31,0
1c0010c4:	580be22a 	beq	$r17,$r10,3040(0xbe0) # 1c001ca4 <_vfprintf_r+0x1420>
1c0010c8:	03804252 	ori	$r18,$r18,0x10
1c0010cc:	53f953ff 	b	-1712(0xffff950) # 1c000a1c <_vfprintf_r+0x198>
1c0010d0:	03810252 	ori	$r18,$r18,0x40
1c0010d4:	280003f1 	ld.b	$r17,$r31,0
1c0010d8:	53f947ff 	b	-1724(0xffff944) # 1c000a1c <_vfprintf_r+0x198>
1c0010dc:	03808252 	ori	$r18,$r18,0x20
1c0010e0:	280003f1 	ld.b	$r17,$r31,0
1c0010e4:	53f93bff 	b	-1736(0xffff938) # 1c000a1c <_vfprintf_r+0x198>
1c0010e8:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0010ec:	2a40f868 	ld.hu	$r8,$r3,62(0x3e)
1c0010f0:	0015001c 	move	$r28,$r0
1c0010f4:	2880013b 	ld.w	$r27,$r9,0
1c0010f8:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0010fc:	29803069 	st.w	$r9,$r3,12(0xc)
1c001100:	1dc80029 	pcaddu12i	$r9,-114687(0xe4001)
1c001104:	02ad5129 	addi.w	$r9,$r9,-1196(0xb54)
1c001108:	29804069 	st.w	$r9,$r3,16(0x10)
1c00110c:	03800a52 	ori	$r18,$r18,0x2
1c001110:	29418068 	st.h	$r8,$r3,96(0x60)
1c001114:	02800809 	addi.w	$r9,$r0,2(0x2)
1c001118:	0281e01d 	addi.w	$r29,$r0,120(0x78)
1c00111c:	29017c60 	st.b	$r0,$r3,95(0x5f)
1c001120:	02bffc07 	addi.w	$r7,$r0,-1(0xfff)
1c001124:	00150008 	move	$r8,$r0
1c001128:	580193c7 	beq	$r30,$r7,400(0x190) # 1c0012b8 <_vfprintf_r+0xa34>
1c00112c:	02bdfc17 	addi.w	$r23,$r0,-129(0xf7f)
1c001130:	0014de46 	and	$r6,$r18,$r23
1c001134:	00157367 	or	$r7,$r27,$r28
1c001138:	29800066 	st.w	$r6,$r3,0
1c00113c:	5c0728e0 	bne	$r7,$r0,1832(0x728) # 1c001864 <_vfprintf_r+0xfe0>
1c001140:	5c0307c0 	bne	$r30,$r0,772(0x304) # 1c001444 <_vfprintf_r+0xbc0>
1c001144:	5ffc3d20 	bne	$r9,$r0,-964(0x3fc3c) # 1c000d80 <_vfprintf_r+0x4fc>
1c001148:	0340065c 	andi	$r28,$r18,0x1
1c00114c:	00150337 	move	$r23,$r25
1c001150:	5bfc3f80 	beq	$r28,$r0,-964(0x3fc3c) # 1c000d8c <_vfprintf_r+0x508>
1c001154:	0280c009 	addi.w	$r9,$r0,48(0x30)
1c001158:	2902bc69 	st.b	$r9,$r3,175(0xaf)
1c00115c:	0282bc77 	addi.w	$r23,$r3,175(0xaf)
1c001160:	53fc2fff 	b	-980(0xffffc2c) # 1c000d8c <_vfprintf_r+0x508>
1c001164:	5c13e0a0 	bne	$r5,$r0,5088(0x13e0) # 1c002544 <_vfprintf_r+0x1cc0>
1c001168:	03408249 	andi	$r9,$r18,0x20
1c00116c:	03804252 	ori	$r18,$r18,0x10
1c001170:	5c028920 	bne	$r9,$r0,648(0x288) # 1c0013f8 <_vfprintf_r+0xb74>
1c001174:	28803069 	ld.w	$r9,$r3,12(0xc)
1c001178:	02801129 	addi.w	$r9,$r9,4(0x4)
1c00117c:	28803068 	ld.w	$r8,$r3,12(0xc)
1c001180:	0015001c 	move	$r28,$r0
1c001184:	29803069 	st.w	$r9,$r3,12(0xc)
1c001188:	2880011b 	ld.w	$r27,$r8,0
1c00118c:	00150009 	move	$r9,$r0
1c001190:	53ff8fff 	b	-116(0xfffff8c) # 1c00111c <_vfprintf_r+0x898>
1c001194:	03802252 	ori	$r18,$r18,0x8
1c001198:	280003f1 	ld.b	$r17,$r31,0
1c00119c:	53f883ff 	b	-1920(0xffff880) # 1c000a1c <_vfprintf_r+0x198>
1c0011a0:	5c13aca0 	bne	$r5,$r0,5036(0x13ac) # 1c00254c <_vfprintf_r+0x1cc8>
1c0011a4:	03402249 	andi	$r9,$r18,0x8
1c0011a8:	5c0a3120 	bne	$r9,$r0,2608(0xa30) # 1c001bd8 <_vfprintf_r+0x1354>
1c0011ac:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0011b0:	02801d28 	addi.w	$r8,$r9,7(0x7)
1c0011b4:	02bfe009 	addi.w	$r9,$r0,-8(0xff8)
1c0011b8:	0014a509 	and	$r9,$r8,$r9
1c0011bc:	28800128 	ld.w	$r8,$r9,0
1c0011c0:	02802129 	addi.w	$r9,$r9,8(0x8)
1c0011c4:	2980a068 	st.w	$r8,$r3,40(0x28)
1c0011c8:	28bff128 	ld.w	$r8,$r9,-4(0xffc)
1c0011cc:	29803069 	st.w	$r9,$r3,12(0xc)
1c0011d0:	2980b068 	st.w	$r8,$r3,44(0x2c)
1c0011d4:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c0011d8:	2880b077 	ld.w	$r23,$r3,44(0x2c)
1c0011dc:	2980206d 	st.w	$r13,$r3,8(0x8)
1c0011e0:	00150364 	move	$r4,$r27
1c0011e4:	001502e5 	move	$r5,$r23
1c0011e8:	29800072 	st.w	$r18,$r3,0
1c0011ec:	5458b800 	bl	22712(0x58b8) # 1c006aa4 <__fpclassifyd>
1c0011f0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0011f4:	28800072 	ld.w	$r18,$r3,0
1c0011f8:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c0011fc:	5c0ca489 	bne	$r4,$r9,3236(0xca4) # 1c001ea0 <_vfprintf_r+0x161c>
1c001200:	00150364 	move	$r4,$r27
1c001204:	001502e5 	move	$r5,$r23
1c001208:	00150006 	move	$r6,$r0
1c00120c:	00150007 	move	$r7,$r0
1c001210:	54a43000 	bl	42032(0xa430) # 1c00b640 <__ledf2>
1c001214:	28800072 	ld.w	$r18,$r3,0
1c001218:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c00121c:	60103080 	blt	$r4,$r0,4144(0x1030) # 1c00224c <_vfprintf_r+0x19c8>
1c001220:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c001224:	02811c09 	addi.w	$r9,$r0,71(0x47)
1c001228:	1dc80037 	pcaddu12i	$r23,-114687(0xe4001)
1c00122c:	02a822f7 	addi.w	$r23,$r23,-1528(0xa08)
1c001230:	64000d3d 	bge	$r9,$r29,12(0xc) # 1c00123c <_vfprintf_r+0x9b8>
1c001234:	1dc80037 	pcaddu12i	$r23,-114687(0xe4001)
1c001238:	02a802f7 	addi.w	$r23,$r23,-1536(0xa00)
1c00123c:	02bdfc09 	addi.w	$r9,$r0,-129(0xf7f)
1c001240:	0014a649 	and	$r9,$r18,$r9
1c001244:	29800069 	st.w	$r9,$r3,0
1c001248:	29808060 	st.w	$r0,$r3,32(0x20)
1c00124c:	02800c1b 	addi.w	$r27,$r0,3(0x3)
1c001250:	02800c1c 	addi.w	$r28,$r0,3(0x3)
1c001254:	0015001e 	move	$r30,$r0
1c001258:	5ffac100 	bne	$r8,$r0,-1344(0x3fac0) # 1c000d18 <_vfprintf_r+0x494>
1c00125c:	53fb7bff 	b	-1160(0xffffb78) # 1c000dd4 <_vfprintf_r+0x550>
1c001260:	5c12f4a0 	bne	$r5,$r0,4852(0x12f4) # 1c002554 <_vfprintf_r+0x1cd0>
1c001264:	03408249 	andi	$r9,$r18,0x20
1c001268:	03804252 	ori	$r18,$r18,0x10
1c00126c:	5c016520 	bne	$r9,$r0,356(0x164) # 1c0013d0 <_vfprintf_r+0xb4c>
1c001270:	28803069 	ld.w	$r9,$r3,12(0xc)
1c001274:	02801129 	addi.w	$r9,$r9,4(0x4)
1c001278:	28803068 	ld.w	$r8,$r3,12(0xc)
1c00127c:	2880011b 	ld.w	$r27,$r8,0
1c001280:	29803069 	st.w	$r9,$r3,12(0xc)
1c001284:	0048ff7c 	srai.w	$r28,$r27,0x1f
1c001288:	00150388 	move	$r8,$r28
1c00128c:	67fad100 	bge	$r8,$r0,-1328(0x3fad0) # 1c000d5c <_vfprintf_r+0x4d8>
1c001290:	00116c1b 	sub.w	$r27,$r0,$r27
1c001294:	0012ec09 	sltu	$r9,$r0,$r27
1c001298:	0011701c 	sub.w	$r28,$r0,$r28
1c00129c:	0011279c 	sub.w	$r28,$r28,$r9
1c0012a0:	0280b409 	addi.w	$r9,$r0,45(0x2d)
1c0012a4:	29017c69 	st.b	$r9,$r3,95(0x5f)
1c0012a8:	02bffc07 	addi.w	$r7,$r0,-1(0xfff)
1c0012ac:	0280b408 	addi.w	$r8,$r0,45(0x2d)
1c0012b0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0012b4:	5ffe7bc7 	bne	$r30,$r7,-392(0x3fe78) # 1c00112c <_vfprintf_r+0x8a8>
1c0012b8:	02800407 	addi.w	$r7,$r0,1(0x1)
1c0012bc:	58016527 	beq	$r9,$r7,356(0x164) # 1c001420 <_vfprintf_r+0xb9c>
1c0012c0:	02800807 	addi.w	$r7,$r0,2(0x2)
1c0012c4:	58019527 	beq	$r9,$r7,404(0x194) # 1c001458 <_vfprintf_r+0xbd4>
1c0012c8:	00150327 	move	$r7,$r25
1c0012cc:	50000800 	b	8(0x8) # 1c0012d4 <_vfprintf_r+0xa50>
1c0012d0:	001502e7 	move	$r7,$r23
1c0012d4:	0040f786 	slli.w	$r6,$r28,0x1d
1c0012d8:	03401f69 	andi	$r9,$r27,0x7
1c0012dc:	00448f7b 	srli.w	$r27,$r27,0x3
1c0012e0:	0280c129 	addi.w	$r9,$r9,48(0x30)
1c0012e4:	00156cdb 	or	$r27,$r6,$r27
1c0012e8:	00448f9c 	srli.w	$r28,$r28,0x3
1c0012ec:	293ffce9 	st.b	$r9,$r7,-1(0xfff)
1c0012f0:	00157366 	or	$r6,$r27,$r28
1c0012f4:	02bffcf7 	addi.w	$r23,$r7,-1(0xfff)
1c0012f8:	5fffd8c0 	bne	$r6,$r0,-40(0x3ffd8) # 1c0012d0 <_vfprintf_r+0xa4c>
1c0012fc:	03400646 	andi	$r6,$r18,0x1
1c001300:	58018cc0 	beq	$r6,$r0,396(0x18c) # 1c00148c <_vfprintf_r+0xc08>
1c001304:	0280c006 	addi.w	$r6,$r0,48(0x30)
1c001308:	58018526 	beq	$r9,$r6,388(0x184) # 1c00148c <_vfprintf_r+0xc08>
1c00130c:	02bff8e7 	addi.w	$r7,$r7,-2(0xffe)
1c001310:	293ffee6 	st.b	$r6,$r23,-1(0xfff)
1c001314:	00111f3c 	sub.w	$r28,$r25,$r7
1c001318:	29800072 	st.w	$r18,$r3,0
1c00131c:	001500f7 	move	$r23,$r7
1c001320:	53fa6fff 	b	-1428(0xffffa6c) # 1c000d8c <_vfprintf_r+0x508>
1c001324:	5c11e8a0 	bne	$r5,$r0,4584(0x11e8) # 1c00250c <_vfprintf_r+0x1c88>
1c001328:	1dc80029 	pcaddu12i	$r9,-114687(0xe4001)
1c00132c:	02a46129 	addi.w	$r9,$r9,-1768(0x918)
1c001330:	29804069 	st.w	$r9,$r3,16(0x10)
1c001334:	03408249 	andi	$r9,$r18,0x20
1c001338:	5ff8e920 	bne	$r9,$r0,-1816(0x3f8e8) # 1c000c20 <_vfprintf_r+0x39c>
1c00133c:	28803068 	ld.w	$r8,$r3,12(0xc)
1c001340:	03404249 	andi	$r9,$r18,0x10
1c001344:	2880011b 	ld.w	$r27,$r8,0
1c001348:	02801108 	addi.w	$r8,$r8,4(0x4)
1c00134c:	29803068 	st.w	$r8,$r3,12(0xc)
1c001350:	5c087920 	bne	$r9,$r0,2168(0x878) # 1c001bc8 <_vfprintf_r+0x1344>
1c001354:	03410249 	andi	$r9,$r18,0x40
1c001358:	58087120 	beq	$r9,$r0,2160(0x870) # 1c001bc8 <_vfprintf_r+0x1344>
1c00135c:	0040c37b 	slli.w	$r27,$r27,0x10
1c001360:	0044c37b 	srli.w	$r27,$r27,0x10
1c001364:	0015001c 	move	$r28,$r0
1c001368:	53f8dbff 	b	-1832(0xffff8d8) # 1c000c40 <_vfprintf_r+0x3bc>
1c00136c:	5c11a8a0 	bne	$r5,$r0,4520(0x11a8) # 1c002514 <_vfprintf_r+0x1c90>
1c001370:	03408249 	andi	$r9,$r18,0x20
1c001374:	03804252 	ori	$r18,$r18,0x10
1c001378:	5c003120 	bne	$r9,$r0,48(0x30) # 1c0013a8 <_vfprintf_r+0xb24>
1c00137c:	28803069 	ld.w	$r9,$r3,12(0xc)
1c001380:	02801129 	addi.w	$r9,$r9,4(0x4)
1c001384:	28803068 	ld.w	$r8,$r3,12(0xc)
1c001388:	0015001c 	move	$r28,$r0
1c00138c:	29803069 	st.w	$r9,$r3,12(0xc)
1c001390:	2880011b 	ld.w	$r27,$r8,0
1c001394:	02800409 	addi.w	$r9,$r0,1(0x1)
1c001398:	53fd87ff 	b	-636(0xffffd84) # 1c00111c <_vfprintf_r+0x898>
1c00139c:	00150344 	move	$r4,$r26
1c0013a0:	54338c00 	bl	13196(0x338c) # 1c00472c <__sinit>
1c0013a4:	53f547ff 	b	-2748(0xffff544) # 1c0008e8 <_vfprintf_r+0x64>
1c0013a8:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0013ac:	02bfe008 	addi.w	$r8,$r0,-8(0xff8)
1c0013b0:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c0013b4:	0014a129 	and	$r9,$r9,$r8
1c0013b8:	02802128 	addi.w	$r8,$r9,8(0x8)
1c0013bc:	2880013b 	ld.w	$r27,$r9,0
1c0013c0:	2880113c 	ld.w	$r28,$r9,4(0x4)
1c0013c4:	29803068 	st.w	$r8,$r3,12(0xc)
1c0013c8:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0013cc:	53fd53ff 	b	-688(0xffffd50) # 1c00111c <_vfprintf_r+0x898>
1c0013d0:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0013d4:	02bfe008 	addi.w	$r8,$r0,-8(0xff8)
1c0013d8:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c0013dc:	0014a129 	and	$r9,$r9,$r8
1c0013e0:	28801128 	ld.w	$r8,$r9,4(0x4)
1c0013e4:	02802127 	addi.w	$r7,$r9,8(0x8)
1c0013e8:	29803067 	st.w	$r7,$r3,12(0xc)
1c0013ec:	2880013b 	ld.w	$r27,$r9,0
1c0013f0:	0015011c 	move	$r28,$r8
1c0013f4:	53f967ff 	b	-1692(0xffff964) # 1c000d58 <_vfprintf_r+0x4d4>
1c0013f8:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0013fc:	02bfe008 	addi.w	$r8,$r0,-8(0xff8)
1c001400:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c001404:	0014a129 	and	$r9,$r9,$r8
1c001408:	02802128 	addi.w	$r8,$r9,8(0x8)
1c00140c:	2880013b 	ld.w	$r27,$r9,0
1c001410:	2880113c 	ld.w	$r28,$r9,4(0x4)
1c001414:	29803068 	st.w	$r8,$r3,12(0xc)
1c001418:	00150009 	move	$r9,$r0
1c00141c:	53fd03ff 	b	-768(0xffffd00) # 1c00111c <_vfprintf_r+0x898>
1c001420:	5c096380 	bne	$r28,$r0,2400(0x960) # 1c001d80 <_vfprintf_r+0x14fc>
1c001424:	02802409 	addi.w	$r9,$r0,9(0x9)
1c001428:	6809593b 	bltu	$r9,$r27,2392(0x958) # 1c001d80 <_vfprintf_r+0x14fc>
1c00142c:	0280c37b 	addi.w	$r27,$r27,48(0x30)
1c001430:	2902bc7b 	st.b	$r27,$r3,175(0xaf)
1c001434:	29800072 	st.w	$r18,$r3,0
1c001438:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c00143c:	0282bc77 	addi.w	$r23,$r3,175(0xaf)
1c001440:	53f94fff 	b	-1716(0xffff94c) # 1c000d8c <_vfprintf_r+0x508>
1c001444:	02800407 	addi.w	$r7,$r0,1(0x1)
1c001448:	58118527 	beq	$r9,$r7,4484(0x1184) # 1c0025cc <_vfprintf_r+0x1d48>
1c00144c:	02800807 	addi.w	$r7,$r0,2(0x2)
1c001450:	28800072 	ld.w	$r18,$r3,0
1c001454:	5ffe7527 	bne	$r9,$r7,-396(0x3fe74) # 1c0012c8 <_vfprintf_r+0xa44>
1c001458:	00150337 	move	$r23,$r25
1c00145c:	28804067 	ld.w	$r7,$r3,16(0x10)
1c001460:	03403f69 	andi	$r9,$r27,0xf
1c001464:	0044937b 	srli.w	$r27,$r27,0x4
1c001468:	001024e9 	add.w	$r9,$r7,$r9
1c00146c:	2a000129 	ld.bu	$r9,$r9,0
1c001470:	0040f387 	slli.w	$r7,$r28,0x1c
1c001474:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c001478:	00156cfb 	or	$r27,$r7,$r27
1c00147c:	0044939c 	srli.w	$r28,$r28,0x4
1c001480:	290002e9 	st.b	$r9,$r23,0
1c001484:	00157369 	or	$r9,$r27,$r28
1c001488:	5fffd520 	bne	$r9,$r0,-44(0x3ffd4) # 1c00145c <_vfprintf_r+0xbd8>
1c00148c:	00115f3c 	sub.w	$r28,$r25,$r23
1c001490:	29800072 	st.w	$r18,$r3,0
1c001494:	53f8fbff 	b	-1800(0xffff8f8) # 1c000d8c <_vfprintf_r+0x508>
1c001498:	02819408 	addi.w	$r8,$r0,101(0x65)
1c00149c:	6402b91d 	bge	$r8,$r29,696(0x2b8) # 1c001754 <_vfprintf_r+0xed0>
1c0014a0:	2880a067 	ld.w	$r7,$r3,40(0x28)
1c0014a4:	2880b068 	ld.w	$r8,$r3,44(0x2c)
1c0014a8:	00150006 	move	$r6,$r0
1c0014ac:	29805069 	st.w	$r9,$r3,20(0x14)
1c0014b0:	001500e4 	move	$r4,$r7
1c0014b4:	00150105 	move	$r5,$r8
1c0014b8:	00150007 	move	$r7,$r0
1c0014bc:	2980206d 	st.w	$r13,$r3,8(0x8)
1c0014c0:	549fd000 	bl	40912(0x9fd0) # 1c00b490 <__eqdf2>
1c0014c4:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c0014c8:	28805069 	ld.w	$r9,$r3,20(0x14)
1c0014cc:	5c04b880 	bne	$r4,$r0,1208(0x4b8) # 1c001984 <_vfprintf_r+0x1100>
1c0014d0:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0014d4:	1dc80007 	pcaddu12i	$r7,-114688(0xe4000)
1c0014d8:	029e70e7 	addi.w	$r7,$r7,1948(0x79c)
1c0014dc:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0014e0:	02800508 	addi.w	$r8,$r8,1(0x1)
1c0014e4:	298001a7 	st.w	$r7,$r13,0
1c0014e8:	02800407 	addi.w	$r7,$r0,1(0x1)
1c0014ec:	29821069 	st.w	$r9,$r3,132(0x84)
1c0014f0:	29820068 	st.w	$r8,$r3,128(0x80)
1c0014f4:	298011a7 	st.w	$r7,$r13,4(0x4)
1c0014f8:	02801c09 	addi.w	$r9,$r0,7(0x7)
1c0014fc:	600a1528 	blt	$r9,$r8,2580(0xa14) # 1c001f10 <_vfprintf_r+0x168c>
1c001500:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001504:	28819069 	ld.w	$r9,$r3,100(0x64)
1c001508:	28809068 	ld.w	$r8,$r3,36(0x24)
1c00150c:	60001928 	blt	$r9,$r8,24(0x18) # 1c001524 <_vfprintf_r+0xca0>
1c001510:	28800069 	ld.w	$r9,$r3,0
1c001514:	03400529 	andi	$r9,$r9,0x1
1c001518:	5c000d20 	bne	$r9,$r0,12(0xc) # 1c001524 <_vfprintf_r+0xca0>
1c00151c:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001520:	53f98fff 	b	-1652(0xffff98c) # 1c000eac <_vfprintf_r+0x628>
1c001524:	2880c069 	ld.w	$r9,$r3,48(0x30)
1c001528:	2880d067 	ld.w	$r7,$r3,52(0x34)
1c00152c:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001530:	298001a9 	st.w	$r9,$r13,0
1c001534:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001538:	02800508 	addi.w	$r8,$r8,1(0x1)
1c00153c:	298011a7 	st.w	$r7,$r13,4(0x4)
1c001540:	001024e9 	add.w	$r9,$r7,$r9
1c001544:	29821069 	st.w	$r9,$r3,132(0x84)
1c001548:	29820068 	st.w	$r8,$r3,128(0x80)
1c00154c:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001550:	600764e8 	blt	$r7,$r8,1892(0x764) # 1c001cb4 <_vfprintf_r+0x1430>
1c001554:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001558:	28809068 	ld.w	$r8,$r3,36(0x24)
1c00155c:	02bffd1c 	addi.w	$r28,$r8,-1(0xfff)
1c001560:	67f94c1c 	bge	$r0,$r28,-1716(0x3f94c) # 1c000eac <_vfprintf_r+0x628>
1c001564:	02804007 	addi.w	$r7,$r0,16(0x10)
1c001568:	28820068 	ld.w	$r8,$r3,128(0x80)
1c00156c:	1dc80032 	pcaddu12i	$r18,-114687(0xe4001)
1c001570:	02a1b252 	addi.w	$r18,$r18,-1940(0x86c)
1c001574:	0280401d 	addi.w	$r29,$r0,16(0x10)
1c001578:	02801c17 	addi.w	$r23,$r0,7(0x7)
1c00157c:	600014fc 	blt	$r7,$r28,20(0x14) # 1c001590 <_vfprintf_r+0xd0c>
1c001580:	50098000 	b	2432(0x980) # 1c001f00 <_vfprintf_r+0x167c>
1c001584:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001588:	02bfc39c 	addi.w	$r28,$r28,-16(0xff0)
1c00158c:	640977bc 	bge	$r29,$r28,2420(0x974) # 1c001f00 <_vfprintf_r+0x167c>
1c001590:	02804129 	addi.w	$r9,$r9,16(0x10)
1c001594:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001598:	298001b2 	st.w	$r18,$r13,0
1c00159c:	298011bd 	st.w	$r29,$r13,4(0x4)
1c0015a0:	29821069 	st.w	$r9,$r3,132(0x84)
1c0015a4:	29820068 	st.w	$r8,$r3,128(0x80)
1c0015a8:	67ffdee8 	bge	$r23,$r8,-36(0x3ffdc) # 1c001584 <_vfprintf_r+0xd00>
1c0015ac:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c0015b0:	00150305 	move	$r5,$r24
1c0015b4:	00150344 	move	$r4,$r26
1c0015b8:	29802072 	st.w	$r18,$r3,8(0x8)
1c0015bc:	54592800 	bl	22824(0x5928) # 1c006ee4 <__sprint_r>
1c0015c0:	5ff50880 	bne	$r4,$r0,-2808(0x3f508) # 1c000ac8 <_vfprintf_r+0x244>
1c0015c4:	28821069 	ld.w	$r9,$r3,132(0x84)
1c0015c8:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0015cc:	0015032d 	move	$r13,$r25
1c0015d0:	28802072 	ld.w	$r18,$r3,8(0x8)
1c0015d4:	53ffb7ff 	b	-76(0xfffffb4) # 1c001588 <_vfprintf_r+0xd04>
1c0015d8:	00116ec7 	sub.w	$r7,$r22,$r27
1c0015dc:	67f89407 	bge	$r0,$r7,-1900(0x3f894) # 1c000e70 <_vfprintf_r+0x5ec>
1c0015e0:	02804006 	addi.w	$r6,$r0,16(0x10)
1c0015e4:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0015e8:	1dc80012 	pcaddu12i	$r18,-114688(0xe4000)
1c0015ec:	029fc252 	addi.w	$r18,$r18,2032(0x7f0)
1c0015f0:	0280400b 	addi.w	$r11,$r0,16(0x10)
1c0015f4:	02801c13 	addi.w	$r19,$r0,7(0x7)
1c0015f8:	600014c7 	blt	$r6,$r7,20(0x14) # 1c00160c <_vfprintf_r+0xd88>
1c0015fc:	50006c00 	b	108(0x6c) # 1c001668 <_vfprintf_r+0xde4>
1c001600:	02bfc0e7 	addi.w	$r7,$r7,-16(0xff0)
1c001604:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001608:	64006167 	bge	$r11,$r7,96(0x60) # 1c001668 <_vfprintf_r+0xde4>
1c00160c:	02804129 	addi.w	$r9,$r9,16(0x10)
1c001610:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001614:	298001b2 	st.w	$r18,$r13,0
1c001618:	298011ab 	st.w	$r11,$r13,4(0x4)
1c00161c:	29821069 	st.w	$r9,$r3,132(0x84)
1c001620:	29820068 	st.w	$r8,$r3,128(0x80)
1c001624:	67ffde68 	bge	$r19,$r8,-36(0x3ffdc) # 1c001600 <_vfprintf_r+0xd7c>
1c001628:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c00162c:	00150305 	move	$r5,$r24
1c001630:	00150344 	move	$r4,$r26
1c001634:	29805072 	st.w	$r18,$r3,20(0x14)
1c001638:	29802067 	st.w	$r7,$r3,8(0x8)
1c00163c:	5458a800 	bl	22696(0x58a8) # 1c006ee4 <__sprint_r>
1c001640:	5ff48880 	bne	$r4,$r0,-2936(0x3f488) # 1c000ac8 <_vfprintf_r+0x244>
1c001644:	28802067 	ld.w	$r7,$r3,8(0x8)
1c001648:	0280400b 	addi.w	$r11,$r0,16(0x10)
1c00164c:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001650:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001654:	02bfc0e7 	addi.w	$r7,$r7,-16(0xff0)
1c001658:	0015032d 	move	$r13,$r25
1c00165c:	28805072 	ld.w	$r18,$r3,20(0x14)
1c001660:	02801c13 	addi.w	$r19,$r0,7(0x7)
1c001664:	63ffa967 	blt	$r11,$r7,-88(0x3ffa8) # 1c00160c <_vfprintf_r+0xd88>
1c001668:	00101d29 	add.w	$r9,$r9,$r7
1c00166c:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001670:	298001b2 	st.w	$r18,$r13,0
1c001674:	298011a7 	st.w	$r7,$r13,4(0x4)
1c001678:	29821069 	st.w	$r9,$r3,132(0x84)
1c00167c:	29820068 	st.w	$r8,$r3,128(0x80)
1c001680:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001684:	6008a8e8 	blt	$r7,$r8,2216(0x8a8) # 1c001f2c <_vfprintf_r+0x16a8>
1c001688:	001173de 	sub.w	$r30,$r30,$r28
1c00168c:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001690:	67f7e81e 	bge	$r0,$r30,-2072(0x3f7e8) # 1c000e78 <_vfprintf_r+0x5f4>
1c001694:	02804006 	addi.w	$r6,$r0,16(0x10)
1c001698:	28820068 	ld.w	$r8,$r3,128(0x80)
1c00169c:	1dc80012 	pcaddu12i	$r18,-114688(0xe4000)
1c0016a0:	029cf252 	addi.w	$r18,$r18,1852(0x73c)
1c0016a4:	0280400b 	addi.w	$r11,$r0,16(0x10)
1c0016a8:	02801c10 	addi.w	$r16,$r0,7(0x7)
1c0016ac:	600014de 	blt	$r6,$r30,20(0x14) # 1c0016c0 <_vfprintf_r+0xe3c>
1c0016b0:	50006400 	b	100(0x64) # 1c001714 <_vfprintf_r+0xe90>
1c0016b4:	02bfc3de 	addi.w	$r30,$r30,-16(0xff0)
1c0016b8:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c0016bc:	6400597e 	bge	$r11,$r30,88(0x58) # 1c001714 <_vfprintf_r+0xe90>
1c0016c0:	02804129 	addi.w	$r9,$r9,16(0x10)
1c0016c4:	02800508 	addi.w	$r8,$r8,1(0x1)
1c0016c8:	298001b2 	st.w	$r18,$r13,0
1c0016cc:	298011ab 	st.w	$r11,$r13,4(0x4)
1c0016d0:	29821069 	st.w	$r9,$r3,132(0x84)
1c0016d4:	29820068 	st.w	$r8,$r3,128(0x80)
1c0016d8:	67ffde08 	bge	$r16,$r8,-36(0x3ffdc) # 1c0016b4 <_vfprintf_r+0xe30>
1c0016dc:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c0016e0:	00150305 	move	$r5,$r24
1c0016e4:	00150344 	move	$r4,$r26
1c0016e8:	29802072 	st.w	$r18,$r3,8(0x8)
1c0016ec:	5457f800 	bl	22520(0x57f8) # 1c006ee4 <__sprint_r>
1c0016f0:	5ff3d880 	bne	$r4,$r0,-3112(0x3f3d8) # 1c000ac8 <_vfprintf_r+0x244>
1c0016f4:	0280400b 	addi.w	$r11,$r0,16(0x10)
1c0016f8:	02bfc3de 	addi.w	$r30,$r30,-16(0xff0)
1c0016fc:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001700:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001704:	0015032d 	move	$r13,$r25
1c001708:	28802072 	ld.w	$r18,$r3,8(0x8)
1c00170c:	02801c10 	addi.w	$r16,$r0,7(0x7)
1c001710:	63ffb17e 	blt	$r11,$r30,-80(0x3ffb0) # 1c0016c0 <_vfprintf_r+0xe3c>
1c001714:	00107929 	add.w	$r9,$r9,$r30
1c001718:	02800508 	addi.w	$r8,$r8,1(0x1)
1c00171c:	298001b2 	st.w	$r18,$r13,0
1c001720:	298011be 	st.w	$r30,$r13,4(0x4)
1c001724:	29821069 	st.w	$r9,$r3,132(0x84)
1c001728:	29820068 	st.w	$r8,$r3,128(0x80)
1c00172c:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001730:	600478e8 	blt	$r7,$r8,1144(0x478) # 1c001ba8 <_vfprintf_r+0x1324>
1c001734:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001738:	53f743ff 	b	-2240(0xffff740) # 1c000e78 <_vfprintf_r+0x5f4>
1c00173c:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001740:	00150305 	move	$r5,$r24
1c001744:	00150344 	move	$r4,$r26
1c001748:	54579c00 	bl	22428(0x579c) # 1c006ee4 <__sprint_r>
1c00174c:	5bf78c80 	beq	$r4,$r0,-2164(0x3f78c) # 1c000ed8 <_vfprintf_r+0x654>
1c001750:	53f37bff 	b	-3208(0xffff378) # 1c000ac8 <_vfprintf_r+0x244>
1c001754:	28820070 	ld.w	$r16,$r3,128(0x80)
1c001758:	28809068 	ld.w	$r8,$r3,36(0x24)
1c00175c:	02800407 	addi.w	$r7,$r0,1(0x1)
1c001760:	02800529 	addi.w	$r9,$r9,1(0x1)
1c001764:	0280061c 	addi.w	$r28,$r16,1(0x1)
1c001768:	028021be 	addi.w	$r30,$r13,8(0x8)
1c00176c:	64038ce8 	bge	$r7,$r8,908(0x38c) # 1c001af8 <_vfprintf_r+0x1274>
1c001770:	02800407 	addi.w	$r7,$r0,1(0x1)
1c001774:	298011a7 	st.w	$r7,$r13,4(0x4)
1c001778:	298001b7 	st.w	$r23,$r13,0
1c00177c:	29821069 	st.w	$r9,$r3,132(0x84)
1c001780:	2982007c 	st.w	$r28,$r3,128(0x80)
1c001784:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001788:	60068cfc 	blt	$r7,$r28,1676(0x68c) # 1c001e14 <_vfprintf_r+0x1590>
1c00178c:	2880d068 	ld.w	$r8,$r3,52(0x34)
1c001790:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c001794:	0280079c 	addi.w	$r28,$r28,1(0x1)
1c001798:	00102129 	add.w	$r9,$r9,$r8
1c00179c:	298003c7 	st.w	$r7,$r30,0
1c0017a0:	298013c8 	st.w	$r8,$r30,4(0x4)
1c0017a4:	29821069 	st.w	$r9,$r3,132(0x84)
1c0017a8:	2982007c 	st.w	$r28,$r3,128(0x80)
1c0017ac:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c0017b0:	600640fc 	blt	$r7,$r28,1600(0x640) # 1c001df0 <_vfprintf_r+0x156c>
1c0017b4:	028023de 	addi.w	$r30,$r30,8(0x8)
1c0017b8:	2880a066 	ld.w	$r6,$r3,40(0x28)
1c0017bc:	2880b067 	ld.w	$r7,$r3,44(0x2c)
1c0017c0:	29807069 	st.w	$r9,$r3,28(0x1c)
1c0017c4:	28809069 	ld.w	$r9,$r3,36(0x24)
1c0017c8:	02800791 	addi.w	$r17,$r28,1(0x1)
1c0017cc:	028023cd 	addi.w	$r13,$r30,8(0x8)
1c0017d0:	02bffd2b 	addi.w	$r11,$r9,-1(0xfff)
1c0017d4:	001500c4 	move	$r4,$r6
1c0017d8:	001500e5 	move	$r5,$r7
1c0017dc:	00150006 	move	$r6,$r0
1c0017e0:	00150007 	move	$r7,$r0
1c0017e4:	0015023d 	move	$r29,$r17
1c0017e8:	29806071 	st.w	$r17,$r3,24(0x18)
1c0017ec:	2980506d 	st.w	$r13,$r3,20(0x14)
1c0017f0:	2980206b 	st.w	$r11,$r3,8(0x8)
1c0017f4:	549c9c00 	bl	40092(0x9c9c) # 1c00b490 <__eqdf2>
1c0017f8:	2880206b 	ld.w	$r11,$r3,8(0x8)
1c0017fc:	2880506d 	ld.w	$r13,$r3,20(0x14)
1c001800:	28806071 	ld.w	$r17,$r3,24(0x18)
1c001804:	28807069 	ld.w	$r9,$r3,28(0x1c)
1c001808:	58032080 	beq	$r4,$r0,800(0x320) # 1c001b28 <_vfprintf_r+0x12a4>
1c00180c:	028006ea 	addi.w	$r10,$r23,1(0x1)
1c001810:	00102d29 	add.w	$r9,$r9,$r11
1c001814:	298003ca 	st.w	$r10,$r30,0
1c001818:	298013cb 	st.w	$r11,$r30,4(0x4)
1c00181c:	29821069 	st.w	$r9,$r3,132(0x84)
1c001820:	2982007d 	st.w	$r29,$r3,128(0x80)
1c001824:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001828:	600450fd 	blt	$r7,$r29,1104(0x450) # 1c001c78 <_vfprintf_r+0x13f4>
1c00182c:	028043c7 	addi.w	$r7,$r30,16(0x10)
1c001830:	02800b9d 	addi.w	$r29,$r28,2(0x2)
1c001834:	001501be 	move	$r30,$r13
1c001838:	001500ed 	move	$r13,$r7
1c00183c:	2880e068 	ld.w	$r8,$r3,56(0x38)
1c001840:	0281b067 	addi.w	$r7,$r3,108(0x6c)
1c001844:	00102509 	add.w	$r9,$r8,$r9
1c001848:	298003c7 	st.w	$r7,$r30,0
1c00184c:	298013c8 	st.w	$r8,$r30,4(0x4)
1c001850:	29821069 	st.w	$r9,$r3,132(0x84)
1c001854:	2982007d 	st.w	$r29,$r3,128(0x80)
1c001858:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c00185c:	67f6511d 	bge	$r8,$r29,-2480(0x3f650) # 1c000eac <_vfprintf_r+0x628>
1c001860:	53f713ff 	b	-2288(0xffff710) # 1c000f70 <_vfprintf_r+0x6ec>
1c001864:	28800072 	ld.w	$r18,$r3,0
1c001868:	53fa53ff 	b	-1456(0xffffa50) # 1c0012b8 <_vfprintf_r+0xa34>
1c00186c:	02804006 	addi.w	$r6,$r0,16(0x10)
1c001870:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001874:	1dc80012 	pcaddu12i	$r18,-114688(0xe4000)
1c001878:	0295d252 	addi.w	$r18,$r18,1396(0x574)
1c00187c:	0280400b 	addi.w	$r11,$r0,16(0x10)
1c001880:	02801c0c 	addi.w	$r12,$r0,7(0x7)
1c001884:	600014c7 	blt	$r6,$r7,20(0x14) # 1c001898 <_vfprintf_r+0x1014>
1c001888:	50007c00 	b	124(0x7c) # 1c001904 <_vfprintf_r+0x1080>
1c00188c:	02bfc0e7 	addi.w	$r7,$r7,-16(0xff0)
1c001890:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001894:	64007167 	bge	$r11,$r7,112(0x70) # 1c001904 <_vfprintf_r+0x1080>
1c001898:	02804129 	addi.w	$r9,$r9,16(0x10)
1c00189c:	02800508 	addi.w	$r8,$r8,1(0x1)
1c0018a0:	298001b2 	st.w	$r18,$r13,0
1c0018a4:	298011ab 	st.w	$r11,$r13,4(0x4)
1c0018a8:	29821069 	st.w	$r9,$r3,132(0x84)
1c0018ac:	29820068 	st.w	$r8,$r3,128(0x80)
1c0018b0:	67ffdd88 	bge	$r12,$r8,-36(0x3ffdc) # 1c00188c <_vfprintf_r+0x1008>
1c0018b4:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c0018b8:	00150305 	move	$r5,$r24
1c0018bc:	00150344 	move	$r4,$r26
1c0018c0:	29807072 	st.w	$r18,$r3,28(0x1c)
1c0018c4:	29806067 	st.w	$r7,$r3,24(0x18)
1c0018c8:	29805073 	st.w	$r19,$r3,20(0x14)
1c0018cc:	29802074 	st.w	$r20,$r3,8(0x8)
1c0018d0:	54561400 	bl	22036(0x5614) # 1c006ee4 <__sprint_r>
1c0018d4:	5ff1f480 	bne	$r4,$r0,-3596(0x3f1f4) # 1c000ac8 <_vfprintf_r+0x244>
1c0018d8:	28806067 	ld.w	$r7,$r3,24(0x18)
1c0018dc:	28805073 	ld.w	$r19,$r3,20(0x14)
1c0018e0:	0280400b 	addi.w	$r11,$r0,16(0x10)
1c0018e4:	28821069 	ld.w	$r9,$r3,132(0x84)
1c0018e8:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0018ec:	02bfc0e7 	addi.w	$r7,$r7,-16(0xff0)
1c0018f0:	0015032d 	move	$r13,$r25
1c0018f4:	28807072 	ld.w	$r18,$r3,28(0x1c)
1c0018f8:	02801c0c 	addi.w	$r12,$r0,7(0x7)
1c0018fc:	28802074 	ld.w	$r20,$r3,8(0x8)
1c001900:	63ff9967 	blt	$r11,$r7,-104(0x3ff98) # 1c001898 <_vfprintf_r+0x1014>
1c001904:	00101d29 	add.w	$r9,$r9,$r7
1c001908:	02800508 	addi.w	$r8,$r8,1(0x1)
1c00190c:	298001b2 	st.w	$r18,$r13,0
1c001910:	298011a7 	st.w	$r7,$r13,4(0x4)
1c001914:	29821069 	st.w	$r9,$r3,132(0x84)
1c001918:	29820068 	st.w	$r8,$r3,128(0x80)
1c00191c:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001920:	600518e8 	blt	$r7,$r8,1304(0x518) # 1c001e38 <_vfprintf_r+0x15b4>
1c001924:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001928:	53f4d7ff 	b	-2860(0xffff4d4) # 1c000dfc <_vfprintf_r+0x578>
1c00192c:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001930:	00150305 	move	$r5,$r24
1c001934:	00150344 	move	$r4,$r26
1c001938:	29805073 	st.w	$r19,$r3,20(0x14)
1c00193c:	29802074 	st.w	$r20,$r3,8(0x8)
1c001940:	5455a400 	bl	21924(0x55a4) # 1c006ee4 <__sprint_r>
1c001944:	5ff18480 	bne	$r4,$r0,-3708(0x3f184) # 1c000ac8 <_vfprintf_r+0x244>
1c001948:	28821069 	ld.w	$r9,$r3,132(0x84)
1c00194c:	0015032d 	move	$r13,$r25
1c001950:	28805073 	ld.w	$r19,$r3,20(0x14)
1c001954:	28802074 	ld.w	$r20,$r3,8(0x8)
1c001958:	53f4dfff 	b	-2852(0xffff4dc) # 1c000e34 <_vfprintf_r+0x5b0>
1c00195c:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001960:	00150305 	move	$r5,$r24
1c001964:	00150344 	move	$r4,$r26
1c001968:	29802073 	st.w	$r19,$r3,8(0x8)
1c00196c:	54557800 	bl	21880(0x5578) # 1c006ee4 <__sprint_r>
1c001970:	5ff15880 	bne	$r4,$r0,-3752(0x3f158) # 1c000ac8 <_vfprintf_r+0x244>
1c001974:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001978:	0015032d 	move	$r13,$r25
1c00197c:	28802073 	ld.w	$r19,$r3,8(0x8)
1c001980:	53f4ebff 	b	-2840(0xffff4e8) # 1c000e68 <_vfprintf_r+0x5e4>
1c001984:	28819067 	ld.w	$r7,$r3,100(0x64)
1c001988:	6404e007 	bge	$r0,$r7,1248(0x4e0) # 1c001e68 <_vfprintf_r+0x15e4>
1c00198c:	28808068 	ld.w	$r8,$r3,32(0x20)
1c001990:	28809067 	ld.w	$r7,$r3,36(0x24)
1c001994:	0015011c 	move	$r28,$r8
1c001998:	6002b0e8 	blt	$r7,$r8,688(0x2b0) # 1c001c48 <_vfprintf_r+0x13c4>
1c00199c:	64002c1c 	bge	$r0,$r28,44(0x2c) # 1c0019c8 <_vfprintf_r+0x1144>
1c0019a0:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0019a4:	00107129 	add.w	$r9,$r9,$r28
1c0019a8:	298001b7 	st.w	$r23,$r13,0
1c0019ac:	02800508 	addi.w	$r8,$r8,1(0x1)
1c0019b0:	298011bc 	st.w	$r28,$r13,4(0x4)
1c0019b4:	29821069 	st.w	$r9,$r3,132(0x84)
1c0019b8:	29820068 	st.w	$r8,$r3,128(0x80)
1c0019bc:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c0019c0:	600ac8e8 	blt	$r7,$r8,2760(0xac8) # 1c002488 <_vfprintf_r+0x1c04>
1c0019c4:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c0019c8:	00147388 	nor	$r8,$r28,$r28
1c0019cc:	0048fd08 	srai.w	$r8,$r8,0x1f
1c0019d0:	0014a39c 	and	$r28,$r28,$r8
1c0019d4:	28808068 	ld.w	$r8,$r3,32(0x20)
1c0019d8:	0011711c 	sub.w	$r28,$r8,$r28
1c0019dc:	6003181c 	blt	$r0,$r28,792(0x318) # 1c001cf4 <_vfprintf_r+0x1470>
1c0019e0:	28819067 	ld.w	$r7,$r3,100(0x64)
1c0019e4:	28809068 	ld.w	$r8,$r3,36(0x24)
1c0019e8:	64026ce8 	bge	$r7,$r8,620(0x26c) # 1c001c54 <_vfprintf_r+0x13d0>
1c0019ec:	2880c068 	ld.w	$r8,$r3,48(0x30)
1c0019f0:	2880d066 	ld.w	$r6,$r3,52(0x34)
1c0019f4:	298001a8 	st.w	$r8,$r13,0
1c0019f8:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0019fc:	00101929 	add.w	$r9,$r9,$r6
1c001a00:	298011a6 	st.w	$r6,$r13,4(0x4)
1c001a04:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001a08:	29821069 	st.w	$r9,$r3,132(0x84)
1c001a0c:	29820068 	st.w	$r8,$r3,128(0x80)
1c001a10:	02801c06 	addi.w	$r6,$r0,7(0x7)
1c001a14:	600870c8 	blt	$r6,$r8,2160(0x870) # 1c002284 <_vfprintf_r+0x1a00>
1c001a18:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001a1c:	28809068 	ld.w	$r8,$r3,36(0x24)
1c001a20:	00111d1c 	sub.w	$r28,$r8,$r7
1c001a24:	28808068 	ld.w	$r8,$r3,32(0x20)
1c001a28:	0015039d 	move	$r29,$r28
1c001a2c:	60001107 	blt	$r8,$r7,16(0x10) # 1c001a3c <_vfprintf_r+0x11b8>
1c001a30:	28809068 	ld.w	$r8,$r3,36(0x24)
1c001a34:	28808067 	ld.w	$r7,$r3,32(0x20)
1c001a38:	00111d1d 	sub.w	$r29,$r8,$r7
1c001a3c:	6400341d 	bge	$r0,$r29,52(0x34) # 1c001a70 <_vfprintf_r+0x11ec>
1c001a40:	28820067 	ld.w	$r7,$r3,128(0x80)
1c001a44:	28808068 	ld.w	$r8,$r3,32(0x20)
1c001a48:	00107529 	add.w	$r9,$r9,$r29
1c001a4c:	028004e7 	addi.w	$r7,$r7,1(0x1)
1c001a50:	001022ea 	add.w	$r10,$r23,$r8
1c001a54:	298001aa 	st.w	$r10,$r13,0
1c001a58:	298011bd 	st.w	$r29,$r13,4(0x4)
1c001a5c:	29821069 	st.w	$r9,$r3,132(0x84)
1c001a60:	29820067 	st.w	$r7,$r3,128(0x80)
1c001a64:	02801c06 	addi.w	$r6,$r0,7(0x7)
1c001a68:	600a40c7 	blt	$r6,$r7,2624(0xa40) # 1c0024a8 <_vfprintf_r+0x1c24>
1c001a6c:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001a70:	001477a7 	nor	$r7,$r29,$r29
1c001a74:	0048fce7 	srai.w	$r7,$r7,0x1f
1c001a78:	00149fa8 	and	$r8,$r29,$r7
1c001a7c:	0011239c 	sub.w	$r28,$r28,$r8
1c001a80:	67f42c1c 	bge	$r0,$r28,-3028(0x3f42c) # 1c000eac <_vfprintf_r+0x628>
1c001a84:	02804007 	addi.w	$r7,$r0,16(0x10)
1c001a88:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001a8c:	1dc80012 	pcaddu12i	$r18,-114688(0xe4000)
1c001a90:	028d3252 	addi.w	$r18,$r18,844(0x34c)
1c001a94:	0280401d 	addi.w	$r29,$r0,16(0x10)
1c001a98:	02801c17 	addi.w	$r23,$r0,7(0x7)
1c001a9c:	600014fc 	blt	$r7,$r28,20(0x14) # 1c001ab0 <_vfprintf_r+0x122c>
1c001aa0:	50046000 	b	1120(0x460) # 1c001f00 <_vfprintf_r+0x167c>
1c001aa4:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001aa8:	02bfc39c 	addi.w	$r28,$r28,-16(0xff0)
1c001aac:	640457bc 	bge	$r29,$r28,1108(0x454) # 1c001f00 <_vfprintf_r+0x167c>
1c001ab0:	02804129 	addi.w	$r9,$r9,16(0x10)
1c001ab4:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001ab8:	298001b2 	st.w	$r18,$r13,0
1c001abc:	298011bd 	st.w	$r29,$r13,4(0x4)
1c001ac0:	29821069 	st.w	$r9,$r3,132(0x84)
1c001ac4:	29820068 	st.w	$r8,$r3,128(0x80)
1c001ac8:	67ffdee8 	bge	$r23,$r8,-36(0x3ffdc) # 1c001aa4 <_vfprintf_r+0x1220>
1c001acc:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001ad0:	00150305 	move	$r5,$r24
1c001ad4:	00150344 	move	$r4,$r26
1c001ad8:	29802072 	st.w	$r18,$r3,8(0x8)
1c001adc:	54540800 	bl	21512(0x5408) # 1c006ee4 <__sprint_r>
1c001ae0:	5fefe880 	bne	$r4,$r0,-4120(0x3efe8) # 1c000ac8 <_vfprintf_r+0x244>
1c001ae4:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001ae8:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001aec:	0015032d 	move	$r13,$r25
1c001af0:	28802072 	ld.w	$r18,$r3,8(0x8)
1c001af4:	53ffb7ff 	b	-76(0xfffffb4) # 1c001aa8 <_vfprintf_r+0x1224>
1c001af8:	28800068 	ld.w	$r8,$r3,0
1c001afc:	03400506 	andi	$r6,$r8,0x1
1c001b00:	5ffc70c0 	bne	$r6,$r0,-912(0x3fc70) # 1c001770 <_vfprintf_r+0xeec>
1c001b04:	298001b7 	st.w	$r23,$r13,0
1c001b08:	298011a7 	st.w	$r7,$r13,4(0x4)
1c001b0c:	29821069 	st.w	$r9,$r3,132(0x84)
1c001b10:	2982007c 	st.w	$r28,$r3,128(0x80)
1c001b14:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c001b18:	600160fc 	blt	$r7,$r28,352(0x160) # 1c001c78 <_vfprintf_r+0x13f4>
1c001b1c:	02800a1d 	addi.w	$r29,$r16,2(0x2)
1c001b20:	028041ad 	addi.w	$r13,$r13,16(0x10)
1c001b24:	53fd1bff 	b	-744(0xffffd18) # 1c00183c <_vfprintf_r+0xfb8>
1c001b28:	67fd140b 	bge	$r0,$r11,-748(0x3fd14) # 1c00183c <_vfprintf_r+0xfb8>
1c001b2c:	02804007 	addi.w	$r7,$r0,16(0x10)
1c001b30:	640b84eb 	bge	$r7,$r11,2948(0xb84) # 1c0026b4 <_vfprintf_r+0x1e30>
1c001b34:	1dc80012 	pcaddu12i	$r18,-114688(0xe4000)
1c001b38:	028a9252 	addi.w	$r18,$r18,676(0x2a4)
1c001b3c:	0280401d 	addi.w	$r29,$r0,16(0x10)
1c001b40:	02801c17 	addi.w	$r23,$r0,7(0x7)
1c001b44:	50001400 	b	20(0x14) # 1c001b58 <_vfprintf_r+0x12d4>
1c001b48:	028023de 	addi.w	$r30,$r30,8(0x8)
1c001b4c:	02bfc16b 	addi.w	$r11,$r11,-16(0xff0)
1c001b50:	6404d7ab 	bge	$r29,$r11,1236(0x4d4) # 1c002024 <_vfprintf_r+0x17a0>
1c001b54:	02800791 	addi.w	$r17,$r28,1(0x1)
1c001b58:	02804129 	addi.w	$r9,$r9,16(0x10)
1c001b5c:	298003d2 	st.w	$r18,$r30,0
1c001b60:	298013dd 	st.w	$r29,$r30,4(0x4)
1c001b64:	29821069 	st.w	$r9,$r3,132(0x84)
1c001b68:	29820071 	st.w	$r17,$r3,128(0x80)
1c001b6c:	0015023c 	move	$r28,$r17
1c001b70:	67ffdaf1 	bge	$r23,$r17,-40(0x3ffd8) # 1c001b48 <_vfprintf_r+0x12c4>
1c001b74:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001b78:	00150305 	move	$r5,$r24
1c001b7c:	00150344 	move	$r4,$r26
1c001b80:	29805072 	st.w	$r18,$r3,20(0x14)
1c001b84:	2980206b 	st.w	$r11,$r3,8(0x8)
1c001b88:	54535c00 	bl	21340(0x535c) # 1c006ee4 <__sprint_r>
1c001b8c:	5fef3c80 	bne	$r4,$r0,-4292(0x3ef3c) # 1c000ac8 <_vfprintf_r+0x244>
1c001b90:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001b94:	2882007c 	ld.w	$r28,$r3,128(0x80)
1c001b98:	0015033e 	move	$r30,$r25
1c001b9c:	28805072 	ld.w	$r18,$r3,20(0x14)
1c001ba0:	2880206b 	ld.w	$r11,$r3,8(0x8)
1c001ba4:	53ffabff 	b	-88(0xfffffa8) # 1c001b4c <_vfprintf_r+0x12c8>
1c001ba8:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001bac:	00150305 	move	$r5,$r24
1c001bb0:	00150344 	move	$r4,$r26
1c001bb4:	54533000 	bl	21296(0x5330) # 1c006ee4 <__sprint_r>
1c001bb8:	5fef1080 	bne	$r4,$r0,-4336(0x3ef10) # 1c000ac8 <_vfprintf_r+0x244>
1c001bbc:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001bc0:	0015032d 	move	$r13,$r25
1c001bc4:	53f2b7ff 	b	-3404(0xffff2b4) # 1c000e78 <_vfprintf_r+0x5f4>
1c001bc8:	0015001c 	move	$r28,$r0
1c001bcc:	53f077ff 	b	-3980(0xffff074) # 1c000c40 <_vfprintf_r+0x3bc>
1c001bd0:	001503f7 	move	$r23,$r31
1c001bd4:	53ee1bff 	b	-4584(0xfffee18) # 1c0009ec <_vfprintf_r+0x168>
1c001bd8:	28803068 	ld.w	$r8,$r3,12(0xc)
1c001bdc:	02810064 	addi.w	$r4,$r3,64(0x40)
1c001be0:	2980206d 	st.w	$r13,$r3,8(0x8)
1c001be4:	28800109 	ld.w	$r9,$r8,0
1c001be8:	02801108 	addi.w	$r8,$r8,4(0x4)
1c001bec:	29803068 	st.w	$r8,$r3,12(0xc)
1c001bf0:	28800127 	ld.w	$r7,$r9,0
1c001bf4:	29800072 	st.w	$r18,$r3,0
1c001bf8:	29810067 	st.w	$r7,$r3,64(0x40)
1c001bfc:	28801128 	ld.w	$r8,$r9,4(0x4)
1c001c00:	29811068 	st.w	$r8,$r3,68(0x44)
1c001c04:	28802128 	ld.w	$r8,$r9,8(0x8)
1c001c08:	29812068 	st.w	$r8,$r3,72(0x48)
1c001c0c:	28803129 	ld.w	$r9,$r9,12(0xc)
1c001c10:	29813069 	st.w	$r9,$r3,76(0x4c)
1c001c14:	54ae1c00 	bl	44572(0xae1c) # 1c00ca30 <__trunctfdf2>
1c001c18:	2980a064 	st.w	$r4,$r3,40(0x28)
1c001c1c:	2980b065 	st.w	$r5,$r3,44(0x2c)
1c001c20:	28800072 	ld.w	$r18,$r3,0
1c001c24:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c001c28:	53f5afff 	b	-2644(0xffff5ac) # 1c0011d4 <_vfprintf_r+0x950>
1c001c2c:	28801066 	ld.w	$r6,$r3,4(0x4)
1c001c30:	288000e9 	ld.w	$r9,$r7,0
1c001c34:	29803068 	st.w	$r8,$r3,12(0xc)
1c001c38:	0048fcc7 	srai.w	$r7,$r6,0x1f
1c001c3c:	29800126 	st.w	$r6,$r9,0
1c001c40:	29801127 	st.w	$r7,$r9,4(0x4)
1c001c44:	53ed37ff 	b	-4812(0xfffed34) # 1c000978 <_vfprintf_r+0xf4>
1c001c48:	001500fc 	move	$r28,$r7
1c001c4c:	63fd541c 	blt	$r0,$r28,-684(0x3fd54) # 1c0019a0 <_vfprintf_r+0x111c>
1c001c50:	53fd7bff 	b	-648(0xffffd78) # 1c0019c8 <_vfprintf_r+0x1144>
1c001c54:	28800068 	ld.w	$r8,$r3,0
1c001c58:	03400508 	andi	$r8,$r8,0x1
1c001c5c:	5ffd9100 	bne	$r8,$r0,-624(0x3fd90) # 1c0019ec <_vfprintf_r+0x1168>
1c001c60:	28809068 	ld.w	$r8,$r3,36(0x24)
1c001c64:	00111d1c 	sub.w	$r28,$r8,$r7
1c001c68:	28808068 	ld.w	$r8,$r3,32(0x20)
1c001c6c:	67fdc507 	bge	$r8,$r7,-572(0x3fdc4) # 1c001a30 <_vfprintf_r+0x11ac>
1c001c70:	0015039d 	move	$r29,$r28
1c001c74:	53fdffff 	b	-516(0xffffdfc) # 1c001a70 <_vfprintf_r+0x11ec>
1c001c78:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001c7c:	00150305 	move	$r5,$r24
1c001c80:	00150344 	move	$r4,$r26
1c001c84:	54526000 	bl	21088(0x5260) # 1c006ee4 <__sprint_r>
1c001c88:	5fee4080 	bne	$r4,$r0,-4544(0x3ee40) # 1c000ac8 <_vfprintf_r+0x244>
1c001c8c:	28820070 	ld.w	$r16,$r3,128(0x80)
1c001c90:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001c94:	0282e06d 	addi.w	$r13,$r3,184(0xb8)
1c001c98:	0280061d 	addi.w	$r29,$r16,1(0x1)
1c001c9c:	0015033e 	move	$r30,$r25
1c001ca0:	53fb9fff 	b	-1124(0xffffb9c) # 1c00183c <_vfprintf_r+0xfb8>
1c001ca4:	280007f1 	ld.b	$r17,$r31,1(0x1)
1c001ca8:	03808252 	ori	$r18,$r18,0x20
1c001cac:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c001cb0:	53ed6fff 	b	-4756(0xfffed6c) # 1c000a1c <_vfprintf_r+0x198>
1c001cb4:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001cb8:	00150305 	move	$r5,$r24
1c001cbc:	00150344 	move	$r4,$r26
1c001cc0:	54522400 	bl	21028(0x5224) # 1c006ee4 <__sprint_r>
1c001cc4:	5fee0480 	bne	$r4,$r0,-4604(0x3ee04) # 1c000ac8 <_vfprintf_r+0x244>
1c001cc8:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001ccc:	0015032d 	move	$r13,$r25
1c001cd0:	53f88bff 	b	-1912(0xffff888) # 1c001558 <_vfprintf_r+0xcd4>
1c001cd4:	02801809 	addi.w	$r9,$r0,6(0x6)
1c001cd8:	001503dc 	move	$r28,$r30
1c001cdc:	6805cd3e 	bltu	$r9,$r30,1484(0x5cc) # 1c0022a8 <_vfprintf_r+0x1a24>
1c001ce0:	0015039b 	move	$r27,$r28
1c001ce4:	29803067 	st.w	$r7,$r3,12(0xc)
1c001ce8:	1dc80017 	pcaddu12i	$r23,-114688(0xe4000)
1c001cec:	02be02f7 	addi.w	$r23,$r23,-128(0xf80)
1c001cf0:	53f0dbff 	b	-3880(0xffff0d8) # 1c000dc8 <_vfprintf_r+0x544>
1c001cf4:	02804007 	addi.w	$r7,$r0,16(0x10)
1c001cf8:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001cfc:	1dc80012 	pcaddu12i	$r18,-114688(0xe4000)
1c001d00:	02837252 	addi.w	$r18,$r18,220(0xdc)
1c001d04:	0280401e 	addi.w	$r30,$r0,16(0x10)
1c001d08:	02801c1d 	addi.w	$r29,$r0,7(0x7)
1c001d0c:	600014fc 	blt	$r7,$r28,20(0x14) # 1c001d20 <_vfprintf_r+0x149c>
1c001d10:	50054c00 	b	1356(0x54c) # 1c00225c <_vfprintf_r+0x19d8>
1c001d14:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001d18:	02bfc39c 	addi.w	$r28,$r28,-16(0xff0)
1c001d1c:	640543dc 	bge	$r30,$r28,1344(0x540) # 1c00225c <_vfprintf_r+0x19d8>
1c001d20:	02804129 	addi.w	$r9,$r9,16(0x10)
1c001d24:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001d28:	298001b2 	st.w	$r18,$r13,0
1c001d2c:	298011be 	st.w	$r30,$r13,4(0x4)
1c001d30:	29821069 	st.w	$r9,$r3,132(0x84)
1c001d34:	29820068 	st.w	$r8,$r3,128(0x80)
1c001d38:	67ffdfa8 	bge	$r29,$r8,-36(0x3ffdc) # 1c001d14 <_vfprintf_r+0x1490>
1c001d3c:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001d40:	00150305 	move	$r5,$r24
1c001d44:	00150344 	move	$r4,$r26
1c001d48:	29802072 	st.w	$r18,$r3,8(0x8)
1c001d4c:	54519800 	bl	20888(0x5198) # 1c006ee4 <__sprint_r>
1c001d50:	5fed7880 	bne	$r4,$r0,-4744(0x3ed78) # 1c000ac8 <_vfprintf_r+0x244>
1c001d54:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001d58:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001d5c:	0015032d 	move	$r13,$r25
1c001d60:	28802072 	ld.w	$r18,$r3,8(0x8)
1c001d64:	53ffb7ff 	b	-76(0xfffffb4) # 1c001d18 <_vfprintf_r+0x1494>
1c001d68:	28803069 	ld.w	$r9,$r3,12(0xc)
1c001d6c:	28800129 	ld.w	$r9,$r9,0
1c001d70:	29803068 	st.w	$r8,$r3,12(0xc)
1c001d74:	28801068 	ld.w	$r8,$r3,4(0x4)
1c001d78:	29800128 	st.w	$r8,$r9,0
1c001d7c:	53ebffff 	b	-5124(0xfffebfc) # 1c000978 <_vfprintf_r+0xf4>
1c001d80:	00150337 	move	$r23,$r25
1c001d84:	50000c00 	b	12(0xc) # 1c001d90 <_vfprintf_r+0x150c>
1c001d88:	0015009b 	move	$r27,$r4
1c001d8c:	001500bc 	move	$r28,$r5
1c001d90:	02802806 	addi.w	$r6,$r0,10(0xa)
1c001d94:	00150007 	move	$r7,$r0
1c001d98:	00150364 	move	$r4,$r27
1c001d9c:	00150385 	move	$r5,$r28
1c001da0:	29805068 	st.w	$r8,$r3,20(0x14)
1c001da4:	2980206d 	st.w	$r13,$r3,8(0x8)
1c001da8:	29800072 	st.w	$r18,$r3,0
1c001dac:	54805400 	bl	32852(0x8054) # 1c009e00 <__umoddi3>
1c001db0:	0280c084 	addi.w	$r4,$r4,48(0x30)
1c001db4:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c001db8:	290002e4 	st.b	$r4,$r23,0
1c001dbc:	02802806 	addi.w	$r6,$r0,10(0xa)
1c001dc0:	00150007 	move	$r7,$r0
1c001dc4:	00150364 	move	$r4,$r27
1c001dc8:	00150385 	move	$r5,$r28
1c001dcc:	547af400 	bl	31476(0x7af4) # 1c0098c0 <__udivdi3>
1c001dd0:	28800072 	ld.w	$r18,$r3,0
1c001dd4:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c001dd8:	28805068 	ld.w	$r8,$r3,20(0x14)
1c001ddc:	5fffaf80 	bne	$r28,$r0,-84(0x3ffac) # 1c001d88 <_vfprintf_r+0x1504>
1c001de0:	02802409 	addi.w	$r9,$r0,9(0x9)
1c001de4:	6bffa53b 	bltu	$r9,$r27,-92(0x3ffa4) # 1c001d88 <_vfprintf_r+0x1504>
1c001de8:	00115f3c 	sub.w	$r28,$r25,$r23
1c001dec:	53efa3ff 	b	-4192(0xfffefa0) # 1c000d8c <_vfprintf_r+0x508>
1c001df0:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001df4:	00150305 	move	$r5,$r24
1c001df8:	00150344 	move	$r4,$r26
1c001dfc:	5450e800 	bl	20712(0x50e8) # 1c006ee4 <__sprint_r>
1c001e00:	5fecc880 	bne	$r4,$r0,-4920(0x3ecc8) # 1c000ac8 <_vfprintf_r+0x244>
1c001e04:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001e08:	2882007c 	ld.w	$r28,$r3,128(0x80)
1c001e0c:	0015033e 	move	$r30,$r25
1c001e10:	53f9abff 	b	-1624(0xffff9a8) # 1c0017b8 <_vfprintf_r+0xf34>
1c001e14:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001e18:	00150305 	move	$r5,$r24
1c001e1c:	00150344 	move	$r4,$r26
1c001e20:	5450c400 	bl	20676(0x50c4) # 1c006ee4 <__sprint_r>
1c001e24:	5feca480 	bne	$r4,$r0,-4956(0x3eca4) # 1c000ac8 <_vfprintf_r+0x244>
1c001e28:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001e2c:	2882007c 	ld.w	$r28,$r3,128(0x80)
1c001e30:	0015033e 	move	$r30,$r25
1c001e34:	53f95bff 	b	-1704(0xffff958) # 1c00178c <_vfprintf_r+0xf08>
1c001e38:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001e3c:	00150305 	move	$r5,$r24
1c001e40:	00150344 	move	$r4,$r26
1c001e44:	29805073 	st.w	$r19,$r3,20(0x14)
1c001e48:	29802074 	st.w	$r20,$r3,8(0x8)
1c001e4c:	54509800 	bl	20632(0x5098) # 1c006ee4 <__sprint_r>
1c001e50:	5fec7880 	bne	$r4,$r0,-5000(0x3ec78) # 1c000ac8 <_vfprintf_r+0x244>
1c001e54:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001e58:	0015032d 	move	$r13,$r25
1c001e5c:	28805073 	ld.w	$r19,$r3,20(0x14)
1c001e60:	28802074 	ld.w	$r20,$r3,8(0x8)
1c001e64:	53ef9bff 	b	-4200(0xfffef98) # 1c000dfc <_vfprintf_r+0x578>
1c001e68:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001e6c:	1dc80006 	pcaddu12i	$r6,-114688(0xe4000)
1c001e70:	02b810c6 	addi.w	$r6,$r6,-508(0xe04)
1c001e74:	02800529 	addi.w	$r9,$r9,1(0x1)
1c001e78:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001e7c:	298001a6 	st.w	$r6,$r13,0
1c001e80:	02800406 	addi.w	$r6,$r0,1(0x1)
1c001e84:	298011a6 	st.w	$r6,$r13,4(0x4)
1c001e88:	29821069 	st.w	$r9,$r3,132(0x84)
1c001e8c:	29820068 	st.w	$r8,$r3,128(0x80)
1c001e90:	02801c06 	addi.w	$r6,$r0,7(0x7)
1c001e94:	63f050c8 	blt	$r6,$r8,-4016(0x3f050) # 1c000ee4 <_vfprintf_r+0x660>
1c001e98:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001e9c:	53f06bff 	b	-3992(0xffff068) # 1c000f04 <_vfprintf_r+0x680>
1c001ea0:	2880a068 	ld.w	$r8,$r3,40(0x28)
1c001ea4:	2880b069 	ld.w	$r9,$r3,44(0x2c)
1c001ea8:	2980206d 	st.w	$r13,$r3,8(0x8)
1c001eac:	29800072 	st.w	$r18,$r3,0
1c001eb0:	00150104 	move	$r4,$r8
1c001eb4:	00150125 	move	$r5,$r9
1c001eb8:	544bec00 	bl	19436(0x4bec) # 1c006aa4 <__fpclassifyd>
1c001ebc:	29808064 	st.w	$r4,$r3,32(0x20)
1c001ec0:	28800072 	ld.w	$r18,$r3,0
1c001ec4:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c001ec8:	5c01b080 	bne	$r4,$r0,432(0x1b0) # 1c002078 <_vfprintf_r+0x17f4>
1c001ecc:	02811c09 	addi.w	$r9,$r0,71(0x47)
1c001ed0:	1dc80017 	pcaddu12i	$r23,-114688(0xe4000)
1c001ed4:	02b5a2f7 	addi.w	$r23,$r23,-664(0xd68)
1c001ed8:	6003d93d 	blt	$r9,$r29,984(0x3d8) # 1c0022b0 <_vfprintf_r+0x1a2c>
1c001edc:	02bdfc09 	addi.w	$r9,$r0,-129(0xf7f)
1c001ee0:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c001ee4:	0014a649 	and	$r9,$r18,$r9
1c001ee8:	29800069 	st.w	$r9,$r3,0
1c001eec:	0015001e 	move	$r30,$r0
1c001ef0:	02800c1b 	addi.w	$r27,$r0,3(0x3)
1c001ef4:	02800c1c 	addi.w	$r28,$r0,3(0x3)
1c001ef8:	5fee2100 	bne	$r8,$r0,-4576(0x3ee20) # 1c000d18 <_vfprintf_r+0x494>
1c001efc:	53eedbff 	b	-4392(0xfffeed8) # 1c000dd4 <_vfprintf_r+0x550>
1c001f00:	00107129 	add.w	$r9,$r9,$r28
1c001f04:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001f08:	298001b2 	st.w	$r18,$r13,0
1c001f0c:	53ef8bff 	b	-4216(0xfffef88) # 1c000e94 <_vfprintf_r+0x610>
1c001f10:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001f14:	00150305 	move	$r5,$r24
1c001f18:	00150344 	move	$r4,$r26
1c001f1c:	544fc800 	bl	20424(0x4fc8) # 1c006ee4 <__sprint_r>
1c001f20:	5feba880 	bne	$r4,$r0,-5208(0x3eba8) # 1c000ac8 <_vfprintf_r+0x244>
1c001f24:	0015032d 	move	$r13,$r25
1c001f28:	53f5dfff 	b	-2596(0xffff5dc) # 1c001504 <_vfprintf_r+0xc80>
1c001f2c:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001f30:	00150305 	move	$r5,$r24
1c001f34:	00150344 	move	$r4,$r26
1c001f38:	544fac00 	bl	20396(0x4fac) # 1c006ee4 <__sprint_r>
1c001f3c:	5feb8c80 	bne	$r4,$r0,-5236(0x3eb8c) # 1c000ac8 <_vfprintf_r+0x244>
1c001f40:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001f44:	0015032d 	move	$r13,$r25
1c001f48:	53ef2bff 	b	-4312(0xfffef28) # 1c000e70 <_vfprintf_r+0x5ec>
1c001f4c:	2880c068 	ld.w	$r8,$r3,48(0x30)
1c001f50:	2880d066 	ld.w	$r6,$r3,52(0x34)
1c001f54:	298001a8 	st.w	$r8,$r13,0
1c001f58:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001f5c:	001024c9 	add.w	$r9,$r6,$r9
1c001f60:	298011a6 	st.w	$r6,$r13,4(0x4)
1c001f64:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001f68:	29821069 	st.w	$r9,$r3,132(0x84)
1c001f6c:	29820068 	st.w	$r8,$r3,128(0x80)
1c001f70:	02801c06 	addi.w	$r6,$r0,7(0x7)
1c001f74:	600358c8 	blt	$r6,$r8,856(0x358) # 1c0022cc <_vfprintf_r+0x1a48>
1c001f78:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001f7c:	67efd0e0 	bge	$r7,$r0,-4144(0x3efd0) # 1c000f4c <_vfprintf_r+0x6c8>
1c001f80:	02bfc006 	addi.w	$r6,$r0,-16(0xff0)
1c001f84:	00111c1c 	sub.w	$r28,$r0,$r7
1c001f88:	1dc80012 	pcaddu12i	$r18,-114688(0xe4000)
1c001f8c:	02b94252 	addi.w	$r18,$r18,-432(0xe50)
1c001f90:	0280401e 	addi.w	$r30,$r0,16(0x10)
1c001f94:	02801c1d 	addi.w	$r29,$r0,7(0x7)
1c001f98:	600014e6 	blt	$r7,$r6,20(0x14) # 1c001fac <_vfprintf_r+0x1728>
1c001f9c:	5005ec00 	b	1516(0x5ec) # 1c002588 <_vfprintf_r+0x1d04>
1c001fa0:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c001fa4:	02bfc39c 	addi.w	$r28,$r28,-16(0xff0)
1c001fa8:	6405e3dc 	bge	$r30,$r28,1504(0x5e0) # 1c002588 <_vfprintf_r+0x1d04>
1c001fac:	02804129 	addi.w	$r9,$r9,16(0x10)
1c001fb0:	02800508 	addi.w	$r8,$r8,1(0x1)
1c001fb4:	298001b2 	st.w	$r18,$r13,0
1c001fb8:	298011be 	st.w	$r30,$r13,4(0x4)
1c001fbc:	29821069 	st.w	$r9,$r3,132(0x84)
1c001fc0:	29820068 	st.w	$r8,$r3,128(0x80)
1c001fc4:	67ffdfa8 	bge	$r29,$r8,-36(0x3ffdc) # 1c001fa0 <_vfprintf_r+0x171c>
1c001fc8:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c001fcc:	00150305 	move	$r5,$r24
1c001fd0:	00150344 	move	$r4,$r26
1c001fd4:	29802072 	st.w	$r18,$r3,8(0x8)
1c001fd8:	544f0c00 	bl	20236(0x4f0c) # 1c006ee4 <__sprint_r>
1c001fdc:	5feaec80 	bne	$r4,$r0,-5396(0x3eaec) # 1c000ac8 <_vfprintf_r+0x244>
1c001fe0:	28821069 	ld.w	$r9,$r3,132(0x84)
1c001fe4:	28820068 	ld.w	$r8,$r3,128(0x80)
1c001fe8:	0015032d 	move	$r13,$r25
1c001fec:	28802072 	ld.w	$r18,$r3,8(0x8)
1c001ff0:	53ffb7ff 	b	-76(0xfffffb4) # 1c001fa4 <_vfprintf_r+0x1720>
1c001ff4:	001502e4 	move	$r4,$r23
1c001ff8:	544d3800 	bl	19768(0x4d38) # 1c006d30 <strlen>
1c001ffc:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c002000:	0014109b 	nor	$r27,$r4,$r4
1c002004:	0048ff7b 	srai.w	$r27,$r27,0x1f
1c002008:	29808060 	st.w	$r0,$r3,32(0x20)
1c00200c:	0015009c 	move	$r28,$r4
1c002010:	0014ec9b 	and	$r27,$r4,$r27
1c002014:	0015001e 	move	$r30,$r0
1c002018:	2880206d 	ld.w	$r13,$r3,8(0x8)
1c00201c:	5fecfd00 	bne	$r8,$r0,-4868(0x3ecfc) # 1c000d18 <_vfprintf_r+0x494>
1c002020:	53edb7ff 	b	-4684(0xfffedb4) # 1c000dd4 <_vfprintf_r+0x550>
1c002024:	0280079d 	addi.w	$r29,$r28,1(0x1)
1c002028:	028023c7 	addi.w	$r7,$r30,8(0x8)
1c00202c:	00102d29 	add.w	$r9,$r9,$r11
1c002030:	298003d2 	st.w	$r18,$r30,0
1c002034:	298013cb 	st.w	$r11,$r30,4(0x4)
1c002038:	29821069 	st.w	$r9,$r3,132(0x84)
1c00203c:	2982007d 	st.w	$r29,$r3,128(0x80)
1c002040:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c002044:	63fc351d 	blt	$r8,$r29,-972(0x3fc34) # 1c001c78 <_vfprintf_r+0x13f4>
1c002048:	028007bd 	addi.w	$r29,$r29,1(0x1)
1c00204c:	028020ed 	addi.w	$r13,$r7,8(0x8)
1c002050:	001500fe 	move	$r30,$r7
1c002054:	53f7ebff 	b	-2072(0xffff7e8) # 1c00183c <_vfprintf_r+0xfb8>
1c002058:	29803069 	st.w	$r9,$r3,12(0xc)
1c00205c:	0015001c 	move	$r28,$r0
1c002060:	00150009 	move	$r9,$r0
1c002064:	53f0bbff 	b	-3912(0xffff0b8) # 1c00111c <_vfprintf_r+0x898>
1c002068:	29803069 	st.w	$r9,$r3,12(0xc)
1c00206c:	0015001c 	move	$r28,$r0
1c002070:	02800409 	addi.w	$r9,$r0,1(0x1)
1c002074:	53f0abff 	b	-3928(0xffff0a8) # 1c00111c <_vfprintf_r+0x898>
1c002078:	02bf7c1c 	addi.w	$r28,$r0,-33(0xfdf)
1c00207c:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c002080:	0014f3bc 	and	$r28,$r29,$r28
1c002084:	580243c9 	beq	$r30,$r9,576(0x240) # 1c0022c4 <_vfprintf_r+0x1a40>
1c002088:	02811c09 	addi.w	$r9,$r0,71(0x47)
1c00208c:	5804e789 	beq	$r28,$r9,1252(0x4e4) # 1c002570 <_vfprintf_r+0x1cec>
1c002090:	03840249 	ori	$r9,$r18,0x100
1c002094:	29800069 	st.w	$r9,$r3,0
1c002098:	2880b069 	ld.w	$r9,$r3,44(0x2c)
1c00209c:	6004c120 	blt	$r9,$r0,1216(0x4c0) # 1c00255c <_vfprintf_r+0x1cd8>
1c0020a0:	2880b07b 	ld.w	$r27,$r3,44(0x2c)
1c0020a4:	29802060 	st.w	$r0,$r3,8(0x8)
1c0020a8:	02819809 	addi.w	$r9,$r0,102(0x66)
1c0020ac:	5802b3a9 	beq	$r29,$r9,688(0x2b0) # 1c00235c <_vfprintf_r+0x1ad8>
1c0020b0:	02811809 	addi.w	$r9,$r0,70(0x46)
1c0020b4:	5802aba9 	beq	$r29,$r9,680(0x2a8) # 1c00235c <_vfprintf_r+0x1ad8>
1c0020b8:	02811409 	addi.w	$r9,$r0,69(0x45)
1c0020bc:	58051b89 	beq	$r28,$r9,1304(0x518) # 1c0025d4 <_vfprintf_r+0x1d50>
1c0020c0:	2880a068 	ld.w	$r8,$r3,40(0x28)
1c0020c4:	02819069 	addi.w	$r9,$r3,100(0x64)
1c0020c8:	0281d06b 	addi.w	$r11,$r3,116(0x74)
1c0020cc:	00150104 	move	$r4,$r8
1c0020d0:	00150085 	move	$r5,$r4
1c0020d4:	0281a06a 	addi.w	$r10,$r3,104(0x68)
1c0020d8:	001503c8 	move	$r8,$r30
1c0020dc:	02800807 	addi.w	$r7,$r0,2(0x2)
1c0020e0:	00150366 	move	$r6,$r27
1c0020e4:	00150344 	move	$r4,$r26
1c0020e8:	2980606d 	st.w	$r13,$r3,24(0x18)
1c0020ec:	29805072 	st.w	$r18,$r3,20(0x14)
1c0020f0:	540a6800 	bl	2664(0xa68) # 1c002b58 <_dtoa_r>
1c0020f4:	02819c09 	addi.w	$r9,$r0,103(0x67)
1c0020f8:	00150097 	move	$r23,$r4
1c0020fc:	28805072 	ld.w	$r18,$r3,20(0x14)
1c002100:	2880606d 	ld.w	$r13,$r3,24(0x18)
1c002104:	001503d3 	move	$r19,$r30
1c002108:	5c051ba9 	bne	$r29,$r9,1304(0x518) # 1c002620 <_vfprintf_r+0x1d9c>
1c00210c:	03400649 	andi	$r9,$r18,0x1
1c002110:	00104ef3 	add.w	$r19,$r23,$r19
1c002114:	5c02dd20 	bne	$r9,$r0,732(0x2dc) # 1c0023f0 <_vfprintf_r+0x1b6c>
1c002118:	28819068 	ld.w	$r8,$r3,100(0x64)
1c00211c:	02811c09 	addi.w	$r9,$r0,71(0x47)
1c002120:	29808068 	st.w	$r8,$r3,32(0x20)
1c002124:	2881d068 	ld.w	$r8,$r3,116(0x74)
1c002128:	00115d08 	sub.w	$r8,$r8,$r23
1c00212c:	29809068 	st.w	$r8,$r3,36(0x24)
1c002130:	5c001b89 	bne	$r28,$r9,24(0x18) # 1c002148 <_vfprintf_r+0x18c4>
1c002134:	28808068 	ld.w	$r8,$r3,32(0x20)
1c002138:	02bff409 	addi.w	$r9,$r0,-3(0xffd)
1c00213c:	60000909 	blt	$r8,$r9,8(0x8) # 1c002144 <_vfprintf_r+0x18c0>
1c002140:	6401dbc8 	bge	$r30,$r8,472(0x1d8) # 1c002318 <_vfprintf_r+0x1a94>
1c002144:	02bffbbd 	addi.w	$r29,$r29,-2(0xffe)
1c002148:	28808067 	ld.w	$r7,$r3,32(0x20)
1c00214c:	2901b07d 	st.b	$r29,$r3,108(0x6c)
1c002150:	0280ac09 	addi.w	$r9,$r0,43(0x2b)
1c002154:	02bffce8 	addi.w	$r8,$r7,-1(0xfff)
1c002158:	29819068 	st.w	$r8,$r3,100(0x64)
1c00215c:	64001100 	bge	$r8,$r0,16(0x10) # 1c00216c <_vfprintf_r+0x18e8>
1c002160:	02800408 	addi.w	$r8,$r0,1(0x1)
1c002164:	00111d08 	sub.w	$r8,$r8,$r7
1c002168:	0280b409 	addi.w	$r9,$r0,45(0x2d)
1c00216c:	2901b469 	st.b	$r9,$r3,109(0x6d)
1c002170:	02802409 	addi.w	$r9,$r0,9(0x9)
1c002174:	6404ed28 	bge	$r9,$r8,1260(0x4ec) # 1c002660 <_vfprintf_r+0x1ddc>
1c002178:	0281ec65 	addi.w	$r5,$r3,123(0x7b)
1c00217c:	14cccccb 	lu12i.w	$r11,419430(0x66666)
1c002180:	001500a6 	move	$r6,$r5
1c002184:	02999d6b 	addi.w	$r11,$r11,1639(0x667)
1c002188:	02818c10 	addi.w	$r16,$r0,99(0x63)
1c00218c:	50000c00 	b	12(0xc) # 1c002198 <_vfprintf_r+0x1914>
1c002190:	00150086 	move	$r6,$r4
1c002194:	00150128 	move	$r8,$r9
1c002198:	001d2d09 	mulh.wu	$r9,$r8,$r11
1c00219c:	0048fd07 	srai.w	$r7,$r8,0x1f
1c0021a0:	0014acf3 	and	$r19,$r7,$r11
1c0021a4:	02bffcc4 	addi.w	$r4,$r6,-1(0xfff)
1c0021a8:	00114d29 	sub.w	$r9,$r9,$r19
1c0021ac:	00488929 	srai.w	$r9,$r9,0x2
1c0021b0:	00111d29 	sub.w	$r9,$r9,$r7
1c0021b4:	00408927 	slli.w	$r7,$r9,0x2
1c0021b8:	001024e7 	add.w	$r7,$r7,$r9
1c0021bc:	004084e7 	slli.w	$r7,$r7,0x1
1c0021c0:	00111d07 	sub.w	$r7,$r8,$r7
1c0021c4:	0280c0e7 	addi.w	$r7,$r7,48(0x30)
1c0021c8:	293ffcc7 	st.b	$r7,$r6,-1(0xfff)
1c0021cc:	63ffc608 	blt	$r16,$r8,-60(0x3ffc4) # 1c002190 <_vfprintf_r+0x190c>
1c0021d0:	0280c129 	addi.w	$r9,$r9,48(0x30)
1c0021d4:	0040e129 	slli.w	$r9,$r9,0x18
1c0021d8:	0048e129 	srai.w	$r9,$r9,0x18
1c0021dc:	02bff8c8 	addi.w	$r8,$r6,-2(0xffe)
1c0021e0:	293ffc89 	st.b	$r9,$r4,-1(0xfff)
1c0021e4:	6c053105 	bgeu	$r8,$r5,1328(0x530) # 1c002714 <_vfprintf_r+0x1e90>
1c0021e8:	0281b867 	addi.w	$r7,$r3,110(0x6e)
1c0021ec:	50000800 	b	8(0x8) # 1c0021f4 <_vfprintf_r+0x1970>
1c0021f0:	28000109 	ld.b	$r9,$r8,0
1c0021f4:	028004e7 	addi.w	$r7,$r7,1(0x1)
1c0021f8:	02800508 	addi.w	$r8,$r8,1(0x1)
1c0021fc:	293ffce9 	st.b	$r9,$r7,-1(0xfff)
1c002200:	5ffff105 	bne	$r8,$r5,-16(0x3fff0) # 1c0021f0 <_vfprintf_r+0x196c>
1c002204:	0281f469 	addi.w	$r9,$r3,125(0x7d)
1c002208:	0281b868 	addi.w	$r8,$r3,110(0x6e)
1c00220c:	00111929 	sub.w	$r9,$r9,$r6
1c002210:	00102509 	add.w	$r9,$r8,$r9
1c002214:	0281b068 	addi.w	$r8,$r3,108(0x6c)
1c002218:	00112129 	sub.w	$r9,$r9,$r8
1c00221c:	2980e069 	st.w	$r9,$r3,56(0x38)
1c002220:	28809068 	ld.w	$r8,$r3,36(0x24)
1c002224:	2880e067 	ld.w	$r7,$r3,56(0x38)
1c002228:	02800409 	addi.w	$r9,$r0,1(0x1)
1c00222c:	00101d1c 	add.w	$r28,$r8,$r7
1c002230:	64044d28 	bge	$r9,$r8,1100(0x44c) # 1c00267c <_vfprintf_r+0x1df8>
1c002234:	0280079c 	addi.w	$r28,$r28,1(0x1)
1c002238:	0014739b 	nor	$r27,$r28,$r28
1c00223c:	0048ff7b 	srai.w	$r27,$r27,0x1f
1c002240:	0014ef9b 	and	$r27,$r28,$r27
1c002244:	29808060 	st.w	$r0,$r3,32(0x20)
1c002248:	5000f800 	b	248(0xf8) # 1c002340 <_vfprintf_r+0x1abc>
1c00224c:	0280b409 	addi.w	$r9,$r0,45(0x2d)
1c002250:	29017c69 	st.b	$r9,$r3,95(0x5f)
1c002254:	0280b408 	addi.w	$r8,$r0,45(0x2d)
1c002258:	53efcfff 	b	-4148(0xfffefcc) # 1c001224 <_vfprintf_r+0x9a0>
1c00225c:	00107129 	add.w	$r9,$r9,$r28
1c002260:	02800508 	addi.w	$r8,$r8,1(0x1)
1c002264:	298001b2 	st.w	$r18,$r13,0
1c002268:	298011bc 	st.w	$r28,$r13,4(0x4)
1c00226c:	29821069 	st.w	$r9,$r3,132(0x84)
1c002270:	29820068 	st.w	$r8,$r3,128(0x80)
1c002274:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c002278:	600080e8 	blt	$r7,$r8,128(0x80) # 1c0022f8 <_vfprintf_r+0x1a74>
1c00227c:	028021ad 	addi.w	$r13,$r13,8(0x8)
1c002280:	53f763ff 	b	-2208(0xffff760) # 1c0019e0 <_vfprintf_r+0x115c>
1c002284:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c002288:	00150305 	move	$r5,$r24
1c00228c:	00150344 	move	$r4,$r26
1c002290:	544c5400 	bl	19540(0x4c54) # 1c006ee4 <__sprint_r>
1c002294:	5fe83480 	bne	$r4,$r0,-6092(0x3e834) # 1c000ac8 <_vfprintf_r+0x244>
1c002298:	28819067 	ld.w	$r7,$r3,100(0x64)
1c00229c:	28821069 	ld.w	$r9,$r3,132(0x84)
1c0022a0:	0015032d 	move	$r13,$r25
1c0022a4:	53f77bff 	b	-2184(0xffff778) # 1c001a1c <_vfprintf_r+0x1198>
1c0022a8:	0280181c 	addi.w	$r28,$r0,6(0x6)
1c0022ac:	53fa37ff 	b	-1484(0xffffa34) # 1c001ce0 <_vfprintf_r+0x145c>
1c0022b0:	1dc80017 	pcaddu12i	$r23,-114688(0xe4000)
1c0022b4:	02a632f7 	addi.w	$r23,$r23,-1652(0x98c)
1c0022b8:	53fc27ff 	b	-988(0xffffc24) # 1c001edc <_vfprintf_r+0x1658>
1c0022bc:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c0022c0:	53e883ff 	b	-6016(0xfffe880) # 1c000b40 <_vfprintf_r+0x2bc>
1c0022c4:	0280181e 	addi.w	$r30,$r0,6(0x6)
1c0022c8:	53fdcbff 	b	-568(0xffffdc8) # 1c002090 <_vfprintf_r+0x180c>
1c0022cc:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c0022d0:	00150305 	move	$r5,$r24
1c0022d4:	00150344 	move	$r4,$r26
1c0022d8:	544c0c00 	bl	19468(0x4c0c) # 1c006ee4 <__sprint_r>
1c0022dc:	5fe7ec80 	bne	$r4,$r0,-6164(0x3e7ec) # 1c000ac8 <_vfprintf_r+0x244>
1c0022e0:	28819067 	ld.w	$r7,$r3,100(0x64)
1c0022e4:	28821069 	ld.w	$r9,$r3,132(0x84)
1c0022e8:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0022ec:	0015032d 	move	$r13,$r25
1c0022f0:	67ec5ce0 	bge	$r7,$r0,-5028(0x3ec5c) # 1c000f4c <_vfprintf_r+0x6c8>
1c0022f4:	53fc8fff 	b	-884(0xffffc8c) # 1c001f80 <_vfprintf_r+0x16fc>
1c0022f8:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c0022fc:	00150305 	move	$r5,$r24
1c002300:	00150344 	move	$r4,$r26
1c002304:	544be000 	bl	19424(0x4be0) # 1c006ee4 <__sprint_r>
1c002308:	5fe7c080 	bne	$r4,$r0,-6208(0x3e7c0) # 1c000ac8 <_vfprintf_r+0x244>
1c00230c:	28821069 	ld.w	$r9,$r3,132(0x84)
1c002310:	0015032d 	move	$r13,$r25
1c002314:	53f6cfff 	b	-2356(0xffff6cc) # 1c0019e0 <_vfprintf_r+0x115c>
1c002318:	28808069 	ld.w	$r9,$r3,32(0x20)
1c00231c:	28809068 	ld.w	$r8,$r3,36(0x24)
1c002320:	60031128 	blt	$r9,$r8,784(0x310) # 1c002630 <_vfprintf_r+0x1dac>
1c002324:	03400652 	andi	$r18,$r18,0x1
1c002328:	5c037240 	bne	$r18,$r0,880(0x370) # 1c002698 <_vfprintf_r+0x1e14>
1c00232c:	0014253b 	nor	$r27,$r9,$r9
1c002330:	0048ff7b 	srai.w	$r27,$r27,0x1f
1c002334:	0014ed3b 	and	$r27,$r9,$r27
1c002338:	0015013c 	move	$r28,$r9
1c00233c:	02819c1d 	addi.w	$r29,$r0,103(0x67)
1c002340:	28802069 	ld.w	$r9,$r3,8(0x8)
1c002344:	5801b920 	beq	$r9,$r0,440(0x1b8) # 1c0024fc <_vfprintf_r+0x1c78>
1c002348:	0280b409 	addi.w	$r9,$r0,45(0x2d)
1c00234c:	29017c69 	st.b	$r9,$r3,95(0x5f)
1c002350:	0015001e 	move	$r30,$r0
1c002354:	0280077b 	addi.w	$r27,$r27,1(0x1)
1c002358:	53ea7fff 	b	-5508(0xfffea7c) # 1c000dd4 <_vfprintf_r+0x550>
1c00235c:	2880a068 	ld.w	$r8,$r3,40(0x28)
1c002360:	02819069 	addi.w	$r9,$r3,100(0x64)
1c002364:	02800c07 	addi.w	$r7,$r0,3(0x3)
1c002368:	00150104 	move	$r4,$r8
1c00236c:	00150085 	move	$r5,$r4
1c002370:	0281d06b 	addi.w	$r11,$r3,116(0x74)
1c002374:	0281a06a 	addi.w	$r10,$r3,104(0x68)
1c002378:	001503c8 	move	$r8,$r30
1c00237c:	00150366 	move	$r6,$r27
1c002380:	00150344 	move	$r4,$r26
1c002384:	2980606d 	st.w	$r13,$r3,24(0x18)
1c002388:	29805072 	st.w	$r18,$r3,20(0x14)
1c00238c:	5407cc00 	bl	1996(0x7cc) # 1c002b58 <_dtoa_r>
1c002390:	00150097 	move	$r23,$r4
1c002394:	280002e7 	ld.b	$r7,$r23,0
1c002398:	0280c009 	addi.w	$r9,$r0,48(0x30)
1c00239c:	00107893 	add.w	$r19,$r4,$r30
1c0023a0:	28805072 	ld.w	$r18,$r3,20(0x14)
1c0023a4:	2880606d 	ld.w	$r13,$r3,24(0x18)
1c0023a8:	5c012ce9 	bne	$r7,$r9,300(0x12c) # 1c0024d4 <_vfprintf_r+0x1c50>
1c0023ac:	2880a067 	ld.w	$r7,$r3,40(0x28)
1c0023b0:	00150365 	move	$r5,$r27
1c0023b4:	00150006 	move	$r6,$r0
1c0023b8:	001500e4 	move	$r4,$r7
1c0023bc:	00150007 	move	$r7,$r0
1c0023c0:	29807073 	st.w	$r19,$r3,28(0x1c)
1c0023c4:	2980606d 	st.w	$r13,$r3,24(0x18)
1c0023c8:	29805072 	st.w	$r18,$r3,20(0x14)
1c0023cc:	5490c400 	bl	37060(0x90c4) # 1c00b490 <__eqdf2>
1c0023d0:	28805072 	ld.w	$r18,$r3,20(0x14)
1c0023d4:	2880606d 	ld.w	$r13,$r3,24(0x18)
1c0023d8:	28807073 	ld.w	$r19,$r3,28(0x1c)
1c0023dc:	5800f880 	beq	$r4,$r0,248(0xf8) # 1c0024d4 <_vfprintf_r+0x1c50>
1c0023e0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0023e4:	00117929 	sub.w	$r9,$r9,$r30
1c0023e8:	29819069 	st.w	$r9,$r3,100(0x64)
1c0023ec:	00102673 	add.w	$r19,$r19,$r9
1c0023f0:	2880a069 	ld.w	$r9,$r3,40(0x28)
1c0023f4:	00150365 	move	$r5,$r27
1c0023f8:	00150006 	move	$r6,$r0
1c0023fc:	00150124 	move	$r4,$r9
1c002400:	00150007 	move	$r7,$r0
1c002404:	29807073 	st.w	$r19,$r3,28(0x1c)
1c002408:	2980606d 	st.w	$r13,$r3,24(0x18)
1c00240c:	29805072 	st.w	$r18,$r3,20(0x14)
1c002410:	54908000 	bl	36992(0x9080) # 1c00b490 <__eqdf2>
1c002414:	28807073 	ld.w	$r19,$r3,28(0x1c)
1c002418:	28805072 	ld.w	$r18,$r3,20(0x14)
1c00241c:	2880606d 	ld.w	$r13,$r3,24(0x18)
1c002420:	00150269 	move	$r9,$r19
1c002424:	58002480 	beq	$r4,$r0,36(0x24) # 1c002448 <_vfprintf_r+0x1bc4>
1c002428:	2881d069 	ld.w	$r9,$r3,116(0x74)
1c00242c:	0280c006 	addi.w	$r6,$r0,48(0x30)
1c002430:	6c001933 	bgeu	$r9,$r19,24(0x18) # 1c002448 <_vfprintf_r+0x1bc4>
1c002434:	02800527 	addi.w	$r7,$r9,1(0x1)
1c002438:	2981d067 	st.w	$r7,$r3,116(0x74)
1c00243c:	29000126 	st.b	$r6,$r9,0
1c002440:	2881d069 	ld.w	$r9,$r3,116(0x74)
1c002444:	6bfff133 	bltu	$r9,$r19,-16(0x3fff0) # 1c002434 <_vfprintf_r+0x1bb0>
1c002448:	00115d29 	sub.w	$r9,$r9,$r23
1c00244c:	29809069 	st.w	$r9,$r3,36(0x24)
1c002450:	28819069 	ld.w	$r9,$r3,100(0x64)
1c002454:	02811c08 	addi.w	$r8,$r0,71(0x47)
1c002458:	29808069 	st.w	$r9,$r3,32(0x20)
1c00245c:	5bfcdb88 	beq	$r28,$r8,-808(0x3fcd8) # 1c002134 <_vfprintf_r+0x18b0>
1c002460:	02819809 	addi.w	$r9,$r0,102(0x66)
1c002464:	5ffce7a9 	bne	$r29,$r9,-796(0x3fce4) # 1c002148 <_vfprintf_r+0x18c4>
1c002468:	28808068 	ld.w	$r8,$r3,32(0x20)
1c00246c:	03400649 	andi	$r9,$r18,0x1
1c002470:	00157929 	or	$r9,$r9,$r30
1c002474:	64028408 	bge	$r0,$r8,644(0x284) # 1c0026f8 <_vfprintf_r+0x1e74>
1c002478:	5c024d20 	bne	$r9,$r0,588(0x24c) # 1c0026c4 <_vfprintf_r+0x1e40>
1c00247c:	2880807c 	ld.w	$r28,$r3,32(0x20)
1c002480:	0015039b 	move	$r27,$r28
1c002484:	53febfff 	b	-324(0xffffebc) # 1c002340 <_vfprintf_r+0x1abc>
1c002488:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c00248c:	00150305 	move	$r5,$r24
1c002490:	00150344 	move	$r4,$r26
1c002494:	544a5000 	bl	19024(0x4a50) # 1c006ee4 <__sprint_r>
1c002498:	5fe63080 	bne	$r4,$r0,-6608(0x3e630) # 1c000ac8 <_vfprintf_r+0x244>
1c00249c:	28821069 	ld.w	$r9,$r3,132(0x84)
1c0024a0:	0015032d 	move	$r13,$r25
1c0024a4:	53f527ff 	b	-2780(0xffff524) # 1c0019c8 <_vfprintf_r+0x1144>
1c0024a8:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c0024ac:	00150305 	move	$r5,$r24
1c0024b0:	00150344 	move	$r4,$r26
1c0024b4:	544a3000 	bl	18992(0x4a30) # 1c006ee4 <__sprint_r>
1c0024b8:	5fe61080 	bne	$r4,$r0,-6640(0x3e610) # 1c000ac8 <_vfprintf_r+0x244>
1c0024bc:	2881907c 	ld.w	$r28,$r3,100(0x64)
1c0024c0:	28809068 	ld.w	$r8,$r3,36(0x24)
1c0024c4:	28821069 	ld.w	$r9,$r3,132(0x84)
1c0024c8:	0015032d 	move	$r13,$r25
1c0024cc:	0011711c 	sub.w	$r28,$r8,$r28
1c0024d0:	53f5a3ff 	b	-2656(0xffff5a0) # 1c001a70 <_vfprintf_r+0x11ec>
1c0024d4:	28819069 	ld.w	$r9,$r3,100(0x64)
1c0024d8:	00102673 	add.w	$r19,$r19,$r9
1c0024dc:	53ff17ff 	b	-236(0xfffff14) # 1c0023f0 <_vfprintf_r+0x1b6c>
1c0024e0:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c0024e4:	29808060 	st.w	$r0,$r3,32(0x20)
1c0024e8:	001503db 	move	$r27,$r30
1c0024ec:	001503dc 	move	$r28,$r30
1c0024f0:	0015001e 	move	$r30,$r0
1c0024f4:	5fe82500 	bne	$r8,$r0,-6108(0x3e824) # 1c000d18 <_vfprintf_r+0x494>
1c0024f8:	53e8dfff 	b	-5924(0xfffe8dc) # 1c000dd4 <_vfprintf_r+0x550>
1c0024fc:	28017c68 	ld.b	$r8,$r3,95(0x5f)
1c002500:	0015001e 	move	$r30,$r0
1c002504:	5fe81500 	bne	$r8,$r0,-6124(0x3e814) # 1c000d18 <_vfprintf_r+0x494>
1c002508:	53e8cfff 	b	-5940(0xfffe8cc) # 1c000dd4 <_vfprintf_r+0x550>
1c00250c:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002510:	53ee1bff 	b	-4584(0xfffee18) # 1c001328 <_vfprintf_r+0xaa4>
1c002514:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002518:	53ee5bff 	b	-4520(0xfffee58) # 1c001370 <_vfprintf_r+0xaec>
1c00251c:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002520:	53e74fff 	b	-6324(0xfffe74c) # 1c000c6c <_vfprintf_r+0x3e8>
1c002524:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002528:	53e6e7ff 	b	-6428(0xfffe6e4) # 1c000c0c <_vfprintf_r+0x388>
1c00252c:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002530:	53eb1bff 	b	-5352(0xfffeb18) # 1c001048 <_vfprintf_r+0x7c4>
1c002534:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002538:	53eb53ff 	b	-5296(0xfffeb50) # 1c001088 <_vfprintf_r+0x804>
1c00253c:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002540:	53e7e7ff 	b	-6172(0xfffe7e4) # 1c000d24 <_vfprintf_r+0x4a0>
1c002544:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002548:	53ec23ff 	b	-5088(0xfffec20) # 1c001168 <_vfprintf_r+0x8e4>
1c00254c:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002550:	53ec57ff 	b	-5036(0xfffec54) # 1c0011a4 <_vfprintf_r+0x920>
1c002554:	29017c64 	st.b	$r4,$r3,95(0x5f)
1c002558:	53ed0fff 	b	-4852(0xfffed0c) # 1c001264 <_vfprintf_r+0x9e0>
1c00255c:	1500001b 	lu12i.w	$r27,-524288(0x80000)
1c002560:	0015ed3b 	xor	$r27,$r9,$r27
1c002564:	0280b409 	addi.w	$r9,$r0,45(0x2d)
1c002568:	29802069 	st.w	$r9,$r3,8(0x8)
1c00256c:	53fb3fff 	b	-1220(0xffffb3c) # 1c0020a8 <_vfprintf_r+0x1824>
1c002570:	5ffb23c0 	bne	$r30,$r0,-1248(0x3fb20) # 1c002090 <_vfprintf_r+0x180c>
1c002574:	0280041e 	addi.w	$r30,$r0,1(0x1)
1c002578:	53fb1bff 	b	-1256(0xffffb18) # 1c002090 <_vfprintf_r+0x180c>
1c00257c:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c002580:	29801069 	st.w	$r9,$r3,4(0x4)
1c002584:	53e553ff 	b	-6832(0xfffe550) # 1c000ad4 <_vfprintf_r+0x250>
1c002588:	00107129 	add.w	$r9,$r9,$r28
1c00258c:	02800508 	addi.w	$r8,$r8,1(0x1)
1c002590:	298001b2 	st.w	$r18,$r13,0
1c002594:	298011bc 	st.w	$r28,$r13,4(0x4)
1c002598:	29821069 	st.w	$r9,$r3,132(0x84)
1c00259c:	29820068 	st.w	$r8,$r3,128(0x80)
1c0025a0:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c0025a4:	67e9a4e8 	bge	$r7,$r8,-5724(0x3e9a4) # 1c000f48 <_vfprintf_r+0x6c4>
1c0025a8:	0281f066 	addi.w	$r6,$r3,124(0x7c)
1c0025ac:	00150305 	move	$r5,$r24
1c0025b0:	00150344 	move	$r4,$r26
1c0025b4:	54493000 	bl	18736(0x4930) # 1c006ee4 <__sprint_r>
1c0025b8:	5fe51080 	bne	$r4,$r0,-6896(0x3e510) # 1c000ac8 <_vfprintf_r+0x244>
1c0025bc:	28821069 	ld.w	$r9,$r3,132(0x84)
1c0025c0:	28820068 	ld.w	$r8,$r3,128(0x80)
1c0025c4:	0015032d 	move	$r13,$r25
1c0025c8:	53e987ff 	b	-5756(0xfffe984) # 1c000f4c <_vfprintf_r+0x6c8>
1c0025cc:	28800072 	ld.w	$r18,$r3,0
1c0025d0:	53ee5fff 	b	-4516(0xfffee5c) # 1c00142c <_vfprintf_r+0xba8>
1c0025d4:	2880a068 	ld.w	$r8,$r3,40(0x28)
1c0025d8:	028007d3 	addi.w	$r19,$r30,1(0x1)
1c0025dc:	0281d06b 	addi.w	$r11,$r3,116(0x74)
1c0025e0:	00150104 	move	$r4,$r8
1c0025e4:	00150085 	move	$r5,$r4
1c0025e8:	00150268 	move	$r8,$r19
1c0025ec:	0281a06a 	addi.w	$r10,$r3,104(0x68)
1c0025f0:	02819069 	addi.w	$r9,$r3,100(0x64)
1c0025f4:	02800807 	addi.w	$r7,$r0,2(0x2)
1c0025f8:	00150366 	move	$r6,$r27
1c0025fc:	00150344 	move	$r4,$r26
1c002600:	2980706d 	st.w	$r13,$r3,28(0x1c)
1c002604:	29806072 	st.w	$r18,$r3,24(0x18)
1c002608:	29805073 	st.w	$r19,$r3,20(0x14)
1c00260c:	54054c00 	bl	1356(0x54c) # 1c002b58 <_dtoa_r>
1c002610:	28805073 	ld.w	$r19,$r3,20(0x14)
1c002614:	28806072 	ld.w	$r18,$r3,24(0x18)
1c002618:	2880706d 	ld.w	$r13,$r3,28(0x1c)
1c00261c:	00150097 	move	$r23,$r4
1c002620:	02811c09 	addi.w	$r9,$r0,71(0x47)
1c002624:	5bfaeba9 	beq	$r29,$r9,-1304(0x3fae8) # 1c00210c <_vfprintf_r+0x1888>
1c002628:	00104ef3 	add.w	$r19,$r23,$r19
1c00262c:	53fdc7ff 	b	-572(0xffffdc4) # 1c0023f0 <_vfprintf_r+0x1b6c>
1c002630:	28808069 	ld.w	$r9,$r3,32(0x20)
1c002634:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c002638:	60000c09 	blt	$r0,$r9,12(0xc) # 1c002644 <_vfprintf_r+0x1dc0>
1c00263c:	0280081c 	addi.w	$r28,$r0,2(0x2)
1c002640:	0011279c 	sub.w	$r28,$r28,$r9
1c002644:	28809069 	ld.w	$r9,$r3,36(0x24)
1c002648:	02819c1d 	addi.w	$r29,$r0,103(0x67)
1c00264c:	0010279c 	add.w	$r28,$r28,$r9
1c002650:	0014739b 	nor	$r27,$r28,$r28
1c002654:	0048ff7b 	srai.w	$r27,$r27,0x1f
1c002658:	0014ef9b 	and	$r27,$r28,$r27
1c00265c:	53fce7ff 	b	-796(0xffffce4) # 1c002340 <_vfprintf_r+0x1abc>
1c002660:	0280c009 	addi.w	$r9,$r0,48(0x30)
1c002664:	0280c108 	addi.w	$r8,$r8,48(0x30)
1c002668:	2901b869 	st.b	$r9,$r3,110(0x6e)
1c00266c:	02801009 	addi.w	$r9,$r0,4(0x4)
1c002670:	2901bc68 	st.b	$r8,$r3,111(0x6f)
1c002674:	2980e069 	st.w	$r9,$r3,56(0x38)
1c002678:	53fbabff 	b	-1112(0xffffba8) # 1c002220 <_vfprintf_r+0x199c>
1c00267c:	03400649 	andi	$r9,$r18,0x1
1c002680:	29808069 	st.w	$r9,$r3,32(0x20)
1c002684:	5ffbb120 	bne	$r9,$r0,-1104(0x3fbb0) # 1c002234 <_vfprintf_r+0x19b0>
1c002688:	0014739b 	nor	$r27,$r28,$r28
1c00268c:	0048ff7b 	srai.w	$r27,$r27,0x1f
1c002690:	0014ef9b 	and	$r27,$r28,$r27
1c002694:	53fcafff 	b	-852(0xffffcac) # 1c002340 <_vfprintf_r+0x1abc>
1c002698:	28808069 	ld.w	$r9,$r3,32(0x20)
1c00269c:	02819c1d 	addi.w	$r29,$r0,103(0x67)
1c0026a0:	0280053c 	addi.w	$r28,$r9,1(0x1)
1c0026a4:	0014739b 	nor	$r27,$r28,$r28
1c0026a8:	0048ff7b 	srai.w	$r27,$r27,0x1f
1c0026ac:	0014ef9b 	and	$r27,$r28,$r27
1c0026b0:	53fc93ff 	b	-880(0xffffc90) # 1c002340 <_vfprintf_r+0x1abc>
1c0026b4:	001501a7 	move	$r7,$r13
1c0026b8:	1dc7fff2 	pcaddu12i	$r18,-114689(0xe3fff)
1c0026bc:	029c8252 	addi.w	$r18,$r18,1824(0x720)
1c0026c0:	53f96fff 	b	-1684(0xffff96c) # 1c00202c <_vfprintf_r+0x17a8>
1c0026c4:	028007c7 	addi.w	$r7,$r30,1(0x1)
1c0026c8:	001020fc 	add.w	$r28,$r7,$r8
1c0026cc:	0015039b 	move	$r27,$r28
1c0026d0:	53fc73ff 	b	-912(0xffffc70) # 1c002340 <_vfprintf_r+0x1abc>
1c0026d4:	28803067 	ld.w	$r7,$r3,12(0xc)
1c0026d8:	288000fe 	ld.w	$r30,$r7,0
1c0026dc:	028010e7 	addi.w	$r7,$r7,4(0x4)
1c0026e0:	64000bc0 	bge	$r30,$r0,8(0x8) # 1c0026e8 <_vfprintf_r+0x1e64>
1c0026e4:	02bffc1e 	addi.w	$r30,$r0,-1(0xfff)
1c0026e8:	280007f1 	ld.b	$r17,$r31,1(0x1)
1c0026ec:	29803067 	st.w	$r7,$r3,12(0xc)
1c0026f0:	0015013f 	move	$r31,$r9
1c0026f4:	53e32bff 	b	-7384(0xfffe328) # 1c000a1c <_vfprintf_r+0x198>
1c0026f8:	5c001120 	bne	$r9,$r0,16(0x10) # 1c002708 <_vfprintf_r+0x1e84>
1c0026fc:	0280041b 	addi.w	$r27,$r0,1(0x1)
1c002700:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c002704:	53fc3fff 	b	-964(0xffffc3c) # 1c002340 <_vfprintf_r+0x1abc>
1c002708:	02800bdc 	addi.w	$r28,$r30,2(0x2)
1c00270c:	0015039b 	move	$r27,$r28
1c002710:	53fc33ff 	b	-976(0xffffc30) # 1c002340 <_vfprintf_r+0x1abc>
1c002714:	02800809 	addi.w	$r9,$r0,2(0x2)
1c002718:	2980e069 	st.w	$r9,$r3,56(0x38)
1c00271c:	53fb07ff 	b	-1276(0xffffb04) # 1c002220 <_vfprintf_r+0x199c>

1c002720 <vfprintf>:
vfprintf():
1c002720:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002724:	28955129 	ld.w	$r9,$r9,1364(0x554)
1c002728:	001500c7 	move	$r7,$r6
1c00272c:	001500a6 	move	$r6,$r5
1c002730:	00150085 	move	$r5,$r4
1c002734:	28800124 	ld.w	$r4,$r9,0
1c002738:	53e14fff 	b	-7860(0xfffe14c) # 1c000884 <_vfprintf_r>

1c00273c <__sbprintf>:
__sbprintf():
1c00273c:	2a4030a9 	ld.hu	$r9,$r5,12(0xc)
1c002740:	288180af 	ld.w	$r15,$r5,96(0x60)
1c002744:	2a4038ad 	ld.hu	$r13,$r5,14(0xe)
1c002748:	288070ab 	ld.w	$r11,$r5,28(0x1c)
1c00274c:	288090aa 	ld.w	$r10,$r5,36(0x24)
1c002750:	02bff408 	addi.w	$r8,$r0,-3(0xffd)
1c002754:	02ae0063 	addi.w	$r3,$r3,-1152(0xb80)
1c002758:	0014a129 	and	$r9,$r9,$r8
1c00275c:	2991e076 	st.w	$r22,$r3,1144(0x478)
1c002760:	02900008 	addi.w	$r8,$r0,1024(0x400)
1c002764:	29406069 	st.h	$r9,$r3,24(0x18)
1c002768:	001500b6 	move	$r22,$r5
1c00276c:	0281c069 	addi.w	$r9,$r3,112(0x70)
1c002770:	02803065 	addi.w	$r5,$r3,12(0xc)
1c002774:	2991d077 	st.w	$r23,$r3,1140(0x474)
1c002778:	2991c078 	st.w	$r24,$r3,1136(0x470)
1c00277c:	2991f061 	st.w	$r1,$r3,1148(0x47c)
1c002780:	00150098 	move	$r24,$r4
1c002784:	2981b06f 	st.w	$r15,$r3,108(0x6c)
1c002788:	2940686d 	st.h	$r13,$r3,26(0x1a)
1c00278c:	2980a06b 	st.w	$r11,$r3,40(0x28)
1c002790:	2980c06a 	st.w	$r10,$r3,48(0x30)
1c002794:	29803069 	st.w	$r9,$r3,12(0xc)
1c002798:	29807069 	st.w	$r9,$r3,28(0x1c)
1c00279c:	29805068 	st.w	$r8,$r3,20(0x14)
1c0027a0:	29808068 	st.w	$r8,$r3,32(0x20)
1c0027a4:	29809060 	st.w	$r0,$r3,36(0x24)
1c0027a8:	57e0dfff 	bl	-7972(0xfffe0dc) # 1c000884 <_vfprintf_r>
1c0027ac:	00150097 	move	$r23,$r4
1c0027b0:	64003880 	bge	$r4,$r0,56(0x38) # 1c0027e8 <__sbprintf+0xac>
1c0027b4:	2a406069 	ld.hu	$r9,$r3,24(0x18)
1c0027b8:	03410129 	andi	$r9,$r9,0x40
1c0027bc:	58001120 	beq	$r9,$r0,16(0x10) # 1c0027cc <__sbprintf+0x90>
1c0027c0:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c0027c4:	03810129 	ori	$r9,$r9,0x40
1c0027c8:	294032c9 	st.h	$r9,$r22,12(0xc)
1c0027cc:	2891f061 	ld.w	$r1,$r3,1148(0x47c)
1c0027d0:	2891e076 	ld.w	$r22,$r3,1144(0x478)
1c0027d4:	001502e4 	move	$r4,$r23
1c0027d8:	2891c078 	ld.w	$r24,$r3,1136(0x470)
1c0027dc:	2891d077 	ld.w	$r23,$r3,1140(0x474)
1c0027e0:	02920063 	addi.w	$r3,$r3,1152(0x480)
1c0027e4:	4c000020 	jirl	$r0,$r1,0
1c0027e8:	02803065 	addi.w	$r5,$r3,12(0xc)
1c0027ec:	00150304 	move	$r4,$r24
1c0027f0:	541b8000 	bl	7040(0x1b80) # 1c004370 <_fflush_r>
1c0027f4:	5bffc080 	beq	$r4,$r0,-64(0x3ffc0) # 1c0027b4 <__sbprintf+0x78>
1c0027f8:	02bffc17 	addi.w	$r23,$r0,-1(0xfff)
1c0027fc:	53ffbbff 	b	-72(0xfffffb8) # 1c0027b4 <__sbprintf+0x78>

1c002800 <__swsetup_r>:
__swsetup_r():
1c002800:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002804:	2891d129 	ld.w	$r9,$r9,1140(0x474)
1c002808:	28800129 	ld.w	$r9,$r9,0
1c00280c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c002810:	29802076 	st.w	$r22,$r3,8(0x8)
1c002814:	29801077 	st.w	$r23,$r3,4(0x4)
1c002818:	29803061 	st.w	$r1,$r3,12(0xc)
1c00281c:	00150097 	move	$r23,$r4
1c002820:	001500b6 	move	$r22,$r5
1c002824:	58000d20 	beq	$r9,$r0,12(0xc) # 1c002830 <__swsetup_r+0x30>
1c002828:	2880e128 	ld.w	$r8,$r9,56(0x38)
1c00282c:	58008d00 	beq	$r8,$r0,140(0x8c) # 1c0028b8 <__swsetup_r+0xb8>
1c002830:	284032c8 	ld.h	$r8,$r22,12(0xc)
1c002834:	0040c109 	slli.w	$r9,$r8,0x10
1c002838:	0044c129 	srli.w	$r9,$r9,0x10
1c00283c:	03402127 	andi	$r7,$r9,0x8
1c002840:	580094e0 	beq	$r7,$r0,148(0x94) # 1c0028d4 <__swsetup_r+0xd4>
1c002844:	288042c7 	ld.w	$r7,$r22,16(0x10)
1c002848:	5800b4e0 	beq	$r7,$r0,180(0xb4) # 1c0028fc <__swsetup_r+0xfc>
1c00284c:	03400528 	andi	$r8,$r9,0x1
1c002850:	58003100 	beq	$r8,$r0,48(0x30) # 1c002880 <__swsetup_r+0x80>
1c002854:	288052c9 	ld.w	$r9,$r22,20(0x14)
1c002858:	298022c0 	st.w	$r0,$r22,8(0x8)
1c00285c:	00150004 	move	$r4,$r0
1c002860:	00112409 	sub.w	$r9,$r0,$r9
1c002864:	298062c9 	st.w	$r9,$r22,24(0x18)
1c002868:	580034e0 	beq	$r7,$r0,52(0x34) # 1c00289c <__swsetup_r+0x9c>
1c00286c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c002870:	28802076 	ld.w	$r22,$r3,8(0x8)
1c002874:	28801077 	ld.w	$r23,$r3,4(0x4)
1c002878:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00287c:	4c000020 	jirl	$r0,$r1,0
1c002880:	03400929 	andi	$r9,$r9,0x2
1c002884:	00150008 	move	$r8,$r0
1c002888:	5c000920 	bne	$r9,$r0,8(0x8) # 1c002890 <__swsetup_r+0x90>
1c00288c:	288052c8 	ld.w	$r8,$r22,20(0x14)
1c002890:	298022c8 	st.w	$r8,$r22,8(0x8)
1c002894:	00150004 	move	$r4,$r0
1c002898:	5fffd4e0 	bne	$r7,$r0,-44(0x3ffd4) # 1c00286c <__swsetup_r+0x6c>
1c00289c:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c0028a0:	03420128 	andi	$r8,$r9,0x80
1c0028a4:	5bffc900 	beq	$r8,$r0,-56(0x3ffc8) # 1c00286c <__swsetup_r+0x6c>
1c0028a8:	03810129 	ori	$r9,$r9,0x40
1c0028ac:	294032c9 	st.h	$r9,$r22,12(0xc)
1c0028b0:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c0028b4:	53ffbbff 	b	-72(0xfffffb8) # 1c00286c <__swsetup_r+0x6c>
1c0028b8:	00150124 	move	$r4,$r9
1c0028bc:	541e7000 	bl	7792(0x1e70) # 1c00472c <__sinit>
1c0028c0:	284032c8 	ld.h	$r8,$r22,12(0xc)
1c0028c4:	0040c109 	slli.w	$r9,$r8,0x10
1c0028c8:	0044c129 	srli.w	$r9,$r9,0x10
1c0028cc:	03402127 	andi	$r7,$r9,0x8
1c0028d0:	5fff74e0 	bne	$r7,$r0,-140(0x3ff74) # 1c002844 <__swsetup_r+0x44>
1c0028d4:	03404127 	andi	$r7,$r9,0x10
1c0028d8:	580080e0 	beq	$r7,$r0,128(0x80) # 1c002958 <__swsetup_r+0x158>
1c0028dc:	03401129 	andi	$r9,$r9,0x4
1c0028e0:	5c004120 	bne	$r9,$r0,64(0x40) # 1c002920 <__swsetup_r+0x120>
1c0028e4:	288042c7 	ld.w	$r7,$r22,16(0x10)
1c0028e8:	03802109 	ori	$r9,$r8,0x8
1c0028ec:	294032c9 	st.h	$r9,$r22,12(0xc)
1c0028f0:	0040c129 	slli.w	$r9,$r9,0x10
1c0028f4:	0044c129 	srli.w	$r9,$r9,0x10
1c0028f8:	5fff54e0 	bne	$r7,$r0,-172(0x3ff54) # 1c00284c <__swsetup_r+0x4c>
1c0028fc:	034a0128 	andi	$r8,$r9,0x280
1c002900:	02880006 	addi.w	$r6,$r0,512(0x200)
1c002904:	5bff4906 	beq	$r8,$r6,-184(0x3ff48) # 1c00284c <__swsetup_r+0x4c>
1c002908:	001502c5 	move	$r5,$r22
1c00290c:	001502e4 	move	$r4,$r23
1c002910:	5424dc00 	bl	9436(0x24dc) # 1c004dec <__smakebuf_r>
1c002914:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c002918:	288042c7 	ld.w	$r7,$r22,16(0x10)
1c00291c:	53ff33ff 	b	-208(0xfffff30) # 1c00284c <__swsetup_r+0x4c>
1c002920:	2880c2c5 	ld.w	$r5,$r22,48(0x30)
1c002924:	58001ca0 	beq	$r5,$r0,28(0x1c) # 1c002940 <__swsetup_r+0x140>
1c002928:	028102c9 	addi.w	$r9,$r22,64(0x40)
1c00292c:	580010a9 	beq	$r5,$r9,16(0x10) # 1c00293c <__swsetup_r+0x13c>
1c002930:	001502e4 	move	$r4,$r23
1c002934:	541f4800 	bl	8008(0x1f48) # 1c00487c <_free_r>
1c002938:	284032c8 	ld.h	$r8,$r22,12(0xc)
1c00293c:	2980c2c0 	st.w	$r0,$r22,48(0x30)
1c002940:	288042c7 	ld.w	$r7,$r22,16(0x10)
1c002944:	02bf6c09 	addi.w	$r9,$r0,-37(0xfdb)
1c002948:	0014a508 	and	$r8,$r8,$r9
1c00294c:	298012c0 	st.w	$r0,$r22,4(0x4)
1c002950:	298002c7 	st.w	$r7,$r22,0
1c002954:	53ff97ff 	b	-108(0xfffff94) # 1c0028e8 <__swsetup_r+0xe8>
1c002958:	02802409 	addi.w	$r9,$r0,9(0x9)
1c00295c:	298002e9 	st.w	$r9,$r23,0
1c002960:	03810108 	ori	$r8,$r8,0x40
1c002964:	294032c8 	st.h	$r8,$r22,12(0xc)
1c002968:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c00296c:	53ff03ff 	b	-256(0xfffff00) # 1c00286c <__swsetup_r+0x6c>

1c002970 <quorem>:
quorem():
1c002970:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c002974:	29805077 	st.w	$r23,$r3,20(0x14)
1c002978:	28804089 	ld.w	$r9,$r4,16(0x10)
1c00297c:	288040b7 	ld.w	$r23,$r5,16(0x10)
1c002980:	29807061 	st.w	$r1,$r3,28(0x1c)
1c002984:	29806076 	st.w	$r22,$r3,24(0x18)
1c002988:	29804078 	st.w	$r24,$r3,16(0x10)
1c00298c:	29803079 	st.w	$r25,$r3,12(0xc)
1c002990:	2980207a 	st.w	$r26,$r3,8(0x8)
1c002994:	2980107b 	st.w	$r27,$r3,4(0x4)
1c002998:	6001b937 	blt	$r9,$r23,440(0x1b8) # 1c002b50 <quorem+0x1e0>
1c00299c:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c0029a0:	00408af0 	slli.w	$r16,$r23,0x2
1c0029a4:	028050b6 	addi.w	$r22,$r5,20(0x14)
1c0029a8:	001042d9 	add.w	$r25,$r22,$r16
1c0029ac:	0280509a 	addi.w	$r26,$r4,20(0x14)
1c0029b0:	00104350 	add.w	$r16,$r26,$r16
1c0029b4:	28800329 	ld.w	$r9,$r25,0
1c0029b8:	28800208 	ld.w	$r8,$r16,0
1c0029bc:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0029c0:	00212518 	div.wu	$r24,$r8,$r9
1c0029c4:	6800bd09 	bltu	$r8,$r9,188(0xbc) # 1c002a80 <quorem+0x110>
1c0029c8:	140001eb 	lu12i.w	$r11,15(0xf)
1c0029cc:	001502cf 	move	$r15,$r22
1c0029d0:	0015034d 	move	$r13,$r26
1c0029d4:	00150011 	move	$r17,$r0
1c0029d8:	00150009 	move	$r9,$r0
1c0029dc:	03bffd6b 	ori	$r11,$r11,0xfff
1c0029e0:	028011ef 	addi.w	$r15,$r15,4(0x4)
1c0029e4:	28bff1e6 	ld.w	$r6,$r15,-4(0xffc)
1c0029e8:	288001a8 	ld.w	$r8,$r13,0
1c0029ec:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c0029f0:	0014acca 	and	$r10,$r6,$r11
1c0029f4:	001c614a 	mul.w	$r10,$r10,$r24
1c0029f8:	0044c0c7 	srli.w	$r7,$r6,0x10
1c0029fc:	0014ad12 	and	$r18,$r8,$r11
1c002a00:	0044c108 	srli.w	$r8,$r8,0x10
1c002a04:	001c60e7 	mul.w	$r7,$r7,$r24
1c002a08:	0010454a 	add.w	$r10,$r10,$r17
1c002a0c:	0044c151 	srli.w	$r17,$r10,0x10
1c002a10:	0014ad46 	and	$r6,$r10,$r11
1c002a14:	00111929 	sub.w	$r9,$r9,$r6
1c002a18:	00104926 	add.w	$r6,$r9,$r18
1c002a1c:	0048c0ca 	srai.w	$r10,$r6,0x10
1c002a20:	0014acc6 	and	$r6,$r6,$r11
1c002a24:	001044e7 	add.w	$r7,$r7,$r17
1c002a28:	0014ace9 	and	$r9,$r7,$r11
1c002a2c:	00112509 	sub.w	$r9,$r8,$r9
1c002a30:	00102929 	add.w	$r9,$r9,$r10
1c002a34:	0040c128 	slli.w	$r8,$r9,0x10
1c002a38:	00151906 	or	$r6,$r8,$r6
1c002a3c:	29bff1a6 	st.w	$r6,$r13,-4(0xffc)
1c002a40:	0044c0f1 	srli.w	$r17,$r7,0x10
1c002a44:	0048c129 	srai.w	$r9,$r9,0x10
1c002a48:	6fff9b2f 	bgeu	$r25,$r15,-104(0x3ff98) # 1c0029e0 <quorem+0x70>
1c002a4c:	28800209 	ld.w	$r9,$r16,0
1c002a50:	5c003120 	bne	$r9,$r0,48(0x30) # 1c002a80 <quorem+0x110>
1c002a54:	02bff209 	addi.w	$r9,$r16,-4(0xffc)
1c002a58:	6c002749 	bgeu	$r26,$r9,36(0x24) # 1c002a7c <quorem+0x10c>
1c002a5c:	28bff208 	ld.w	$r8,$r16,-4(0xffc)
1c002a60:	58001100 	beq	$r8,$r0,16(0x10) # 1c002a70 <quorem+0x100>
1c002a64:	50001800 	b	24(0x18) # 1c002a7c <quorem+0x10c>
1c002a68:	28800128 	ld.w	$r8,$r9,0
1c002a6c:	5c001100 	bne	$r8,$r0,16(0x10) # 1c002a7c <quorem+0x10c>
1c002a70:	02bff129 	addi.w	$r9,$r9,-4(0xffc)
1c002a74:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c002a78:	6bfff349 	bltu	$r26,$r9,-16(0x3fff0) # 1c002a68 <quorem+0xf8>
1c002a7c:	29804097 	st.w	$r23,$r4,16(0x10)
1c002a80:	0015009b 	move	$r27,$r4
1c002a84:	54389c00 	bl	14492(0x389c) # 1c006320 <__mcmp>
1c002a88:	6000a080 	blt	$r4,$r0,160(0xa0) # 1c002b28 <quorem+0x1b8>
1c002a8c:	140001e4 	lu12i.w	$r4,15(0xf)
1c002a90:	02800718 	addi.w	$r24,$r24,1(0x1)
1c002a94:	00150345 	move	$r5,$r26
1c002a98:	00150009 	move	$r9,$r0
1c002a9c:	03bffc84 	ori	$r4,$r4,0xfff
1c002aa0:	028012d6 	addi.w	$r22,$r22,4(0x4)
1c002aa4:	28bff2c6 	ld.w	$r6,$r22,-4(0xffc)
1c002aa8:	288000a8 	ld.w	$r8,$r5,0
1c002aac:	028010a5 	addi.w	$r5,$r5,4(0x4)
1c002ab0:	001490c7 	and	$r7,$r6,$r4
1c002ab4:	00111d29 	sub.w	$r9,$r9,$r7
1c002ab8:	00149107 	and	$r7,$r8,$r4
1c002abc:	00101d27 	add.w	$r7,$r9,$r7
1c002ac0:	0044c0c6 	srli.w	$r6,$r6,0x10
1c002ac4:	0044c109 	srli.w	$r9,$r8,0x10
1c002ac8:	00111929 	sub.w	$r9,$r9,$r6
1c002acc:	0048c0e8 	srai.w	$r8,$r7,0x10
1c002ad0:	00102129 	add.w	$r9,$r9,$r8
1c002ad4:	0040c128 	slli.w	$r8,$r9,0x10
1c002ad8:	001490e7 	and	$r7,$r7,$r4
1c002adc:	00151d07 	or	$r7,$r8,$r7
1c002ae0:	29bff0a7 	st.w	$r7,$r5,-4(0xffc)
1c002ae4:	0048c129 	srai.w	$r9,$r9,0x10
1c002ae8:	6fffbb36 	bgeu	$r25,$r22,-72(0x3ffb8) # 1c002aa0 <quorem+0x130>
1c002aec:	00408ae8 	slli.w	$r8,$r23,0x2
1c002af0:	00102348 	add.w	$r8,$r26,$r8
1c002af4:	28800109 	ld.w	$r9,$r8,0
1c002af8:	5c003120 	bne	$r9,$r0,48(0x30) # 1c002b28 <quorem+0x1b8>
1c002afc:	02bff109 	addi.w	$r9,$r8,-4(0xffc)
1c002b00:	6c002749 	bgeu	$r26,$r9,36(0x24) # 1c002b24 <quorem+0x1b4>
1c002b04:	28bff108 	ld.w	$r8,$r8,-4(0xffc)
1c002b08:	58001100 	beq	$r8,$r0,16(0x10) # 1c002b18 <quorem+0x1a8>
1c002b0c:	50001800 	b	24(0x18) # 1c002b24 <quorem+0x1b4>
1c002b10:	28800128 	ld.w	$r8,$r9,0
1c002b14:	5c001100 	bne	$r8,$r0,16(0x10) # 1c002b24 <quorem+0x1b4>
1c002b18:	02bff129 	addi.w	$r9,$r9,-4(0xffc)
1c002b1c:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c002b20:	6bfff349 	bltu	$r26,$r9,-16(0x3fff0) # 1c002b10 <quorem+0x1a0>
1c002b24:	29804377 	st.w	$r23,$r27,16(0x10)
1c002b28:	00150304 	move	$r4,$r24
1c002b2c:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c002b30:	28806076 	ld.w	$r22,$r3,24(0x18)
1c002b34:	28805077 	ld.w	$r23,$r3,20(0x14)
1c002b38:	28804078 	ld.w	$r24,$r3,16(0x10)
1c002b3c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c002b40:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c002b44:	2880107b 	ld.w	$r27,$r3,4(0x4)
1c002b48:	02808063 	addi.w	$r3,$r3,32(0x20)
1c002b4c:	4c000020 	jirl	$r0,$r1,0
1c002b50:	00150004 	move	$r4,$r0
1c002b54:	53ffdbff 	b	-40(0xfffffd8) # 1c002b2c <quorem+0x1bc>

1c002b58 <_dtoa_r>:
_dtoa_r():
1c002b58:	2881008d 	ld.w	$r13,$r4,64(0x40)
1c002b5c:	02bd4063 	addi.w	$r3,$r3,-176(0xf50)
1c002b60:	2982a076 	st.w	$r22,$r3,168(0xa8)
1c002b64:	29829077 	st.w	$r23,$r3,164(0xa4)
1c002b68:	29828078 	st.w	$r24,$r3,160(0xa0)
1c002b6c:	29827079 	st.w	$r25,$r3,156(0x9c)
1c002b70:	2982507b 	st.w	$r27,$r3,148(0x94)
1c002b74:	2982207e 	st.w	$r30,$r3,136(0x88)
1c002b78:	2982b061 	st.w	$r1,$r3,172(0xac)
1c002b7c:	2982607a 	st.w	$r26,$r3,152(0x98)
1c002b80:	2982407c 	st.w	$r28,$r3,144(0x90)
1c002b84:	2982307d 	st.w	$r29,$r3,140(0x8c)
1c002b88:	2982107f 	st.w	$r31,$r3,132(0x84)
1c002b8c:	29803067 	st.w	$r7,$r3,12(0xc)
1c002b90:	2980a068 	st.w	$r8,$r3,40(0x28)
1c002b94:	29807069 	st.w	$r9,$r3,28(0x1c)
1c002b98:	2980506b 	st.w	$r11,$r3,20(0x14)
1c002b9c:	00150096 	move	$r22,$r4
1c002ba0:	001500b9 	move	$r25,$r5
1c002ba4:	001500d8 	move	$r24,$r6
1c002ba8:	0015015b 	move	$r27,$r10
1c002bac:	001500be 	move	$r30,$r5
1c002bb0:	001500d7 	move	$r23,$r6
1c002bb4:	580025a0 	beq	$r13,$r0,36(0x24) # 1c002bd8 <_dtoa_r+0x80>
1c002bb8:	28811088 	ld.w	$r8,$r4,68(0x44)
1c002bbc:	02800409 	addi.w	$r9,$r0,1(0x1)
1c002bc0:	001501a5 	move	$r5,$r13
1c002bc4:	00172129 	sll.w	$r9,$r9,$r8
1c002bc8:	298011a8 	st.w	$r8,$r13,4(0x4)
1c002bcc:	298021a9 	st.w	$r9,$r13,8(0x8)
1c002bd0:	542ef400 	bl	12020(0x2ef4) # 1c005ac4 <_Bfree>
1c002bd4:	298102c0 	st.w	$r0,$r22,64(0x40)
1c002bd8:	0015031a 	move	$r26,$r24
1c002bdc:	6005ff00 	blt	$r24,$r0,1532(0x5fc) # 1c0031d8 <_dtoa_r+0x680>
1c002be0:	14ffe009 	lu12i.w	$r9,524032(0x7ff00)
1c002be4:	29800360 	st.w	$r0,$r27,0
1c002be8:	0014a748 	and	$r8,$r26,$r9
1c002bec:	58061109 	beq	$r8,$r9,1552(0x610) # 1c0031fc <_dtoa_r+0x6a4>
1c002bf0:	00150324 	move	$r4,$r25
1c002bf4:	001502e5 	move	$r5,$r23
1c002bf8:	00150006 	move	$r6,$r0
1c002bfc:	00150007 	move	$r7,$r0
1c002c00:	2980c079 	st.w	$r25,$r3,48(0x30)
1c002c04:	2980d077 	st.w	$r23,$r3,52(0x34)
1c002c08:	54888800 	bl	34952(0x8888) # 1c00b490 <__eqdf2>
1c002c0c:	5c006480 	bne	$r4,$r0,100(0x64) # 1c002c70 <_dtoa_r+0x118>
1c002c10:	28807068 	ld.w	$r8,$r3,28(0x1c)
1c002c14:	28805067 	ld.w	$r7,$r3,20(0x14)
1c002c18:	02800409 	addi.w	$r9,$r0,1(0x1)
1c002c1c:	29800109 	st.w	$r9,$r8,0
1c002c20:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c002c24:	0287a129 	addi.w	$r9,$r9,488(0x1e8)
1c002c28:	58062ce0 	beq	$r7,$r0,1580(0x62c) # 1c003254 <_dtoa_r+0x6fc>
1c002c2c:	02800528 	addi.w	$r8,$r9,1(0x1)
1c002c30:	298000e8 	st.w	$r8,$r7,0
1c002c34:	29804069 	st.w	$r9,$r3,16(0x10)
1c002c38:	2882b061 	ld.w	$r1,$r3,172(0xac)
1c002c3c:	2882a076 	ld.w	$r22,$r3,168(0xa8)
1c002c40:	28804064 	ld.w	$r4,$r3,16(0x10)
1c002c44:	28829077 	ld.w	$r23,$r3,164(0xa4)
1c002c48:	28828078 	ld.w	$r24,$r3,160(0xa0)
1c002c4c:	28827079 	ld.w	$r25,$r3,156(0x9c)
1c002c50:	2882607a 	ld.w	$r26,$r3,152(0x98)
1c002c54:	2882507b 	ld.w	$r27,$r3,148(0x94)
1c002c58:	2882407c 	ld.w	$r28,$r3,144(0x90)
1c002c5c:	2882307d 	ld.w	$r29,$r3,140(0x8c)
1c002c60:	2882207e 	ld.w	$r30,$r3,136(0x88)
1c002c64:	2882107f 	ld.w	$r31,$r3,132(0x84)
1c002c68:	0282c063 	addi.w	$r3,$r3,176(0xb0)
1c002c6c:	4c000020 	jirl	$r0,$r1,0
1c002c70:	0281e068 	addi.w	$r8,$r3,120(0x78)
1c002c74:	0281f067 	addi.w	$r7,$r3,124(0x7c)
1c002c78:	001502e6 	move	$r6,$r23
1c002c7c:	00150325 	move	$r5,$r25
1c002c80:	001502c4 	move	$r4,$r22
1c002c84:	543a5400 	bl	14932(0x3a54) # 1c0066d8 <__d2b>
1c002c88:	0044d35c 	srli.w	$r28,$r26,0x14
1c002c8c:	00150098 	move	$r24,$r4
1c002c90:	5c05cf80 	bne	$r28,$r0,1484(0x5cc) # 1c00325c <_dtoa_r+0x704>
1c002c94:	2881e07d 	ld.w	$r29,$r3,120(0x78)
1c002c98:	2881f07c 	ld.w	$r28,$r3,124(0x7c)
1c002c9c:	02808009 	addi.w	$r9,$r0,32(0x20)
1c002ca0:	001073bc 	add.w	$r28,$r29,$r28
1c002ca4:	0290cb84 	addi.w	$r4,$r28,1074(0x432)
1c002ca8:	640ba524 	bge	$r9,$r4,2980(0xba4) # 1c00384c <_dtoa_r+0xcf4>
1c002cac:	00111009 	sub.w	$r9,$r0,$r4
1c002cb0:	02904b84 	addi.w	$r4,$r28,1042(0x412)
1c002cb4:	0017275a 	sll.w	$r26,$r26,$r9
1c002cb8:	00179324 	srl.w	$r4,$r25,$r4
1c002cbc:	00151344 	or	$r4,$r26,$r4
1c002cc0:	549ca000 	bl	40096(0x9ca0) # 1c00c960 <__floatunsidf>
1c002cc4:	15fc2009 	lu12i.w	$r9,-7936(0xfe100)
1c002cc8:	00101525 	add.w	$r5,$r9,$r5
1c002ccc:	02800409 	addi.w	$r9,$r0,1(0x1)
1c002cd0:	02bfff9c 	addi.w	$r28,$r28,-1(0xfff)
1c002cd4:	29810069 	st.w	$r9,$r3,64(0x40)
1c002cd8:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002cdc:	02b94129 	addi.w	$r9,$r9,-432(0xe50)
1c002ce0:	28800126 	ld.w	$r6,$r9,0
1c002ce4:	28801127 	ld.w	$r7,$r9,4(0x4)
1c002ce8:	54913800 	bl	37176(0x9138) # 1c00be20 <__subdf3>
1c002cec:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002cf0:	02b91129 	addi.w	$r9,$r9,-444(0xe44)
1c002cf4:	28800126 	ld.w	$r6,$r9,0
1c002cf8:	28801127 	ld.w	$r7,$r9,4(0x4)
1c002cfc:	548a7400 	bl	35444(0x8a74) # 1c00b770 <__muldf3>
1c002d00:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002d04:	02b8e129 	addi.w	$r9,$r9,-456(0xe38)
1c002d08:	28800126 	ld.w	$r6,$r9,0
1c002d0c:	28801127 	ld.w	$r7,$r9,4(0x4)
1c002d10:	5475f000 	bl	30192(0x75f0) # 1c00a300 <__adddf3>
1c002d14:	0015009a 	move	$r26,$r4
1c002d18:	00150384 	move	$r4,$r28
1c002d1c:	001500bb 	move	$r27,$r5
1c002d20:	549b1000 	bl	39696(0x9b10) # 1c00c830 <__floatsidf>
1c002d24:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002d28:	02b87129 	addi.w	$r9,$r9,-484(0xe1c)
1c002d2c:	28800126 	ld.w	$r6,$r9,0
1c002d30:	28801127 	ld.w	$r7,$r9,4(0x4)
1c002d34:	548a3c00 	bl	35388(0x8a3c) # 1c00b770 <__muldf3>
1c002d38:	00150086 	move	$r6,$r4
1c002d3c:	001500a7 	move	$r7,$r5
1c002d40:	00150344 	move	$r4,$r26
1c002d44:	00150365 	move	$r5,$r27
1c002d48:	5475b800 	bl	30136(0x75b8) # 1c00a300 <__adddf3>
1c002d4c:	0015009a 	move	$r26,$r4
1c002d50:	001500bb 	move	$r27,$r5
1c002d54:	549a4c00 	bl	39500(0x9a4c) # 1c00c7a0 <__fixdfsi>
1c002d58:	0015009f 	move	$r31,$r4
1c002d5c:	00150006 	move	$r6,$r0
1c002d60:	00150007 	move	$r7,$r0
1c002d64:	00150344 	move	$r4,$r26
1c002d68:	00150365 	move	$r5,$r27
1c002d6c:	5488d400 	bl	35028(0x88d4) # 1c00b640 <__ledf2>
1c002d70:	64002080 	bge	$r4,$r0,32(0x20) # 1c002d90 <_dtoa_r+0x238>
1c002d74:	001503e4 	move	$r4,$r31
1c002d78:	549ab800 	bl	39608(0x9ab8) # 1c00c830 <__floatsidf>
1c002d7c:	00150346 	move	$r6,$r26
1c002d80:	00150367 	move	$r7,$r27
1c002d84:	54870c00 	bl	34572(0x870c) # 1c00b490 <__eqdf2>
1c002d88:	00129004 	sltu	$r4,$r0,$r4
1c002d8c:	001113ff 	sub.w	$r31,$r31,$r4
1c002d90:	001173bc 	sub.w	$r28,$r29,$r28
1c002d94:	02805809 	addi.w	$r9,$r0,22(0x16)
1c002d98:	02bfff9d 	addi.w	$r29,$r28,-1(0xfff)
1c002d9c:	680a753f 	bltu	$r9,$r31,2676(0xa74) # 1c003810 <_dtoa_r+0xcb8>
1c002da0:	00408fe8 	slli.w	$r8,$r31,0x3
1c002da4:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002da8:	28ba1129 	ld.w	$r9,$r9,-380(0xe84)
1c002dac:	00102129 	add.w	$r9,$r9,$r8
1c002db0:	28800126 	ld.w	$r6,$r9,0
1c002db4:	28801127 	ld.w	$r7,$r9,4(0x4)
1c002db8:	2880c064 	ld.w	$r4,$r3,48(0x30)
1c002dbc:	2880d065 	ld.w	$r5,$r3,52(0x34)
1c002dc0:	54888000 	bl	34944(0x8880) # 1c00b640 <__ledf2>
1c002dc4:	640a9480 	bge	$r4,$r0,2708(0xa94) # 1c003858 <_dtoa_r+0xd00>
1c002dc8:	02bfffff 	addi.w	$r31,$r31,-1(0xfff)
1c002dcc:	2980f060 	st.w	$r0,$r3,60(0x3c)
1c002dd0:	29808060 	st.w	$r0,$r3,32(0x20)
1c002dd4:	6004b7a0 	blt	$r29,$r0,1204(0x4b4) # 1c003288 <_dtoa_r+0x730>
1c002dd8:	6404c7e0 	bge	$r31,$r0,1220(0x4c4) # 1c00329c <_dtoa_r+0x744>
1c002ddc:	28808069 	ld.w	$r9,$r3,32(0x20)
1c002de0:	28803068 	ld.w	$r8,$r3,12(0xc)
1c002de4:	2980607f 	st.w	$r31,$r3,24(0x18)
1c002de8:	00117d29 	sub.w	$r9,$r9,$r31
1c002dec:	29808069 	st.w	$r9,$r3,32(0x20)
1c002df0:	00117c09 	sub.w	$r9,$r0,$r31
1c002df4:	2980e069 	st.w	$r9,$r3,56(0x38)
1c002df8:	02802409 	addi.w	$r9,$r0,9(0x9)
1c002dfc:	0015001f 	move	$r31,$r0
1c002e00:	6804b528 	bltu	$r9,$r8,1204(0x4b4) # 1c0032b4 <_dtoa_r+0x75c>
1c002e04:	02801409 	addi.w	$r9,$r0,5(0x5)
1c002e08:	0280041a 	addi.w	$r26,$r0,1(0x1)
1c002e0c:	64001128 	bge	$r9,$r8,16(0x10) # 1c002e1c <_dtoa_r+0x2c4>
1c002e10:	02bff109 	addi.w	$r9,$r8,-4(0xffc)
1c002e14:	29803069 	st.w	$r9,$r3,12(0xc)
1c002e18:	0015001a 	move	$r26,$r0
1c002e1c:	28803068 	ld.w	$r8,$r3,12(0xc)
1c002e20:	02800c09 	addi.w	$r9,$r0,3(0x3)
1c002e24:	580ded09 	beq	$r8,$r9,3564(0xdec) # 1c003c10 <_dtoa_r+0x10b8>
1c002e28:	6409a928 	bge	$r9,$r8,2472(0x9a8) # 1c0037d0 <_dtoa_r+0xc78>
1c002e2c:	28803068 	ld.w	$r8,$r3,12(0xc)
1c002e30:	02801009 	addi.w	$r9,$r0,4(0x4)
1c002e34:	5c096509 	bne	$r8,$r9,2404(0x964) # 1c003798 <_dtoa_r+0xc40>
1c002e38:	02800409 	addi.w	$r9,$r0,1(0x1)
1c002e3c:	2980b069 	st.w	$r9,$r3,44(0x2c)
1c002e40:	2880a066 	ld.w	$r6,$r3,40(0x28)
1c002e44:	640cf406 	bge	$r0,$r6,3316(0xcf4) # 1c003b38 <_dtoa_r+0xfe0>
1c002e48:	29811066 	st.w	$r6,$r3,68(0x44)
1c002e4c:	29809066 	st.w	$r6,$r3,36(0x24)
1c002e50:	298112c0 	st.w	$r0,$r22,68(0x44)
1c002e54:	02805c09 	addi.w	$r9,$r0,23(0x17)
1c002e58:	2880907b 	ld.w	$r27,$r3,36(0x24)
1c002e5c:	6412a126 	bge	$r9,$r6,4768(0x12a0) # 1c0040fc <_dtoa_r+0x15a4>
1c002e60:	02800408 	addi.w	$r8,$r0,1(0x1)
1c002e64:	02801009 	addi.w	$r9,$r0,4(0x4)
1c002e68:	00408529 	slli.w	$r9,$r9,0x1
1c002e6c:	02805127 	addi.w	$r7,$r9,20(0x14)
1c002e70:	00150105 	move	$r5,$r8
1c002e74:	02800508 	addi.w	$r8,$r8,1(0x1)
1c002e78:	6ffff0c7 	bgeu	$r6,$r7,-16(0x3fff0) # 1c002e68 <_dtoa_r+0x310>
1c002e7c:	298112c5 	st.w	$r5,$r22,68(0x44)
1c002e80:	001502c4 	move	$r4,$r22
1c002e84:	542b9800 	bl	11160(0x2b98) # 1c005a1c <_Balloc>
1c002e88:	29804064 	st.w	$r4,$r3,16(0x10)
1c002e8c:	298102c4 	st.w	$r4,$r22,64(0x40)
1c002e90:	02803809 	addi.w	$r9,$r0,14(0xe)
1c002e94:	68046d3b 	bltu	$r9,$r27,1132(0x46c) # 1c003300 <_dtoa_r+0x7a8>
1c002e98:	58046b40 	beq	$r26,$r0,1128(0x468) # 1c003300 <_dtoa_r+0x7a8>
1c002e9c:	28806067 	ld.w	$r7,$r3,24(0x18)
1c002ea0:	640e7807 	bge	$r0,$r7,3704(0xe78) # 1c003d18 <_dtoa_r+0x11c0>
1c002ea4:	03403ce9 	andi	$r9,$r7,0xf
1c002ea8:	00408d28 	slli.w	$r8,$r9,0x3
1c002eac:	004890fe 	srai.w	$r30,$r7,0x4
1c002eb0:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002eb4:	28b5e129 	ld.w	$r9,$r9,-648(0xd78)
1c002eb8:	00102129 	add.w	$r9,$r9,$r8
1c002ebc:	034043c8 	andi	$r8,$r30,0x10
1c002ec0:	2880012a 	ld.w	$r10,$r9,0
1c002ec4:	2880112b 	ld.w	$r11,$r9,4(0x4)
1c002ec8:	5c0d0900 	bne	$r8,$r0,3336(0xd08) # 1c003bd0 <_dtoa_r+0x1078>
1c002ecc:	0015033b 	move	$r27,$r25
1c002ed0:	001502fc 	move	$r28,$r23
1c002ed4:	0280081a 	addi.w	$r26,$r0,2(0x2)
1c002ed8:	1dc80017 	pcaddu12i	$r23,-114688(0xe4000)
1c002edc:	28b5a2f7 	ld.w	$r23,$r23,-664(0xd68)
1c002ee0:	58003bc0 	beq	$r30,$r0,56(0x38) # 1c002f18 <_dtoa_r+0x3c0>
1c002ee4:	034007c9 	andi	$r9,$r30,0x1
1c002ee8:	00150144 	move	$r4,$r10
1c002eec:	004887de 	srai.w	$r30,$r30,0x1
1c002ef0:	00150165 	move	$r5,$r11
1c002ef4:	58001d20 	beq	$r9,$r0,28(0x1c) # 1c002f10 <_dtoa_r+0x3b8>
1c002ef8:	288002e6 	ld.w	$r6,$r23,0
1c002efc:	288012e7 	ld.w	$r7,$r23,4(0x4)
1c002f00:	0280075a 	addi.w	$r26,$r26,1(0x1)
1c002f04:	54886c00 	bl	34924(0x886c) # 1c00b770 <__muldf3>
1c002f08:	0015008a 	move	$r10,$r4
1c002f0c:	001500ab 	move	$r11,$r5
1c002f10:	028022f7 	addi.w	$r23,$r23,8(0x8)
1c002f14:	5fffd3c0 	bne	$r30,$r0,-48(0x3ffd0) # 1c002ee4 <_dtoa_r+0x38c>
1c002f18:	00150364 	move	$r4,$r27
1c002f1c:	00150146 	move	$r6,$r10
1c002f20:	00150167 	move	$r7,$r11
1c002f24:	00150385 	move	$r5,$r28
1c002f28:	547d2800 	bl	32040(0x7d28) # 1c00ac50 <__divdf3>
1c002f2c:	0015009b 	move	$r27,$r4
1c002f30:	001500b7 	move	$r23,$r5
1c002f34:	2880f069 	ld.w	$r9,$r3,60(0x3c)
1c002f38:	58002520 	beq	$r9,$r0,36(0x24) # 1c002f5c <_dtoa_r+0x404>
1c002f3c:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002f40:	02b03129 	addi.w	$r9,$r9,-1012(0xc0c)
1c002f44:	28800126 	ld.w	$r6,$r9,0
1c002f48:	28801127 	ld.w	$r7,$r9,4(0x4)
1c002f4c:	00150364 	move	$r4,$r27
1c002f50:	001502e5 	move	$r5,$r23
1c002f54:	5486ec00 	bl	34540(0x86ec) # 1c00b640 <__ledf2>
1c002f58:	60108480 	blt	$r4,$r0,4228(0x1084) # 1c003fdc <_dtoa_r+0x1484>
1c002f5c:	00150344 	move	$r4,$r26
1c002f60:	5498d000 	bl	39120(0x98d0) # 1c00c830 <__floatsidf>
1c002f64:	00150366 	move	$r6,$r27
1c002f68:	001502e7 	move	$r7,$r23
1c002f6c:	54880400 	bl	34820(0x8804) # 1c00b770 <__muldf3>
1c002f70:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c002f74:	02afa129 	addi.w	$r9,$r9,-1048(0xbe8)
1c002f78:	28800126 	ld.w	$r6,$r9,0
1c002f7c:	28801127 	ld.w	$r7,$r9,4(0x4)
1c002f80:	15f9801a 	lu12i.w	$r26,-13312(0xfcc00)
1c002f84:	54737c00 	bl	29564(0x737c) # 1c00a300 <__adddf3>
1c002f88:	28809069 	ld.w	$r9,$r3,36(0x24)
1c002f8c:	00150099 	move	$r25,$r4
1c002f90:	0010175a 	add.w	$r26,$r26,$r5
1c002f94:	580ce120 	beq	$r9,$r0,3296(0xce0) # 1c003c74 <_dtoa_r+0x111c>
1c002f98:	28806069 	ld.w	$r9,$r3,24(0x18)
1c002f9c:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c002fa0:	29818069 	st.w	$r9,$r3,96(0x60)
1c002fa4:	001502e5 	move	$r5,$r23
1c002fa8:	00150364 	move	$r4,$r27
1c002fac:	5497f400 	bl	38900(0x97f4) # 1c00c7a0 <__fixdfsi>
1c002fb0:	02bfff89 	addi.w	$r9,$r28,-1(0xfff)
1c002fb4:	00408d29 	slli.w	$r9,$r9,0x3
1c002fb8:	1dc80008 	pcaddu12i	$r8,-114688(0xe4000)
1c002fbc:	28b1c108 	ld.w	$r8,$r8,-912(0xc70)
1c002fc0:	00102508 	add.w	$r8,$r8,$r9
1c002fc4:	28800107 	ld.w	$r7,$r8,0
1c002fc8:	28801108 	ld.w	$r8,$r8,4(0x4)
1c002fcc:	0280c089 	addi.w	$r9,$r4,48(0x30)
1c002fd0:	0040e13e 	slli.w	$r30,$r9,0x18
1c002fd4:	29812067 	st.w	$r7,$r3,72(0x48)
1c002fd8:	29813068 	st.w	$r8,$r3,76(0x4c)
1c002fdc:	54985400 	bl	38996(0x9854) # 1c00c830 <__floatsidf>
1c002fe0:	00150086 	move	$r6,$r4
1c002fe4:	001500a7 	move	$r7,$r5
1c002fe8:	00150364 	move	$r4,$r27
1c002fec:	001502e5 	move	$r5,$r23
1c002ff0:	548e3000 	bl	36400(0x8e30) # 1c00be20 <__subdf3>
1c002ff4:	28804069 	ld.w	$r9,$r3,16(0x10)
1c002ff8:	2880b068 	ld.w	$r8,$r3,44(0x2c)
1c002ffc:	29814064 	st.w	$r4,$r3,80(0x50)
1c003000:	29815065 	st.w	$r5,$r3,84(0x54)
1c003004:	0048e3de 	srai.w	$r30,$r30,0x18
1c003008:	02800537 	addi.w	$r23,$r9,1(0x1)
1c00300c:	580dc500 	beq	$r8,$r0,3524(0xdc4) # 1c003dd0 <_dtoa_r+0x1278>
1c003010:	1dc80008 	pcaddu12i	$r8,-114688(0xe4000)
1c003014:	02ad6108 	addi.w	$r8,$r8,-1192(0xb58)
1c003018:	28812066 	ld.w	$r6,$r3,72(0x48)
1c00301c:	28813067 	ld.w	$r7,$r3,76(0x4c)
1c003020:	28800104 	ld.w	$r4,$r8,0
1c003024:	28801105 	ld.w	$r5,$r8,4(0x4)
1c003028:	547c2800 	bl	31784(0x7c28) # 1c00ac50 <__divdf3>
1c00302c:	00150347 	move	$r7,$r26
1c003030:	00150326 	move	$r6,$r25
1c003034:	548dec00 	bl	36332(0x8dec) # 1c00be20 <__subdf3>
1c003038:	28804069 	ld.w	$r9,$r3,16(0x10)
1c00303c:	28814066 	ld.w	$r6,$r3,80(0x50)
1c003040:	28815067 	ld.w	$r7,$r3,84(0x54)
1c003044:	0015009a 	move	$r26,$r4
1c003048:	2900013e 	st.b	$r30,$r9,0
1c00304c:	001500bb 	move	$r27,$r5
1c003050:	5484d000 	bl	34000(0x84d0) # 1c00b520 <__gedf2>
1c003054:	600e8804 	blt	$r0,$r4,3720(0xe88) # 1c003edc <_dtoa_r+0x1384>
1c003058:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c00305c:	02abc129 	addi.w	$r9,$r9,-1296(0xaf0)
1c003060:	28814066 	ld.w	$r6,$r3,80(0x50)
1c003064:	28815067 	ld.w	$r7,$r3,84(0x54)
1c003068:	28800124 	ld.w	$r4,$r9,0
1c00306c:	28801125 	ld.w	$r5,$r9,4(0x4)
1c003070:	548db000 	bl	36272(0x8db0) # 1c00be20 <__subdf3>
1c003074:	00150086 	move	$r6,$r4
1c003078:	001500a7 	move	$r7,$r5
1c00307c:	00150344 	move	$r4,$r26
1c003080:	00150365 	move	$r5,$r27
1c003084:	54849c00 	bl	33948(0x849c) # 1c00b520 <__gedf2>
1c003088:	60106404 	blt	$r0,$r4,4196(0x1064) # 1c0040ec <_dtoa_r+0x1594>
1c00308c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c003090:	58026b89 	beq	$r28,$r9,616(0x268) # 1c0032f8 <_dtoa_r+0x7a0>
1c003094:	1dc80019 	pcaddu12i	$r25,-114688(0xe4000)
1c003098:	02aaf339 	addi.w	$r25,$r25,-1348(0xabc)
1c00309c:	28804068 	ld.w	$r8,$r3,16(0x10)
1c0030a0:	28800329 	ld.w	$r9,$r25,0
1c0030a4:	28801339 	ld.w	$r25,$r25,4(0x4)
1c0030a8:	00107108 	add.w	$r8,$r8,$r28
1c0030ac:	29812068 	st.w	$r8,$r3,72(0x48)
1c0030b0:	00150328 	move	$r8,$r25
1c0030b4:	2981a07f 	st.w	$r31,$r3,104(0x68)
1c0030b8:	2981b07d 	st.w	$r29,$r3,108(0x6c)
1c0030bc:	29816078 	st.w	$r24,$r3,88(0x58)
1c0030c0:	29819076 	st.w	$r22,$r3,100(0x64)
1c0030c4:	0015033d 	move	$r29,$r25
1c0030c8:	0015013c 	move	$r28,$r9
1c0030cc:	00150136 	move	$r22,$r9
1c0030d0:	28814078 	ld.w	$r24,$r3,80(0x50)
1c0030d4:	28815079 	ld.w	$r25,$r3,84(0x54)
1c0030d8:	0015011f 	move	$r31,$r8
1c0030dc:	50003000 	b	48(0x30) # 1c00310c <_dtoa_r+0x5b4>
1c0030e0:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c0030e4:	02a9a129 	addi.w	$r9,$r9,-1432(0xa68)
1c0030e8:	28800124 	ld.w	$r4,$r9,0
1c0030ec:	28801125 	ld.w	$r5,$r9,4(0x4)
1c0030f0:	548d3000 	bl	36144(0x8d30) # 1c00be20 <__subdf3>
1c0030f4:	00150346 	move	$r6,$r26
1c0030f8:	00150367 	move	$r7,$r27
1c0030fc:	54854400 	bl	34116(0x8544) # 1c00b640 <__ledf2>
1c003100:	600fb080 	blt	$r4,$r0,4016(0xfb0) # 1c0040b0 <_dtoa_r+0x1558>
1c003104:	28812069 	ld.w	$r9,$r3,72(0x48)
1c003108:	5801e2e9 	beq	$r23,$r9,480(0x1e0) # 1c0032e8 <_dtoa_r+0x790>
1c00310c:	001502c6 	move	$r6,$r22
1c003110:	001503a7 	move	$r7,$r29
1c003114:	00150344 	move	$r4,$r26
1c003118:	00150365 	move	$r5,$r27
1c00311c:	54865400 	bl	34388(0x8654) # 1c00b770 <__muldf3>
1c003120:	00150386 	move	$r6,$r28
1c003124:	001503e7 	move	$r7,$r31
1c003128:	0015009a 	move	$r26,$r4
1c00312c:	001500bb 	move	$r27,$r5
1c003130:	00150304 	move	$r4,$r24
1c003134:	00150325 	move	$r5,$r25
1c003138:	54863800 	bl	34360(0x8638) # 1c00b770 <__muldf3>
1c00313c:	001500b9 	move	$r25,$r5
1c003140:	00150098 	move	$r24,$r4
1c003144:	54965c00 	bl	38492(0x965c) # 1c00c7a0 <__fixdfsi>
1c003148:	0015009e 	move	$r30,$r4
1c00314c:	0280c3de 	addi.w	$r30,$r30,48(0x30)
1c003150:	5496e000 	bl	38624(0x96e0) # 1c00c830 <__floatsidf>
1c003154:	00150086 	move	$r6,$r4
1c003158:	001500a7 	move	$r7,$r5
1c00315c:	00150304 	move	$r4,$r24
1c003160:	00150325 	move	$r5,$r25
1c003164:	0040e3de 	slli.w	$r30,$r30,0x18
1c003168:	548cb800 	bl	36024(0x8cb8) # 1c00be20 <__subdf3>
1c00316c:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c003170:	0048e3de 	srai.w	$r30,$r30,0x18
1c003174:	00150346 	move	$r6,$r26
1c003178:	00150367 	move	$r7,$r27
1c00317c:	293ffefe 	st.b	$r30,$r23,-1(0xfff)
1c003180:	00150098 	move	$r24,$r4
1c003184:	001500b9 	move	$r25,$r5
1c003188:	5484b800 	bl	33976(0x84b8) # 1c00b640 <__ledf2>
1c00318c:	00150306 	move	$r6,$r24
1c003190:	00150327 	move	$r7,$r25
1c003194:	67ff4c80 	bge	$r4,$r0,-180(0x3ff4c) # 1c0030e0 <_dtoa_r+0x588>
1c003198:	28819076 	ld.w	$r22,$r3,100(0x64)
1c00319c:	28818069 	ld.w	$r9,$r3,96(0x60)
1c0031a0:	28816078 	ld.w	$r24,$r3,88(0x58)
1c0031a4:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0031a8:	29806069 	st.w	$r9,$r3,24(0x18)
1c0031ac:	00150305 	move	$r5,$r24
1c0031b0:	001502c4 	move	$r4,$r22
1c0031b4:	54291000 	bl	10512(0x2910) # 1c005ac4 <_Bfree>
1c0031b8:	28807069 	ld.w	$r9,$r3,28(0x1c)
1c0031bc:	28806068 	ld.w	$r8,$r3,24(0x18)
1c0031c0:	290002e0 	st.b	$r0,$r23,0
1c0031c4:	29800128 	st.w	$r8,$r9,0
1c0031c8:	28805069 	ld.w	$r9,$r3,20(0x14)
1c0031cc:	5bfa6d20 	beq	$r9,$r0,-1428(0x3fa6c) # 1c002c38 <_dtoa_r+0xe0>
1c0031d0:	29800137 	st.w	$r23,$r9,0
1c0031d4:	53fa67ff 	b	-1436(0xffffa64) # 1c002c38 <_dtoa_r+0xe0>
1c0031d8:	14fffff7 	lu12i.w	$r23,524287(0x7ffff)
1c0031dc:	03bffef7 	ori	$r23,$r23,0xfff
1c0031e0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0031e4:	0014e2f7 	and	$r23,$r23,$r24
1c0031e8:	29800369 	st.w	$r9,$r27,0
1c0031ec:	001502fa 	move	$r26,$r23
1c0031f0:	14ffe009 	lu12i.w	$r9,524032(0x7ff00)
1c0031f4:	0014a748 	and	$r8,$r26,$r9
1c0031f8:	5ff9f909 	bne	$r8,$r9,-1544(0x3f9f8) # 1c002bf0 <_dtoa_r+0x98>
1c0031fc:	14001fe9 	lu12i.w	$r9,255(0xff)
1c003200:	03bffd29 	ori	$r9,$r9,0xfff
1c003204:	28807068 	ld.w	$r8,$r3,28(0x1c)
1c003208:	0014a75a 	and	$r26,$r26,$r9
1c00320c:	14000049 	lu12i.w	$r9,2(0x2)
1c003210:	029c3d29 	addi.w	$r9,$r9,1807(0x70f)
1c003214:	29800109 	st.w	$r9,$r8,0
1c003218:	00156759 	or	$r25,$r26,$r25
1c00321c:	5c002b20 	bne	$r25,$r0,40(0x28) # 1c003244 <_dtoa_r+0x6ec>
1c003220:	28805068 	ld.w	$r8,$r3,20(0x14)
1c003224:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c003228:	02af6129 	addi.w	$r9,$r9,-1064(0xbd8)
1c00322c:	29804069 	st.w	$r9,$r3,16(0x10)
1c003230:	02802129 	addi.w	$r9,$r9,8(0x8)
1c003234:	5bfa0500 	beq	$r8,$r0,-1532(0x3fa04) # 1c002c38 <_dtoa_r+0xe0>
1c003238:	28805068 	ld.w	$r8,$r3,20(0x14)
1c00323c:	29800109 	st.w	$r9,$r8,0
1c003240:	53f9fbff 	b	-1544(0xffff9f8) # 1c002c38 <_dtoa_r+0xe0>
1c003244:	28805069 	ld.w	$r9,$r3,20(0x14)
1c003248:	5c08c120 	bne	$r9,$r0,2240(0x8c0) # 1c003b08 <_dtoa_r+0xfb0>
1c00324c:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c003250:	02aeb129 	addi.w	$r9,$r9,-1108(0xbac)
1c003254:	29804069 	st.w	$r9,$r3,16(0x10)
1c003258:	53f9e3ff 	b	-1568(0xffff9e0) # 1c002c38 <_dtoa_r+0xe0>
1c00325c:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c003260:	14001fe5 	lu12i.w	$r5,255(0xff)
1c003264:	03bffca5 	ori	$r5,$r5,0xfff
1c003268:	0014a4a5 	and	$r5,$r5,$r9
1c00326c:	147fe009 	lu12i.w	$r9,261888(0x3ff00)
1c003270:	2880c064 	ld.w	$r4,$r3,48(0x30)
1c003274:	001524a5 	or	$r5,$r5,$r9
1c003278:	02b0079c 	addi.w	$r28,$r28,-1023(0xc01)
1c00327c:	2881e07d 	ld.w	$r29,$r3,120(0x78)
1c003280:	29810060 	st.w	$r0,$r3,64(0x40)
1c003284:	53fa57ff 	b	-1452(0xffffa54) # 1c002cd8 <_dtoa_r+0x180>
1c003288:	02800409 	addi.w	$r9,$r0,1(0x1)
1c00328c:	00117129 	sub.w	$r9,$r9,$r28
1c003290:	29808069 	st.w	$r9,$r3,32(0x20)
1c003294:	0015001d 	move	$r29,$r0
1c003298:	63fb47e0 	blt	$r31,$r0,-1212(0x3fb44) # 1c002ddc <_dtoa_r+0x284>
1c00329c:	28803068 	ld.w	$r8,$r3,12(0xc)
1c0032a0:	2980607f 	st.w	$r31,$r3,24(0x18)
1c0032a4:	2980e060 	st.w	$r0,$r3,56(0x38)
1c0032a8:	02802409 	addi.w	$r9,$r0,9(0x9)
1c0032ac:	00107fbd 	add.w	$r29,$r29,$r31
1c0032b0:	6ffb5528 	bgeu	$r9,$r8,-1196(0x3fb54) # 1c002e04 <_dtoa_r+0x2ac>
1c0032b4:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0032b8:	2980b069 	st.w	$r9,$r3,44(0x2c)
1c0032bc:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c0032c0:	02bffc1b 	addi.w	$r27,$r0,-1(0xfff)
1c0032c4:	0280041a 	addi.w	$r26,$r0,1(0x1)
1c0032c8:	29803060 	st.w	$r0,$r3,12(0xc)
1c0032cc:	29809069 	st.w	$r9,$r3,36(0x24)
1c0032d0:	2980a060 	st.w	$r0,$r3,40(0x28)
1c0032d4:	28809069 	ld.w	$r9,$r3,36(0x24)
1c0032d8:	298112c0 	st.w	$r0,$r22,68(0x44)
1c0032dc:	00150005 	move	$r5,$r0
1c0032e0:	29811069 	st.w	$r9,$r3,68(0x44)
1c0032e4:	53fb9fff 	b	-1124(0xffffb9c) # 1c002e80 <_dtoa_r+0x328>
1c0032e8:	2881a07f 	ld.w	$r31,$r3,104(0x68)
1c0032ec:	2881b07d 	ld.w	$r29,$r3,108(0x6c)
1c0032f0:	28816078 	ld.w	$r24,$r3,88(0x58)
1c0032f4:	28819076 	ld.w	$r22,$r3,100(0x64)
1c0032f8:	2880c07e 	ld.w	$r30,$r3,48(0x30)
1c0032fc:	2880d077 	ld.w	$r23,$r3,52(0x34)
1c003300:	2881f069 	ld.w	$r9,$r3,124(0x7c)
1c003304:	60023d20 	blt	$r9,$r0,572(0x23c) # 1c003540 <_dtoa_r+0x9e8>
1c003308:	28806067 	ld.w	$r7,$r3,24(0x18)
1c00330c:	02803808 	addi.w	$r8,$r0,14(0xe)
1c003310:	60023107 	blt	$r8,$r7,560(0x230) # 1c003540 <_dtoa_r+0x9e8>
1c003314:	00408ce8 	slli.w	$r8,$r7,0x3
1c003318:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c00331c:	28a44129 	ld.w	$r9,$r9,-1776(0x910)
1c003320:	00102129 	add.w	$r9,$r9,$r8
1c003324:	2880013a 	ld.w	$r26,$r9,0
1c003328:	2880113b 	ld.w	$r27,$r9,4(0x4)
1c00332c:	2880a069 	ld.w	$r9,$r3,40(0x28)
1c003330:	64005520 	bge	$r9,$r0,84(0x54) # 1c003384 <_dtoa_r+0x82c>
1c003334:	28809069 	ld.w	$r9,$r3,36(0x24)
1c003338:	60004c09 	blt	$r0,$r9,76(0x4c) # 1c003384 <_dtoa_r+0x82c>
1c00333c:	5c098d20 	bne	$r9,$r0,2444(0x98c) # 1c003cc8 <_dtoa_r+0x1170>
1c003340:	1dc80009 	pcaddu12i	$r9,-114688(0xe4000)
1c003344:	02a08129 	addi.w	$r9,$r9,-2016(0x820)
1c003348:	28800126 	ld.w	$r6,$r9,0
1c00334c:	28801127 	ld.w	$r7,$r9,4(0x4)
1c003350:	00150344 	move	$r4,$r26
1c003354:	00150365 	move	$r5,$r27
1c003358:	54841800 	bl	33816(0x8418) # 1c00b770 <__muldf3>
1c00335c:	001503c6 	move	$r6,$r30
1c003360:	001502e7 	move	$r7,$r23
1c003364:	5481bc00 	bl	33212(0x81bc) # 1c00b520 <__gedf2>
1c003368:	0015001b 	move	$r27,$r0
1c00336c:	0015001a 	move	$r26,$r0
1c003370:	60070480 	blt	$r4,$r0,1796(0x704) # 1c003a74 <_dtoa_r+0xf1c>
1c003374:	2880a069 	ld.w	$r9,$r3,40(0x28)
1c003378:	28804077 	ld.w	$r23,$r3,16(0x10)
1c00337c:	00142539 	nor	$r25,$r9,$r9
1c003380:	50070c00 	b	1804(0x70c) # 1c003a8c <_dtoa_r+0xf34>
1c003384:	00150346 	move	$r6,$r26
1c003388:	00150367 	move	$r7,$r27
1c00338c:	001503c4 	move	$r4,$r30
1c003390:	001502e5 	move	$r5,$r23
1c003394:	5478bc00 	bl	30908(0x78bc) # 1c00ac50 <__divdf3>
1c003398:	54940800 	bl	37896(0x9408) # 1c00c7a0 <__fixdfsi>
1c00339c:	0015009f 	move	$r31,$r4
1c0033a0:	54949000 	bl	38032(0x9490) # 1c00c830 <__floatsidf>
1c0033a4:	00150346 	move	$r6,$r26
1c0033a8:	00150367 	move	$r7,$r27
1c0033ac:	5483c400 	bl	33732(0x83c4) # 1c00b770 <__muldf3>
1c0033b0:	00150086 	move	$r6,$r4
1c0033b4:	001500a7 	move	$r7,$r5
1c0033b8:	001503c4 	move	$r4,$r30
1c0033bc:	001502e5 	move	$r5,$r23
1c0033c0:	548a6000 	bl	35424(0x8a60) # 1c00be20 <__subdf3>
1c0033c4:	28806068 	ld.w	$r8,$r3,24(0x18)
1c0033c8:	2880407e 	ld.w	$r30,$r3,16(0x10)
1c0033cc:	0280c3e9 	addi.w	$r9,$r31,48(0x30)
1c0033d0:	02800508 	addi.w	$r8,$r8,1(0x1)
1c0033d4:	29806068 	st.w	$r8,$r3,24(0x18)
1c0033d8:	28809068 	ld.w	$r8,$r3,36(0x24)
1c0033dc:	290003c9 	st.b	$r9,$r30,0
1c0033e0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0033e4:	00150086 	move	$r6,$r4
1c0033e8:	001500a7 	move	$r7,$r5
1c0033ec:	028007d7 	addi.w	$r23,$r30,1(0x1)
1c0033f0:	5800d509 	beq	$r8,$r9,212(0xd4) # 1c0034c4 <_dtoa_r+0x96c>
1c0033f4:	1dc7fff9 	pcaddu12i	$r25,-114689(0xe3fff)
1c0033f8:	029d7339 	addi.w	$r25,$r25,1884(0x75c)
1c0033fc:	28800326 	ld.w	$r6,$r25,0
1c003400:	28801327 	ld.w	$r7,$r25,4(0x4)
1c003404:	54836c00 	bl	33644(0x836c) # 1c00b770 <__muldf3>
1c003408:	00150006 	move	$r6,$r0
1c00340c:	00150007 	move	$r7,$r0
1c003410:	0015009c 	move	$r28,$r4
1c003414:	001500bd 	move	$r29,$r5
1c003418:	54807800 	bl	32888(0x8078) # 1c00b490 <__eqdf2>
1c00341c:	5bfd9080 	beq	$r4,$r0,-624(0x3fd90) # 1c0031ac <_dtoa_r+0x654>
1c003420:	28809068 	ld.w	$r8,$r3,36(0x24)
1c003424:	001503c9 	move	$r9,$r30
1c003428:	29803076 	st.w	$r22,$r3,12(0xc)
1c00342c:	02800bde 	addi.w	$r30,$r30,2(0x2)
1c003430:	00102137 	add.w	$r23,$r9,$r8
1c003434:	00150336 	move	$r22,$r25
1c003438:	50002c00 	b	44(0x2c) # 1c003464 <_dtoa_r+0x90c>
1c00343c:	288002c6 	ld.w	$r6,$r22,0
1c003440:	288012c7 	ld.w	$r7,$r22,4(0x4)
1c003444:	028007de 	addi.w	$r30,$r30,1(0x1)
1c003448:	54832800 	bl	33576(0x8328) # 1c00b770 <__muldf3>
1c00344c:	00150006 	move	$r6,$r0
1c003450:	00150007 	move	$r7,$r0
1c003454:	0015009c 	move	$r28,$r4
1c003458:	001500bd 	move	$r29,$r5
1c00345c:	54803400 	bl	32820(0x8034) # 1c00b490 <__eqdf2>
1c003460:	58096480 	beq	$r4,$r0,2404(0x964) # 1c003dc4 <_dtoa_r+0x126c>
1c003464:	00150346 	move	$r6,$r26
1c003468:	00150367 	move	$r7,$r27
1c00346c:	00150384 	move	$r4,$r28
1c003470:	001503a5 	move	$r5,$r29
1c003474:	5477dc00 	bl	30684(0x77dc) # 1c00ac50 <__divdf3>
1c003478:	54932800 	bl	37672(0x9328) # 1c00c7a0 <__fixdfsi>
1c00347c:	0015009f 	move	$r31,$r4
1c003480:	5493b000 	bl	37808(0x93b0) # 1c00c830 <__floatsidf>
1c003484:	00150346 	move	$r6,$r26
1c003488:	00150367 	move	$r7,$r27
1c00348c:	5482e400 	bl	33508(0x82e4) # 1c00b770 <__muldf3>
1c003490:	00150086 	move	$r6,$r4
1c003494:	001500a7 	move	$r7,$r5
1c003498:	00150384 	move	$r4,$r28
1c00349c:	001503a5 	move	$r5,$r29
1c0034a0:	54898000 	bl	35200(0x8980) # 1c00be20 <__subdf3>
1c0034a4:	0280c3e9 	addi.w	$r9,$r31,48(0x30)
1c0034a8:	293fffc9 	st.b	$r9,$r30,-1(0xfff)
1c0034ac:	00150086 	move	$r6,$r4
1c0034b0:	001500a7 	move	$r7,$r5
1c0034b4:	001503d9 	move	$r25,$r30
1c0034b8:	5fff86fe 	bne	$r23,$r30,-124(0x3ff84) # 1c00343c <_dtoa_r+0x8e4>
1c0034bc:	28803076 	ld.w	$r22,$r3,12(0xc)
1c0034c0:	001503d7 	move	$r23,$r30
1c0034c4:	001500c4 	move	$r4,$r6
1c0034c8:	001500e5 	move	$r5,$r7
1c0034cc:	546e3400 	bl	28212(0x6e34) # 1c00a300 <__adddf3>
1c0034d0:	00150346 	move	$r6,$r26
1c0034d4:	00150367 	move	$r7,$r27
1c0034d8:	0015009c 	move	$r28,$r4
1c0034dc:	001500bd 	move	$r29,$r5
1c0034e0:	54804000 	bl	32832(0x8040) # 1c00b520 <__gedf2>
1c0034e4:	60002404 	blt	$r0,$r4,36(0x24) # 1c003508 <_dtoa_r+0x9b0>
1c0034e8:	00150346 	move	$r6,$r26
1c0034ec:	00150367 	move	$r7,$r27
1c0034f0:	00150384 	move	$r4,$r28
1c0034f4:	001503a5 	move	$r5,$r29
1c0034f8:	547f9800 	bl	32664(0x7f98) # 1c00b490 <__eqdf2>
1c0034fc:	5ffcb080 	bne	$r4,$r0,-848(0x3fcb0) # 1c0031ac <_dtoa_r+0x654>
1c003500:	034007ff 	andi	$r31,$r31,0x1
1c003504:	5bfcabe0 	beq	$r31,$r0,-856(0x3fca8) # 1c0031ac <_dtoa_r+0x654>
1c003508:	283ffefe 	ld.b	$r30,$r23,-1(0xfff)
1c00350c:	0280e407 	addi.w	$r7,$r0,57(0x39)
1c003510:	28804069 	ld.w	$r9,$r3,16(0x10)
1c003514:	50001000 	b	16(0x10) # 1c003524 <_dtoa_r+0x9cc>
1c003518:	580b3d28 	beq	$r9,$r8,2876(0xb3c) # 1c004054 <_dtoa_r+0x14fc>
1c00351c:	283ffd1e 	ld.b	$r30,$r8,-1(0xfff)
1c003520:	00150117 	move	$r23,$r8
1c003524:	02bffee8 	addi.w	$r8,$r23,-1(0xfff)
1c003528:	5bfff3c7 	beq	$r30,$r7,-16(0x3fff0) # 1c003518 <_dtoa_r+0x9c0>
1c00352c:	028007c9 	addi.w	$r9,$r30,1(0x1)
1c003530:	0040e129 	slli.w	$r9,$r9,0x18
1c003534:	0048e129 	srai.w	$r9,$r9,0x18
1c003538:	29000109 	st.b	$r9,$r8,0
1c00353c:	53fc73ff 	b	-912(0xffffc70) # 1c0031ac <_dtoa_r+0x654>
1c003540:	2880b068 	ld.w	$r8,$r3,44(0x2c)
1c003544:	5802d900 	beq	$r8,$r0,728(0x2d8) # 1c00381c <_dtoa_r+0xcc4>
1c003548:	28803067 	ld.w	$r7,$r3,12(0xc)
1c00354c:	02800408 	addi.w	$r8,$r0,1(0x1)
1c003550:	6406c907 	bge	$r8,$r7,1736(0x6c8) # 1c003c18 <_dtoa_r+0x10c0>
1c003554:	28809069 	ld.w	$r9,$r3,36(0x24)
1c003558:	02bffd3b 	addi.w	$r27,$r9,-1(0xfff)
1c00355c:	2880e069 	ld.w	$r9,$r3,56(0x38)
1c003560:	6406693b 	bge	$r9,$r27,1640(0x668) # 1c003bc8 <_dtoa_r+0x1070>
1c003564:	2880e069 	ld.w	$r9,$r3,56(0x38)
1c003568:	2980e07b 	st.w	$r27,$r3,56(0x38)
1c00356c:	00112769 	sub.w	$r9,$r27,$r9
1c003570:	001027ff 	add.w	$r31,$r31,$r9
1c003574:	0015001b 	move	$r27,$r0
1c003578:	28808068 	ld.w	$r8,$r3,32(0x20)
1c00357c:	28809069 	ld.w	$r9,$r3,36(0x24)
1c003580:	00112519 	sub.w	$r25,$r8,$r9
1c003584:	60001520 	blt	$r9,$r0,20(0x14) # 1c003598 <_dtoa_r+0xa40>
1c003588:	001027bd 	add.w	$r29,$r29,$r9
1c00358c:	00102509 	add.w	$r9,$r8,$r9
1c003590:	00150119 	move	$r25,$r8
1c003594:	29808069 	st.w	$r9,$r3,32(0x20)
1c003598:	02800405 	addi.w	$r5,$r0,1(0x1)
1c00359c:	001502c4 	move	$r4,$r22
1c0035a0:	5428d000 	bl	10448(0x28d0) # 1c005e70 <__i2b>
1c0035a4:	0015009a 	move	$r26,$r4
1c0035a8:	64002419 	bge	$r0,$r25,36(0x24) # 1c0035cc <_dtoa_r+0xa74>
1c0035ac:	6400201d 	bge	$r0,$r29,32(0x20) # 1c0035cc <_dtoa_r+0xa74>
1c0035b0:	00150329 	move	$r9,$r25
1c0035b4:	6005d3b9 	blt	$r29,$r25,1488(0x5d0) # 1c003b84 <_dtoa_r+0x102c>
1c0035b8:	28808068 	ld.w	$r8,$r3,32(0x20)
1c0035bc:	00112739 	sub.w	$r25,$r25,$r9
1c0035c0:	001127bd 	sub.w	$r29,$r29,$r9
1c0035c4:	00112508 	sub.w	$r8,$r8,$r9
1c0035c8:	29808068 	st.w	$r8,$r3,32(0x20)
1c0035cc:	2880e069 	ld.w	$r9,$r3,56(0x38)
1c0035d0:	58005520 	beq	$r9,$r0,84(0x54) # 1c003624 <_dtoa_r+0xacc>
1c0035d4:	2880b069 	ld.w	$r9,$r3,44(0x2c)
1c0035d8:	58051920 	beq	$r9,$r0,1304(0x518) # 1c003af0 <_dtoa_r+0xf98>
1c0035dc:	64003c1b 	bge	$r0,$r27,60(0x3c) # 1c003618 <_dtoa_r+0xac0>
1c0035e0:	00150345 	move	$r5,$r26
1c0035e4:	00150366 	move	$r6,$r27
1c0035e8:	001502c4 	move	$r4,$r22
1c0035ec:	542ab000 	bl	10928(0x2ab0) # 1c00609c <__pow5mult>
1c0035f0:	00150306 	move	$r6,$r24
1c0035f4:	00150085 	move	$r5,$r4
1c0035f8:	0015009a 	move	$r26,$r4
1c0035fc:	001502c4 	move	$r4,$r22
1c003600:	5428a400 	bl	10404(0x28a4) # 1c005ea4 <__multiply>
1c003604:	0015009c 	move	$r28,$r4
1c003608:	00150305 	move	$r5,$r24
1c00360c:	001502c4 	move	$r4,$r22
1c003610:	5424b400 	bl	9396(0x24b4) # 1c005ac4 <_Bfree>
1c003614:	00150398 	move	$r24,$r28
1c003618:	2880e069 	ld.w	$r9,$r3,56(0x38)
1c00361c:	00116d26 	sub.w	$r6,$r9,$r27
1c003620:	5c04d4c0 	bne	$r6,$r0,1236(0x4d4) # 1c003af4 <_dtoa_r+0xf9c>
1c003624:	02800405 	addi.w	$r5,$r0,1(0x1)
1c003628:	001502c4 	move	$r4,$r22
1c00362c:	54284400 	bl	10308(0x2844) # 1c005e70 <__i2b>
1c003630:	0015009b 	move	$r27,$r4
1c003634:	6002341f 	blt	$r0,$r31,564(0x234) # 1c003868 <_dtoa_r+0xd10>
1c003638:	28803068 	ld.w	$r8,$r3,12(0xc)
1c00363c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c003640:	0015001c 	move	$r28,$r0
1c003644:	6404d928 	bge	$r9,$r8,1240(0x4d8) # 1c003b1c <_dtoa_r+0xfc4>
1c003648:	02800404 	addi.w	$r4,$r0,1(0x1)
1c00364c:	5c0243e0 	bne	$r31,$r0,576(0x240) # 1c00388c <_dtoa_r+0xd34>
1c003650:	00107484 	add.w	$r4,$r4,$r29
1c003654:	03407c84 	andi	$r4,$r4,0x1f
1c003658:	5801ec80 	beq	$r4,$r0,492(0x1ec) # 1c003844 <_dtoa_r+0xcec>
1c00365c:	02808009 	addi.w	$r9,$r0,32(0x20)
1c003660:	00111129 	sub.w	$r9,$r9,$r4
1c003664:	02801008 	addi.w	$r8,$r0,4(0x4)
1c003668:	640a9d09 	bge	$r8,$r9,2716(0xa9c) # 1c004104 <_dtoa_r+0x15ac>
1c00366c:	02807009 	addi.w	$r9,$r0,28(0x1c)
1c003670:	00111124 	sub.w	$r4,$r9,$r4
1c003674:	28808069 	ld.w	$r9,$r3,32(0x20)
1c003678:	00101339 	add.w	$r25,$r25,$r4
1c00367c:	001013bd 	add.w	$r29,$r29,$r4
1c003680:	00101129 	add.w	$r9,$r9,$r4
1c003684:	29808069 	st.w	$r9,$r3,32(0x20)
1c003688:	28808069 	ld.w	$r9,$r3,32(0x20)
1c00368c:	6001a009 	blt	$r0,$r9,416(0x1a0) # 1c00382c <_dtoa_r+0xcd4>
1c003690:	6400181d 	bge	$r0,$r29,24(0x18) # 1c0036a8 <_dtoa_r+0xb50>
1c003694:	00150365 	move	$r5,$r27
1c003698:	001503a6 	move	$r6,$r29
1c00369c:	001502c4 	move	$r4,$r22
1c0036a0:	542b3400 	bl	11060(0x2b34) # 1c0061d4 <__lshift>
1c0036a4:	0015009b 	move	$r27,$r4
1c0036a8:	2880f069 	ld.w	$r9,$r3,60(0x3c)
1c0036ac:	5c03fd20 	bne	$r9,$r0,1020(0x3fc) # 1c003aa8 <_dtoa_r+0xf50>
1c0036b0:	28809069 	ld.w	$r9,$r3,36(0x24)
1c0036b4:	64038409 	bge	$r0,$r9,900(0x384) # 1c003a38 <_dtoa_r+0xee0>
1c0036b8:	28806069 	ld.w	$r9,$r3,24(0x18)
1c0036bc:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0036c0:	29806069 	st.w	$r9,$r3,24(0x18)
1c0036c4:	2880b069 	ld.w	$r9,$r3,44(0x2c)
1c0036c8:	5c021d20 	bne	$r9,$r0,540(0x21c) # 1c0038e4 <_dtoa_r+0xd8c>
1c0036cc:	28804077 	ld.w	$r23,$r3,16(0x10)
1c0036d0:	02800419 	addi.w	$r25,$r0,1(0x1)
1c0036d4:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c0036d8:	50001000 	b	16(0x10) # 1c0036e8 <_dtoa_r+0xb90>
1c0036dc:	54240c00 	bl	9228(0x240c) # 1c005ae8 <__multadd>
1c0036e0:	00150098 	move	$r24,$r4
1c0036e4:	02800739 	addi.w	$r25,$r25,1(0x1)
1c0036e8:	00150365 	move	$r5,$r27
1c0036ec:	00150304 	move	$r4,$r24
1c0036f0:	57f283ff 	bl	-3456(0xffff280) # 1c002970 <quorem>
1c0036f4:	0280c09e 	addi.w	$r30,$r4,48(0x30)
1c0036f8:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c0036fc:	293ffefe 	st.b	$r30,$r23,-1(0xfff)
1c003700:	00150007 	move	$r7,$r0
1c003704:	02802806 	addi.w	$r6,$r0,10(0xa)
1c003708:	00150305 	move	$r5,$r24
1c00370c:	001502c4 	move	$r4,$r22
1c003710:	63ffcf3c 	blt	$r25,$r28,-52(0x3ffcc) # 1c0036dc <_dtoa_r+0xb84>
1c003714:	00150019 	move	$r25,$r0
1c003718:	00150305 	move	$r5,$r24
1c00371c:	02800406 	addi.w	$r6,$r0,1(0x1)
1c003720:	001502c4 	move	$r4,$r22
1c003724:	542ab000 	bl	10928(0x2ab0) # 1c0061d4 <__lshift>
1c003728:	00150365 	move	$r5,$r27
1c00372c:	00150098 	move	$r24,$r4
1c003730:	542bf000 	bl	11248(0x2bf0) # 1c006320 <__mcmp>
1c003734:	283ffee8 	ld.b	$r8,$r23,-1(0xfff)
1c003738:	64059c04 	bge	$r0,$r4,1436(0x59c) # 1c003cd4 <_dtoa_r+0x117c>
1c00373c:	0280e407 	addi.w	$r7,$r0,57(0x39)
1c003740:	28804066 	ld.w	$r6,$r3,16(0x10)
1c003744:	50001000 	b	16(0x10) # 1c003754 <_dtoa_r+0xbfc>
1c003748:	5805b4c9 	beq	$r6,$r9,1460(0x5b4) # 1c003cfc <_dtoa_r+0x11a4>
1c00374c:	283ffd28 	ld.b	$r8,$r9,-1(0xfff)
1c003750:	00150137 	move	$r23,$r9
1c003754:	02bffee9 	addi.w	$r9,$r23,-1(0xfff)
1c003758:	5bfff107 	beq	$r8,$r7,-16(0x3fff0) # 1c003748 <_dtoa_r+0xbf0>
1c00375c:	02800508 	addi.w	$r8,$r8,1(0x1)
1c003760:	29000128 	st.b	$r8,$r9,0
1c003764:	00150365 	move	$r5,$r27
1c003768:	001502c4 	move	$r4,$r22
1c00376c:	54235800 	bl	9048(0x2358) # 1c005ac4 <_Bfree>
1c003770:	5bfa3f40 	beq	$r26,$r0,-1476(0x3fa3c) # 1c0031ac <_dtoa_r+0x654>
1c003774:	58001720 	beq	$r25,$r0,20(0x14) # 1c003788 <_dtoa_r+0xc30>
1c003778:	5800133a 	beq	$r25,$r26,16(0x10) # 1c003788 <_dtoa_r+0xc30>
1c00377c:	00150325 	move	$r5,$r25
1c003780:	001502c4 	move	$r4,$r22
1c003784:	54234000 	bl	9024(0x2340) # 1c005ac4 <_Bfree>
1c003788:	00150345 	move	$r5,$r26
1c00378c:	001502c4 	move	$r4,$r22
1c003790:	54233400 	bl	9012(0x2334) # 1c005ac4 <_Bfree>
1c003794:	53fa1bff 	b	-1512(0xffffa18) # 1c0031ac <_dtoa_r+0x654>
1c003798:	02800407 	addi.w	$r7,$r0,1(0x1)
1c00379c:	02801409 	addi.w	$r9,$r0,5(0x5)
1c0037a0:	2980b067 	st.w	$r7,$r3,44(0x2c)
1c0037a4:	5c003909 	bne	$r8,$r9,56(0x38) # 1c0037dc <_dtoa_r+0xc84>
1c0037a8:	2880a069 	ld.w	$r9,$r3,40(0x28)
1c0037ac:	28806068 	ld.w	$r8,$r3,24(0x18)
1c0037b0:	00102129 	add.w	$r9,$r9,$r8
1c0037b4:	29811069 	st.w	$r9,$r3,68(0x44)
1c0037b8:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0037bc:	29809069 	st.w	$r9,$r3,36(0x24)
1c0037c0:	00150126 	move	$r6,$r9
1c0037c4:	63f68c09 	blt	$r0,$r9,-2420(0x3f68c) # 1c002e50 <_dtoa_r+0x2f8>
1c0037c8:	02800406 	addi.w	$r6,$r0,1(0x1)
1c0037cc:	53f687ff 	b	-2428(0xffff684) # 1c002e50 <_dtoa_r+0x2f8>
1c0037d0:	02800809 	addi.w	$r9,$r0,2(0x2)
1c0037d4:	2980b060 	st.w	$r0,$r3,44(0x2c)
1c0037d8:	5bf66909 	beq	$r8,$r9,-2456(0x3f668) # 1c002e40 <_dtoa_r+0x2e8>
1c0037dc:	298112c0 	st.w	$r0,$r22,68(0x44)
1c0037e0:	00150005 	move	$r5,$r0
1c0037e4:	001502c4 	move	$r4,$r22
1c0037e8:	54223400 	bl	8756(0x2234) # 1c005a1c <_Balloc>
1c0037ec:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c0037f0:	29811069 	st.w	$r9,$r3,68(0x44)
1c0037f4:	29809069 	st.w	$r9,$r3,36(0x24)
1c0037f8:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0037fc:	29804064 	st.w	$r4,$r3,16(0x10)
1c003800:	298102c4 	st.w	$r4,$r22,64(0x40)
1c003804:	2980a060 	st.w	$r0,$r3,40(0x28)
1c003808:	2980b069 	st.w	$r9,$r3,44(0x2c)
1c00380c:	53faf7ff 	b	-1292(0xffffaf4) # 1c003300 <_dtoa_r+0x7a8>
1c003810:	02800409 	addi.w	$r9,$r0,1(0x1)
1c003814:	2980f069 	st.w	$r9,$r3,60(0x3c)
1c003818:	53f5bbff 	b	-2632(0xffff5b8) # 1c002dd0 <_dtoa_r+0x278>
1c00381c:	2880e07b 	ld.w	$r27,$r3,56(0x38)
1c003820:	28808079 	ld.w	$r25,$r3,32(0x20)
1c003824:	0015001a 	move	$r26,$r0
1c003828:	53fd83ff 	b	-640(0xffffd80) # 1c0035a8 <_dtoa_r+0xa50>
1c00382c:	00150305 	move	$r5,$r24
1c003830:	00150126 	move	$r6,$r9
1c003834:	001502c4 	move	$r4,$r22
1c003838:	54299c00 	bl	10652(0x299c) # 1c0061d4 <__lshift>
1c00383c:	00150098 	move	$r24,$r4
1c003840:	53fe53ff 	b	-432(0xffffe50) # 1c003690 <_dtoa_r+0xb38>
1c003844:	02807004 	addi.w	$r4,$r0,28(0x1c)
1c003848:	53fe2fff 	b	-468(0xffffe2c) # 1c003674 <_dtoa_r+0xb1c>
1c00384c:	0011113a 	sub.w	$r26,$r9,$r4
1c003850:	00176b24 	sll.w	$r4,$r25,$r26
1c003854:	53f46fff 	b	-2964(0xffff46c) # 1c002cc0 <_dtoa_r+0x168>
1c003858:	2980f060 	st.w	$r0,$r3,60(0x3c)
1c00385c:	63fa2fa0 	blt	$r29,$r0,-1492(0x3fa2c) # 1c003288 <_dtoa_r+0x730>
1c003860:	29808060 	st.w	$r0,$r3,32(0x20)
1c003864:	53fa3bff 	b	-1480(0xffffa38) # 1c00329c <_dtoa_r+0x744>
1c003868:	00150085 	move	$r5,$r4
1c00386c:	001503e6 	move	$r6,$r31
1c003870:	001502c4 	move	$r4,$r22
1c003874:	54282800 	bl	10280(0x2828) # 1c00609c <__pow5mult>
1c003878:	28803068 	ld.w	$r8,$r3,12(0xc)
1c00387c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c003880:	0015009b 	move	$r27,$r4
1c003884:	64030928 	bge	$r9,$r8,776(0x308) # 1c003b8c <_dtoa_r+0x1034>
1c003888:	0015001c 	move	$r28,$r0
1c00388c:	28804369 	ld.w	$r9,$r27,16(0x10)
1c003890:	02800d29 	addi.w	$r9,$r9,3(0x3)
1c003894:	00408929 	slli.w	$r9,$r9,0x2
1c003898:	00102769 	add.w	$r9,$r27,$r9
1c00389c:	28801124 	ld.w	$r4,$r9,4(0x4)
1c0038a0:	54249800 	bl	9368(0x2498) # 1c005d38 <__hi0bits>
1c0038a4:	02808009 	addi.w	$r9,$r0,32(0x20)
1c0038a8:	00111124 	sub.w	$r4,$r9,$r4
1c0038ac:	53fda7ff 	b	-604(0xffffda4) # 1c003650 <_dtoa_r+0xaf8>
1c0038b0:	00150345 	move	$r5,$r26
1c0038b4:	00150007 	move	$r7,$r0
1c0038b8:	02802806 	addi.w	$r6,$r0,10(0xa)
1c0038bc:	001502c4 	move	$r4,$r22
1c0038c0:	54222800 	bl	8744(0x2228) # 1c005ae8 <__multadd>
1c0038c4:	28811069 	ld.w	$r9,$r3,68(0x44)
1c0038c8:	0015009a 	move	$r26,$r4
1c0038cc:	60001409 	blt	$r0,$r9,20(0x14) # 1c0038e0 <_dtoa_r+0xd88>
1c0038d0:	28803068 	ld.w	$r8,$r3,12(0xc)
1c0038d4:	02800809 	addi.w	$r9,$r0,2(0x2)
1c0038d8:	6007fd28 	blt	$r9,$r8,2044(0x7fc) # 1c0040d4 <_dtoa_r+0x157c>
1c0038dc:	28811069 	ld.w	$r9,$r3,68(0x44)
1c0038e0:	29809069 	st.w	$r9,$r3,36(0x24)
1c0038e4:	64001819 	bge	$r0,$r25,24(0x18) # 1c0038fc <_dtoa_r+0xda4>
1c0038e8:	00150345 	move	$r5,$r26
1c0038ec:	00150326 	move	$r6,$r25
1c0038f0:	001502c4 	move	$r4,$r22
1c0038f4:	5428e000 	bl	10464(0x28e0) # 1c0061d4 <__lshift>
1c0038f8:	0015009a 	move	$r26,$r4
1c0038fc:	0015035d 	move	$r29,$r26
1c003900:	5c048780 	bne	$r28,$r0,1156(0x484) # 1c003d84 <_dtoa_r+0x122c>
1c003904:	2880407c 	ld.w	$r28,$r3,16(0x10)
1c003908:	28809068 	ld.w	$r8,$r3,36(0x24)
1c00390c:	02bfff89 	addi.w	$r9,$r28,-1(0xfff)
1c003910:	00102129 	add.w	$r9,$r9,$r8
1c003914:	2980a069 	st.w	$r9,$r3,40(0x28)
1c003918:	034007c9 	andi	$r9,$r30,0x1
1c00391c:	29808069 	st.w	$r9,$r3,32(0x20)
1c003920:	00150365 	move	$r5,$r27
1c003924:	00150304 	move	$r4,$r24
1c003928:	57f04bff 	bl	-4024(0xffff048) # 1c002970 <quorem>
1c00392c:	0015009f 	move	$r31,$r4
1c003930:	00150345 	move	$r5,$r26
1c003934:	00150304 	move	$r4,$r24
1c003938:	5429e800 	bl	10728(0x29e8) # 1c006320 <__mcmp>
1c00393c:	00150365 	move	$r5,$r27
1c003940:	00150099 	move	$r25,$r4
1c003944:	001503a6 	move	$r6,$r29
1c003948:	001502c4 	move	$r4,$r22
1c00394c:	542a2c00 	bl	10796(0x2a2c) # 1c006378 <__mdiff>
1c003950:	28803089 	ld.w	$r9,$r4,12(0xc)
1c003954:	00150097 	move	$r23,$r4
1c003958:	0280c3fe 	addi.w	$r30,$r31,48(0x30)
1c00395c:	00150085 	move	$r5,$r4
1c003960:	5c00b520 	bne	$r9,$r0,180(0xb4) # 1c003a14 <_dtoa_r+0xebc>
1c003964:	00150304 	move	$r4,$r24
1c003968:	5429b800 	bl	10680(0x29b8) # 1c006320 <__mcmp>
1c00396c:	29809064 	st.w	$r4,$r3,36(0x24)
1c003970:	001502e5 	move	$r5,$r23
1c003974:	001502c4 	move	$r4,$r22
1c003978:	54214c00 	bl	8524(0x214c) # 1c005ac4 <_Bfree>
1c00397c:	28803069 	ld.w	$r9,$r3,12(0xc)
1c003980:	28809067 	ld.w	$r7,$r3,36(0x24)
1c003984:	28808068 	ld.w	$r8,$r3,32(0x20)
1c003988:	001524e9 	or	$r9,$r7,$r9
1c00398c:	00152509 	or	$r9,$r8,$r9
1c003990:	5806e920 	beq	$r9,$r0,1768(0x6e8) # 1c004078 <_dtoa_r+0x1520>
1c003994:	02800797 	addi.w	$r23,$r28,1(0x1)
1c003998:	60039720 	blt	$r25,$r0,916(0x394) # 1c003d2c <_dtoa_r+0x11d4>
1c00399c:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0039a0:	00152739 	or	$r25,$r25,$r9
1c0039a4:	28808069 	ld.w	$r9,$r3,32(0x20)
1c0039a8:	00156539 	or	$r25,$r9,$r25
1c0039ac:	58038320 	beq	$r25,$r0,896(0x380) # 1c003d2c <_dtoa_r+0x11d4>
1c0039b0:	60056407 	blt	$r0,$r7,1380(0x564) # 1c003f14 <_dtoa_r+0x13bc>
1c0039b4:	2880a069 	ld.w	$r9,$r3,40(0x28)
1c0039b8:	2900039e 	st.b	$r30,$r28,0
1c0039bc:	5805753c 	beq	$r9,$r28,1396(0x574) # 1c003f30 <_dtoa_r+0x13d8>
1c0039c0:	00150305 	move	$r5,$r24
1c0039c4:	00150007 	move	$r7,$r0
1c0039c8:	02802806 	addi.w	$r6,$r0,10(0xa)
1c0039cc:	001502c4 	move	$r4,$r22
1c0039d0:	54211800 	bl	8472(0x2118) # 1c005ae8 <__multadd>
1c0039d4:	00150098 	move	$r24,$r4
1c0039d8:	00150007 	move	$r7,$r0
1c0039dc:	02802806 	addi.w	$r6,$r0,10(0xa)
1c0039e0:	00150345 	move	$r5,$r26
1c0039e4:	001502c4 	move	$r4,$r22
1c0039e8:	58003f5d 	beq	$r26,$r29,60(0x3c) # 1c003a24 <_dtoa_r+0xecc>
1c0039ec:	5420fc00 	bl	8444(0x20fc) # 1c005ae8 <__multadd>
1c0039f0:	001503a5 	move	$r5,$r29
1c0039f4:	0015009a 	move	$r26,$r4
1c0039f8:	00150007 	move	$r7,$r0
1c0039fc:	02802806 	addi.w	$r6,$r0,10(0xa)
1c003a00:	001502c4 	move	$r4,$r22
1c003a04:	5420e400 	bl	8420(0x20e4) # 1c005ae8 <__multadd>
1c003a08:	0015009d 	move	$r29,$r4
1c003a0c:	001502fc 	move	$r28,$r23
1c003a10:	53ff13ff 	b	-240(0xfffff10) # 1c003920 <_dtoa_r+0xdc8>
1c003a14:	001502c4 	move	$r4,$r22
1c003a18:	5420ac00 	bl	8364(0x20ac) # 1c005ac4 <_Bfree>
1c003a1c:	02800407 	addi.w	$r7,$r0,1(0x1)
1c003a20:	53ff77ff 	b	-140(0xfffff74) # 1c003994 <_dtoa_r+0xe3c>
1c003a24:	5420c400 	bl	8388(0x20c4) # 1c005ae8 <__multadd>
1c003a28:	0015009a 	move	$r26,$r4
1c003a2c:	0015009d 	move	$r29,$r4
1c003a30:	001502fc 	move	$r28,$r23
1c003a34:	53feefff 	b	-276(0xffffeec) # 1c003920 <_dtoa_r+0xdc8>
1c003a38:	28803068 	ld.w	$r8,$r3,12(0xc)
1c003a3c:	02800809 	addi.w	$r9,$r0,2(0x2)
1c003a40:	64010d28 	bge	$r9,$r8,268(0x10c) # 1c003b4c <_dtoa_r+0xff4>
1c003a44:	28809069 	ld.w	$r9,$r3,36(0x24)
1c003a48:	5ff92d20 	bne	$r9,$r0,-1748(0x3f92c) # 1c003374 <_dtoa_r+0x81c>
1c003a4c:	00150365 	move	$r5,$r27
1c003a50:	00150007 	move	$r7,$r0
1c003a54:	02801406 	addi.w	$r6,$r0,5(0x5)
1c003a58:	001502c4 	move	$r4,$r22
1c003a5c:	54208c00 	bl	8332(0x208c) # 1c005ae8 <__multadd>
1c003a60:	0015009b 	move	$r27,$r4
1c003a64:	00150085 	move	$r5,$r4
1c003a68:	00150304 	move	$r4,$r24
1c003a6c:	5428b400 	bl	10420(0x28b4) # 1c006320 <__mcmp>
1c003a70:	67f90404 	bge	$r0,$r4,-1788(0x3f904) # 1c003374 <_dtoa_r+0x81c>
1c003a74:	28804068 	ld.w	$r8,$r3,16(0x10)
1c003a78:	0280c409 	addi.w	$r9,$r0,49(0x31)
1c003a7c:	29000109 	st.b	$r9,$r8,0
1c003a80:	28806069 	ld.w	$r9,$r3,24(0x18)
1c003a84:	02800517 	addi.w	$r23,$r8,1(0x1)
1c003a88:	02800539 	addi.w	$r25,$r9,1(0x1)
1c003a8c:	00150365 	move	$r5,$r27
1c003a90:	001502c4 	move	$r4,$r22
1c003a94:	54203000 	bl	8240(0x2030) # 1c005ac4 <_Bfree>
1c003a98:	02800729 	addi.w	$r9,$r25,1(0x1)
1c003a9c:	29806069 	st.w	$r9,$r3,24(0x18)
1c003aa0:	5ffceb40 	bne	$r26,$r0,-792(0x3fce8) # 1c003788 <_dtoa_r+0xc30>
1c003aa4:	53f70bff 	b	-2296(0xffff708) # 1c0031ac <_dtoa_r+0x654>
1c003aa8:	00150365 	move	$r5,$r27
1c003aac:	00150304 	move	$r4,$r24
1c003ab0:	54287000 	bl	10352(0x2870) # 1c006320 <__mcmp>
1c003ab4:	67fbfc80 	bge	$r4,$r0,-1028(0x3fbfc) # 1c0036b0 <_dtoa_r+0xb58>
1c003ab8:	00150305 	move	$r5,$r24
1c003abc:	00150007 	move	$r7,$r0
1c003ac0:	02802806 	addi.w	$r6,$r0,10(0xa)
1c003ac4:	001502c4 	move	$r4,$r22
1c003ac8:	54202000 	bl	8224(0x2020) # 1c005ae8 <__multadd>
1c003acc:	28806069 	ld.w	$r9,$r3,24(0x18)
1c003ad0:	00150098 	move	$r24,$r4
1c003ad4:	02bffd37 	addi.w	$r23,$r9,-1(0xfff)
1c003ad8:	2880b069 	ld.w	$r9,$r3,44(0x2c)
1c003adc:	5ffdd520 	bne	$r9,$r0,-556(0x3fdd4) # 1c0038b0 <_dtoa_r+0xd58>
1c003ae0:	28811069 	ld.w	$r9,$r3,68(0x44)
1c003ae4:	6405e409 	bge	$r0,$r9,1508(0x5e4) # 1c0040c8 <_dtoa_r+0x1570>
1c003ae8:	29809069 	st.w	$r9,$r3,36(0x24)
1c003aec:	53fbe3ff 	b	-1056(0xffffbe0) # 1c0036cc <_dtoa_r+0xb74>
1c003af0:	2880e066 	ld.w	$r6,$r3,56(0x38)
1c003af4:	00150305 	move	$r5,$r24
1c003af8:	001502c4 	move	$r4,$r22
1c003afc:	5425a000 	bl	9632(0x25a0) # 1c00609c <__pow5mult>
1c003b00:	00150098 	move	$r24,$r4
1c003b04:	53fb23ff 	b	-1248(0xffffb20) # 1c003624 <_dtoa_r+0xacc>
1c003b08:	1dc7ffc9 	pcaddu12i	$r9,-114690(0xe3ffe)
1c003b0c:	028bc129 	addi.w	$r9,$r9,752(0x2f0)
1c003b10:	29804069 	st.w	$r9,$r3,16(0x10)
1c003b14:	02800d29 	addi.w	$r9,$r9,3(0x3)
1c003b18:	53f723ff 	b	-2272(0xffff720) # 1c003238 <_dtoa_r+0x6e0>
1c003b1c:	5ffb2fc0 	bne	$r30,$r0,-1236(0x3fb2c) # 1c003648 <_dtoa_r+0xaf0>
1c003b20:	14001fe9 	lu12i.w	$r9,255(0xff)
1c003b24:	03bffd29 	ori	$r9,$r9,0xfff
1c003b28:	0014a6e9 	and	$r9,$r23,$r9
1c003b2c:	001503dc 	move	$r28,$r30
1c003b30:	5ffb1920 	bne	$r9,$r0,-1256(0x3fb18) # 1c003648 <_dtoa_r+0xaf0>
1c003b34:	50006c00 	b	108(0x6c) # 1c003ba0 <_dtoa_r+0x1048>
1c003b38:	02800409 	addi.w	$r9,$r0,1(0x1)
1c003b3c:	0280041b 	addi.w	$r27,$r0,1(0x1)
1c003b40:	29809069 	st.w	$r9,$r3,36(0x24)
1c003b44:	2980a069 	st.w	$r9,$r3,40(0x28)
1c003b48:	53f78fff 	b	-2164(0xffff78c) # 1c0032d4 <_dtoa_r+0x77c>
1c003b4c:	28806069 	ld.w	$r9,$r3,24(0x18)
1c003b50:	02800529 	addi.w	$r9,$r9,1(0x1)
1c003b54:	29806069 	st.w	$r9,$r3,24(0x18)
1c003b58:	2880b069 	ld.w	$r9,$r3,44(0x2c)
1c003b5c:	5ffd8920 	bne	$r9,$r0,-632(0x3fd88) # 1c0038e4 <_dtoa_r+0xd8c>
1c003b60:	00150365 	move	$r5,$r27
1c003b64:	00150304 	move	$r4,$r24
1c003b68:	57ee0bff 	bl	-4600(0xfffee08) # 1c002970 <quorem>
1c003b6c:	28804069 	ld.w	$r9,$r3,16(0x10)
1c003b70:	0280c09e 	addi.w	$r30,$r4,48(0x30)
1c003b74:	00150019 	move	$r25,$r0
1c003b78:	02800537 	addi.w	$r23,$r9,1(0x1)
1c003b7c:	2900013e 	st.b	$r30,$r9,0
1c003b80:	53fb9bff 	b	-1128(0xffffb98) # 1c003718 <_dtoa_r+0xbc0>
1c003b84:	001503a9 	move	$r9,$r29
1c003b88:	53fa33ff 	b	-1488(0xffffa30) # 1c0035b8 <_dtoa_r+0xa60>
1c003b8c:	5ffcffc0 	bne	$r30,$r0,-772(0x3fcfc) # 1c003888 <_dtoa_r+0xd30>
1c003b90:	14001fe9 	lu12i.w	$r9,255(0xff)
1c003b94:	03bffd29 	ori	$r9,$r9,0xfff
1c003b98:	0014a6e9 	and	$r9,$r23,$r9
1c003b9c:	5ffced20 	bne	$r9,$r0,-788(0x3fcec) # 1c003888 <_dtoa_r+0xd30>
1c003ba0:	14ffe009 	lu12i.w	$r9,524032(0x7ff00)
1c003ba4:	0014a6f7 	and	$r23,$r23,$r9
1c003ba8:	0015001c 	move	$r28,$r0
1c003bac:	5bfa9ee0 	beq	$r23,$r0,-1380(0x3fa9c) # 1c003648 <_dtoa_r+0xaf0>
1c003bb0:	28808069 	ld.w	$r9,$r3,32(0x20)
1c003bb4:	028007bd 	addi.w	$r29,$r29,1(0x1)
1c003bb8:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c003bbc:	02800529 	addi.w	$r9,$r9,1(0x1)
1c003bc0:	29808069 	st.w	$r9,$r3,32(0x20)
1c003bc4:	53fa87ff 	b	-1404(0xffffa84) # 1c003648 <_dtoa_r+0xaf0>
1c003bc8:	00116d3b 	sub.w	$r27,$r9,$r27
1c003bcc:	53f9afff 	b	-1620(0xffff9ac) # 1c003578 <_dtoa_r+0xa20>
1c003bd0:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c003bd4:	2881c129 	ld.w	$r9,$r9,112(0x70)
1c003bd8:	28808126 	ld.w	$r6,$r9,32(0x20)
1c003bdc:	28809127 	ld.w	$r7,$r9,36(0x24)
1c003be0:	2880c064 	ld.w	$r4,$r3,48(0x30)
1c003be4:	2880d065 	ld.w	$r5,$r3,52(0x34)
1c003be8:	2981206a 	st.w	$r10,$r3,72(0x48)
1c003bec:	2981306b 	st.w	$r11,$r3,76(0x4c)
1c003bf0:	03403fde 	andi	$r30,$r30,0xf
1c003bf4:	54705c00 	bl	28764(0x705c) # 1c00ac50 <__divdf3>
1c003bf8:	0015009b 	move	$r27,$r4
1c003bfc:	001500bc 	move	$r28,$r5
1c003c00:	02800c1a 	addi.w	$r26,$r0,3(0x3)
1c003c04:	2881206a 	ld.w	$r10,$r3,72(0x48)
1c003c08:	2881306b 	ld.w	$r11,$r3,76(0x4c)
1c003c0c:	53f2cfff 	b	-3380(0xffff2cc) # 1c002ed8 <_dtoa_r+0x380>
1c003c10:	2980b060 	st.w	$r0,$r3,44(0x2c)
1c003c14:	53fb97ff 	b	-1132(0xffffb94) # 1c0037a8 <_dtoa_r+0xc50>
1c003c18:	28810068 	ld.w	$r8,$r3,64(0x40)
1c003c1c:	5802d100 	beq	$r8,$r0,720(0x2d0) # 1c003eec <_dtoa_r+0x1394>
1c003c20:	28808068 	ld.w	$r8,$r3,32(0x20)
1c003c24:	0290cd29 	addi.w	$r9,$r9,1075(0x433)
1c003c28:	001027bd 	add.w	$r29,$r29,$r9
1c003c2c:	00102509 	add.w	$r9,$r8,$r9
1c003c30:	00150119 	move	$r25,$r8
1c003c34:	2880e07b 	ld.w	$r27,$r3,56(0x38)
1c003c38:	29808069 	st.w	$r9,$r3,32(0x20)
1c003c3c:	53f95fff 	b	-1700(0xffff95c) # 1c003598 <_dtoa_r+0xa40>
1c003c40:	00150344 	move	$r4,$r26
1c003c44:	548bec00 	bl	35820(0x8bec) # 1c00c830 <__floatsidf>
1c003c48:	00150366 	move	$r6,$r27
1c003c4c:	001502e7 	move	$r7,$r23
1c003c50:	547b2000 	bl	31520(0x7b20) # 1c00b770 <__muldf3>
1c003c54:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c003c58:	02bc1129 	addi.w	$r9,$r9,-252(0xf04)
1c003c5c:	28800126 	ld.w	$r6,$r9,0
1c003c60:	28801127 	ld.w	$r7,$r9,4(0x4)
1c003c64:	15f9801a 	lu12i.w	$r26,-13312(0xfcc00)
1c003c68:	54669800 	bl	26264(0x6698) # 1c00a300 <__adddf3>
1c003c6c:	00150099 	move	$r25,$r4
1c003c70:	0010175a 	add.w	$r26,$r26,$r5
1c003c74:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c003c78:	02bbb129 	addi.w	$r9,$r9,-276(0xeec)
1c003c7c:	28800126 	ld.w	$r6,$r9,0
1c003c80:	28801127 	ld.w	$r7,$r9,4(0x4)
1c003c84:	00150364 	move	$r4,$r27
1c003c88:	001502e5 	move	$r5,$r23
1c003c8c:	54819400 	bl	33172(0x8194) # 1c00be20 <__subdf3>
1c003c90:	00150326 	move	$r6,$r25
1c003c94:	00150347 	move	$r7,$r26
1c003c98:	0015009b 	move	$r27,$r4
1c003c9c:	001500bc 	move	$r28,$r5
1c003ca0:	54788000 	bl	30848(0x7880) # 1c00b520 <__gedf2>
1c003ca4:	6003c804 	blt	$r0,$r4,968(0x3c8) # 1c00406c <_dtoa_r+0x1514>
1c003ca8:	15000009 	lu12i.w	$r9,-524288(0x80000)
1c003cac:	0015a75a 	xor	$r26,$r26,$r9
1c003cb0:	00150326 	move	$r6,$r25
1c003cb4:	00150347 	move	$r7,$r26
1c003cb8:	00150364 	move	$r4,$r27
1c003cbc:	00150385 	move	$r5,$r28
1c003cc0:	54798000 	bl	31104(0x7980) # 1c00b640 <__ledf2>
1c003cc4:	67f63480 	bge	$r4,$r0,-2508(0x3f634) # 1c0032f8 <_dtoa_r+0x7a0>
1c003cc8:	0015001b 	move	$r27,$r0
1c003ccc:	0015001a 	move	$r26,$r0
1c003cd0:	53f6a7ff 	b	-2396(0xffff6a4) # 1c003374 <_dtoa_r+0x81c>
1c003cd4:	5c000c80 	bne	$r4,$r0,12(0xc) # 1c003ce0 <_dtoa_r+0x1188>
1c003cd8:	034007c9 	andi	$r9,$r30,0x1
1c003cdc:	5ffa6120 	bne	$r9,$r0,-1440(0x3fa60) # 1c00373c <_dtoa_r+0xbe4>
1c003ce0:	0280c007 	addi.w	$r7,$r0,48(0x30)
1c003ce4:	50000c00 	b	12(0xc) # 1c003cf0 <_dtoa_r+0x1198>
1c003ce8:	283ffae8 	ld.b	$r8,$r23,-2(0xffe)
1c003cec:	00150137 	move	$r23,$r9
1c003cf0:	02bffee9 	addi.w	$r9,$r23,-1(0xfff)
1c003cf4:	5bfff507 	beq	$r8,$r7,-12(0x3fff4) # 1c003ce8 <_dtoa_r+0x1190>
1c003cf8:	53fa6fff 	b	-1428(0xffffa6c) # 1c003764 <_dtoa_r+0xc0c>
1c003cfc:	28804068 	ld.w	$r8,$r3,16(0x10)
1c003d00:	0280c409 	addi.w	$r9,$r0,49(0x31)
1c003d04:	29000109 	st.b	$r9,$r8,0
1c003d08:	28806069 	ld.w	$r9,$r3,24(0x18)
1c003d0c:	02800529 	addi.w	$r9,$r9,1(0x1)
1c003d10:	29806069 	st.w	$r9,$r3,24(0x18)
1c003d14:	53fa53ff 	b	-1456(0xffffa50) # 1c003764 <_dtoa_r+0xc0c>
1c003d18:	28806069 	ld.w	$r9,$r3,24(0x18)
1c003d1c:	5c022120 	bne	$r9,$r0,544(0x220) # 1c003f3c <_dtoa_r+0x13e4>
1c003d20:	0015033b 	move	$r27,$r25
1c003d24:	0280081a 	addi.w	$r26,$r0,2(0x2)
1c003d28:	53f20fff 	b	-3572(0xffff20c) # 1c002f34 <_dtoa_r+0x3dc>
1c003d2c:	64003007 	bge	$r0,$r7,48(0x30) # 1c003d5c <_dtoa_r+0x1204>
1c003d30:	00150305 	move	$r5,$r24
1c003d34:	02800406 	addi.w	$r6,$r0,1(0x1)
1c003d38:	001502c4 	move	$r4,$r22
1c003d3c:	54249800 	bl	9368(0x2498) # 1c0061d4 <__lshift>
1c003d40:	00150365 	move	$r5,$r27
1c003d44:	00150098 	move	$r24,$r4
1c003d48:	5425d800 	bl	9688(0x25d8) # 1c006320 <__mcmp>
1c003d4c:	64034004 	bge	$r0,$r4,832(0x340) # 1c00408c <_dtoa_r+0x1534>
1c003d50:	0280e408 	addi.w	$r8,$r0,57(0x39)
1c003d54:	58001bc8 	beq	$r30,$r8,24(0x18) # 1c003d6c <_dtoa_r+0x1214>
1c003d58:	0280c7fe 	addi.w	$r30,$r31,49(0x31)
1c003d5c:	00150359 	move	$r25,$r26
1c003d60:	2900039e 	st.b	$r30,$r28,0
1c003d64:	001503ba 	move	$r26,$r29
1c003d68:	53f9ffff 	b	-1540(0xffff9fc) # 1c003764 <_dtoa_r+0xc0c>
1c003d6c:	0280e409 	addi.w	$r9,$r0,57(0x39)
1c003d70:	00150359 	move	$r25,$r26
1c003d74:	29000389 	st.b	$r9,$r28,0
1c003d78:	001503ba 	move	$r26,$r29
1c003d7c:	0280e408 	addi.w	$r8,$r0,57(0x39)
1c003d80:	53f9bfff 	b	-1604(0xffff9bc) # 1c00373c <_dtoa_r+0xbe4>
1c003d84:	28801345 	ld.w	$r5,$r26,4(0x4)
1c003d88:	001502c4 	move	$r4,$r22
1c003d8c:	541c9000 	bl	7312(0x1c90) # 1c005a1c <_Balloc>
1c003d90:	28804346 	ld.w	$r6,$r26,16(0x10)
1c003d94:	00150097 	move	$r23,$r4
1c003d98:	02803345 	addi.w	$r5,$r26,12(0xc)
1c003d9c:	028008c6 	addi.w	$r6,$r6,2(0x2)
1c003da0:	004088c6 	slli.w	$r6,$r6,0x2
1c003da4:	02803084 	addi.w	$r4,$r4,12(0xc)
1c003da8:	541a9000 	bl	6800(0x1a90) # 1c005838 <memcpy>
1c003dac:	02800406 	addi.w	$r6,$r0,1(0x1)
1c003db0:	001502e5 	move	$r5,$r23
1c003db4:	001502c4 	move	$r4,$r22
1c003db8:	54241c00 	bl	9244(0x241c) # 1c0061d4 <__lshift>
1c003dbc:	0015009d 	move	$r29,$r4
1c003dc0:	53fb47ff 	b	-1212(0xffffb44) # 1c003904 <_dtoa_r+0xdac>
1c003dc4:	00150337 	move	$r23,$r25
1c003dc8:	28803076 	ld.w	$r22,$r3,12(0xc)
1c003dcc:	53f3e3ff 	b	-3104(0xffff3e0) # 1c0031ac <_dtoa_r+0x654>
1c003dd0:	28812066 	ld.w	$r6,$r3,72(0x48)
1c003dd4:	28813067 	ld.w	$r7,$r3,76(0x4c)
1c003dd8:	00150324 	move	$r4,$r25
1c003ddc:	00150345 	move	$r5,$r26
1c003de0:	54799000 	bl	31120(0x7990) # 1c00b770 <__muldf3>
1c003de4:	28804068 	ld.w	$r8,$r3,16(0x10)
1c003de8:	29816064 	st.w	$r4,$r3,88(0x58)
1c003dec:	29817065 	st.w	$r5,$r3,92(0x5c)
1c003df0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c003df4:	2900011e 	st.b	$r30,$r8,0
1c003df8:	0010711a 	add.w	$r26,$r8,$r28
1c003dfc:	1dc7fff9 	pcaddu12i	$r25,-114689(0xe3fff)
1c003e00:	02b55339 	addi.w	$r25,$r25,-684(0xd54)
1c003e04:	58007389 	beq	$r28,$r9,112(0x70) # 1c003e74 <_dtoa_r+0x131c>
1c003e08:	28800329 	ld.w	$r9,$r25,0
1c003e0c:	2880132a 	ld.w	$r10,$r25,4(0x4)
1c003e10:	28814064 	ld.w	$r4,$r3,80(0x50)
1c003e14:	28815065 	ld.w	$r5,$r3,84(0x54)
1c003e18:	001503bb 	move	$r27,$r29
1c003e1c:	29812069 	st.w	$r9,$r3,72(0x48)
1c003e20:	2981306a 	st.w	$r10,$r3,76(0x4c)
1c003e24:	28812066 	ld.w	$r6,$r3,72(0x48)
1c003e28:	28813067 	ld.w	$r7,$r3,76(0x4c)
1c003e2c:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c003e30:	54794000 	bl	31040(0x7940) # 1c00b770 <__muldf3>
1c003e34:	001500bd 	move	$r29,$r5
1c003e38:	0015009c 	move	$r28,$r4
1c003e3c:	54896400 	bl	35172(0x8964) # 1c00c7a0 <__fixdfsi>
1c003e40:	00150099 	move	$r25,$r4
1c003e44:	5489ec00 	bl	35308(0x89ec) # 1c00c830 <__floatsidf>
1c003e48:	00150086 	move	$r6,$r4
1c003e4c:	001500a7 	move	$r7,$r5
1c003e50:	00150384 	move	$r4,$r28
1c003e54:	001503a5 	move	$r5,$r29
1c003e58:	0280c339 	addi.w	$r25,$r25,48(0x30)
1c003e5c:	547fc400 	bl	32708(0x7fc4) # 1c00be20 <__subdf3>
1c003e60:	293ffef9 	st.b	$r25,$r23,-1(0xfff)
1c003e64:	5fffc2fa 	bne	$r23,$r26,-64(0x3ffc0) # 1c003e24 <_dtoa_r+0x12cc>
1c003e68:	29814064 	st.w	$r4,$r3,80(0x50)
1c003e6c:	29815065 	st.w	$r5,$r3,84(0x54)
1c003e70:	0015037d 	move	$r29,$r27
1c003e74:	1dc7fff9 	pcaddu12i	$r25,-114689(0xe3fff)
1c003e78:	02b3d339 	addi.w	$r25,$r25,-780(0xcf4)
1c003e7c:	28800326 	ld.w	$r6,$r25,0
1c003e80:	28801327 	ld.w	$r7,$r25,4(0x4)
1c003e84:	28816064 	ld.w	$r4,$r3,88(0x58)
1c003e88:	28817065 	ld.w	$r5,$r3,92(0x5c)
1c003e8c:	54647400 	bl	25716(0x6474) # 1c00a300 <__adddf3>
1c003e90:	28814066 	ld.w	$r6,$r3,80(0x50)
1c003e94:	28815067 	ld.w	$r7,$r3,84(0x54)
1c003e98:	5477a800 	bl	30632(0x77a8) # 1c00b640 <__ledf2>
1c003e9c:	60020080 	blt	$r4,$r0,512(0x200) # 1c00409c <_dtoa_r+0x1544>
1c003ea0:	28816066 	ld.w	$r6,$r3,88(0x58)
1c003ea4:	28817067 	ld.w	$r7,$r3,92(0x5c)
1c003ea8:	28800324 	ld.w	$r4,$r25,0
1c003eac:	28801325 	ld.w	$r5,$r25,4(0x4)
1c003eb0:	547f7000 	bl	32624(0x7f70) # 1c00be20 <__subdf3>
1c003eb4:	28814066 	ld.w	$r6,$r3,80(0x50)
1c003eb8:	28815067 	ld.w	$r7,$r3,84(0x54)
1c003ebc:	54766400 	bl	30308(0x7664) # 1c00b520 <__gedf2>
1c003ec0:	0280c007 	addi.w	$r7,$r0,48(0x30)
1c003ec4:	67f43404 	bge	$r0,$r4,-3020(0x3f434) # 1c0032f8 <_dtoa_r+0x7a0>
1c003ec8:	50000800 	b	8(0x8) # 1c003ed0 <_dtoa_r+0x1378>
1c003ecc:	00150117 	move	$r23,$r8
1c003ed0:	283ffee9 	ld.b	$r9,$r23,-1(0xfff)
1c003ed4:	02bffee8 	addi.w	$r8,$r23,-1(0xfff)
1c003ed8:	5bfff527 	beq	$r9,$r7,-12(0x3fff4) # 1c003ecc <_dtoa_r+0x1374>
1c003edc:	28818069 	ld.w	$r9,$r3,96(0x60)
1c003ee0:	02800529 	addi.w	$r9,$r9,1(0x1)
1c003ee4:	29806069 	st.w	$r9,$r3,24(0x18)
1c003ee8:	53f2c7ff 	b	-3388(0xffff2c4) # 1c0031ac <_dtoa_r+0x654>
1c003eec:	2881e068 	ld.w	$r8,$r3,120(0x78)
1c003ef0:	28808067 	ld.w	$r7,$r3,32(0x20)
1c003ef4:	0280d809 	addi.w	$r9,$r0,54(0x36)
1c003ef8:	00112129 	sub.w	$r9,$r9,$r8
1c003efc:	001027bd 	add.w	$r29,$r29,$r9
1c003f00:	001024e9 	add.w	$r9,$r7,$r9
1c003f04:	001500f9 	move	$r25,$r7
1c003f08:	2880e07b 	ld.w	$r27,$r3,56(0x38)
1c003f0c:	29808069 	st.w	$r9,$r3,32(0x20)
1c003f10:	53f68bff 	b	-2424(0xffff688) # 1c003598 <_dtoa_r+0xa40>
1c003f14:	0280e408 	addi.w	$r8,$r0,57(0x39)
1c003f18:	5bfe57c8 	beq	$r30,$r8,-428(0x3fe54) # 1c003d6c <_dtoa_r+0x1214>
1c003f1c:	028007c9 	addi.w	$r9,$r30,1(0x1)
1c003f20:	00150359 	move	$r25,$r26
1c003f24:	29000389 	st.b	$r9,$r28,0
1c003f28:	001503ba 	move	$r26,$r29
1c003f2c:	53f83bff 	b	-1992(0xffff838) # 1c003764 <_dtoa_r+0xc0c>
1c003f30:	00150359 	move	$r25,$r26
1c003f34:	001503ba 	move	$r26,$r29
1c003f38:	53f7e3ff 	b	-2080(0xffff7e0) # 1c003718 <_dtoa_r+0xbc0>
1c003f3c:	28806069 	ld.w	$r9,$r3,24(0x18)
1c003f40:	2880c064 	ld.w	$r4,$r3,48(0x30)
1c003f44:	2880d065 	ld.w	$r5,$r3,52(0x34)
1c003f48:	00112419 	sub.w	$r25,$r0,$r9
1c003f4c:	03403f29 	andi	$r9,$r25,0xf
1c003f50:	00408d28 	slli.w	$r8,$r9,0x3
1c003f54:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c003f58:	28b35129 	ld.w	$r9,$r9,-812(0xcd4)
1c003f5c:	00102129 	add.w	$r9,$r9,$r8
1c003f60:	28800126 	ld.w	$r6,$r9,0
1c003f64:	28801127 	ld.w	$r7,$r9,4(0x4)
1c003f68:	00489339 	srai.w	$r25,$r25,0x4
1c003f6c:	54780400 	bl	30724(0x7804) # 1c00b770 <__muldf3>
1c003f70:	0015009b 	move	$r27,$r4
1c003f74:	001500b7 	move	$r23,$r5
1c003f78:	58016f20 	beq	$r25,$r0,364(0x16c) # 1c0040e4 <_dtoa_r+0x158c>
1c003f7c:	1dc7fffc 	pcaddu12i	$r28,-114689(0xe3fff)
1c003f80:	28b3139c 	ld.w	$r28,$r28,-828(0xcc4)
1c003f84:	00150087 	move	$r7,$r4
1c003f88:	001500a8 	move	$r8,$r5
1c003f8c:	00150006 	move	$r6,$r0
1c003f90:	0280081a 	addi.w	$r26,$r0,2(0x2)
1c003f94:	03400729 	andi	$r9,$r25,0x1
1c003f98:	001500e4 	move	$r4,$r7
1c003f9c:	00150105 	move	$r5,$r8
1c003fa0:	00488739 	srai.w	$r25,$r25,0x1
1c003fa4:	58002120 	beq	$r9,$r0,32(0x20) # 1c003fc4 <_dtoa_r+0x146c>
1c003fa8:	28800386 	ld.w	$r6,$r28,0
1c003fac:	28801387 	ld.w	$r7,$r28,4(0x4)
1c003fb0:	0280075a 	addi.w	$r26,$r26,1(0x1)
1c003fb4:	5477bc00 	bl	30652(0x77bc) # 1c00b770 <__muldf3>
1c003fb8:	00150087 	move	$r7,$r4
1c003fbc:	001500a8 	move	$r8,$r5
1c003fc0:	02800406 	addi.w	$r6,$r0,1(0x1)
1c003fc4:	0280239c 	addi.w	$r28,$r28,8(0x8)
1c003fc8:	5fffcf20 	bne	$r25,$r0,-52(0x3ffcc) # 1c003f94 <_dtoa_r+0x143c>
1c003fcc:	5bef68c0 	beq	$r6,$r0,-4248(0x3ef68) # 1c002f34 <_dtoa_r+0x3dc>
1c003fd0:	001500fb 	move	$r27,$r7
1c003fd4:	00150117 	move	$r23,$r8
1c003fd8:	53ef5fff 	b	-4260(0xfffef5c) # 1c002f34 <_dtoa_r+0x3dc>
1c003fdc:	28809069 	ld.w	$r9,$r3,36(0x24)
1c003fe0:	5bfc6120 	beq	$r9,$r0,-928(0x3fc60) # 1c003c40 <_dtoa_r+0x10e8>
1c003fe4:	2881107c 	ld.w	$r28,$r3,68(0x44)
1c003fe8:	67f3101c 	bge	$r0,$r28,-3312(0x3f310) # 1c0032f8 <_dtoa_r+0x7a0>
1c003fec:	1dc7fff9 	pcaddu12i	$r25,-114689(0xe3fff)
1c003ff0:	02ad9339 	addi.w	$r25,$r25,-1180(0xb64)
1c003ff4:	28800326 	ld.w	$r6,$r25,0
1c003ff8:	28801327 	ld.w	$r7,$r25,4(0x4)
1c003ffc:	00150364 	move	$r4,$r27
1c004000:	001502e5 	move	$r5,$r23
1c004004:	54776c00 	bl	30572(0x776c) # 1c00b770 <__muldf3>
1c004008:	0015009b 	move	$r27,$r4
1c00400c:	02800744 	addi.w	$r4,$r26,1(0x1)
1c004010:	001500b7 	move	$r23,$r5
1c004014:	54881c00 	bl	34844(0x881c) # 1c00c830 <__floatsidf>
1c004018:	00150366 	move	$r6,$r27
1c00401c:	001502e7 	move	$r7,$r23
1c004020:	54775000 	bl	30544(0x7750) # 1c00b770 <__muldf3>
1c004024:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c004028:	02acd129 	addi.w	$r9,$r9,-1228(0xb34)
1c00402c:	28800126 	ld.w	$r6,$r9,0
1c004030:	28801127 	ld.w	$r7,$r9,4(0x4)
1c004034:	28806069 	ld.w	$r9,$r3,24(0x18)
1c004038:	15f9801a 	lu12i.w	$r26,-13312(0xfcc00)
1c00403c:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c004040:	29818069 	st.w	$r9,$r3,96(0x60)
1c004044:	5462bc00 	bl	25276(0x62bc) # 1c00a300 <__adddf3>
1c004048:	00150099 	move	$r25,$r4
1c00404c:	0010175a 	add.w	$r26,$r26,$r5
1c004050:	53ef57ff 	b	-4268(0xfffef54) # 1c002fa4 <_dtoa_r+0x44c>
1c004054:	28806069 	ld.w	$r9,$r3,24(0x18)
1c004058:	02800529 	addi.w	$r9,$r9,1(0x1)
1c00405c:	29806069 	st.w	$r9,$r3,24(0x18)
1c004060:	0280c409 	addi.w	$r9,$r0,49(0x31)
1c004064:	29000109 	st.b	$r9,$r8,0
1c004068:	53f147ff 	b	-3772(0xffff144) # 1c0031ac <_dtoa_r+0x654>
1c00406c:	0015001b 	move	$r27,$r0
1c004070:	0015001a 	move	$r26,$r0
1c004074:	53fa03ff 	b	-1536(0xffffa00) # 1c003a74 <_dtoa_r+0xf1c>
1c004078:	0280e408 	addi.w	$r8,$r0,57(0x39)
1c00407c:	02800797 	addi.w	$r23,$r28,1(0x1)
1c004080:	5bfcefc8 	beq	$r30,$r8,-788(0x3fcec) # 1c003d6c <_dtoa_r+0x1214>
1c004084:	63fcd419 	blt	$r0,$r25,-812(0x3fcd4) # 1c003d58 <_dtoa_r+0x1200>
1c004088:	53fcd7ff 	b	-812(0xffffcd4) # 1c003d5c <_dtoa_r+0x1204>
1c00408c:	5ffcd080 	bne	$r4,$r0,-816(0x3fcd0) # 1c003d5c <_dtoa_r+0x1204>
1c004090:	034007c8 	andi	$r8,$r30,0x1
1c004094:	5ffcbd00 	bne	$r8,$r0,-836(0x3fcbc) # 1c003d50 <_dtoa_r+0x11f8>
1c004098:	53fcc7ff 	b	-828(0xffffcc4) # 1c003d5c <_dtoa_r+0x1204>
1c00409c:	28818069 	ld.w	$r9,$r3,96(0x60)
1c0040a0:	283ffefe 	ld.b	$r30,$r23,-1(0xfff)
1c0040a4:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0040a8:	29806069 	st.w	$r9,$r3,24(0x18)
1c0040ac:	53f463ff 	b	-2976(0xffff460) # 1c00350c <_dtoa_r+0x9b4>
1c0040b0:	28819076 	ld.w	$r22,$r3,100(0x64)
1c0040b4:	28818069 	ld.w	$r9,$r3,96(0x60)
1c0040b8:	28816078 	ld.w	$r24,$r3,88(0x58)
1c0040bc:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0040c0:	29806069 	st.w	$r9,$r3,24(0x18)
1c0040c4:	53f44bff 	b	-3000(0xffff448) # 1c00350c <_dtoa_r+0x9b4>
1c0040c8:	28803068 	ld.w	$r8,$r3,12(0xc)
1c0040cc:	02800809 	addi.w	$r9,$r0,2(0x2)
1c0040d0:	67fa9128 	bge	$r9,$r8,-1392(0x3fa90) # 1c003b60 <_dtoa_r+0x1008>
1c0040d4:	28811069 	ld.w	$r9,$r3,68(0x44)
1c0040d8:	29806077 	st.w	$r23,$r3,24(0x18)
1c0040dc:	29809069 	st.w	$r9,$r3,36(0x24)
1c0040e0:	53f967ff 	b	-1692(0xffff964) # 1c003a44 <_dtoa_r+0xeec>
1c0040e4:	0280081a 	addi.w	$r26,$r0,2(0x2)
1c0040e8:	53ee4fff 	b	-4532(0xfffee4c) # 1c002f34 <_dtoa_r+0x3dc>
1c0040ec:	28818069 	ld.w	$r9,$r3,96(0x60)
1c0040f0:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0040f4:	29806069 	st.w	$r9,$r3,24(0x18)
1c0040f8:	53f417ff 	b	-3052(0xffff414) # 1c00350c <_dtoa_r+0x9b4>
1c0040fc:	00150005 	move	$r5,$r0
1c004100:	53ed83ff 	b	-4736(0xfffed80) # 1c002e80 <_dtoa_r+0x328>
1c004104:	5bf58528 	beq	$r9,$r8,-2684(0x3f584) # 1c003688 <_dtoa_r+0xb30>
1c004108:	0280f009 	addi.w	$r9,$r0,60(0x3c)
1c00410c:	00111124 	sub.w	$r4,$r9,$r4
1c004110:	53f567ff 	b	-2716(0xffff564) # 1c003674 <_dtoa_r+0xb1c>

1c004114 <__sflush_r>:
__sflush_r():
1c004114:	284030a9 	ld.h	$r9,$r5,12(0xc)
1c004118:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c00411c:	29806076 	st.w	$r22,$r3,24(0x18)
1c004120:	0040c128 	slli.w	$r8,$r9,0x10
1c004124:	0044c108 	srli.w	$r8,$r8,0x10
1c004128:	29803079 	st.w	$r25,$r3,12(0xc)
1c00412c:	29807061 	st.w	$r1,$r3,28(0x1c)
1c004130:	29805077 	st.w	$r23,$r3,20(0x14)
1c004134:	29804078 	st.w	$r24,$r3,16(0x10)
1c004138:	03402107 	andi	$r7,$r8,0x8
1c00413c:	001500b6 	move	$r22,$r5
1c004140:	00150099 	move	$r25,$r4
1c004144:	5c0110e0 	bne	$r7,$r0,272(0x110) # 1c004254 <__sflush_r+0x140>
1c004148:	288010a8 	ld.w	$r8,$r5,4(0x4)
1c00414c:	03a00129 	ori	$r9,$r9,0x800
1c004150:	294030a9 	st.h	$r9,$r5,12(0xc)
1c004154:	64018408 	bge	$r0,$r8,388(0x184) # 1c0042d8 <__sflush_r+0x1c4>
1c004158:	2880a2c8 	ld.w	$r8,$r22,40(0x28)
1c00415c:	5800d900 	beq	$r8,$r0,216(0xd8) # 1c004234 <__sflush_r+0x120>
1c004160:	0040c129 	slli.w	$r9,$r9,0x10
1c004164:	0044c129 	srli.w	$r9,$r9,0x10
1c004168:	14000027 	lu12i.w	$r7,1(0x1)
1c00416c:	28800337 	ld.w	$r23,$r25,0
1c004170:	00149d27 	and	$r7,$r9,$r7
1c004174:	29800320 	st.w	$r0,$r25,0
1c004178:	288072c5 	ld.w	$r5,$r22,28(0x1c)
1c00417c:	5c0168e0 	bne	$r7,$r0,360(0x168) # 1c0042e4 <__sflush_r+0x1d0>
1c004180:	02800407 	addi.w	$r7,$r0,1(0x1)
1c004184:	00150006 	move	$r6,$r0
1c004188:	00150324 	move	$r4,$r25
1c00418c:	4c000101 	jirl	$r1,$r8,0
1c004190:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c004194:	58019489 	beq	$r4,$r9,404(0x194) # 1c004328 <__sflush_r+0x214>
1c004198:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c00419c:	2880a2c8 	ld.w	$r8,$r22,40(0x28)
1c0041a0:	288072c5 	ld.w	$r5,$r22,28(0x1c)
1c0041a4:	03401129 	andi	$r9,$r9,0x4
1c0041a8:	58001d20 	beq	$r9,$r0,28(0x1c) # 1c0041c4 <__sflush_r+0xb0>
1c0041ac:	288012c7 	ld.w	$r7,$r22,4(0x4)
1c0041b0:	2880c2c9 	ld.w	$r9,$r22,48(0x30)
1c0041b4:	00111c84 	sub.w	$r4,$r4,$r7
1c0041b8:	58000d20 	beq	$r9,$r0,12(0xc) # 1c0041c4 <__sflush_r+0xb0>
1c0041bc:	2880f2c9 	ld.w	$r9,$r22,60(0x3c)
1c0041c0:	00112484 	sub.w	$r4,$r4,$r9
1c0041c4:	00150086 	move	$r6,$r4
1c0041c8:	00150007 	move	$r7,$r0
1c0041cc:	00150324 	move	$r4,$r25
1c0041d0:	4c000101 	jirl	$r1,$r8,0
1c0041d4:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c0041d8:	5c011489 	bne	$r4,$r9,276(0x114) # 1c0042ec <__sflush_r+0x1d8>
1c0041dc:	28800328 	ld.w	$r8,$r25,0
1c0041e0:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c0041e4:	58016d00 	beq	$r8,$r0,364(0x16c) # 1c004350 <__sflush_r+0x23c>
1c0041e8:	02807407 	addi.w	$r7,$r0,29(0x1d)
1c0041ec:	58000d07 	beq	$r8,$r7,12(0xc) # 1c0041f8 <__sflush_r+0xe4>
1c0041f0:	02805807 	addi.w	$r7,$r0,22(0x16)
1c0041f4:	5c00c107 	bne	$r8,$r7,192(0xc0) # 1c0042b4 <__sflush_r+0x1a0>
1c0041f8:	288042c7 	ld.w	$r7,$r22,16(0x10)
1c0041fc:	15ffffe8 	lu12i.w	$r8,-1(0xfffff)
1c004200:	029ffd08 	addi.w	$r8,$r8,2047(0x7ff)
1c004204:	0014a129 	and	$r9,$r9,$r8
1c004208:	294032c9 	st.h	$r9,$r22,12(0xc)
1c00420c:	298012c0 	st.w	$r0,$r22,4(0x4)
1c004210:	298002c7 	st.w	$r7,$r22,0
1c004214:	2880c2c5 	ld.w	$r5,$r22,48(0x30)
1c004218:	29800337 	st.w	$r23,$r25,0
1c00421c:	580018a0 	beq	$r5,$r0,24(0x18) # 1c004234 <__sflush_r+0x120>
1c004220:	028102c9 	addi.w	$r9,$r22,64(0x40)
1c004224:	58000ca9 	beq	$r5,$r9,12(0xc) # 1c004230 <__sflush_r+0x11c>
1c004228:	00150324 	move	$r4,$r25
1c00422c:	54065000 	bl	1616(0x650) # 1c00487c <_free_r>
1c004230:	2980c2c0 	st.w	$r0,$r22,48(0x30)
1c004234:	00150004 	move	$r4,$r0
1c004238:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00423c:	28806076 	ld.w	$r22,$r3,24(0x18)
1c004240:	28805077 	ld.w	$r23,$r3,20(0x14)
1c004244:	28804078 	ld.w	$r24,$r3,16(0x10)
1c004248:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00424c:	02808063 	addi.w	$r3,$r3,32(0x20)
1c004250:	4c000020 	jirl	$r0,$r1,0
1c004254:	288040b8 	ld.w	$r24,$r5,16(0x10)
1c004258:	5bffdf00 	beq	$r24,$r0,-36(0x3ffdc) # 1c004234 <__sflush_r+0x120>
1c00425c:	288000b7 	ld.w	$r23,$r5,0
1c004260:	03400d08 	andi	$r8,$r8,0x3
1c004264:	298000b8 	st.w	$r24,$r5,0
1c004268:	001162f7 	sub.w	$r23,$r23,$r24
1c00426c:	00150009 	move	$r9,$r0
1c004270:	5c000900 	bne	$r8,$r0,8(0x8) # 1c004278 <__sflush_r+0x164>
1c004274:	288050a9 	ld.w	$r9,$r5,20(0x14)
1c004278:	298022c9 	st.w	$r9,$r22,8(0x8)
1c00427c:	60001017 	blt	$r0,$r23,16(0x10) # 1c00428c <__sflush_r+0x178>
1c004280:	53ffb7ff 	b	-76(0xfffffb4) # 1c004234 <__sflush_r+0x120>
1c004284:	00101318 	add.w	$r24,$r24,$r4
1c004288:	67ffac17 	bge	$r0,$r23,-84(0x3ffac) # 1c004234 <__sflush_r+0x120>
1c00428c:	288092c9 	ld.w	$r9,$r22,36(0x24)
1c004290:	288072c5 	ld.w	$r5,$r22,28(0x1c)
1c004294:	001502e7 	move	$r7,$r23
1c004298:	00150306 	move	$r6,$r24
1c00429c:	00150324 	move	$r4,$r25
1c0042a0:	4c000121 	jirl	$r1,$r9,0
1c0042a4:	001112f7 	sub.w	$r23,$r23,$r4
1c0042a8:	63ffdc04 	blt	$r0,$r4,-36(0x3ffdc) # 1c004284 <__sflush_r+0x170>
1c0042ac:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c0042b0:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c0042b4:	03810129 	ori	$r9,$r9,0x40
1c0042b8:	294032c9 	st.h	$r9,$r22,12(0xc)
1c0042bc:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0042c0:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0042c4:	28805077 	ld.w	$r23,$r3,20(0x14)
1c0042c8:	28804078 	ld.w	$r24,$r3,16(0x10)
1c0042cc:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0042d0:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0042d4:	4c000020 	jirl	$r0,$r1,0
1c0042d8:	2880f0a8 	ld.w	$r8,$r5,60(0x3c)
1c0042dc:	63fe7c08 	blt	$r0,$r8,-388(0x3fe7c) # 1c004158 <__sflush_r+0x44>
1c0042e0:	53ff57ff 	b	-172(0xfffff54) # 1c004234 <__sflush_r+0x120>
1c0042e4:	288142c4 	ld.w	$r4,$r22,80(0x50)
1c0042e8:	53febfff 	b	-324(0xffffebc) # 1c0041a4 <__sflush_r+0x90>
1c0042ec:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c0042f0:	15ffffe8 	lu12i.w	$r8,-1(0xfffff)
1c0042f4:	029ffd08 	addi.w	$r8,$r8,2047(0x7ff)
1c0042f8:	0014a129 	and	$r9,$r9,$r8
1c0042fc:	288042c7 	ld.w	$r7,$r22,16(0x10)
1c004300:	0040c129 	slli.w	$r9,$r9,0x10
1c004304:	0048c129 	srai.w	$r9,$r9,0x10
1c004308:	14000028 	lu12i.w	$r8,1(0x1)
1c00430c:	294032c9 	st.h	$r9,$r22,12(0xc)
1c004310:	298012c0 	st.w	$r0,$r22,4(0x4)
1c004314:	298002c7 	st.w	$r7,$r22,0
1c004318:	0014a129 	and	$r9,$r9,$r8
1c00431c:	5bfef920 	beq	$r9,$r0,-264(0x3fef8) # 1c004214 <__sflush_r+0x100>
1c004320:	298142c4 	st.w	$r4,$r22,80(0x50)
1c004324:	53fef3ff 	b	-272(0xffffef0) # 1c004214 <__sflush_r+0x100>
1c004328:	28800329 	ld.w	$r9,$r25,0
1c00432c:	5bfe6d20 	beq	$r9,$r0,-404(0x3fe6c) # 1c004198 <__sflush_r+0x84>
1c004330:	02807408 	addi.w	$r8,$r0,29(0x1d)
1c004334:	58003128 	beq	$r9,$r8,48(0x30) # 1c004364 <__sflush_r+0x250>
1c004338:	02805808 	addi.w	$r8,$r0,22(0x16)
1c00433c:	58002928 	beq	$r9,$r8,40(0x28) # 1c004364 <__sflush_r+0x250>
1c004340:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c004344:	03810129 	ori	$r9,$r9,0x40
1c004348:	294032c9 	st.h	$r9,$r22,12(0xc)
1c00434c:	53feefff 	b	-276(0xffffeec) # 1c004238 <__sflush_r+0x124>
1c004350:	15ffffe8 	lu12i.w	$r8,-1(0xfffff)
1c004354:	029ffd08 	addi.w	$r8,$r8,2047(0x7ff)
1c004358:	288042c7 	ld.w	$r7,$r22,16(0x10)
1c00435c:	0014a129 	and	$r9,$r9,$r8
1c004360:	53ffabff 	b	-88(0xfffffa8) # 1c004308 <__sflush_r+0x1f4>
1c004364:	29800337 	st.w	$r23,$r25,0
1c004368:	00150004 	move	$r4,$r0
1c00436c:	53fecfff 	b	-308(0xffffecc) # 1c004238 <__sflush_r+0x124>

1c004370 <_fflush_r>:
_fflush_r():
1c004370:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c004374:	29806076 	st.w	$r22,$r3,24(0x18)
1c004378:	29807061 	st.w	$r1,$r3,28(0x1c)
1c00437c:	00150096 	move	$r22,$r4
1c004380:	58000c80 	beq	$r4,$r0,12(0xc) # 1c00438c <_fflush_r+0x1c>
1c004384:	2880e089 	ld.w	$r9,$r4,56(0x38)
1c004388:	58002120 	beq	$r9,$r0,32(0x20) # 1c0043a8 <_fflush_r+0x38>
1c00438c:	284030a9 	ld.h	$r9,$r5,12(0xc)
1c004390:	5c002d20 	bne	$r9,$r0,44(0x2c) # 1c0043bc <_fflush_r+0x4c>
1c004394:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c004398:	28806076 	ld.w	$r22,$r3,24(0x18)
1c00439c:	00150004 	move	$r4,$r0
1c0043a0:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0043a4:	4c000020 	jirl	$r0,$r1,0
1c0043a8:	29803065 	st.w	$r5,$r3,12(0xc)
1c0043ac:	54038000 	bl	896(0x380) # 1c00472c <__sinit>
1c0043b0:	28803065 	ld.w	$r5,$r3,12(0xc)
1c0043b4:	284030a9 	ld.h	$r9,$r5,12(0xc)
1c0043b8:	5bffdd20 	beq	$r9,$r0,-36(0x3ffdc) # 1c004394 <_fflush_r+0x24>
1c0043bc:	001502c4 	move	$r4,$r22
1c0043c0:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0043c4:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0043c8:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0043cc:	53fd4bff 	b	-696(0xffffd48) # 1c004114 <__sflush_r>

1c0043d0 <fflush>:
fflush():
1c0043d0:	00150085 	move	$r5,$r4
1c0043d4:	58001480 	beq	$r4,$r0,20(0x14) # 1c0043e8 <fflush+0x18>
1c0043d8:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c0043dc:	28a27129 	ld.w	$r9,$r9,-1892(0x89c)
1c0043e0:	28800124 	ld.w	$r4,$r9,0
1c0043e4:	53ff8fff 	b	-116(0xfffff8c) # 1c004370 <_fflush_r>
1c0043e8:	1dc7ffe9 	pcaddu12i	$r9,-114689(0xe3fff)
1c0043ec:	28a15129 	ld.w	$r9,$r9,-1964(0x854)
1c0043f0:	28800124 	ld.w	$r4,$r9,0
1c0043f4:	1c000005 	pcaddu12i	$r5,0
1c0043f8:	02bdf0a5 	addi.w	$r5,$r5,-132(0xf7c)
1c0043fc:	50085400 	b	2132(0x854) # 1c004c50 <_fwalk_reent>

1c004400 <_cleanup_r>:
_cleanup_r():
1c004400:	1dc7ffe5 	pcaddu12i	$r5,-114689(0xe3fff)
1c004404:	28a0d0a5 	ld.w	$r5,$r5,-1996(0x834)
1c004408:	50084800 	b	2120(0x848) # 1c004c50 <_fwalk_reent>

1c00440c <__sinit.part.1>:
__sinit.part.1():
1c00440c:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c004410:	29807061 	st.w	$r1,$r3,28(0x1c)
1c004414:	29806076 	st.w	$r22,$r3,24(0x18)
1c004418:	29805077 	st.w	$r23,$r3,20(0x14)
1c00441c:	29804078 	st.w	$r24,$r3,16(0x10)
1c004420:	29803079 	st.w	$r25,$r3,12(0xc)
1c004424:	2980207a 	st.w	$r26,$r3,8(0x8)
1c004428:	2980107b 	st.w	$r27,$r3,4(0x4)
1c00442c:	2980007c 	st.w	$r28,$r3,0
1c004430:	28801096 	ld.w	$r22,$r4,4(0x4)
1c004434:	1c000008 	pcaddu12i	$r8,0
1c004438:	02bf3108 	addi.w	$r8,$r8,-52(0xfcc)
1c00443c:	2980f088 	st.w	$r8,$r4,60(0x3c)
1c004440:	028bb089 	addi.w	$r9,$r4,748(0x2ec)
1c004444:	02800c08 	addi.w	$r8,$r0,3(0x3)
1c004448:	298b9088 	st.w	$r8,$r4,740(0x2e4)
1c00444c:	298ba089 	st.w	$r9,$r4,744(0x2e8)
1c004450:	298b8080 	st.w	$r0,$r4,736(0x2e0)
1c004454:	02801009 	addi.w	$r9,$r0,4(0x4)
1c004458:	00150098 	move	$r24,$r4
1c00445c:	298032c9 	st.w	$r9,$r22,12(0xc)
1c004460:	02802006 	addi.w	$r6,$r0,8(0x8)
1c004464:	00150005 	move	$r5,$r0
1c004468:	298182c0 	st.w	$r0,$r22,96(0x60)
1c00446c:	298002c0 	st.w	$r0,$r22,0
1c004470:	298012c0 	st.w	$r0,$r22,4(0x4)
1c004474:	298022c0 	st.w	$r0,$r22,8(0x8)
1c004478:	298042c0 	st.w	$r0,$r22,16(0x10)
1c00447c:	298052c0 	st.w	$r0,$r22,20(0x14)
1c004480:	298062c0 	st.w	$r0,$r22,24(0x18)
1c004484:	028162c4 	addi.w	$r4,$r22,88(0x58)
1c004488:	5414a000 	bl	5280(0x14a0) # 1c005928 <memset>
1c00448c:	28802317 	ld.w	$r23,$r24,8(0x8)
1c004490:	1dc7ffdc 	pcaddu12i	$r28,-114690(0xe3ffe)
1c004494:	289f539c 	ld.w	$r28,$r28,2004(0x7d4)
1c004498:	1dc7ffdb 	pcaddu12i	$r27,-114690(0xe3ffe)
1c00449c:	289f937b 	ld.w	$r27,$r27,2020(0x7e4)
1c0044a0:	1dc7ffda 	pcaddu12i	$r26,-114690(0xe3ffe)
1c0044a4:	289de35a 	ld.w	$r26,$r26,1912(0x778)
1c0044a8:	1dc7ffd9 	pcaddu12i	$r25,-114690(0xe3ffe)
1c0044ac:	289f0339 	ld.w	$r25,$r25,1984(0x7c0)
1c0044b0:	14000209 	lu12i.w	$r9,16(0x10)
1c0044b4:	298092db 	st.w	$r27,$r22,36(0x24)
1c0044b8:	2980a2da 	st.w	$r26,$r22,40(0x28)
1c0044bc:	298072d6 	st.w	$r22,$r22,28(0x1c)
1c0044c0:	298082dc 	st.w	$r28,$r22,32(0x20)
1c0044c4:	2980b2d9 	st.w	$r25,$r22,44(0x2c)
1c0044c8:	02802529 	addi.w	$r9,$r9,9(0x9)
1c0044cc:	298032e9 	st.w	$r9,$r23,12(0xc)
1c0044d0:	02802006 	addi.w	$r6,$r0,8(0x8)
1c0044d4:	00150005 	move	$r5,$r0
1c0044d8:	298182e0 	st.w	$r0,$r23,96(0x60)
1c0044dc:	298002e0 	st.w	$r0,$r23,0
1c0044e0:	298012e0 	st.w	$r0,$r23,4(0x4)
1c0044e4:	298022e0 	st.w	$r0,$r23,8(0x8)
1c0044e8:	298042e0 	st.w	$r0,$r23,16(0x10)
1c0044ec:	298052e0 	st.w	$r0,$r23,20(0x14)
1c0044f0:	298062e0 	st.w	$r0,$r23,24(0x18)
1c0044f4:	028162e4 	addi.w	$r4,$r23,88(0x58)
1c0044f8:	54143000 	bl	5168(0x1430) # 1c005928 <memset>
1c0044fc:	28803316 	ld.w	$r22,$r24,12(0xc)
1c004500:	14000409 	lu12i.w	$r9,32(0x20)
1c004504:	298092fb 	st.w	$r27,$r23,36(0x24)
1c004508:	2980a2fa 	st.w	$r26,$r23,40(0x28)
1c00450c:	298072f7 	st.w	$r23,$r23,28(0x1c)
1c004510:	298082fc 	st.w	$r28,$r23,32(0x20)
1c004514:	2980b2f9 	st.w	$r25,$r23,44(0x2c)
1c004518:	02804929 	addi.w	$r9,$r9,18(0x12)
1c00451c:	298032c9 	st.w	$r9,$r22,12(0xc)
1c004520:	298182c0 	st.w	$r0,$r22,96(0x60)
1c004524:	298002c0 	st.w	$r0,$r22,0
1c004528:	298012c0 	st.w	$r0,$r22,4(0x4)
1c00452c:	298022c0 	st.w	$r0,$r22,8(0x8)
1c004530:	298042c0 	st.w	$r0,$r22,16(0x10)
1c004534:	298052c0 	st.w	$r0,$r22,20(0x14)
1c004538:	298062c0 	st.w	$r0,$r22,24(0x18)
1c00453c:	028162c4 	addi.w	$r4,$r22,88(0x58)
1c004540:	02802006 	addi.w	$r6,$r0,8(0x8)
1c004544:	00150005 	move	$r5,$r0
1c004548:	5413e000 	bl	5088(0x13e0) # 1c005928 <memset>
1c00454c:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c004550:	298092db 	st.w	$r27,$r22,36(0x24)
1c004554:	2980a2da 	st.w	$r26,$r22,40(0x28)
1c004558:	298072d6 	st.w	$r22,$r22,28(0x1c)
1c00455c:	298082dc 	st.w	$r28,$r22,32(0x20)
1c004560:	2980b2d9 	st.w	$r25,$r22,44(0x2c)
1c004564:	28806076 	ld.w	$r22,$r3,24(0x18)
1c004568:	02800409 	addi.w	$r9,$r0,1(0x1)
1c00456c:	2980e309 	st.w	$r9,$r24,56(0x38)
1c004570:	28805077 	ld.w	$r23,$r3,20(0x14)
1c004574:	28804078 	ld.w	$r24,$r3,16(0x10)
1c004578:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00457c:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c004580:	2880107b 	ld.w	$r27,$r3,4(0x4)
1c004584:	2880007c 	ld.w	$r28,$r3,0
1c004588:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00458c:	4c000020 	jirl	$r0,$r1,0

1c004590 <__sfmoreglue>:
__sfmoreglue():
1c004590:	02bffca9 	addi.w	$r9,$r5,-1(0xfff)
1c004594:	00408926 	slli.w	$r6,$r9,0x2
1c004598:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00459c:	001024c6 	add.w	$r6,$r6,$r9
1c0045a0:	29802076 	st.w	$r22,$r3,8(0x8)
1c0045a4:	004088d6 	slli.w	$r22,$r6,0x2
1c0045a8:	001058c6 	add.w	$r6,$r6,$r22
1c0045ac:	004088d6 	slli.w	$r22,$r6,0x2
1c0045b0:	29800078 	st.w	$r24,$r3,0
1c0045b4:	001500b8 	move	$r24,$r5
1c0045b8:	0281c2c5 	addi.w	$r5,$r22,112(0x70)
1c0045bc:	29801077 	st.w	$r23,$r3,4(0x4)
1c0045c0:	29803061 	st.w	$r1,$r3,12(0xc)
1c0045c4:	5409bc00 	bl	2492(0x9bc) # 1c004f80 <_malloc_r>
1c0045c8:	00150097 	move	$r23,$r4
1c0045cc:	58002080 	beq	$r4,$r0,32(0x20) # 1c0045ec <__sfmoreglue+0x5c>
1c0045d0:	02803084 	addi.w	$r4,$r4,12(0xc)
1c0045d4:	298002e0 	st.w	$r0,$r23,0
1c0045d8:	298012f8 	st.w	$r24,$r23,4(0x4)
1c0045dc:	298022e4 	st.w	$r4,$r23,8(0x8)
1c0045e0:	028192c6 	addi.w	$r6,$r22,100(0x64)
1c0045e4:	00150005 	move	$r5,$r0
1c0045e8:	54134000 	bl	4928(0x1340) # 1c005928 <memset>
1c0045ec:	28803061 	ld.w	$r1,$r3,12(0xc)
1c0045f0:	28802076 	ld.w	$r22,$r3,8(0x8)
1c0045f4:	001502e4 	move	$r4,$r23
1c0045f8:	28800078 	ld.w	$r24,$r3,0
1c0045fc:	28801077 	ld.w	$r23,$r3,4(0x4)
1c004600:	02804063 	addi.w	$r3,$r3,16(0x10)
1c004604:	4c000020 	jirl	$r0,$r1,0

1c004608 <__sfp>:
__sfp():
1c004608:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c00460c:	29806076 	st.w	$r22,$r3,24(0x18)
1c004610:	1dc7ffd6 	pcaddu12i	$r22,-114690(0xe3ffe)
1c004614:	2898b2d6 	ld.w	$r22,$r22,1580(0x62c)
1c004618:	29804078 	st.w	$r24,$r3,16(0x10)
1c00461c:	288002d8 	ld.w	$r24,$r22,0
1c004620:	29803079 	st.w	$r25,$r3,12(0xc)
1c004624:	29807061 	st.w	$r1,$r3,28(0x1c)
1c004628:	2880e309 	ld.w	$r9,$r24,56(0x38)
1c00462c:	29805077 	st.w	$r23,$r3,20(0x14)
1c004630:	00150099 	move	$r25,$r4
1c004634:	5800ad20 	beq	$r9,$r0,172(0xac) # 1c0046e0 <__sfp+0xd8>
1c004638:	028b8318 	addi.w	$r24,$r24,736(0x2e0)
1c00463c:	02bffc17 	addi.w	$r23,$r0,-1(0xfff)
1c004640:	28801309 	ld.w	$r9,$r24,4(0x4)
1c004644:	28802316 	ld.w	$r22,$r24,8(0x8)
1c004648:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c00464c:	64001520 	bge	$r9,$r0,20(0x14) # 1c004660 <__sfp+0x58>
1c004650:	50008000 	b	128(0x80) # 1c0046d0 <__sfp+0xc8>
1c004654:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c004658:	028192d6 	addi.w	$r22,$r22,100(0x64)
1c00465c:	58007537 	beq	$r9,$r23,116(0x74) # 1c0046d0 <__sfp+0xc8>
1c004660:	284032c8 	ld.h	$r8,$r22,12(0xc)
1c004664:	5ffff100 	bne	$r8,$r0,-16(0x3fff0) # 1c004654 <__sfp+0x4c>
1c004668:	15fffe09 	lu12i.w	$r9,-16(0xffff0)
1c00466c:	02800529 	addi.w	$r9,$r9,1(0x1)
1c004670:	298182c0 	st.w	$r0,$r22,96(0x60)
1c004674:	298002c0 	st.w	$r0,$r22,0
1c004678:	298012c0 	st.w	$r0,$r22,4(0x4)
1c00467c:	298022c0 	st.w	$r0,$r22,8(0x8)
1c004680:	298032c9 	st.w	$r9,$r22,12(0xc)
1c004684:	298042c0 	st.w	$r0,$r22,16(0x10)
1c004688:	298052c0 	st.w	$r0,$r22,20(0x14)
1c00468c:	298062c0 	st.w	$r0,$r22,24(0x18)
1c004690:	02802006 	addi.w	$r6,$r0,8(0x8)
1c004694:	00150005 	move	$r5,$r0
1c004698:	028162c4 	addi.w	$r4,$r22,88(0x58)
1c00469c:	54128c00 	bl	4748(0x128c) # 1c005928 <memset>
1c0046a0:	2980c2c0 	st.w	$r0,$r22,48(0x30)
1c0046a4:	2980d2c0 	st.w	$r0,$r22,52(0x34)
1c0046a8:	298112c0 	st.w	$r0,$r22,68(0x44)
1c0046ac:	298122c0 	st.w	$r0,$r22,72(0x48)
1c0046b0:	001502c4 	move	$r4,$r22
1c0046b4:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0046b8:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0046bc:	28805077 	ld.w	$r23,$r3,20(0x14)
1c0046c0:	28804078 	ld.w	$r24,$r3,16(0x10)
1c0046c4:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0046c8:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0046cc:	4c000020 	jirl	$r0,$r1,0
1c0046d0:	28800316 	ld.w	$r22,$r24,0
1c0046d4:	58001ec0 	beq	$r22,$r0,28(0x1c) # 1c0046f0 <__sfp+0xe8>
1c0046d8:	001502d8 	move	$r24,$r22
1c0046dc:	53ff67ff 	b	-156(0xfffff64) # 1c004640 <__sfp+0x38>
1c0046e0:	00150304 	move	$r4,$r24
1c0046e4:	57fd2bff 	bl	-728(0xffffd28) # 1c00440c <__sinit.part.1>
1c0046e8:	288002d8 	ld.w	$r24,$r22,0
1c0046ec:	53ff4fff 	b	-180(0xfffff4c) # 1c004638 <__sfp+0x30>
1c0046f0:	02801005 	addi.w	$r5,$r0,4(0x4)
1c0046f4:	00150324 	move	$r4,$r25
1c0046f8:	57fe9bff 	bl	-360(0xffffe98) # 1c004590 <__sfmoreglue>
1c0046fc:	29800304 	st.w	$r4,$r24,0
1c004700:	00150096 	move	$r22,$r4
1c004704:	5fffd480 	bne	$r4,$r0,-44(0x3ffd4) # 1c0046d8 <__sfp+0xd0>
1c004708:	02803009 	addi.w	$r9,$r0,12(0xc)
1c00470c:	29800329 	st.w	$r9,$r25,0
1c004710:	53ffa3ff 	b	-96(0xfffffa0) # 1c0046b0 <__sfp+0xa8>

1c004714 <_cleanup>:
_cleanup():
1c004714:	1dc7ffc9 	pcaddu12i	$r9,-114690(0xe3ffe)
1c004718:	2894a129 	ld.w	$r9,$r9,1320(0x528)
1c00471c:	28800124 	ld.w	$r4,$r9,0
1c004720:	1dc7ffc5 	pcaddu12i	$r5,-114690(0xe3ffe)
1c004724:	289450a5 	ld.w	$r5,$r5,1300(0x514)
1c004728:	50052800 	b	1320(0x528) # 1c004c50 <_fwalk_reent>

1c00472c <__sinit>:
__sinit():
1c00472c:	2880e089 	ld.w	$r9,$r4,56(0x38)
1c004730:	58000920 	beq	$r9,$r0,8(0x8) # 1c004738 <__sinit+0xc>
1c004734:	4c000020 	jirl	$r0,$r1,0
1c004738:	53fcd7ff 	b	-812(0xffffcd4) # 1c00440c <__sinit.part.1>

1c00473c <_malloc_trim_r>:
_malloc_trim_r():
1c00473c:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c004740:	29806076 	st.w	$r22,$r3,24(0x18)
1c004744:	29805077 	st.w	$r23,$r3,20(0x14)
1c004748:	29804078 	st.w	$r24,$r3,16(0x10)
1c00474c:	29803079 	st.w	$r25,$r3,12(0xc)
1c004750:	001500b6 	move	$r22,$r5
1c004754:	29807061 	st.w	$r1,$r3,28(0x1c)
1c004758:	1dc7ffd9 	pcaddu12i	$r25,-114690(0xe3ffe)
1c00475c:	28942339 	ld.w	$r25,$r25,1288(0x508)
1c004760:	00150098 	move	$r24,$r4
1c004764:	5412b000 	bl	4784(0x12b0) # 1c005a14 <__malloc_lock>
1c004768:	28802329 	ld.w	$r9,$r25,8(0x8)
1c00476c:	02bff008 	addi.w	$r8,$r0,-4(0xffc)
1c004770:	28801137 	ld.w	$r23,$r9,4(0x4)
1c004774:	03bfbc09 	ori	$r9,$r0,0xfef
1c004778:	00115936 	sub.w	$r22,$r9,$r22
1c00477c:	0014a2f7 	and	$r23,$r23,$r8
1c004780:	00105ed6 	add.w	$r22,$r22,$r23
1c004784:	0044b2d6 	srli.w	$r22,$r22,0xc
1c004788:	02bffed6 	addi.w	$r22,$r22,-1(0xfff)
1c00478c:	03bffc09 	ori	$r9,$r0,0xfff
1c004790:	0040b2d6 	slli.w	$r22,$r22,0xc
1c004794:	64001d36 	bge	$r9,$r22,28(0x1c) # 1c0047b0 <_malloc_trim_r+0x74>
1c004798:	00150005 	move	$r5,$r0
1c00479c:	00150304 	move	$r4,$r24
1c0047a0:	5422a000 	bl	8864(0x22a0) # 1c006a40 <_sbrk_r>
1c0047a4:	28802329 	ld.w	$r9,$r25,8(0x8)
1c0047a8:	00105d29 	add.w	$r9,$r9,$r23
1c0047ac:	58002c89 	beq	$r4,$r9,44(0x2c) # 1c0047d8 <_malloc_trim_r+0x9c>
1c0047b0:	00150304 	move	$r4,$r24
1c0047b4:	54126400 	bl	4708(0x1264) # 1c005a18 <__malloc_unlock>
1c0047b8:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0047bc:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0047c0:	28805077 	ld.w	$r23,$r3,20(0x14)
1c0047c4:	28804078 	ld.w	$r24,$r3,16(0x10)
1c0047c8:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0047cc:	00150004 	move	$r4,$r0
1c0047d0:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0047d4:	4c000020 	jirl	$r0,$r1,0
1c0047d8:	00115805 	sub.w	$r5,$r0,$r22
1c0047dc:	00150304 	move	$r4,$r24
1c0047e0:	54226000 	bl	8800(0x2260) # 1c006a40 <_sbrk_r>
1c0047e4:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c0047e8:	58005089 	beq	$r4,$r9,80(0x50) # 1c004838 <_malloc_trim_r+0xfc>
1c0047ec:	1dc7ffc8 	pcaddu12i	$r8,-114690(0xe3ffe)
1c0047f0:	2891a108 	ld.w	$r8,$r8,1128(0x468)
1c0047f4:	28800109 	ld.w	$r9,$r8,0
1c0047f8:	28802327 	ld.w	$r7,$r25,8(0x8)
1c0047fc:	00115af7 	sub.w	$r23,$r23,$r22
1c004800:	038006f7 	ori	$r23,$r23,0x1
1c004804:	00115936 	sub.w	$r22,$r9,$r22
1c004808:	00150304 	move	$r4,$r24
1c00480c:	298010f7 	st.w	$r23,$r7,4(0x4)
1c004810:	29800116 	st.w	$r22,$r8,0
1c004814:	54120400 	bl	4612(0x1204) # 1c005a18 <__malloc_unlock>
1c004818:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00481c:	28806076 	ld.w	$r22,$r3,24(0x18)
1c004820:	28805077 	ld.w	$r23,$r3,20(0x14)
1c004824:	28804078 	ld.w	$r24,$r3,16(0x10)
1c004828:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00482c:	02800404 	addi.w	$r4,$r0,1(0x1)
1c004830:	02808063 	addi.w	$r3,$r3,32(0x20)
1c004834:	4c000020 	jirl	$r0,$r1,0
1c004838:	00150005 	move	$r5,$r0
1c00483c:	00150304 	move	$r4,$r24
1c004840:	54220000 	bl	8704(0x2200) # 1c006a40 <_sbrk_r>
1c004844:	28802328 	ld.w	$r8,$r25,8(0x8)
1c004848:	02803c07 	addi.w	$r7,$r0,15(0xf)
1c00484c:	00112089 	sub.w	$r9,$r4,$r8
1c004850:	67ff60e9 	bge	$r7,$r9,-160(0x3ff60) # 1c0047b0 <_malloc_trim_r+0x74>
1c004854:	1dc7ffc7 	pcaddu12i	$r7,-114690(0xe3ffe)
1c004858:	288ff0e7 	ld.w	$r7,$r7,1020(0x3fc)
1c00485c:	288000e7 	ld.w	$r7,$r7,0
1c004860:	03800529 	ori	$r9,$r9,0x1
1c004864:	29801109 	st.w	$r9,$r8,4(0x4)
1c004868:	00111c84 	sub.w	$r4,$r4,$r7
1c00486c:	1dc7ffc7 	pcaddu12i	$r7,-114690(0xe3ffe)
1c004870:	288fa0e7 	ld.w	$r7,$r7,1000(0x3e8)
1c004874:	298000e4 	st.w	$r4,$r7,0
1c004878:	53ff3bff 	b	-200(0xfffff38) # 1c0047b0 <_malloc_trim_r+0x74>

1c00487c <_free_r>:
_free_r():
1c00487c:	580138a0 	beq	$r5,$r0,312(0x138) # 1c0049b4 <_free_r+0x138>
1c004880:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c004884:	29802076 	st.w	$r22,$r3,8(0x8)
1c004888:	29801077 	st.w	$r23,$r3,4(0x4)
1c00488c:	001500b6 	move	$r22,$r5
1c004890:	00150097 	move	$r23,$r4
1c004894:	29803061 	st.w	$r1,$r3,12(0xc)
1c004898:	54117c00 	bl	4476(0x117c) # 1c005a14 <__malloc_lock>
1c00489c:	28bff2c6 	ld.w	$r6,$r22,-4(0xffc)
1c0048a0:	02bff809 	addi.w	$r9,$r0,-2(0xffe)
1c0048a4:	02bfe2cb 	addi.w	$r11,$r22,-8(0xff8)
1c0048a8:	0014a4c9 	and	$r9,$r6,$r9
1c0048ac:	00102567 	add.w	$r7,$r11,$r9
1c0048b0:	1dc7ffc5 	pcaddu12i	$r5,-114690(0xe3ffe)
1c0048b4:	288ec0a5 	ld.w	$r5,$r5,944(0x3b0)
1c0048b8:	288010e8 	ld.w	$r8,$r7,4(0x4)
1c0048bc:	288020a4 	ld.w	$r4,$r5,8(0x8)
1c0048c0:	02bff00a 	addi.w	$r10,$r0,-4(0xffc)
1c0048c4:	0014a908 	and	$r8,$r8,$r10
1c0048c8:	5801b487 	beq	$r4,$r7,436(0x1b4) # 1c004a7c <_free_r+0x200>
1c0048cc:	298010e8 	st.w	$r8,$r7,4(0x4)
1c0048d0:	034004c6 	andi	$r6,$r6,0x1
1c0048d4:	001020e4 	add.w	$r4,$r7,$r8
1c0048d8:	5c00a0c0 	bne	$r6,$r0,160(0xa0) # 1c004978 <_free_r+0xfc>
1c0048dc:	28bfe2cd 	ld.w	$r13,$r22,-8(0xff8)
1c0048e0:	28801086 	ld.w	$r6,$r4,4(0x4)
1c0048e4:	028020aa 	addi.w	$r10,$r5,8(0x8)
1c0048e8:	0011356b 	sub.w	$r11,$r11,$r13
1c0048ec:	28802164 	ld.w	$r4,$r11,8(0x8)
1c0048f0:	00103529 	add.w	$r9,$r9,$r13
1c0048f4:	034004c6 	andi	$r6,$r6,0x1
1c0048f8:	5801448a 	beq	$r4,$r10,324(0x144) # 1c004a3c <_free_r+0x1c0>
1c0048fc:	2880316d 	ld.w	$r13,$r11,12(0xc)
1c004900:	2980308d 	st.w	$r13,$r4,12(0xc)
1c004904:	298021a4 	st.w	$r4,$r13,8(0x8)
1c004908:	5801f4c0 	beq	$r6,$r0,500(0x1f4) # 1c004afc <_free_r+0x280>
1c00490c:	03800528 	ori	$r8,$r9,0x1
1c004910:	29801168 	st.w	$r8,$r11,4(0x4)
1c004914:	298000e9 	st.w	$r9,$r7,0
1c004918:	0287fc08 	addi.w	$r8,$r0,511(0x1ff)
1c00491c:	6800b109 	bltu	$r8,$r9,176(0xb0) # 1c0049cc <_free_r+0x150>
1c004920:	00448d29 	srli.w	$r9,$r9,0x3
1c004924:	02800528 	addi.w	$r8,$r9,1(0x1)
1c004928:	00408d08 	slli.w	$r8,$r8,0x3
1c00492c:	288010a4 	ld.w	$r4,$r5,4(0x4)
1c004930:	001020a8 	add.w	$r8,$r5,$r8
1c004934:	28800106 	ld.w	$r6,$r8,0
1c004938:	00488927 	srai.w	$r7,$r9,0x2
1c00493c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c004940:	00171d29 	sll.w	$r9,$r9,$r7
1c004944:	00151129 	or	$r9,$r9,$r4
1c004948:	02bfe107 	addi.w	$r7,$r8,-8(0xff8)
1c00494c:	29803167 	st.w	$r7,$r11,12(0xc)
1c004950:	29802166 	st.w	$r6,$r11,8(0x8)
1c004954:	298010a9 	st.w	$r9,$r5,4(0x4)
1c004958:	2980010b 	st.w	$r11,$r8,0
1c00495c:	298030cb 	st.w	$r11,$r6,12(0xc)
1c004960:	28802076 	ld.w	$r22,$r3,8(0x8)
1c004964:	28803061 	ld.w	$r1,$r3,12(0xc)
1c004968:	001502e4 	move	$r4,$r23
1c00496c:	28801077 	ld.w	$r23,$r3,4(0x4)
1c004970:	02804063 	addi.w	$r3,$r3,16(0x10)
1c004974:	5010a400 	b	4260(0x10a4) # 1c005a18 <__malloc_unlock>
1c004978:	28801086 	ld.w	$r6,$r4,4(0x4)
1c00497c:	034004c6 	andi	$r6,$r6,0x1
1c004980:	5c0038c0 	bne	$r6,$r0,56(0x38) # 1c0049b8 <_free_r+0x13c>
1c004984:	00102129 	add.w	$r9,$r9,$r8
1c004988:	028020aa 	addi.w	$r10,$r5,8(0x8)
1c00498c:	288020e8 	ld.w	$r8,$r7,8(0x8)
1c004990:	03800524 	ori	$r4,$r9,0x1
1c004994:	00102566 	add.w	$r6,$r11,$r9
1c004998:	58017d0a 	beq	$r8,$r10,380(0x17c) # 1c004b14 <_free_r+0x298>
1c00499c:	288030e7 	ld.w	$r7,$r7,12(0xc)
1c0049a0:	29803107 	st.w	$r7,$r8,12(0xc)
1c0049a4:	298020e8 	st.w	$r8,$r7,8(0x8)
1c0049a8:	29801164 	st.w	$r4,$r11,4(0x4)
1c0049ac:	298000c9 	st.w	$r9,$r6,0
1c0049b0:	53ff6bff 	b	-152(0xfffff68) # 1c004918 <_free_r+0x9c>
1c0049b4:	4c000020 	jirl	$r0,$r1,0
1c0049b8:	03800528 	ori	$r8,$r9,0x1
1c0049bc:	29bff2c8 	st.w	$r8,$r22,-4(0xffc)
1c0049c0:	298000e9 	st.w	$r9,$r7,0
1c0049c4:	0287fc08 	addi.w	$r8,$r0,511(0x1ff)
1c0049c8:	6fff5909 	bgeu	$r8,$r9,-168(0x3ff58) # 1c004920 <_free_r+0xa4>
1c0049cc:	0044a528 	srli.w	$r8,$r9,0x9
1c0049d0:	02801007 	addi.w	$r7,$r0,4(0x4)
1c0049d4:	680104e8 	bltu	$r7,$r8,260(0x104) # 1c004ad8 <_free_r+0x25c>
1c0049d8:	00449928 	srli.w	$r8,$r9,0x6
1c0049dc:	0280e506 	addi.w	$r6,$r8,57(0x39)
1c0049e0:	0280e107 	addi.w	$r7,$r8,56(0x38)
1c0049e4:	00408cc6 	slli.w	$r6,$r6,0x3
1c0049e8:	001018a6 	add.w	$r6,$r5,$r6
1c0049ec:	288000c8 	ld.w	$r8,$r6,0
1c0049f0:	02bfe0c6 	addi.w	$r6,$r6,-8(0xff8)
1c0049f4:	02bff004 	addi.w	$r4,$r0,-4(0xffc)
1c0049f8:	580138c8 	beq	$r6,$r8,312(0x138) # 1c004b30 <_free_r+0x2b4>
1c0049fc:	28801107 	ld.w	$r7,$r8,4(0x4)
1c004a00:	001490e7 	and	$r7,$r7,$r4
1c004a04:	6c000d27 	bgeu	$r9,$r7,12(0xc) # 1c004a10 <_free_r+0x194>
1c004a08:	28802108 	ld.w	$r8,$r8,8(0x8)
1c004a0c:	5ffff0c8 	bne	$r6,$r8,-16(0x3fff0) # 1c0049fc <_free_r+0x180>
1c004a10:	28803106 	ld.w	$r6,$r8,12(0xc)
1c004a14:	29803166 	st.w	$r6,$r11,12(0xc)
1c004a18:	29802168 	st.w	$r8,$r11,8(0x8)
1c004a1c:	28802076 	ld.w	$r22,$r3,8(0x8)
1c004a20:	298020cb 	st.w	$r11,$r6,8(0x8)
1c004a24:	28803061 	ld.w	$r1,$r3,12(0xc)
1c004a28:	001502e4 	move	$r4,$r23
1c004a2c:	28801077 	ld.w	$r23,$r3,4(0x4)
1c004a30:	2980310b 	st.w	$r11,$r8,12(0xc)
1c004a34:	02804063 	addi.w	$r3,$r3,16(0x10)
1c004a38:	500fe000 	b	4064(0xfe0) # 1c005a18 <__malloc_unlock>
1c004a3c:	5c0154c0 	bne	$r6,$r0,340(0x154) # 1c004b90 <_free_r+0x314>
1c004a40:	288030e6 	ld.w	$r6,$r7,12(0xc)
1c004a44:	288020e7 	ld.w	$r7,$r7,8(0x8)
1c004a48:	00102509 	add.w	$r9,$r8,$r9
1c004a4c:	28802076 	ld.w	$r22,$r3,8(0x8)
1c004a50:	298030e6 	st.w	$r6,$r7,12(0xc)
1c004a54:	298020c7 	st.w	$r7,$r6,8(0x8)
1c004a58:	03800528 	ori	$r8,$r9,0x1
1c004a5c:	29801168 	st.w	$r8,$r11,4(0x4)
1c004a60:	28803061 	ld.w	$r1,$r3,12(0xc)
1c004a64:	0010256b 	add.w	$r11,$r11,$r9
1c004a68:	001502e4 	move	$r4,$r23
1c004a6c:	28801077 	ld.w	$r23,$r3,4(0x4)
1c004a70:	29800169 	st.w	$r9,$r11,0
1c004a74:	02804063 	addi.w	$r3,$r3,16(0x10)
1c004a78:	500fa000 	b	4000(0xfa0) # 1c005a18 <__malloc_unlock>
1c004a7c:	034004c6 	andi	$r6,$r6,0x1
1c004a80:	00102129 	add.w	$r9,$r9,$r8
1c004a84:	5c0020c0 	bne	$r6,$r0,32(0x20) # 1c004aa4 <_free_r+0x228>
1c004a88:	28bfe2c6 	ld.w	$r6,$r22,-8(0xff8)
1c004a8c:	0011196b 	sub.w	$r11,$r11,$r6
1c004a90:	28803168 	ld.w	$r8,$r11,12(0xc)
1c004a94:	28802167 	ld.w	$r7,$r11,8(0x8)
1c004a98:	00101929 	add.w	$r9,$r9,$r6
1c004a9c:	298030e8 	st.w	$r8,$r7,12(0xc)
1c004aa0:	29802107 	st.w	$r7,$r8,8(0x8)
1c004aa4:	1dc7ffc8 	pcaddu12i	$r8,-114690(0xe3ffe)
1c004aa8:	28877108 	ld.w	$r8,$r8,476(0x1dc)
1c004aac:	03800527 	ori	$r7,$r9,0x1
1c004ab0:	28800108 	ld.w	$r8,$r8,0
1c004ab4:	29801167 	st.w	$r7,$r11,4(0x4)
1c004ab8:	298020ab 	st.w	$r11,$r5,8(0x8)
1c004abc:	6bfea528 	bltu	$r9,$r8,-348(0x3fea4) # 1c004960 <_free_r+0xe4>
1c004ac0:	1dc7ffc9 	pcaddu12i	$r9,-114690(0xe3ffe)
1c004ac4:	2885c129 	ld.w	$r9,$r9,368(0x170)
1c004ac8:	28800125 	ld.w	$r5,$r9,0
1c004acc:	001502e4 	move	$r4,$r23
1c004ad0:	57fc6fff 	bl	-916(0xffffc6c) # 1c00473c <_malloc_trim_r>
1c004ad4:	53fe8fff 	b	-372(0xffffe8c) # 1c004960 <_free_r+0xe4>
1c004ad8:	02805007 	addi.w	$r7,$r0,20(0x14)
1c004adc:	6c0028e8 	bgeu	$r7,$r8,40(0x28) # 1c004b04 <_free_r+0x288>
1c004ae0:	02815007 	addi.w	$r7,$r0,84(0x54)
1c004ae4:	680068e8 	bltu	$r7,$r8,104(0x68) # 1c004b4c <_free_r+0x2d0>
1c004ae8:	0044b128 	srli.w	$r8,$r9,0xc
1c004aec:	0281bd06 	addi.w	$r6,$r8,111(0x6f)
1c004af0:	0281b907 	addi.w	$r7,$r8,110(0x6e)
1c004af4:	00408cc6 	slli.w	$r6,$r6,0x3
1c004af8:	53fef3ff 	b	-272(0xffffef0) # 1c0049e8 <_free_r+0x16c>
1c004afc:	00102129 	add.w	$r9,$r9,$r8
1c004b00:	53fe8fff 	b	-372(0xffffe8c) # 1c00498c <_free_r+0x110>
1c004b04:	02817106 	addi.w	$r6,$r8,92(0x5c)
1c004b08:	02816d07 	addi.w	$r7,$r8,91(0x5b)
1c004b0c:	00408cc6 	slli.w	$r6,$r6,0x3
1c004b10:	53fedbff 	b	-296(0xffffed8) # 1c0049e8 <_free_r+0x16c>
1c004b14:	298050ab 	st.w	$r11,$r5,20(0x14)
1c004b18:	298040ab 	st.w	$r11,$r5,16(0x10)
1c004b1c:	2980316a 	st.w	$r10,$r11,12(0xc)
1c004b20:	2980216a 	st.w	$r10,$r11,8(0x8)
1c004b24:	29801164 	st.w	$r4,$r11,4(0x4)
1c004b28:	298000c9 	st.w	$r9,$r6,0
1c004b2c:	53fe37ff 	b	-460(0xffffe34) # 1c004960 <_free_r+0xe4>
1c004b30:	288010a4 	ld.w	$r4,$r5,4(0x4)
1c004b34:	004888e7 	srai.w	$r7,$r7,0x2
1c004b38:	02800409 	addi.w	$r9,$r0,1(0x1)
1c004b3c:	00171d27 	sll.w	$r7,$r9,$r7
1c004b40:	001510e7 	or	$r7,$r7,$r4
1c004b44:	298010a7 	st.w	$r7,$r5,4(0x4)
1c004b48:	53fecfff 	b	-308(0xffffecc) # 1c004a14 <_free_r+0x198>
1c004b4c:	02855007 	addi.w	$r7,$r0,340(0x154)
1c004b50:	680018e8 	bltu	$r7,$r8,24(0x18) # 1c004b68 <_free_r+0x2ec>
1c004b54:	0044bd28 	srli.w	$r8,$r9,0xf
1c004b58:	0281e106 	addi.w	$r6,$r8,120(0x78)
1c004b5c:	0281dd07 	addi.w	$r7,$r8,119(0x77)
1c004b60:	00408cc6 	slli.w	$r6,$r6,0x3
1c004b64:	53fe87ff 	b	-380(0xffffe84) # 1c0049e8 <_free_r+0x16c>
1c004b68:	02955007 	addi.w	$r7,$r0,1364(0x554)
1c004b6c:	680018e8 	bltu	$r7,$r8,24(0x18) # 1c004b84 <_free_r+0x308>
1c004b70:	0044c928 	srli.w	$r8,$r9,0x12
1c004b74:	0281f506 	addi.w	$r6,$r8,125(0x7d)
1c004b78:	0281f107 	addi.w	$r7,$r8,124(0x7c)
1c004b7c:	00408cc6 	slli.w	$r6,$r6,0x3
1c004b80:	53fe6bff 	b	-408(0xffffe68) # 1c0049e8 <_free_r+0x16c>
1c004b84:	028fe006 	addi.w	$r6,$r0,1016(0x3f8)
1c004b88:	0281f807 	addi.w	$r7,$r0,126(0x7e)
1c004b8c:	53fe5fff 	b	-420(0xffffe5c) # 1c0049e8 <_free_r+0x16c>
1c004b90:	03800528 	ori	$r8,$r9,0x1
1c004b94:	29801168 	st.w	$r8,$r11,4(0x4)
1c004b98:	298000e9 	st.w	$r9,$r7,0
1c004b9c:	53fdc7ff 	b	-572(0xffffdc4) # 1c004960 <_free_r+0xe4>

1c004ba0 <_fwalk>:
_fwalk():
1c004ba0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c004ba4:	2980107b 	st.w	$r27,$r3,4(0x4)
1c004ba8:	29807061 	st.w	$r1,$r3,28(0x1c)
1c004bac:	29806076 	st.w	$r22,$r3,24(0x18)
1c004bb0:	29805077 	st.w	$r23,$r3,20(0x14)
1c004bb4:	29804078 	st.w	$r24,$r3,16(0x10)
1c004bb8:	29803079 	st.w	$r25,$r3,12(0xc)
1c004bbc:	2980207a 	st.w	$r26,$r3,8(0x8)
1c004bc0:	2980007c 	st.w	$r28,$r3,0
1c004bc4:	028b809b 	addi.w	$r27,$r4,736(0x2e0)
1c004bc8:	58008360 	beq	$r27,$r0,128(0x80) # 1c004c48 <_fwalk+0xa8>
1c004bcc:	001500bc 	move	$r28,$r5
1c004bd0:	0015001a 	move	$r26,$r0
1c004bd4:	02800419 	addi.w	$r25,$r0,1(0x1)
1c004bd8:	02bffc18 	addi.w	$r24,$r0,-1(0xfff)
1c004bdc:	28801377 	ld.w	$r23,$r27,4(0x4)
1c004be0:	28802376 	ld.w	$r22,$r27,8(0x8)
1c004be4:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c004be8:	60002ee0 	blt	$r23,$r0,44(0x2c) # 1c004c14 <_fwalk+0x74>
1c004bec:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c004bf0:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c004bf4:	6c001b29 	bgeu	$r25,$r9,24(0x18) # 1c004c0c <_fwalk+0x6c>
1c004bf8:	28403ac9 	ld.h	$r9,$r22,14(0xe)
1c004bfc:	001502c4 	move	$r4,$r22
1c004c00:	58000d38 	beq	$r9,$r24,12(0xc) # 1c004c0c <_fwalk+0x6c>
1c004c04:	4c000381 	jirl	$r1,$r28,0
1c004c08:	0015135a 	or	$r26,$r26,$r4
1c004c0c:	028192d6 	addi.w	$r22,$r22,100(0x64)
1c004c10:	5fffdef8 	bne	$r23,$r24,-36(0x3ffdc) # 1c004bec <_fwalk+0x4c>
1c004c14:	2880037b 	ld.w	$r27,$r27,0
1c004c18:	5fffc760 	bne	$r27,$r0,-60(0x3ffc4) # 1c004bdc <_fwalk+0x3c>
1c004c1c:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c004c20:	28806076 	ld.w	$r22,$r3,24(0x18)
1c004c24:	00150344 	move	$r4,$r26
1c004c28:	28805077 	ld.w	$r23,$r3,20(0x14)
1c004c2c:	28804078 	ld.w	$r24,$r3,16(0x10)
1c004c30:	28803079 	ld.w	$r25,$r3,12(0xc)
1c004c34:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c004c38:	2880107b 	ld.w	$r27,$r3,4(0x4)
1c004c3c:	2880007c 	ld.w	$r28,$r3,0
1c004c40:	02808063 	addi.w	$r3,$r3,32(0x20)
1c004c44:	4c000020 	jirl	$r0,$r1,0
1c004c48:	0015001a 	move	$r26,$r0
1c004c4c:	53ffd3ff 	b	-48(0xfffffd0) # 1c004c1c <_fwalk+0x7c>

1c004c50 <_fwalk_reent>:
_fwalk_reent():
1c004c50:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c004c54:	2980607a 	st.w	$r26,$r3,24(0x18)
1c004c58:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c004c5c:	2980a076 	st.w	$r22,$r3,40(0x28)
1c004c60:	29809077 	st.w	$r23,$r3,36(0x24)
1c004c64:	29808078 	st.w	$r24,$r3,32(0x20)
1c004c68:	29807079 	st.w	$r25,$r3,28(0x1c)
1c004c6c:	2980507b 	st.w	$r27,$r3,20(0x14)
1c004c70:	2980407c 	st.w	$r28,$r3,16(0x10)
1c004c74:	2980307d 	st.w	$r29,$r3,12(0xc)
1c004c78:	028b809a 	addi.w	$r26,$r4,736(0x2e0)
1c004c7c:	58008f40 	beq	$r26,$r0,140(0x8c) # 1c004d08 <_fwalk_reent+0xb8>
1c004c80:	001500bc 	move	$r28,$r5
1c004c84:	0015009b 	move	$r27,$r4
1c004c88:	0015001d 	move	$r29,$r0
1c004c8c:	02800419 	addi.w	$r25,$r0,1(0x1)
1c004c90:	02bffc18 	addi.w	$r24,$r0,-1(0xfff)
1c004c94:	28801357 	ld.w	$r23,$r26,4(0x4)
1c004c98:	28802356 	ld.w	$r22,$r26,8(0x8)
1c004c9c:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c004ca0:	600032e0 	blt	$r23,$r0,48(0x30) # 1c004cd0 <_fwalk_reent+0x80>
1c004ca4:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c004ca8:	02bffef7 	addi.w	$r23,$r23,-1(0xfff)
1c004cac:	6c001f29 	bgeu	$r25,$r9,28(0x1c) # 1c004cc8 <_fwalk_reent+0x78>
1c004cb0:	28403ac9 	ld.h	$r9,$r22,14(0xe)
1c004cb4:	001502c5 	move	$r5,$r22
1c004cb8:	00150364 	move	$r4,$r27
1c004cbc:	58000d38 	beq	$r9,$r24,12(0xc) # 1c004cc8 <_fwalk_reent+0x78>
1c004cc0:	4c000381 	jirl	$r1,$r28,0
1c004cc4:	001513bd 	or	$r29,$r29,$r4
1c004cc8:	028192d6 	addi.w	$r22,$r22,100(0x64)
1c004ccc:	5fffdaf8 	bne	$r23,$r24,-40(0x3ffd8) # 1c004ca4 <_fwalk_reent+0x54>
1c004cd0:	2880035a 	ld.w	$r26,$r26,0
1c004cd4:	5fffc340 	bne	$r26,$r0,-64(0x3ffc0) # 1c004c94 <_fwalk_reent+0x44>
1c004cd8:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c004cdc:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c004ce0:	001503a4 	move	$r4,$r29
1c004ce4:	28809077 	ld.w	$r23,$r3,36(0x24)
1c004ce8:	28808078 	ld.w	$r24,$r3,32(0x20)
1c004cec:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c004cf0:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c004cf4:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c004cf8:	2880407c 	ld.w	$r28,$r3,16(0x10)
1c004cfc:	2880307d 	ld.w	$r29,$r3,12(0xc)
1c004d00:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c004d04:	4c000020 	jirl	$r0,$r1,0
1c004d08:	0015001d 	move	$r29,$r0
1c004d0c:	53ffcfff 	b	-52(0xfffffcc) # 1c004cd8 <_fwalk_reent+0x88>

1c004d10 <_setlocale_r>:
_setlocale_r():
1c004d10:	580040c0 	beq	$r6,$r0,64(0x40) # 1c004d50 <_setlocale_r+0x40>
1c004d14:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c004d18:	1dc7ffa5 	pcaddu12i	$r5,-114691(0xe3ffd)
1c004d1c:	0283f0a5 	addi.w	$r5,$r5,252(0xfc)
1c004d20:	001500c4 	move	$r4,$r6
1c004d24:	29802076 	st.w	$r22,$r3,8(0x8)
1c004d28:	29803061 	st.w	$r1,$r3,12(0xc)
1c004d2c:	001500d6 	move	$r22,$r6
1c004d30:	541f4c00 	bl	8012(0x1f4c) # 1c006c7c <strcmp>
1c004d34:	5c002880 	bne	$r4,$r0,40(0x28) # 1c004d5c <_setlocale_r+0x4c>
1c004d38:	1dc7ffa4 	pcaddu12i	$r4,-114691(0xe3ffd)
1c004d3c:	02836084 	addi.w	$r4,$r4,216(0xd8)
1c004d40:	28803061 	ld.w	$r1,$r3,12(0xc)
1c004d44:	28802076 	ld.w	$r22,$r3,8(0x8)
1c004d48:	02804063 	addi.w	$r3,$r3,16(0x10)
1c004d4c:	4c000020 	jirl	$r0,$r1,0
1c004d50:	1dc7ffa4 	pcaddu12i	$r4,-114691(0xe3ffd)
1c004d54:	02830084 	addi.w	$r4,$r4,192(0xc0)
1c004d58:	4c000020 	jirl	$r0,$r1,0
1c004d5c:	1dc7ffa5 	pcaddu12i	$r5,-114691(0xe3ffd)
1c004d60:	0282d0a5 	addi.w	$r5,$r5,180(0xb4)
1c004d64:	001502c4 	move	$r4,$r22
1c004d68:	541f1400 	bl	7956(0x1f14) # 1c006c7c <strcmp>
1c004d6c:	5bffcc80 	beq	$r4,$r0,-52(0x3ffcc) # 1c004d38 <_setlocale_r+0x28>
1c004d70:	1dc7ffa5 	pcaddu12i	$r5,-114691(0xe3ffd)
1c004d74:	0282b0a5 	addi.w	$r5,$r5,172(0xac)
1c004d78:	001502c4 	move	$r4,$r22
1c004d7c:	541f0000 	bl	7936(0x1f00) # 1c006c7c <strcmp>
1c004d80:	5bffb880 	beq	$r4,$r0,-72(0x3ffb8) # 1c004d38 <_setlocale_r+0x28>
1c004d84:	00150004 	move	$r4,$r0
1c004d88:	53ffbbff 	b	-72(0xfffffb8) # 1c004d40 <_setlocale_r+0x30>

1c004d8c <__locale_charset>:
__locale_charset():
1c004d8c:	1dc7ffc4 	pcaddu12i	$r4,-114690(0xe3ffe)
1c004d90:	02a4f084 	addi.w	$r4,$r4,-1732(0x93c)
1c004d94:	4c000020 	jirl	$r0,$r1,0

1c004d98 <__locale_mb_cur_max>:
__locale_mb_cur_max():
1c004d98:	1dc7ffc9 	pcaddu12i	$r9,-114690(0xe3ffe)
1c004d9c:	02b78129 	addi.w	$r9,$r9,-544(0xde0)
1c004da0:	28800124 	ld.w	$r4,$r9,0
1c004da4:	4c000020 	jirl	$r0,$r1,0

1c004da8 <__locale_msgcharset>:
__locale_msgcharset():
1c004da8:	1dc7ffc4 	pcaddu12i	$r4,-114690(0xe3ffe)
1c004dac:	02a40084 	addi.w	$r4,$r4,-1792(0x900)
1c004db0:	4c000020 	jirl	$r0,$r1,0

1c004db4 <__locale_cjk_lang>:
__locale_cjk_lang():
1c004db4:	00150004 	move	$r4,$r0
1c004db8:	4c000020 	jirl	$r0,$r1,0

1c004dbc <_localeconv_r>:
_localeconv_r():
1c004dbc:	1dc7ffc4 	pcaddu12i	$r4,-114690(0xe3ffe)
1c004dc0:	02a4b084 	addi.w	$r4,$r4,-1748(0x92c)
1c004dc4:	4c000020 	jirl	$r0,$r1,0

1c004dc8 <setlocale>:
setlocale():
1c004dc8:	1dc7ffc9 	pcaddu12i	$r9,-114690(0xe3ffe)
1c004dcc:	28bab129 	ld.w	$r9,$r9,-340(0xeac)
1c004dd0:	001500a6 	move	$r6,$r5
1c004dd4:	00150085 	move	$r5,$r4
1c004dd8:	28800124 	ld.w	$r4,$r9,0
1c004ddc:	53ff37ff 	b	-204(0xfffff34) # 1c004d10 <_setlocale_r>

1c004de0 <localeconv>:
localeconv():
1c004de0:	1dc7ffc4 	pcaddu12i	$r4,-114690(0xe3ffe)
1c004de4:	02a42084 	addi.w	$r4,$r4,-1784(0x908)
1c004de8:	4c000020 	jirl	$r0,$r1,0

1c004dec <__smakebuf_r>:
__smakebuf_r():
1c004dec:	284030a9 	ld.h	$r9,$r5,12(0xc)
1c004df0:	0040c128 	slli.w	$r8,$r9,0x10
1c004df4:	0044c108 	srli.w	$r8,$r8,0x10
1c004df8:	03400907 	andi	$r7,$r8,0x2
1c004dfc:	5c0114e0 	bne	$r7,$r0,276(0x114) # 1c004f10 <__smakebuf_r+0x124>
1c004e00:	02be8063 	addi.w	$r3,$r3,-96(0xfa0)
1c004e04:	29816076 	st.w	$r22,$r3,88(0x58)
1c004e08:	001500b6 	move	$r22,$r5
1c004e0c:	284038a5 	ld.h	$r5,$r5,14(0xe)
1c004e10:	29815077 	st.w	$r23,$r3,84(0x54)
1c004e14:	29817061 	st.w	$r1,$r3,92(0x5c)
1c004e18:	29814078 	st.w	$r24,$r3,80(0x50)
1c004e1c:	29813079 	st.w	$r25,$r3,76(0x4c)
1c004e20:	00150097 	move	$r23,$r4
1c004e24:	640074a0 	bge	$r5,$r0,116(0x74) # 1c004e98 <__smakebuf_r+0xac>
1c004e28:	03420108 	andi	$r8,$r8,0x80
1c004e2c:	02900018 	addi.w	$r24,$r0,1024(0x400)
1c004e30:	58000900 	beq	$r8,$r0,8(0x8) # 1c004e38 <__smakebuf_r+0x4c>
1c004e34:	02810018 	addi.w	$r24,$r0,64(0x40)
1c004e38:	03a00129 	ori	$r9,$r9,0x800
1c004e3c:	294032c9 	st.h	$r9,$r22,12(0xc)
1c004e40:	00150019 	move	$r25,$r0
1c004e44:	00150305 	move	$r5,$r24
1c004e48:	001502e4 	move	$r4,$r23
1c004e4c:	54013400 	bl	308(0x134) # 1c004f80 <_malloc_r>
1c004e50:	58009480 	beq	$r4,$r0,148(0x94) # 1c004ee4 <__smakebuf_r+0xf8>
1c004e54:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c004e58:	1dc7ffc8 	pcaddu12i	$r8,-114690(0xe3ffe)
1c004e5c:	28b73108 	ld.w	$r8,$r8,-564(0xdcc)
1c004e60:	2980f2e8 	st.w	$r8,$r23,60(0x3c)
1c004e64:	03820129 	ori	$r9,$r9,0x80
1c004e68:	294032c9 	st.h	$r9,$r22,12(0xc)
1c004e6c:	298002c4 	st.w	$r4,$r22,0
1c004e70:	298042c4 	st.w	$r4,$r22,16(0x10)
1c004e74:	298052d8 	st.w	$r24,$r22,20(0x14)
1c004e78:	5c00c320 	bne	$r25,$r0,192(0xc0) # 1c004f38 <__smakebuf_r+0x14c>
1c004e7c:	28817061 	ld.w	$r1,$r3,92(0x5c)
1c004e80:	28816076 	ld.w	$r22,$r3,88(0x58)
1c004e84:	28815077 	ld.w	$r23,$r3,84(0x54)
1c004e88:	28814078 	ld.w	$r24,$r3,80(0x50)
1c004e8c:	28813079 	ld.w	$r25,$r3,76(0x4c)
1c004e90:	02818063 	addi.w	$r3,$r3,96(0x60)
1c004e94:	4c000020 	jirl	$r0,$r1,0
1c004e98:	02801066 	addi.w	$r6,$r3,4(0x4)
1c004e9c:	54374c00 	bl	14156(0x374c) # 1c0085e8 <_fstat_r>
1c004ea0:	60008880 	blt	$r4,$r0,136(0x88) # 1c004f28 <__smakebuf_r+0x13c>
1c004ea4:	28802069 	ld.w	$r9,$r3,8(0x8)
1c004ea8:	140001e8 	lu12i.w	$r8,15(0xf)
1c004eac:	15ffffd9 	lu12i.w	$r25,-2(0xffffe)
1c004eb0:	0014a129 	and	$r9,$r9,$r8
1c004eb4:	00106539 	add.w	$r25,$r9,$r25
1c004eb8:	14000107 	lu12i.w	$r7,8(0x8)
1c004ebc:	02400739 	sltui	$r25,$r25,1(0x1)
1c004ec0:	284032c8 	ld.h	$r8,$r22,12(0xc)
1c004ec4:	58009527 	beq	$r9,$r7,148(0x94) # 1c004f58 <__smakebuf_r+0x16c>
1c004ec8:	03a00108 	ori	$r8,$r8,0x800
1c004ecc:	02900018 	addi.w	$r24,$r0,1024(0x400)
1c004ed0:	294032c8 	st.h	$r8,$r22,12(0xc)
1c004ed4:	00150305 	move	$r5,$r24
1c004ed8:	001502e4 	move	$r4,$r23
1c004edc:	5400a400 	bl	164(0xa4) # 1c004f80 <_malloc_r>
1c004ee0:	5fff7480 	bne	$r4,$r0,-140(0x3ff74) # 1c004e54 <__smakebuf_r+0x68>
1c004ee4:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c004ee8:	03480128 	andi	$r8,$r9,0x200
1c004eec:	5fff9100 	bne	$r8,$r0,-112(0x3ff90) # 1c004e7c <__smakebuf_r+0x90>
1c004ef0:	03800929 	ori	$r9,$r9,0x2
1c004ef4:	02810ec8 	addi.w	$r8,$r22,67(0x43)
1c004ef8:	294032c9 	st.h	$r9,$r22,12(0xc)
1c004efc:	02800409 	addi.w	$r9,$r0,1(0x1)
1c004f00:	298002c8 	st.w	$r8,$r22,0
1c004f04:	298042c8 	st.w	$r8,$r22,16(0x10)
1c004f08:	298052c9 	st.w	$r9,$r22,20(0x14)
1c004f0c:	53ff73ff 	b	-144(0xfffff70) # 1c004e7c <__smakebuf_r+0x90>
1c004f10:	02810ca9 	addi.w	$r9,$r5,67(0x43)
1c004f14:	298000a9 	st.w	$r9,$r5,0
1c004f18:	298040a9 	st.w	$r9,$r5,16(0x10)
1c004f1c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c004f20:	298050a9 	st.w	$r9,$r5,20(0x14)
1c004f24:	4c000020 	jirl	$r0,$r1,0
1c004f28:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c004f2c:	0040c128 	slli.w	$r8,$r9,0x10
1c004f30:	0044c108 	srli.w	$r8,$r8,0x10
1c004f34:	53fef7ff 	b	-268(0xffffef4) # 1c004e28 <__smakebuf_r+0x3c>
1c004f38:	28403ac5 	ld.h	$r5,$r22,14(0xe)
1c004f3c:	001502e4 	move	$r4,$r23
1c004f40:	543bcc00 	bl	15308(0x3bcc) # 1c008b0c <_isatty_r>
1c004f44:	5bff3880 	beq	$r4,$r0,-200(0x3ff38) # 1c004e7c <__smakebuf_r+0x90>
1c004f48:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c004f4c:	03800529 	ori	$r9,$r9,0x1
1c004f50:	294032c9 	st.h	$r9,$r22,12(0xc)
1c004f54:	53ff2bff 	b	-216(0xfffff28) # 1c004e7c <__smakebuf_r+0x90>
1c004f58:	2880a2c7 	ld.w	$r7,$r22,40(0x28)
1c004f5c:	1dc7ffc9 	pcaddu12i	$r9,-114690(0xe3ffe)
1c004f60:	28b2f129 	ld.w	$r9,$r9,-836(0xcbc)
1c004f64:	5fff64e9 	bne	$r7,$r9,-156(0x3ff64) # 1c004ec8 <__smakebuf_r+0xdc>
1c004f68:	03900108 	ori	$r8,$r8,0x400
1c004f6c:	02900009 	addi.w	$r9,$r0,1024(0x400)
1c004f70:	294032c8 	st.h	$r8,$r22,12(0xc)
1c004f74:	298132c9 	st.w	$r9,$r22,76(0x4c)
1c004f78:	02900018 	addi.w	$r24,$r0,1024(0x400)
1c004f7c:	53fecbff 	b	-312(0xffffec8) # 1c004e44 <__smakebuf_r+0x58>

1c004f80 <_malloc_r>:
_malloc_r():
1c004f80:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c004f84:	29809077 	st.w	$r23,$r3,36(0x24)
1c004f88:	29807079 	st.w	$r25,$r3,28(0x1c)
1c004f8c:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c004f90:	2980a076 	st.w	$r22,$r3,40(0x28)
1c004f94:	29808078 	st.w	$r24,$r3,32(0x20)
1c004f98:	2980607a 	st.w	$r26,$r3,24(0x18)
1c004f9c:	2980507b 	st.w	$r27,$r3,20(0x14)
1c004fa0:	2980407c 	st.w	$r28,$r3,16(0x10)
1c004fa4:	2980307d 	st.w	$r29,$r3,12(0xc)
1c004fa8:	2980207e 	st.w	$r30,$r3,8(0x8)
1c004fac:	2980107f 	st.w	$r31,$r3,4(0x4)
1c004fb0:	02802cb7 	addi.w	$r23,$r5,11(0xb)
1c004fb4:	02805809 	addi.w	$r9,$r0,22(0x16)
1c004fb8:	00150099 	move	$r25,$r4
1c004fbc:	68007137 	bltu	$r9,$r23,112(0x70) # 1c00502c <_malloc_r+0xac>
1c004fc0:	02804009 	addi.w	$r9,$r0,16(0x10)
1c004fc4:	68024125 	bltu	$r9,$r5,576(0x240) # 1c005204 <_malloc_r+0x284>
1c004fc8:	540a4c00 	bl	2636(0xa4c) # 1c005a14 <__malloc_lock>
1c004fcc:	02804017 	addi.w	$r23,$r0,16(0x10)
1c004fd0:	02800806 	addi.w	$r6,$r0,2(0x2)
1c004fd4:	02806009 	addi.w	$r9,$r0,24(0x18)
1c004fd8:	1dc7ffb8 	pcaddu12i	$r24,-114691(0xe3ffd)
1c004fdc:	029d2318 	addi.w	$r24,$r24,1864(0x748)
1c004fe0:	00102709 	add.w	$r9,$r24,$r9
1c004fe4:	28801136 	ld.w	$r22,$r9,4(0x4)
1c004fe8:	02bfe128 	addi.w	$r8,$r9,-8(0xff8)
1c004fec:	58026ac8 	beq	$r22,$r8,616(0x268) # 1c005254 <_malloc_r+0x2d4>
1c004ff0:	288012c9 	ld.w	$r9,$r22,4(0x4)
1c004ff4:	288032c7 	ld.w	$r7,$r22,12(0xc)
1c004ff8:	02bff008 	addi.w	$r8,$r0,-4(0xffc)
1c004ffc:	0014a129 	and	$r9,$r9,$r8
1c005000:	288022c6 	ld.w	$r6,$r22,8(0x8)
1c005004:	001026c9 	add.w	$r9,$r22,$r9
1c005008:	28801128 	ld.w	$r8,$r9,4(0x4)
1c00500c:	298030c7 	st.w	$r7,$r6,12(0xc)
1c005010:	298020e6 	st.w	$r6,$r7,8(0x8)
1c005014:	03800508 	ori	$r8,$r8,0x1
1c005018:	00150324 	move	$r4,$r25
1c00501c:	29801128 	st.w	$r8,$r9,4(0x4)
1c005020:	5409f800 	bl	2552(0x9f8) # 1c005a18 <__malloc_unlock>
1c005024:	028022c4 	addi.w	$r4,$r22,8(0x8)
1c005028:	5001e800 	b	488(0x1e8) # 1c005210 <_malloc_r+0x290>
1c00502c:	02bfe009 	addi.w	$r9,$r0,-8(0xff8)
1c005030:	0014a6f7 	and	$r23,$r23,$r9
1c005034:	6001d2e0 	blt	$r23,$r0,464(0x1d0) # 1c005204 <_malloc_r+0x284>
1c005038:	6801cee5 	bltu	$r23,$r5,460(0x1cc) # 1c005204 <_malloc_r+0x284>
1c00503c:	5409d800 	bl	2520(0x9d8) # 1c005a14 <__malloc_lock>
1c005040:	0287dc09 	addi.w	$r9,$r0,503(0x1f7)
1c005044:	6c04b937 	bgeu	$r9,$r23,1208(0x4b8) # 1c0054fc <_malloc_r+0x57c>
1c005048:	0044a6e9 	srli.w	$r9,$r23,0x9
1c00504c:	5801f920 	beq	$r9,$r0,504(0x1f8) # 1c005244 <_malloc_r+0x2c4>
1c005050:	02801008 	addi.w	$r8,$r0,4(0x4)
1c005054:	68044109 	bltu	$r8,$r9,1088(0x440) # 1c005494 <_malloc_r+0x514>
1c005058:	00449ae9 	srli.w	$r9,$r23,0x6
1c00505c:	0280e526 	addi.w	$r6,$r9,57(0x39)
1c005060:	0280e12a 	addi.w	$r10,$r9,56(0x38)
1c005064:	00408cc7 	slli.w	$r7,$r6,0x3
1c005068:	1dc7ffb8 	pcaddu12i	$r24,-114691(0xe3ffd)
1c00506c:	029ae318 	addi.w	$r24,$r24,1720(0x6b8)
1c005070:	00101f07 	add.w	$r7,$r24,$r7
1c005074:	288010f6 	ld.w	$r22,$r7,4(0x4)
1c005078:	02bfe0e7 	addi.w	$r7,$r7,-8(0xff8)
1c00507c:	580044f6 	beq	$r7,$r22,68(0x44) # 1c0050c0 <_malloc_r+0x140>
1c005080:	288012c9 	ld.w	$r9,$r22,4(0x4)
1c005084:	02bff008 	addi.w	$r8,$r0,-4(0xffc)
1c005088:	02803c05 	addi.w	$r5,$r0,15(0xf)
1c00508c:	0014a129 	and	$r9,$r9,$r8
1c005090:	00115d28 	sub.w	$r8,$r9,$r23
1c005094:	60038ca8 	blt	$r5,$r8,908(0x38c) # 1c005420 <_malloc_r+0x4a0>
1c005098:	64039100 	bge	$r8,$r0,912(0x390) # 1c005428 <_malloc_r+0x4a8>
1c00509c:	02bff004 	addi.w	$r4,$r0,-4(0xffc)
1c0050a0:	50001800 	b	24(0x18) # 1c0050b8 <_malloc_r+0x138>
1c0050a4:	288012c9 	ld.w	$r9,$r22,4(0x4)
1c0050a8:	00149129 	and	$r9,$r9,$r4
1c0050ac:	00115d28 	sub.w	$r8,$r9,$r23
1c0050b0:	600370a8 	blt	$r5,$r8,880(0x370) # 1c005420 <_malloc_r+0x4a0>
1c0050b4:	64037500 	bge	$r8,$r0,884(0x374) # 1c005428 <_malloc_r+0x4a8>
1c0050b8:	288032d6 	ld.w	$r22,$r22,12(0xc)
1c0050bc:	5fffe8f6 	bne	$r7,$r22,-24(0x3ffe8) # 1c0050a4 <_malloc_r+0x124>
1c0050c0:	28804316 	ld.w	$r22,$r24,16(0x10)
1c0050c4:	0280230b 	addi.w	$r11,$r24,8(0x8)
1c0050c8:	5801a6cb 	beq	$r22,$r11,420(0x1a4) # 1c00526c <_malloc_r+0x2ec>
1c0050cc:	288012c4 	ld.w	$r4,$r22,4(0x4)
1c0050d0:	02bff009 	addi.w	$r9,$r0,-4(0xffc)
1c0050d4:	02803c08 	addi.w	$r8,$r0,15(0xf)
1c0050d8:	0014a484 	and	$r4,$r4,$r9
1c0050dc:	00115c89 	sub.w	$r9,$r4,$r23
1c0050e0:	60044909 	blt	$r8,$r9,1096(0x448) # 1c005528 <_malloc_r+0x5a8>
1c0050e4:	2980530b 	st.w	$r11,$r24,20(0x14)
1c0050e8:	2980430b 	st.w	$r11,$r24,16(0x10)
1c0050ec:	64041d20 	bge	$r9,$r0,1052(0x41c) # 1c005508 <_malloc_r+0x588>
1c0050f0:	0287fc09 	addi.w	$r9,$r0,511(0x1ff)
1c0050f4:	68033d24 	bltu	$r9,$r4,828(0x33c) # 1c005430 <_malloc_r+0x4b0>
1c0050f8:	00448c84 	srli.w	$r4,$r4,0x3
1c0050fc:	02800489 	addi.w	$r9,$r4,1(0x1)
1c005100:	00408d29 	slli.w	$r9,$r9,0x3
1c005104:	28801305 	ld.w	$r5,$r24,4(0x4)
1c005108:	00102709 	add.w	$r9,$r24,$r9
1c00510c:	28800127 	ld.w	$r7,$r9,0
1c005110:	00488884 	srai.w	$r4,$r4,0x2
1c005114:	02800408 	addi.w	$r8,$r0,1(0x1)
1c005118:	00171108 	sll.w	$r8,$r8,$r4
1c00511c:	00151508 	or	$r8,$r8,$r5
1c005120:	02bfe125 	addi.w	$r5,$r9,-8(0xff8)
1c005124:	298032c5 	st.w	$r5,$r22,12(0xc)
1c005128:	298022c7 	st.w	$r7,$r22,8(0x8)
1c00512c:	29801308 	st.w	$r8,$r24,4(0x4)
1c005130:	29800136 	st.w	$r22,$r9,0
1c005134:	298030f6 	st.w	$r22,$r7,12(0xc)
1c005138:	004888c9 	srai.w	$r9,$r6,0x2
1c00513c:	02800407 	addi.w	$r7,$r0,1(0x1)
1c005140:	001724e7 	sll.w	$r7,$r7,$r9
1c005144:	68013d07 	bltu	$r8,$r7,316(0x13c) # 1c005280 <_malloc_r+0x300>
1c005148:	0014a0e9 	and	$r9,$r7,$r8
1c00514c:	5c002d20 	bne	$r9,$r0,44(0x2c) # 1c005178 <_malloc_r+0x1f8>
1c005150:	02bff009 	addi.w	$r9,$r0,-4(0xffc)
1c005154:	004084e7 	slli.w	$r7,$r7,0x1
1c005158:	0014a4c6 	and	$r6,$r6,$r9
1c00515c:	0014a0e9 	and	$r9,$r7,$r8
1c005160:	028010c6 	addi.w	$r6,$r6,4(0x4)
1c005164:	5c001520 	bne	$r9,$r0,20(0x14) # 1c005178 <_malloc_r+0x1f8>
1c005168:	004084e7 	slli.w	$r7,$r7,0x1
1c00516c:	0014a0e9 	and	$r9,$r7,$r8
1c005170:	028010c6 	addi.w	$r6,$r6,4(0x4)
1c005174:	5bfff520 	beq	$r9,$r0,-12(0x3fff4) # 1c005168 <_malloc_r+0x1e8>
1c005178:	02bff00a 	addi.w	$r10,$r0,-4(0xffc)
1c00517c:	02803c04 	addi.w	$r4,$r0,15(0xf)
1c005180:	00408ccd 	slli.w	$r13,$r6,0x3
1c005184:	0010370d 	add.w	$r13,$r24,$r13
1c005188:	001501a5 	move	$r5,$r13
1c00518c:	001500cf 	move	$r15,$r6
1c005190:	288030b6 	ld.w	$r22,$r5,12(0xc)
1c005194:	5c0014b6 	bne	$r5,$r22,20(0x14) # 1c0051a8 <_malloc_r+0x228>
1c005198:	50032000 	b	800(0x320) # 1c0054b8 <_malloc_r+0x538>
1c00519c:	64033100 	bge	$r8,$r0,816(0x330) # 1c0054cc <_malloc_r+0x54c>
1c0051a0:	288032d6 	ld.w	$r22,$r22,12(0xc)
1c0051a4:	580314b6 	beq	$r5,$r22,788(0x314) # 1c0054b8 <_malloc_r+0x538>
1c0051a8:	288012c9 	ld.w	$r9,$r22,4(0x4)
1c0051ac:	0014a929 	and	$r9,$r9,$r10
1c0051b0:	00115d28 	sub.w	$r8,$r9,$r23
1c0051b4:	67ffe888 	bge	$r4,$r8,-24(0x3ffe8) # 1c00519c <_malloc_r+0x21c>
1c0051b8:	288032c7 	ld.w	$r7,$r22,12(0xc)
1c0051bc:	288022c6 	ld.w	$r6,$r22,8(0x8)
1c0051c0:	038006e5 	ori	$r5,$r23,0x1
1c0051c4:	298012c5 	st.w	$r5,$r22,4(0x4)
1c0051c8:	298030c7 	st.w	$r7,$r6,12(0xc)
1c0051cc:	298020e6 	st.w	$r6,$r7,8(0x8)
1c0051d0:	00105ed7 	add.w	$r23,$r22,$r23
1c0051d4:	29805317 	st.w	$r23,$r24,20(0x14)
1c0051d8:	29804317 	st.w	$r23,$r24,16(0x10)
1c0051dc:	03800507 	ori	$r7,$r8,0x1
1c0051e0:	298032eb 	st.w	$r11,$r23,12(0xc)
1c0051e4:	298022eb 	st.w	$r11,$r23,8(0x8)
1c0051e8:	298012e7 	st.w	$r7,$r23,4(0x4)
1c0051ec:	001026c9 	add.w	$r9,$r22,$r9
1c0051f0:	00150324 	move	$r4,$r25
1c0051f4:	29800128 	st.w	$r8,$r9,0
1c0051f8:	54082000 	bl	2080(0x820) # 1c005a18 <__malloc_unlock>
1c0051fc:	028022c4 	addi.w	$r4,$r22,8(0x8)
1c005200:	50001000 	b	16(0x10) # 1c005210 <_malloc_r+0x290>
1c005204:	02803009 	addi.w	$r9,$r0,12(0xc)
1c005208:	29800329 	st.w	$r9,$r25,0
1c00520c:	00150004 	move	$r4,$r0
1c005210:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c005214:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c005218:	28809077 	ld.w	$r23,$r3,36(0x24)
1c00521c:	28808078 	ld.w	$r24,$r3,32(0x20)
1c005220:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c005224:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c005228:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c00522c:	2880407c 	ld.w	$r28,$r3,16(0x10)
1c005230:	2880307d 	ld.w	$r29,$r3,12(0xc)
1c005234:	2880207e 	ld.w	$r30,$r3,8(0x8)
1c005238:	2880107f 	ld.w	$r31,$r3,4(0x4)
1c00523c:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c005240:	4c000020 	jirl	$r0,$r1,0
1c005244:	02880007 	addi.w	$r7,$r0,512(0x200)
1c005248:	02810006 	addi.w	$r6,$r0,64(0x40)
1c00524c:	0280fc0a 	addi.w	$r10,$r0,63(0x3f)
1c005250:	53fe1bff 	b	-488(0xffffe18) # 1c005068 <_malloc_r+0xe8>
1c005254:	28803136 	ld.w	$r22,$r9,12(0xc)
1c005258:	028008c6 	addi.w	$r6,$r6,2(0x2)
1c00525c:	5ffd9536 	bne	$r9,$r22,-620(0x3fd94) # 1c004ff0 <_malloc_r+0x70>
1c005260:	28804316 	ld.w	$r22,$r24,16(0x10)
1c005264:	0280230b 	addi.w	$r11,$r24,8(0x8)
1c005268:	5ffe66cb 	bne	$r22,$r11,-412(0x3fe64) # 1c0050cc <_malloc_r+0x14c>
1c00526c:	28801308 	ld.w	$r8,$r24,4(0x4)
1c005270:	004888c9 	srai.w	$r9,$r6,0x2
1c005274:	02800407 	addi.w	$r7,$r0,1(0x1)
1c005278:	001724e7 	sll.w	$r7,$r7,$r9
1c00527c:	6ffecd07 	bgeu	$r8,$r7,-308(0x3fecc) # 1c005148 <_malloc_r+0x1c8>
1c005280:	28802316 	ld.w	$r22,$r24,8(0x8)
1c005284:	02bff009 	addi.w	$r9,$r0,-4(0xffc)
1c005288:	288012db 	ld.w	$r27,$r22,4(0x4)
1c00528c:	0014a77b 	and	$r27,$r27,$r9
1c005290:	68001377 	bltu	$r27,$r23,16(0x10) # 1c0052a0 <_malloc_r+0x320>
1c005294:	00115f68 	sub.w	$r8,$r27,$r23
1c005298:	02803c09 	addi.w	$r9,$r0,15(0xf)
1c00529c:	60015d28 	blt	$r9,$r8,348(0x15c) # 1c0053f8 <_malloc_r+0x478>
1c0052a0:	1dc7ffc9 	pcaddu12i	$r9,-114690(0xe3ffe)
1c0052a4:	02a89129 	addi.w	$r9,$r9,-1500(0xa24)
1c0052a8:	1dc7ffdf 	pcaddu12i	$r31,-114690(0xe3ffe)
1c0052ac:	02a353ff 	addi.w	$r31,$r31,-1836(0x8d4)
1c0052b0:	2880013a 	ld.w	$r26,$r9,0
1c0052b4:	288003e8 	ld.w	$r8,$r31,0
1c0052b8:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c0052bc:	00106edd 	add.w	$r29,$r22,$r27
1c0052c0:	00106afa 	add.w	$r26,$r23,$r26
1c0052c4:	58034d09 	beq	$r8,$r9,844(0x34c) # 1c005610 <_malloc_r+0x690>
1c0052c8:	14000029 	lu12i.w	$r9,1(0x1)
1c0052cc:	02803d29 	addi.w	$r9,$r9,15(0xf)
1c0052d0:	0010275a 	add.w	$r26,$r26,$r9
1c0052d4:	15ffffe9 	lu12i.w	$r9,-1(0xfffff)
1c0052d8:	0014a75a 	and	$r26,$r26,$r9
1c0052dc:	00150345 	move	$r5,$r26
1c0052e0:	00150324 	move	$r4,$r25
1c0052e4:	54175c00 	bl	5980(0x175c) # 1c006a40 <_sbrk_r>
1c0052e8:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c0052ec:	0015009c 	move	$r28,$r4
1c0052f0:	58028c89 	beq	$r4,$r9,652(0x28c) # 1c00557c <_malloc_r+0x5fc>
1c0052f4:	6802849d 	bltu	$r4,$r29,644(0x284) # 1c005578 <_malloc_r+0x5f8>
1c0052f8:	1dc7ffde 	pcaddu12i	$r30,-114690(0xe3ffe)
1c0052fc:	02a643de 	addi.w	$r30,$r30,-1648(0x990)
1c005300:	288003c8 	ld.w	$r8,$r30,0
1c005304:	00102348 	add.w	$r8,$r26,$r8
1c005308:	298003c8 	st.w	$r8,$r30,0
1c00530c:	00150109 	move	$r9,$r8
1c005310:	580377a4 	beq	$r29,$r4,884(0x374) # 1c005684 <_malloc_r+0x704>
1c005314:	288003e7 	ld.w	$r7,$r31,0
1c005318:	02bffc08 	addi.w	$r8,$r0,-1(0xfff)
1c00531c:	580384e8 	beq	$r7,$r8,900(0x384) # 1c0056a0 <_malloc_r+0x720>
1c005320:	0011779d 	sub.w	$r29,$r28,$r29
1c005324:	001027a9 	add.w	$r9,$r29,$r9
1c005328:	298003c9 	st.w	$r9,$r30,0
1c00532c:	03401f89 	andi	$r9,$r28,0x7
1c005330:	14000028 	lu12i.w	$r8,1(0x1)
1c005334:	58001520 	beq	$r9,$r0,20(0x14) # 1c005348 <_malloc_r+0x3c8>
1c005338:	0011279c 	sub.w	$r28,$r28,$r9
1c00533c:	02802108 	addi.w	$r8,$r8,8(0x8)
1c005340:	0280239c 	addi.w	$r28,$r28,8(0x8)
1c005344:	00112508 	sub.w	$r8,$r8,$r9
1c005348:	00106b9a 	add.w	$r26,$r28,$r26
1c00534c:	037fff5a 	andi	$r26,$r26,0xfff
1c005350:	0011691a 	sub.w	$r26,$r8,$r26
1c005354:	00150345 	move	$r5,$r26
1c005358:	00150324 	move	$r4,$r25
1c00535c:	5416e400 	bl	5860(0x16e4) # 1c006a40 <_sbrk_r>
1c005360:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c005364:	58034c89 	beq	$r4,$r9,844(0x34c) # 1c0056b0 <_malloc_r+0x730>
1c005368:	00117089 	sub.w	$r9,$r4,$r28
1c00536c:	00106929 	add.w	$r9,$r9,$r26
1c005370:	03800529 	ori	$r9,$r9,0x1
1c005374:	288003c8 	ld.w	$r8,$r30,0
1c005378:	2980231c 	st.w	$r28,$r24,8(0x8)
1c00537c:	29801389 	st.w	$r9,$r28,4(0x4)
1c005380:	00102348 	add.w	$r8,$r26,$r8
1c005384:	298003c8 	st.w	$r8,$r30,0
1c005388:	580322d8 	beq	$r22,$r24,800(0x320) # 1c0056a8 <_malloc_r+0x728>
1c00538c:	02803c06 	addi.w	$r6,$r0,15(0xf)
1c005390:	6c032cdb 	bgeu	$r6,$r27,812(0x32c) # 1c0056bc <_malloc_r+0x73c>
1c005394:	288012c7 	ld.w	$r7,$r22,4(0x4)
1c005398:	02bfe005 	addi.w	$r5,$r0,-8(0xff8)
1c00539c:	02bfd369 	addi.w	$r9,$r27,-12(0xff4)
1c0053a0:	00149529 	and	$r9,$r9,$r5
1c0053a4:	034004e7 	andi	$r7,$r7,0x1
1c0053a8:	001524e7 	or	$r7,$r7,$r9
1c0053ac:	298012c7 	st.w	$r7,$r22,4(0x4)
1c0053b0:	02801405 	addi.w	$r5,$r0,5(0x5)
1c0053b4:	001026c7 	add.w	$r7,$r22,$r9
1c0053b8:	298010e5 	st.w	$r5,$r7,4(0x4)
1c0053bc:	298020e5 	st.w	$r5,$r7,8(0x8)
1c0053c0:	680340c9 	bltu	$r6,$r9,832(0x340) # 1c005700 <_malloc_r+0x780>
1c0053c4:	28801389 	ld.w	$r9,$r28,4(0x4)
1c0053c8:	00150396 	move	$r22,$r28
1c0053cc:	1dc7ffc7 	pcaddu12i	$r7,-114690(0xe3ffe)
1c0053d0:	02a3d0e7 	addi.w	$r7,$r7,-1804(0x8f4)
1c0053d4:	288000e6 	ld.w	$r6,$r7,0
1c0053d8:	6c0008c8 	bgeu	$r6,$r8,8(0x8) # 1c0053e0 <_malloc_r+0x460>
1c0053dc:	298000e8 	st.w	$r8,$r7,0
1c0053e0:	1dc7ffc7 	pcaddu12i	$r7,-114690(0xe3ffe)
1c0053e4:	02a370e7 	addi.w	$r7,$r7,-1828(0x8dc)
1c0053e8:	288000e6 	ld.w	$r6,$r7,0
1c0053ec:	6c0198c8 	bgeu	$r6,$r8,408(0x198) # 1c005584 <_malloc_r+0x604>
1c0053f0:	298000e8 	st.w	$r8,$r7,0
1c0053f4:	50019000 	b	400(0x190) # 1c005584 <_malloc_r+0x604>
1c0053f8:	038006e9 	ori	$r9,$r23,0x1
1c0053fc:	298012c9 	st.w	$r9,$r22,4(0x4)
1c005400:	00105ed7 	add.w	$r23,$r22,$r23
1c005404:	29802317 	st.w	$r23,$r24,8(0x8)
1c005408:	03800508 	ori	$r8,$r8,0x1
1c00540c:	00150324 	move	$r4,$r25
1c005410:	298012e8 	st.w	$r8,$r23,4(0x4)
1c005414:	54060400 	bl	1540(0x604) # 1c005a18 <__malloc_unlock>
1c005418:	028022c4 	addi.w	$r4,$r22,8(0x8)
1c00541c:	53fdf7ff 	b	-524(0xffffdf4) # 1c005210 <_malloc_r+0x290>
1c005420:	00150146 	move	$r6,$r10
1c005424:	53fc9fff 	b	-868(0xffffc9c) # 1c0050c0 <_malloc_r+0x140>
1c005428:	288032c7 	ld.w	$r7,$r22,12(0xc)
1c00542c:	53fbd7ff 	b	-1068(0xffffbd4) # 1c005000 <_malloc_r+0x80>
1c005430:	0044a489 	srli.w	$r9,$r4,0x9
1c005434:	02801008 	addi.w	$r8,$r0,4(0x4)
1c005438:	6c012d09 	bgeu	$r8,$r9,300(0x12c) # 1c005564 <_malloc_r+0x5e4>
1c00543c:	02805008 	addi.w	$r8,$r0,20(0x14)
1c005440:	6801f509 	bltu	$r8,$r9,500(0x1f4) # 1c005634 <_malloc_r+0x6b4>
1c005444:	02817127 	addi.w	$r7,$r9,92(0x5c)
1c005448:	02816d28 	addi.w	$r8,$r9,91(0x5b)
1c00544c:	00408ce7 	slli.w	$r7,$r7,0x3
1c005450:	00101f07 	add.w	$r7,$r24,$r7
1c005454:	288000e9 	ld.w	$r9,$r7,0
1c005458:	02bfe0e7 	addi.w	$r7,$r7,-8(0xff8)
1c00545c:	02bff005 	addi.w	$r5,$r0,-4(0xffc)
1c005460:	5801b8e9 	beq	$r7,$r9,440(0x1b8) # 1c005618 <_malloc_r+0x698>
1c005464:	28801128 	ld.w	$r8,$r9,4(0x4)
1c005468:	00149508 	and	$r8,$r8,$r5
1c00546c:	6c000c88 	bgeu	$r4,$r8,12(0xc) # 1c005478 <_malloc_r+0x4f8>
1c005470:	28802129 	ld.w	$r9,$r9,8(0x8)
1c005474:	5ffff0e9 	bne	$r7,$r9,-16(0x3fff0) # 1c005464 <_malloc_r+0x4e4>
1c005478:	28803127 	ld.w	$r7,$r9,12(0xc)
1c00547c:	28801308 	ld.w	$r8,$r24,4(0x4)
1c005480:	298032c7 	st.w	$r7,$r22,12(0xc)
1c005484:	298022c9 	st.w	$r9,$r22,8(0x8)
1c005488:	298020f6 	st.w	$r22,$r7,8(0x8)
1c00548c:	29803136 	st.w	$r22,$r9,12(0xc)
1c005490:	53fcabff 	b	-856(0xffffca8) # 1c005138 <_malloc_r+0x1b8>
1c005494:	02805008 	addi.w	$r8,$r0,20(0x14)
1c005498:	6c011509 	bgeu	$r8,$r9,276(0x114) # 1c0055ac <_malloc_r+0x62c>
1c00549c:	02815008 	addi.w	$r8,$r0,84(0x54)
1c0054a0:	6801b109 	bltu	$r8,$r9,432(0x1b0) # 1c005650 <_malloc_r+0x6d0>
1c0054a4:	0044b2e9 	srli.w	$r9,$r23,0xc
1c0054a8:	0281bd26 	addi.w	$r6,$r9,111(0x6f)
1c0054ac:	0281b92a 	addi.w	$r10,$r9,110(0x6e)
1c0054b0:	00408cc7 	slli.w	$r7,$r6,0x3
1c0054b4:	53fbb7ff 	b	-1100(0xffffbb4) # 1c005068 <_malloc_r+0xe8>
1c0054b8:	028005ef 	addi.w	$r15,$r15,1(0x1)
1c0054bc:	03400de9 	andi	$r9,$r15,0x3
1c0054c0:	028020a5 	addi.w	$r5,$r5,8(0x8)
1c0054c4:	5ffccd20 	bne	$r9,$r0,-820(0x3fccc) # 1c005190 <_malloc_r+0x210>
1c0054c8:	50010000 	b	256(0x100) # 1c0055c8 <_malloc_r+0x648>
1c0054cc:	001026c9 	add.w	$r9,$r22,$r9
1c0054d0:	28801128 	ld.w	$r8,$r9,4(0x4)
1c0054d4:	288032c7 	ld.w	$r7,$r22,12(0xc)
1c0054d8:	288022c6 	ld.w	$r6,$r22,8(0x8)
1c0054dc:	00150324 	move	$r4,$r25
1c0054e0:	03800508 	ori	$r8,$r8,0x1
1c0054e4:	29801128 	st.w	$r8,$r9,4(0x4)
1c0054e8:	298030c7 	st.w	$r7,$r6,12(0xc)
1c0054ec:	298020e6 	st.w	$r6,$r7,8(0x8)
1c0054f0:	54052800 	bl	1320(0x528) # 1c005a18 <__malloc_unlock>
1c0054f4:	028022c4 	addi.w	$r4,$r22,8(0x8)
1c0054f8:	53fd1bff 	b	-744(0xffffd18) # 1c005210 <_malloc_r+0x290>
1c0054fc:	00448ee6 	srli.w	$r6,$r23,0x3
1c005500:	028022e9 	addi.w	$r9,$r23,8(0x8)
1c005504:	53fad7ff 	b	-1324(0xffffad4) # 1c004fd8 <_malloc_r+0x58>
1c005508:	001012c8 	add.w	$r8,$r22,$r4
1c00550c:	28801109 	ld.w	$r9,$r8,4(0x4)
1c005510:	00150324 	move	$r4,$r25
1c005514:	03800529 	ori	$r9,$r9,0x1
1c005518:	29801109 	st.w	$r9,$r8,4(0x4)
1c00551c:	5404fc00 	bl	1276(0x4fc) # 1c005a18 <__malloc_unlock>
1c005520:	028022c4 	addi.w	$r4,$r22,8(0x8)
1c005524:	53fcefff 	b	-788(0xffffcec) # 1c005210 <_malloc_r+0x290>
1c005528:	038006e8 	ori	$r8,$r23,0x1
1c00552c:	298012c8 	st.w	$r8,$r22,4(0x4)
1c005530:	00105ed7 	add.w	$r23,$r22,$r23
1c005534:	29805317 	st.w	$r23,$r24,20(0x14)
1c005538:	29804317 	st.w	$r23,$r24,16(0x10)
1c00553c:	03800528 	ori	$r8,$r9,0x1
1c005540:	298032eb 	st.w	$r11,$r23,12(0xc)
1c005544:	298022eb 	st.w	$r11,$r23,8(0x8)
1c005548:	298012e8 	st.w	$r8,$r23,4(0x4)
1c00554c:	001012c4 	add.w	$r4,$r22,$r4
1c005550:	29800089 	st.w	$r9,$r4,0
1c005554:	00150324 	move	$r4,$r25
1c005558:	5404c000 	bl	1216(0x4c0) # 1c005a18 <__malloc_unlock>
1c00555c:	028022c4 	addi.w	$r4,$r22,8(0x8)
1c005560:	53fcb3ff 	b	-848(0xffffcb0) # 1c005210 <_malloc_r+0x290>
1c005564:	00449889 	srli.w	$r9,$r4,0x6
1c005568:	0280e527 	addi.w	$r7,$r9,57(0x39)
1c00556c:	0280e128 	addi.w	$r8,$r9,56(0x38)
1c005570:	00408ce7 	slli.w	$r7,$r7,0x3
1c005574:	53fedfff 	b	-292(0xffffedc) # 1c005450 <_malloc_r+0x4d0>
1c005578:	5800f6d8 	beq	$r22,$r24,244(0xf4) # 1c00566c <_malloc_r+0x6ec>
1c00557c:	28802316 	ld.w	$r22,$r24,8(0x8)
1c005580:	288012c9 	ld.w	$r9,$r22,4(0x4)
1c005584:	02bff008 	addi.w	$r8,$r0,-4(0xffc)
1c005588:	0014a129 	and	$r9,$r9,$r8
1c00558c:	00115d28 	sub.w	$r8,$r9,$r23
1c005590:	68000d37 	bltu	$r9,$r23,12(0xc) # 1c00559c <_malloc_r+0x61c>
1c005594:	02803c09 	addi.w	$r9,$r0,15(0xf)
1c005598:	63fe6128 	blt	$r9,$r8,-416(0x3fe60) # 1c0053f8 <_malloc_r+0x478>
1c00559c:	00150324 	move	$r4,$r25
1c0055a0:	54047800 	bl	1144(0x478) # 1c005a18 <__malloc_unlock>
1c0055a4:	00150004 	move	$r4,$r0
1c0055a8:	53fc6bff 	b	-920(0xffffc68) # 1c005210 <_malloc_r+0x290>
1c0055ac:	02817126 	addi.w	$r6,$r9,92(0x5c)
1c0055b0:	02816d2a 	addi.w	$r10,$r9,91(0x5b)
1c0055b4:	00408cc7 	slli.w	$r7,$r6,0x3
1c0055b8:	53fab3ff 	b	-1360(0xffffab0) # 1c005068 <_malloc_r+0xe8>
1c0055bc:	288021a9 	ld.w	$r9,$r13,8(0x8)
1c0055c0:	02bffcc6 	addi.w	$r6,$r6,-1(0xfff)
1c0055c4:	5c01912d 	bne	$r9,$r13,400(0x190) # 1c005754 <_malloc_r+0x7d4>
1c0055c8:	03400cc9 	andi	$r9,$r6,0x3
1c0055cc:	02bfe1ad 	addi.w	$r13,$r13,-8(0xff8)
1c0055d0:	5fffed20 	bne	$r9,$r0,-20(0x3ffec) # 1c0055bc <_malloc_r+0x63c>
1c0055d4:	28801308 	ld.w	$r8,$r24,4(0x4)
1c0055d8:	00141ce9 	nor	$r9,$r7,$r7
1c0055dc:	0014a129 	and	$r9,$r9,$r8
1c0055e0:	29801309 	st.w	$r9,$r24,4(0x4)
1c0055e4:	004084e7 	slli.w	$r7,$r7,0x1
1c0055e8:	6bfc9927 	bltu	$r9,$r7,-872(0x3fc98) # 1c005280 <_malloc_r+0x300>
1c0055ec:	5bfc94e0 	beq	$r7,$r0,-876(0x3fc94) # 1c005280 <_malloc_r+0x300>
1c0055f0:	0014a4e8 	and	$r8,$r7,$r9
1c0055f4:	5c001500 	bne	$r8,$r0,20(0x14) # 1c005608 <_malloc_r+0x688>
1c0055f8:	004084e7 	slli.w	$r7,$r7,0x1
1c0055fc:	0014a4e8 	and	$r8,$r7,$r9
1c005600:	028011ef 	addi.w	$r15,$r15,4(0x4)
1c005604:	5bfff500 	beq	$r8,$r0,-12(0x3fff4) # 1c0055f8 <_malloc_r+0x678>
1c005608:	001501e6 	move	$r6,$r15
1c00560c:	53fb77ff 	b	-1164(0xffffb74) # 1c005180 <_malloc_r+0x200>
1c005610:	0280435a 	addi.w	$r26,$r26,16(0x10)
1c005614:	53fccbff 	b	-824(0xffffcc8) # 1c0052dc <_malloc_r+0x35c>
1c005618:	28801304 	ld.w	$r4,$r24,4(0x4)
1c00561c:	00488905 	srai.w	$r5,$r8,0x2
1c005620:	02800408 	addi.w	$r8,$r0,1(0x1)
1c005624:	00171508 	sll.w	$r8,$r8,$r5
1c005628:	00151108 	or	$r8,$r8,$r4
1c00562c:	29801308 	st.w	$r8,$r24,4(0x4)
1c005630:	53fe53ff 	b	-432(0xffffe50) # 1c005480 <_malloc_r+0x500>
1c005634:	02815008 	addi.w	$r8,$r0,84(0x54)
1c005638:	68009109 	bltu	$r8,$r9,144(0x90) # 1c0056c8 <_malloc_r+0x748>
1c00563c:	0044b089 	srli.w	$r9,$r4,0xc
1c005640:	0281bd27 	addi.w	$r7,$r9,111(0x6f)
1c005644:	0281b928 	addi.w	$r8,$r9,110(0x6e)
1c005648:	00408ce7 	slli.w	$r7,$r7,0x3
1c00564c:	53fe07ff 	b	-508(0xffffe04) # 1c005450 <_malloc_r+0x4d0>
1c005650:	02855008 	addi.w	$r8,$r0,340(0x154)
1c005654:	68009109 	bltu	$r8,$r9,144(0x90) # 1c0056e4 <_malloc_r+0x764>
1c005658:	0044bee9 	srli.w	$r9,$r23,0xf
1c00565c:	0281e126 	addi.w	$r6,$r9,120(0x78)
1c005660:	0281dd2a 	addi.w	$r10,$r9,119(0x77)
1c005664:	00408cc7 	slli.w	$r7,$r6,0x3
1c005668:	53fa03ff 	b	-1536(0xffffa00) # 1c005068 <_malloc_r+0xe8>
1c00566c:	1dc7ffbe 	pcaddu12i	$r30,-114691(0xe3ffd)
1c005670:	029873de 	addi.w	$r30,$r30,1564(0x61c)
1c005674:	288003c9 	ld.w	$r9,$r30,0
1c005678:	00102749 	add.w	$r9,$r26,$r9
1c00567c:	298003c9 	st.w	$r9,$r30,0
1c005680:	53fc97ff 	b	-876(0xffffc94) # 1c005314 <_malloc_r+0x394>
1c005684:	037fffa7 	andi	$r7,$r29,0xfff
1c005688:	5ffc8ce0 	bne	$r7,$r0,-884(0x3fc8c) # 1c005314 <_malloc_r+0x394>
1c00568c:	28802316 	ld.w	$r22,$r24,8(0x8)
1c005690:	00106b69 	add.w	$r9,$r27,$r26
1c005694:	03800529 	ori	$r9,$r9,0x1
1c005698:	298012c9 	st.w	$r9,$r22,4(0x4)
1c00569c:	53fd33ff 	b	-720(0xffffd30) # 1c0053cc <_malloc_r+0x44c>
1c0056a0:	298003fc 	st.w	$r28,$r31,0
1c0056a4:	53fc8bff 	b	-888(0xffffc88) # 1c00532c <_malloc_r+0x3ac>
1c0056a8:	00150396 	move	$r22,$r28
1c0056ac:	53fd23ff 	b	-736(0xffffd20) # 1c0053cc <_malloc_r+0x44c>
1c0056b0:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0056b4:	0015001a 	move	$r26,$r0
1c0056b8:	53fcbfff 	b	-836(0xffffcbc) # 1c005374 <_malloc_r+0x3f4>
1c0056bc:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0056c0:	29801389 	st.w	$r9,$r28,4(0x4)
1c0056c4:	53fedbff 	b	-296(0xffffed8) # 1c00559c <_malloc_r+0x61c>
1c0056c8:	02855008 	addi.w	$r8,$r0,340(0x154)
1c0056cc:	68005109 	bltu	$r8,$r9,80(0x50) # 1c00571c <_malloc_r+0x79c>
1c0056d0:	0044bc89 	srli.w	$r9,$r4,0xf
1c0056d4:	0281e127 	addi.w	$r7,$r9,120(0x78)
1c0056d8:	0281dd28 	addi.w	$r8,$r9,119(0x77)
1c0056dc:	00408ce7 	slli.w	$r7,$r7,0x3
1c0056e0:	53fd73ff 	b	-656(0xffffd70) # 1c005450 <_malloc_r+0x4d0>
1c0056e4:	02955008 	addi.w	$r8,$r0,1364(0x554)
1c0056e8:	68005109 	bltu	$r8,$r9,80(0x50) # 1c005738 <_malloc_r+0x7b8>
1c0056ec:	0044cae9 	srli.w	$r9,$r23,0x12
1c0056f0:	0281f526 	addi.w	$r6,$r9,125(0x7d)
1c0056f4:	0281f12a 	addi.w	$r10,$r9,124(0x7c)
1c0056f8:	00408cc7 	slli.w	$r7,$r6,0x3
1c0056fc:	53f96fff 	b	-1684(0xffff96c) # 1c005068 <_malloc_r+0xe8>
1c005700:	028022c5 	addi.w	$r5,$r22,8(0x8)
1c005704:	00150324 	move	$r4,$r25
1c005708:	57f177ff 	bl	-3724(0xffff174) # 1c00487c <_free_r>
1c00570c:	28802316 	ld.w	$r22,$r24,8(0x8)
1c005710:	288003c8 	ld.w	$r8,$r30,0
1c005714:	288012c9 	ld.w	$r9,$r22,4(0x4)
1c005718:	53fcb7ff 	b	-844(0xffffcb4) # 1c0053cc <_malloc_r+0x44c>
1c00571c:	02955008 	addi.w	$r8,$r0,1364(0x554)
1c005720:	68002909 	bltu	$r8,$r9,40(0x28) # 1c005748 <_malloc_r+0x7c8>
1c005724:	0044c889 	srli.w	$r9,$r4,0x12
1c005728:	0281f527 	addi.w	$r7,$r9,125(0x7d)
1c00572c:	0281f128 	addi.w	$r8,$r9,124(0x7c)
1c005730:	00408ce7 	slli.w	$r7,$r7,0x3
1c005734:	53fd1fff 	b	-740(0xffffd1c) # 1c005450 <_malloc_r+0x4d0>
1c005738:	028fe007 	addi.w	$r7,$r0,1016(0x3f8)
1c00573c:	0281fc06 	addi.w	$r6,$r0,127(0x7f)
1c005740:	0281f80a 	addi.w	$r10,$r0,126(0x7e)
1c005744:	53f927ff 	b	-1756(0xffff924) # 1c005068 <_malloc_r+0xe8>
1c005748:	028fe007 	addi.w	$r7,$r0,1016(0x3f8)
1c00574c:	0281f808 	addi.w	$r8,$r0,126(0x7e)
1c005750:	53fd03ff 	b	-768(0xffffd00) # 1c005450 <_malloc_r+0x4d0>
1c005754:	28801309 	ld.w	$r9,$r24,4(0x4)
1c005758:	53fe8fff 	b	-372(0xffffe8c) # 1c0055e4 <_malloc_r+0x664>

1c00575c <memchr>:
memchr():
1c00575c:	03400c89 	andi	$r9,$r4,0x3
1c005760:	0343fcaa 	andi	$r10,$r5,0xff
1c005764:	5800cd20 	beq	$r9,$r0,204(0xcc) # 1c005830 <memchr+0xd4>
1c005768:	02bffcc9 	addi.w	$r9,$r6,-1(0xfff)
1c00576c:	58005cc0 	beq	$r6,$r0,92(0x5c) # 1c0057c8 <memchr+0x6c>
1c005770:	2a000088 	ld.bu	$r8,$r4,0
1c005774:	5800590a 	beq	$r8,$r10,88(0x58) # 1c0057cc <memchr+0x70>
1c005778:	02bffc07 	addi.w	$r7,$r0,-1(0xfff)
1c00577c:	50001400 	b	20(0x14) # 1c005790 <memchr+0x34>
1c005780:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c005784:	58004527 	beq	$r9,$r7,68(0x44) # 1c0057c8 <memchr+0x6c>
1c005788:	2a000088 	ld.bu	$r8,$r4,0
1c00578c:	5800410a 	beq	$r8,$r10,64(0x40) # 1c0057cc <memchr+0x70>
1c005790:	02800484 	addi.w	$r4,$r4,1(0x1)
1c005794:	03400c88 	andi	$r8,$r4,0x3
1c005798:	5fffe900 	bne	$r8,$r0,-24(0x3ffe8) # 1c005780 <memchr+0x24>
1c00579c:	02800c08 	addi.w	$r8,$r0,3(0x3)
1c0057a0:	68003109 	bltu	$r8,$r9,48(0x30) # 1c0057d0 <memchr+0x74>
1c0057a4:	58002520 	beq	$r9,$r0,36(0x24) # 1c0057c8 <memchr+0x6c>
1c0057a8:	2a000088 	ld.bu	$r8,$r4,0
1c0057ac:	5800210a 	beq	$r8,$r10,32(0x20) # 1c0057cc <memchr+0x70>
1c0057b0:	00102489 	add.w	$r9,$r4,$r9
1c0057b4:	50000c00 	b	12(0xc) # 1c0057c0 <memchr+0x64>
1c0057b8:	2a000088 	ld.bu	$r8,$r4,0
1c0057bc:	5800110a 	beq	$r8,$r10,16(0x10) # 1c0057cc <memchr+0x70>
1c0057c0:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0057c4:	5ffff524 	bne	$r9,$r4,-12(0x3fff4) # 1c0057b8 <memchr+0x5c>
1c0057c8:	00150004 	move	$r4,$r0
1c0057cc:	4c000020 	jirl	$r0,$r1,0
1c0057d0:	140001e8 	lu12i.w	$r8,15(0xf)
1c0057d4:	0040a0ab 	slli.w	$r11,$r5,0x8
1c0057d8:	03bffd08 	ori	$r8,$r8,0xfff
1c0057dc:	0014a16b 	and	$r11,$r11,$r8
1c0057e0:	0343fca5 	andi	$r5,$r5,0xff
1c0057e4:	00151565 	or	$r5,$r11,$r5
1c0057e8:	0040c0ab 	slli.w	$r11,$r5,0x10
1c0057ec:	0015156b 	or	$r11,$r11,$r5
1c0057f0:	15010106 	lu12i.w	$r6,-522232(0x80808)
1c0057f4:	15fdfde5 	lu12i.w	$r5,-4113(0xfefef)
1c0057f8:	03bbfca5 	ori	$r5,$r5,0xeff
1c0057fc:	028200c6 	addi.w	$r6,$r6,128(0x80)
1c005800:	02800c0d 	addi.w	$r13,$r0,3(0x3)
1c005804:	28800088 	ld.w	$r8,$r4,0
1c005808:	0015a168 	xor	$r8,$r11,$r8
1c00580c:	00101507 	add.w	$r7,$r8,$r5
1c005810:	00142108 	nor	$r8,$r8,$r8
1c005814:	0014a0e8 	and	$r8,$r7,$r8
1c005818:	00149908 	and	$r8,$r8,$r6
1c00581c:	5fff8d00 	bne	$r8,$r0,-116(0x3ff8c) # 1c0057a8 <memchr+0x4c>
1c005820:	02bff129 	addi.w	$r9,$r9,-4(0xffc)
1c005824:	02801084 	addi.w	$r4,$r4,4(0x4)
1c005828:	6bffdda9 	bltu	$r13,$r9,-36(0x3ffdc) # 1c005804 <memchr+0xa8>
1c00582c:	53ff7bff 	b	-136(0xfffff78) # 1c0057a4 <memchr+0x48>
1c005830:	001500c9 	move	$r9,$r6
1c005834:	53ff6bff 	b	-152(0xfffff68) # 1c00579c <memchr+0x40>

1c005838 <memcpy>:
memcpy():
1c005838:	02803c09 	addi.w	$r9,$r0,15(0xf)
1c00583c:	6c00a926 	bgeu	$r9,$r6,168(0xa8) # 1c0058e4 <memcpy+0xac>
1c005840:	001510a9 	or	$r9,$r5,$r4
1c005844:	03400d29 	andi	$r9,$r9,0x3
1c005848:	5c00c920 	bne	$r9,$r0,200(0xc8) # 1c005910 <memcpy+0xd8>
1c00584c:	02bfc0c8 	addi.w	$r8,$r6,-16(0xff0)
1c005850:	00449108 	srli.w	$r8,$r8,0x4
1c005854:	02800508 	addi.w	$r8,$r8,1(0x1)
1c005858:	00409107 	slli.w	$r7,$r8,0x4
1c00585c:	00101c8f 	add.w	$r15,$r4,$r7
1c005860:	001500a8 	move	$r8,$r5
1c005864:	00150089 	move	$r9,$r4
1c005868:	2880010a 	ld.w	$r10,$r8,0
1c00586c:	2880110d 	ld.w	$r13,$r8,4(0x4)
1c005870:	2880210b 	ld.w	$r11,$r8,8(0x8)
1c005874:	02804108 	addi.w	$r8,$r8,16(0x10)
1c005878:	2980012a 	st.w	$r10,$r9,0
1c00587c:	28bff10a 	ld.w	$r10,$r8,-4(0xffc)
1c005880:	2980112d 	st.w	$r13,$r9,4(0x4)
1c005884:	2980212b 	st.w	$r11,$r9,8(0x8)
1c005888:	02804129 	addi.w	$r9,$r9,16(0x10)
1c00588c:	29bff12a 	st.w	$r10,$r9,-4(0xffc)
1c005890:	5fffd9e9 	bne	$r15,$r9,-40(0x3ffd8) # 1c005868 <memcpy+0x30>
1c005894:	034030ca 	andi	$r10,$r6,0xc
1c005898:	00101ca8 	add.w	$r8,$r5,$r7
1c00589c:	03403cc7 	andi	$r7,$r6,0xf
1c0058a0:	58007d40 	beq	$r10,$r0,124(0x7c) # 1c00591c <memcpy+0xe4>
1c0058a4:	02bff0ea 	addi.w	$r10,$r7,-4(0xffc)
1c0058a8:	0044894a 	srli.w	$r10,$r10,0x2
1c0058ac:	0280054a 	addi.w	$r10,$r10,1(0x1)
1c0058b0:	0040894a 	slli.w	$r10,$r10,0x2
1c0058b4:	00102905 	add.w	$r5,$r8,$r10
1c0058b8:	00150127 	move	$r7,$r9
1c0058bc:	02801108 	addi.w	$r8,$r8,4(0x4)
1c0058c0:	28bff10b 	ld.w	$r11,$r8,-4(0xffc)
1c0058c4:	028010e7 	addi.w	$r7,$r7,4(0x4)
1c0058c8:	29bff0eb 	st.w	$r11,$r7,-4(0xffc)
1c0058cc:	5ffff105 	bne	$r8,$r5,-16(0x3fff0) # 1c0058bc <memcpy+0x84>
1c0058d0:	03400cc6 	andi	$r6,$r6,0x3
1c0058d4:	00102929 	add.w	$r9,$r9,$r10
1c0058d8:	02bffcc7 	addi.w	$r7,$r6,-1(0xfff)
1c0058dc:	5c0014c0 	bne	$r6,$r0,20(0x14) # 1c0058f0 <memcpy+0xb8>
1c0058e0:	4c000020 	jirl	$r0,$r1,0
1c0058e4:	00150089 	move	$r9,$r4
1c0058e8:	02bffcc7 	addi.w	$r7,$r6,-1(0xfff)
1c0058ec:	5bfff4c0 	beq	$r6,$r0,-12(0x3fff4) # 1c0058e0 <memcpy+0xa8>
1c0058f0:	028004e7 	addi.w	$r7,$r7,1(0x1)
1c0058f4:	00101d27 	add.w	$r7,$r9,$r7
1c0058f8:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c0058fc:	2a3ffca8 	ld.bu	$r8,$r5,-1(0xfff)
1c005900:	02800529 	addi.w	$r9,$r9,1(0x1)
1c005904:	293ffd28 	st.b	$r8,$r9,-1(0xfff)
1c005908:	5ffff127 	bne	$r9,$r7,-16(0x3fff0) # 1c0058f8 <memcpy+0xc0>
1c00590c:	4c000020 	jirl	$r0,$r1,0
1c005910:	02bffcc7 	addi.w	$r7,$r6,-1(0xfff)
1c005914:	00150089 	move	$r9,$r4
1c005918:	53ffdbff 	b	-40(0xfffffd8) # 1c0058f0 <memcpy+0xb8>
1c00591c:	00150105 	move	$r5,$r8
1c005920:	001500e6 	move	$r6,$r7
1c005924:	53ffc7ff 	b	-60(0xfffffc4) # 1c0058e8 <memcpy+0xb0>

1c005928 <memset>:
memset():
1c005928:	03400c89 	andi	$r9,$r4,0x3
1c00592c:	5800d920 	beq	$r9,$r0,216(0xd8) # 1c005a04 <memset+0xdc>
1c005930:	0040e0aa 	slli.w	$r10,$r5,0x18
1c005934:	02bffcc8 	addi.w	$r8,$r6,-1(0xfff)
1c005938:	0048e14a 	srai.w	$r10,$r10,0x18
1c00593c:	00150089 	move	$r9,$r4
1c005940:	02bffc0b 	addi.w	$r11,$r0,-1(0xfff)
1c005944:	5c0010c0 	bne	$r6,$r0,16(0x10) # 1c005954 <memset+0x2c>
1c005948:	5000c800 	b	200(0xc8) # 1c005a10 <memset+0xe8>
1c00594c:	02bffd08 	addi.w	$r8,$r8,-1(0xfff)
1c005950:	5800b10b 	beq	$r8,$r11,176(0xb0) # 1c005a00 <memset+0xd8>
1c005954:	02800529 	addi.w	$r9,$r9,1(0x1)
1c005958:	293ffd2a 	st.b	$r10,$r9,-1(0xfff)
1c00595c:	03400d27 	andi	$r7,$r9,0x3
1c005960:	5fffece0 	bne	$r7,$r0,-20(0x3ffec) # 1c00594c <memset+0x24>
1c005964:	02800c07 	addi.w	$r7,$r0,3(0x3)
1c005968:	6c007ce8 	bgeu	$r7,$r8,124(0x7c) # 1c0059e4 <memset+0xbc>
1c00596c:	0343fca6 	andi	$r6,$r5,0xff
1c005970:	0040a0c7 	slli.w	$r7,$r6,0x8
1c005974:	001518e6 	or	$r6,$r7,$r6
1c005978:	0040c0c7 	slli.w	$r7,$r6,0x10
1c00597c:	02803c0a 	addi.w	$r10,$r0,15(0xf)
1c005980:	001518e7 	or	$r7,$r7,$r6
1c005984:	6c003d48 	bgeu	$r10,$r8,60(0x3c) # 1c0059c0 <memset+0x98>
1c005988:	02bfc106 	addi.w	$r6,$r8,-16(0xff0)
1c00598c:	004490c6 	srli.w	$r6,$r6,0x4
1c005990:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c005994:	004090c6 	slli.w	$r6,$r6,0x4
1c005998:	00101926 	add.w	$r6,$r9,$r6
1c00599c:	29800127 	st.w	$r7,$r9,0
1c0059a0:	29801127 	st.w	$r7,$r9,4(0x4)
1c0059a4:	29802127 	st.w	$r7,$r9,8(0x8)
1c0059a8:	02804129 	addi.w	$r9,$r9,16(0x10)
1c0059ac:	29bff127 	st.w	$r7,$r9,-4(0xffc)
1c0059b0:	5fffecc9 	bne	$r6,$r9,-20(0x3ffec) # 1c00599c <memset+0x74>
1c0059b4:	03403106 	andi	$r6,$r8,0xc
1c0059b8:	03403d08 	andi	$r8,$r8,0xf
1c0059bc:	580028c0 	beq	$r6,$r0,40(0x28) # 1c0059e4 <memset+0xbc>
1c0059c0:	02bff106 	addi.w	$r6,$r8,-4(0xffc)
1c0059c4:	004488c6 	srli.w	$r6,$r6,0x2
1c0059c8:	028004c6 	addi.w	$r6,$r6,1(0x1)
1c0059cc:	004088c6 	slli.w	$r6,$r6,0x2
1c0059d0:	00101926 	add.w	$r6,$r9,$r6
1c0059d4:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0059d8:	29bff127 	st.w	$r7,$r9,-4(0xffc)
1c0059dc:	5ffff8c9 	bne	$r6,$r9,-8(0x3fff8) # 1c0059d4 <memset+0xac>
1c0059e0:	03400d08 	andi	$r8,$r8,0x3
1c0059e4:	58001d00 	beq	$r8,$r0,28(0x1c) # 1c005a00 <memset+0xd8>
1c0059e8:	0040e0a5 	slli.w	$r5,$r5,0x18
1c0059ec:	0048e0a5 	srai.w	$r5,$r5,0x18
1c0059f0:	00102128 	add.w	$r8,$r9,$r8
1c0059f4:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0059f8:	293ffd25 	st.b	$r5,$r9,-1(0xfff)
1c0059fc:	5ffff909 	bne	$r8,$r9,-8(0x3fff8) # 1c0059f4 <memset+0xcc>
1c005a00:	4c000020 	jirl	$r0,$r1,0
1c005a04:	00150089 	move	$r9,$r4
1c005a08:	001500c8 	move	$r8,$r6
1c005a0c:	53ff5bff 	b	-168(0xfffff58) # 1c005964 <memset+0x3c>
1c005a10:	4c000020 	jirl	$r0,$r1,0

1c005a14 <__malloc_lock>:
__malloc_lock():
1c005a14:	4c000020 	jirl	$r0,$r1,0

1c005a18 <__malloc_unlock>:
__malloc_unlock():
1c005a18:	4c000020 	jirl	$r0,$r1,0

1c005a1c <_Balloc>:
_Balloc():
1c005a1c:	28813089 	ld.w	$r9,$r4,76(0x4c)
1c005a20:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c005a24:	29802076 	st.w	$r22,$r3,8(0x8)
1c005a28:	29801077 	st.w	$r23,$r3,4(0x4)
1c005a2c:	29803061 	st.w	$r1,$r3,12(0xc)
1c005a30:	29800078 	st.w	$r24,$r3,0
1c005a34:	00150096 	move	$r22,$r4
1c005a38:	001500b7 	move	$r23,$r5
1c005a3c:	58003d20 	beq	$r9,$r0,60(0x3c) # 1c005a78 <_Balloc+0x5c>
1c005a40:	00408ae8 	slli.w	$r8,$r23,0x2
1c005a44:	00102129 	add.w	$r9,$r9,$r8
1c005a48:	28800124 	ld.w	$r4,$r9,0
1c005a4c:	58004c80 	beq	$r4,$r0,76(0x4c) # 1c005a98 <_Balloc+0x7c>
1c005a50:	28800088 	ld.w	$r8,$r4,0
1c005a54:	29800128 	st.w	$r8,$r9,0
1c005a58:	29804080 	st.w	$r0,$r4,16(0x10)
1c005a5c:	29803080 	st.w	$r0,$r4,12(0xc)
1c005a60:	28803061 	ld.w	$r1,$r3,12(0xc)
1c005a64:	28802076 	ld.w	$r22,$r3,8(0x8)
1c005a68:	28801077 	ld.w	$r23,$r3,4(0x4)
1c005a6c:	28800078 	ld.w	$r24,$r3,0
1c005a70:	02804063 	addi.w	$r3,$r3,16(0x10)
1c005a74:	4c000020 	jirl	$r0,$r1,0
1c005a78:	02808406 	addi.w	$r6,$r0,33(0x21)
1c005a7c:	02801005 	addi.w	$r5,$r0,4(0x4)
1c005a80:	54271400 	bl	10004(0x2714) # 1c008194 <_calloc_r>
1c005a84:	298132c4 	st.w	$r4,$r22,76(0x4c)
1c005a88:	00150089 	move	$r9,$r4
1c005a8c:	5fffb480 	bne	$r4,$r0,-76(0x3ffb4) # 1c005a40 <_Balloc+0x24>
1c005a90:	00150004 	move	$r4,$r0
1c005a94:	53ffcfff 	b	-52(0xfffffcc) # 1c005a60 <_Balloc+0x44>
1c005a98:	02800418 	addi.w	$r24,$r0,1(0x1)
1c005a9c:	00175f18 	sll.w	$r24,$r24,$r23
1c005aa0:	02801706 	addi.w	$r6,$r24,5(0x5)
1c005aa4:	004088c6 	slli.w	$r6,$r6,0x2
1c005aa8:	02800405 	addi.w	$r5,$r0,1(0x1)
1c005aac:	001502c4 	move	$r4,$r22
1c005ab0:	5426e400 	bl	9956(0x26e4) # 1c008194 <_calloc_r>
1c005ab4:	5bffdc80 	beq	$r4,$r0,-36(0x3ffdc) # 1c005a90 <_Balloc+0x74>
1c005ab8:	29801097 	st.w	$r23,$r4,4(0x4)
1c005abc:	29802098 	st.w	$r24,$r4,8(0x8)
1c005ac0:	53ff9bff 	b	-104(0xfffff98) # 1c005a58 <_Balloc+0x3c>

1c005ac4 <_Bfree>:
_Bfree():
1c005ac4:	580020a0 	beq	$r5,$r0,32(0x20) # 1c005ae4 <_Bfree+0x20>
1c005ac8:	288010a8 	ld.w	$r8,$r5,4(0x4)
1c005acc:	28813089 	ld.w	$r9,$r4,76(0x4c)
1c005ad0:	00408908 	slli.w	$r8,$r8,0x2
1c005ad4:	00102129 	add.w	$r9,$r9,$r8
1c005ad8:	28800128 	ld.w	$r8,$r9,0
1c005adc:	298000a8 	st.w	$r8,$r5,0
1c005ae0:	29800125 	st.w	$r5,$r9,0
1c005ae4:	4c000020 	jirl	$r0,$r1,0

1c005ae8 <__multadd>:
__multadd():
1c005ae8:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c005aec:	140001ea 	lu12i.w	$r10,15(0xf)
1c005af0:	2980a076 	st.w	$r22,$r3,40(0x28)
1c005af4:	29809077 	st.w	$r23,$r3,36(0x24)
1c005af8:	29808078 	st.w	$r24,$r3,32(0x20)
1c005afc:	001500b7 	move	$r23,$r5
1c005b00:	288040b6 	ld.w	$r22,$r5,16(0x10)
1c005b04:	00150098 	move	$r24,$r4
1c005b08:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c005b0c:	29807079 	st.w	$r25,$r3,28(0x1c)
1c005b10:	028050a5 	addi.w	$r5,$r5,20(0x14)
1c005b14:	00150004 	move	$r4,$r0
1c005b18:	03bffd4a 	ori	$r10,$r10,0xfff
1c005b1c:	288000a9 	ld.w	$r9,$r5,0
1c005b20:	028010a5 	addi.w	$r5,$r5,4(0x4)
1c005b24:	02800484 	addi.w	$r4,$r4,1(0x1)
1c005b28:	0014a928 	and	$r8,$r9,$r10
1c005b2c:	001c1908 	mul.w	$r8,$r8,$r6
1c005b30:	0044c129 	srli.w	$r9,$r9,0x10
1c005b34:	001c1929 	mul.w	$r9,$r9,$r6
1c005b38:	00101d07 	add.w	$r7,$r8,$r7
1c005b3c:	0044c0eb 	srli.w	$r11,$r7,0x10
1c005b40:	0014a8e8 	and	$r8,$r7,$r10
1c005b44:	00102d27 	add.w	$r7,$r9,$r11
1c005b48:	0040c0e9 	slli.w	$r9,$r7,0x10
1c005b4c:	00102128 	add.w	$r8,$r9,$r8
1c005b50:	29bff0a8 	st.w	$r8,$r5,-4(0xffc)
1c005b54:	0044c0e7 	srli.w	$r7,$r7,0x10
1c005b58:	63ffc496 	blt	$r4,$r22,-60(0x3ffc4) # 1c005b1c <__multadd+0x34>
1c005b5c:	580024e0 	beq	$r7,$r0,36(0x24) # 1c005b80 <__multadd+0x98>
1c005b60:	288022e9 	ld.w	$r9,$r23,8(0x8)
1c005b64:	64003ec9 	bge	$r22,$r9,60(0x3c) # 1c005ba0 <__multadd+0xb8>
1c005b68:	028012c9 	addi.w	$r9,$r22,4(0x4)
1c005b6c:	00408929 	slli.w	$r9,$r9,0x2
1c005b70:	001026e9 	add.w	$r9,$r23,$r9
1c005b74:	29801127 	st.w	$r7,$r9,4(0x4)
1c005b78:	028006d6 	addi.w	$r22,$r22,1(0x1)
1c005b7c:	298042f6 	st.w	$r22,$r23,16(0x10)
1c005b80:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c005b84:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c005b88:	001502e4 	move	$r4,$r23
1c005b8c:	28808078 	ld.w	$r24,$r3,32(0x20)
1c005b90:	28809077 	ld.w	$r23,$r3,36(0x24)
1c005b94:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c005b98:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c005b9c:	4c000020 	jirl	$r0,$r1,0
1c005ba0:	288012e5 	ld.w	$r5,$r23,4(0x4)
1c005ba4:	00150304 	move	$r4,$r24
1c005ba8:	29803067 	st.w	$r7,$r3,12(0xc)
1c005bac:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c005bb0:	57fe6fff 	bl	-404(0xffffe6c) # 1c005a1c <_Balloc>
1c005bb4:	288042e6 	ld.w	$r6,$r23,16(0x10)
1c005bb8:	00150099 	move	$r25,$r4
1c005bbc:	028032e5 	addi.w	$r5,$r23,12(0xc)
1c005bc0:	028008c6 	addi.w	$r6,$r6,2(0x2)
1c005bc4:	02803084 	addi.w	$r4,$r4,12(0xc)
1c005bc8:	004088c6 	slli.w	$r6,$r6,0x2
1c005bcc:	57fc6fff 	bl	-916(0xffffc6c) # 1c005838 <memcpy>
1c005bd0:	288012e8 	ld.w	$r8,$r23,4(0x4)
1c005bd4:	28813309 	ld.w	$r9,$r24,76(0x4c)
1c005bd8:	28803067 	ld.w	$r7,$r3,12(0xc)
1c005bdc:	00408908 	slli.w	$r8,$r8,0x2
1c005be0:	00102129 	add.w	$r9,$r9,$r8
1c005be4:	28800128 	ld.w	$r8,$r9,0
1c005be8:	298002e8 	st.w	$r8,$r23,0
1c005bec:	29800137 	st.w	$r23,$r9,0
1c005bf0:	028012c9 	addi.w	$r9,$r22,4(0x4)
1c005bf4:	00150337 	move	$r23,$r25
1c005bf8:	00408929 	slli.w	$r9,$r9,0x2
1c005bfc:	001026e9 	add.w	$r9,$r23,$r9
1c005c00:	29801127 	st.w	$r7,$r9,4(0x4)
1c005c04:	028006d6 	addi.w	$r22,$r22,1(0x1)
1c005c08:	298042f6 	st.w	$r22,$r23,16(0x10)
1c005c0c:	53ff77ff 	b	-140(0xfffff74) # 1c005b80 <__multadd+0x98>

1c005c10 <__s2b>:
__s2b():
1c005c10:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c005c14:	1471c70a 	lu12i.w	$r10,233016(0x38e38)
1c005c18:	03b8e54a 	ori	$r10,$r10,0xe39
1c005c1c:	29804078 	st.w	$r24,$r3,16(0x10)
1c005c20:	001500f8 	move	$r24,$r7
1c005c24:	028020e7 	addi.w	$r7,$r7,8(0x8)
1c005c28:	001d28e9 	mulh.wu	$r9,$r7,$r10
1c005c2c:	0048fce7 	srai.w	$r7,$r7,0x1f
1c005c30:	0014a8ea 	and	$r10,$r7,$r10
1c005c34:	29806076 	st.w	$r22,$r3,24(0x18)
1c005c38:	29805077 	st.w	$r23,$r3,20(0x14)
1c005c3c:	29803079 	st.w	$r25,$r3,12(0xc)
1c005c40:	2980207a 	st.w	$r26,$r3,8(0x8)
1c005c44:	29807061 	st.w	$r1,$r3,28(0x1c)
1c005c48:	2980107b 	st.w	$r27,$r3,4(0x4)
1c005c4c:	0280240b 	addi.w	$r11,$r0,9(0x9)
1c005c50:	00150099 	move	$r25,$r4
1c005c54:	001500b6 	move	$r22,$r5
1c005c58:	001500da 	move	$r26,$r6
1c005c5c:	00150117 	move	$r23,$r8
1c005c60:	00112929 	sub.w	$r9,$r9,$r10
1c005c64:	00488529 	srai.w	$r9,$r9,0x1
1c005c68:	00111d27 	sub.w	$r7,$r9,$r7
1c005c6c:	6400c578 	bge	$r11,$r24,196(0xc4) # 1c005d30 <__s2b+0x120>
1c005c70:	02800409 	addi.w	$r9,$r0,1(0x1)
1c005c74:	00150005 	move	$r5,$r0
1c005c78:	00408529 	slli.w	$r9,$r9,0x1
1c005c7c:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c005c80:	63fff927 	blt	$r9,$r7,-8(0x3fff8) # 1c005c78 <__s2b+0x68>
1c005c84:	00150324 	move	$r4,$r25
1c005c88:	57fd97ff 	bl	-620(0xffffd94) # 1c005a1c <_Balloc>
1c005c8c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c005c90:	29804089 	st.w	$r9,$r4,16(0x10)
1c005c94:	29805097 	st.w	$r23,$r4,20(0x14)
1c005c98:	02802409 	addi.w	$r9,$r0,9(0x9)
1c005c9c:	6400893a 	bge	$r9,$r26,136(0x88) # 1c005d24 <__s2b+0x114>
1c005ca0:	028026db 	addi.w	$r27,$r22,9(0x9)
1c005ca4:	00150377 	move	$r23,$r27
1c005ca8:	00106ad6 	add.w	$r22,$r22,$r26
1c005cac:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c005cb0:	283ffee7 	ld.b	$r7,$r23,-1(0xfff)
1c005cb4:	00150085 	move	$r5,$r4
1c005cb8:	02802806 	addi.w	$r6,$r0,10(0xa)
1c005cbc:	02bf40e7 	addi.w	$r7,$r7,-48(0xfd0)
1c005cc0:	00150324 	move	$r4,$r25
1c005cc4:	57fe27ff 	bl	-476(0xffffe24) # 1c005ae8 <__multadd>
1c005cc8:	5fffe6d7 	bne	$r22,$r23,-28(0x3ffe4) # 1c005cac <__s2b+0x9c>
1c005ccc:	02bfe356 	addi.w	$r22,$r26,-8(0xff8)
1c005cd0:	00105b76 	add.w	$r22,$r27,$r22
1c005cd4:	64002f58 	bge	$r26,$r24,44(0x2c) # 1c005d00 <__s2b+0xf0>
1c005cd8:	00116b18 	sub.w	$r24,$r24,$r26
1c005cdc:	001062d8 	add.w	$r24,$r22,$r24
1c005ce0:	028006d6 	addi.w	$r22,$r22,1(0x1)
1c005ce4:	283ffec7 	ld.b	$r7,$r22,-1(0xfff)
1c005ce8:	00150085 	move	$r5,$r4
1c005cec:	02802806 	addi.w	$r6,$r0,10(0xa)
1c005cf0:	02bf40e7 	addi.w	$r7,$r7,-48(0xfd0)
1c005cf4:	00150324 	move	$r4,$r25
1c005cf8:	57fdf3ff 	bl	-528(0xffffdf0) # 1c005ae8 <__multadd>
1c005cfc:	5fffe716 	bne	$r24,$r22,-28(0x3ffe4) # 1c005ce0 <__s2b+0xd0>
1c005d00:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c005d04:	28806076 	ld.w	$r22,$r3,24(0x18)
1c005d08:	28805077 	ld.w	$r23,$r3,20(0x14)
1c005d0c:	28804078 	ld.w	$r24,$r3,16(0x10)
1c005d10:	28803079 	ld.w	$r25,$r3,12(0xc)
1c005d14:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c005d18:	2880107b 	ld.w	$r27,$r3,4(0x4)
1c005d1c:	02808063 	addi.w	$r3,$r3,32(0x20)
1c005d20:	4c000020 	jirl	$r0,$r1,0
1c005d24:	02802ad6 	addi.w	$r22,$r22,10(0xa)
1c005d28:	0280241a 	addi.w	$r26,$r0,9(0x9)
1c005d2c:	53ffabff 	b	-88(0xfffffa8) # 1c005cd4 <__s2b+0xc4>
1c005d30:	00150005 	move	$r5,$r0
1c005d34:	53ff53ff 	b	-176(0xfffff50) # 1c005c84 <__s2b+0x74>

1c005d38 <__hi0bits>:
__hi0bits():
1c005d38:	15fffe08 	lu12i.w	$r8,-16(0xffff0)
1c005d3c:	0014a088 	and	$r8,$r4,$r8
1c005d40:	00150089 	move	$r9,$r4
1c005d44:	00150004 	move	$r4,$r0
1c005d48:	5c000d00 	bne	$r8,$r0,12(0xc) # 1c005d54 <__hi0bits+0x1c>
1c005d4c:	0040c129 	slli.w	$r9,$r9,0x10
1c005d50:	02804004 	addi.w	$r4,$r0,16(0x10)
1c005d54:	15fe0008 	lu12i.w	$r8,-4096(0xff000)
1c005d58:	0014a128 	and	$r8,$r9,$r8
1c005d5c:	5c000d00 	bne	$r8,$r0,12(0xc) # 1c005d68 <__hi0bits+0x30>
1c005d60:	02802084 	addi.w	$r4,$r4,8(0x8)
1c005d64:	0040a129 	slli.w	$r9,$r9,0x8
1c005d68:	15e00008 	lu12i.w	$r8,-65536(0xf0000)
1c005d6c:	0014a128 	and	$r8,$r9,$r8
1c005d70:	5c000d00 	bne	$r8,$r0,12(0xc) # 1c005d7c <__hi0bits+0x44>
1c005d74:	02801084 	addi.w	$r4,$r4,4(0x4)
1c005d78:	00409129 	slli.w	$r9,$r9,0x4
1c005d7c:	15800008 	lu12i.w	$r8,-262144(0xc0000)
1c005d80:	0014a128 	and	$r8,$r9,$r8
1c005d84:	5c000d00 	bne	$r8,$r0,12(0xc) # 1c005d90 <__hi0bits+0x58>
1c005d88:	02800884 	addi.w	$r4,$r4,2(0x2)
1c005d8c:	00408929 	slli.w	$r9,$r9,0x2
1c005d90:	60001520 	blt	$r9,$r0,20(0x14) # 1c005da4 <__hi0bits+0x6c>
1c005d94:	14800008 	lu12i.w	$r8,262144(0x40000)
1c005d98:	0014a129 	and	$r9,$r9,$r8
1c005d9c:	02800484 	addi.w	$r4,$r4,1(0x1)
1c005da0:	58000920 	beq	$r9,$r0,8(0x8) # 1c005da8 <__hi0bits+0x70>
1c005da4:	4c000020 	jirl	$r0,$r1,0
1c005da8:	02808004 	addi.w	$r4,$r0,32(0x20)
1c005dac:	4c000020 	jirl	$r0,$r1,0

1c005db0 <__lo0bits>:
__lo0bits():
1c005db0:	28800089 	ld.w	$r9,$r4,0
1c005db4:	03401d28 	andi	$r8,$r9,0x7
1c005db8:	58002900 	beq	$r8,$r0,40(0x28) # 1c005de0 <__lo0bits+0x30>
1c005dbc:	03400528 	andi	$r8,$r9,0x1
1c005dc0:	5c008900 	bne	$r8,$r0,136(0x88) # 1c005e48 <__lo0bits+0x98>
1c005dc4:	03400928 	andi	$r8,$r9,0x2
1c005dc8:	58009500 	beq	$r8,$r0,148(0x94) # 1c005e5c <__lo0bits+0xac>
1c005dcc:	00448529 	srli.w	$r9,$r9,0x1
1c005dd0:	29800089 	st.w	$r9,$r4,0
1c005dd4:	02800408 	addi.w	$r8,$r0,1(0x1)
1c005dd8:	00150104 	move	$r4,$r8
1c005ddc:	4c000020 	jirl	$r0,$r1,0
1c005de0:	0040c127 	slli.w	$r7,$r9,0x10
1c005de4:	0044c0e7 	srli.w	$r7,$r7,0x10
1c005de8:	00150008 	move	$r8,$r0
1c005dec:	5c000ce0 	bne	$r7,$r0,12(0xc) # 1c005df8 <__lo0bits+0x48>
1c005df0:	0044c129 	srli.w	$r9,$r9,0x10
1c005df4:	02804008 	addi.w	$r8,$r0,16(0x10)
1c005df8:	0343fd27 	andi	$r7,$r9,0xff
1c005dfc:	5c000ce0 	bne	$r7,$r0,12(0xc) # 1c005e08 <__lo0bits+0x58>
1c005e00:	02802108 	addi.w	$r8,$r8,8(0x8)
1c005e04:	0044a129 	srli.w	$r9,$r9,0x8
1c005e08:	03403d27 	andi	$r7,$r9,0xf
1c005e0c:	5c000ce0 	bne	$r7,$r0,12(0xc) # 1c005e18 <__lo0bits+0x68>
1c005e10:	02801108 	addi.w	$r8,$r8,4(0x4)
1c005e14:	00449129 	srli.w	$r9,$r9,0x4
1c005e18:	03400d27 	andi	$r7,$r9,0x3
1c005e1c:	5c000ce0 	bne	$r7,$r0,12(0xc) # 1c005e28 <__lo0bits+0x78>
1c005e20:	02800908 	addi.w	$r8,$r8,2(0x2)
1c005e24:	00448929 	srli.w	$r9,$r9,0x2
1c005e28:	03400527 	andi	$r7,$r9,0x1
1c005e2c:	5c0010e0 	bne	$r7,$r0,16(0x10) # 1c005e3c <__lo0bits+0x8c>
1c005e30:	00448529 	srli.w	$r9,$r9,0x1
1c005e34:	02800508 	addi.w	$r8,$r8,1(0x1)
1c005e38:	58001d20 	beq	$r9,$r0,28(0x1c) # 1c005e54 <__lo0bits+0xa4>
1c005e3c:	29800089 	st.w	$r9,$r4,0
1c005e40:	00150104 	move	$r4,$r8
1c005e44:	4c000020 	jirl	$r0,$r1,0
1c005e48:	00150008 	move	$r8,$r0
1c005e4c:	00150104 	move	$r4,$r8
1c005e50:	4c000020 	jirl	$r0,$r1,0
1c005e54:	02808008 	addi.w	$r8,$r0,32(0x20)
1c005e58:	53ff83ff 	b	-128(0xfffff80) # 1c005dd8 <__lo0bits+0x28>
1c005e5c:	00448929 	srli.w	$r9,$r9,0x2
1c005e60:	02800808 	addi.w	$r8,$r0,2(0x2)
1c005e64:	29800089 	st.w	$r9,$r4,0
1c005e68:	00150104 	move	$r4,$r8
1c005e6c:	4c000020 	jirl	$r0,$r1,0

1c005e70 <__i2b>:
__i2b():
1c005e70:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c005e74:	29802076 	st.w	$r22,$r3,8(0x8)
1c005e78:	001500b6 	move	$r22,$r5
1c005e7c:	02800405 	addi.w	$r5,$r0,1(0x1)
1c005e80:	29803061 	st.w	$r1,$r3,12(0xc)
1c005e84:	57fb9bff 	bl	-1128(0xffffb98) # 1c005a1c <_Balloc>
1c005e88:	29805096 	st.w	$r22,$r4,20(0x14)
1c005e8c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c005e90:	28802076 	ld.w	$r22,$r3,8(0x8)
1c005e94:	02800408 	addi.w	$r8,$r0,1(0x1)
1c005e98:	29804088 	st.w	$r8,$r4,16(0x10)
1c005e9c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c005ea0:	4c000020 	jirl	$r0,$r1,0

1c005ea4 <__multiply>:
__multiply():
1c005ea4:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c005ea8:	29803079 	st.w	$r25,$r3,12(0xc)
1c005eac:	2980207a 	st.w	$r26,$r3,8(0x8)
1c005eb0:	288040b9 	ld.w	$r25,$r5,16(0x10)
1c005eb4:	288040da 	ld.w	$r26,$r6,16(0x10)
1c005eb8:	29805077 	st.w	$r23,$r3,20(0x14)
1c005ebc:	29804078 	st.w	$r24,$r3,16(0x10)
1c005ec0:	29807061 	st.w	$r1,$r3,28(0x1c)
1c005ec4:	29806076 	st.w	$r22,$r3,24(0x18)
1c005ec8:	001500b7 	move	$r23,$r5
1c005ecc:	001500d8 	move	$r24,$r6
1c005ed0:	60001b3a 	blt	$r25,$r26,24(0x18) # 1c005ee8 <__multiply+0x44>
1c005ed4:	00150348 	move	$r8,$r26
1c005ed8:	001500b8 	move	$r24,$r5
1c005edc:	0015033a 	move	$r26,$r25
1c005ee0:	001500d7 	move	$r23,$r6
1c005ee4:	00150119 	move	$r25,$r8
1c005ee8:	28802309 	ld.w	$r9,$r24,8(0x8)
1c005eec:	28801305 	ld.w	$r5,$r24,4(0x4)
1c005ef0:	00106756 	add.w	$r22,$r26,$r25
1c005ef4:	00125929 	slt	$r9,$r9,$r22
1c005ef8:	001024a5 	add.w	$r5,$r5,$r9
1c005efc:	57fb23ff 	bl	-1248(0xffffb20) # 1c005a1c <_Balloc>
1c005f00:	0280508f 	addi.w	$r15,$r4,20(0x14)
1c005f04:	00408acd 	slli.w	$r13,$r22,0x2
1c005f08:	001035ed 	add.w	$r13,$r15,$r13
1c005f0c:	001501e9 	move	$r9,$r15
1c005f10:	6c0011ed 	bgeu	$r15,$r13,16(0x10) # 1c005f20 <__multiply+0x7c>
1c005f14:	29800120 	st.w	$r0,$r9,0
1c005f18:	02801129 	addi.w	$r9,$r9,4(0x4)
1c005f1c:	6bfff92d 	bltu	$r9,$r13,-8(0x3fff8) # 1c005f14 <__multiply+0x70>
1c005f20:	028052e5 	addi.w	$r5,$r23,20(0x14)
1c005f24:	00408b30 	slli.w	$r16,$r25,0x2
1c005f28:	02805306 	addi.w	$r6,$r24,20(0x14)
1c005f2c:	00408b4b 	slli.w	$r11,$r26,0x2
1c005f30:	140001ea 	lu12i.w	$r10,15(0xf)
1c005f34:	001040b0 	add.w	$r16,$r5,$r16
1c005f38:	00102ccb 	add.w	$r11,$r6,$r11
1c005f3c:	03bffd4a 	ori	$r10,$r10,0xfff
1c005f40:	68001cb0 	bltu	$r5,$r16,28(0x1c) # 1c005f5c <__multiply+0xb8>
1c005f44:	50010c00 	b	268(0x10c) # 1c006050 <__multiply+0x1ac>
1c005f48:	0044c252 	srli.w	$r18,$r18,0x10
1c005f4c:	5c008e40 	bne	$r18,$r0,140(0x8c) # 1c005fd8 <__multiply+0x134>
1c005f50:	028010a5 	addi.w	$r5,$r5,4(0x4)
1c005f54:	028011ef 	addi.w	$r15,$r15,4(0x4)
1c005f58:	6c00f8b0 	bgeu	$r5,$r16,248(0xf8) # 1c006050 <__multiply+0x1ac>
1c005f5c:	288000b2 	ld.w	$r18,$r5,0
1c005f60:	0014aa54 	and	$r20,$r18,$r10
1c005f64:	5bffe680 	beq	$r20,$r0,-28(0x3ffe4) # 1c005f48 <__multiply+0xa4>
1c005f68:	001501f2 	move	$r18,$r15
1c005f6c:	001500d3 	move	$r19,$r6
1c005f70:	0015000c 	move	$r12,$r0
1c005f74:	28800268 	ld.w	$r8,$r19,0
1c005f78:	28800251 	ld.w	$r17,$r18,0
1c005f7c:	02801252 	addi.w	$r18,$r18,4(0x4)
1c005f80:	0014a907 	and	$r7,$r8,$r10
1c005f84:	001c50e7 	mul.w	$r7,$r7,$r20
1c005f88:	0044c109 	srli.w	$r9,$r8,0x10
1c005f8c:	0014aa28 	and	$r8,$r17,$r10
1c005f90:	0044c231 	srli.w	$r17,$r17,0x10
1c005f94:	02801273 	addi.w	$r19,$r19,4(0x4)
1c005f98:	001c5129 	mul.w	$r9,$r9,$r20
1c005f9c:	001020e7 	add.w	$r7,$r7,$r8
1c005fa0:	001030e7 	add.w	$r7,$r7,$r12
1c005fa4:	0044c0e8 	srli.w	$r8,$r7,0x10
1c005fa8:	0014a8e7 	and	$r7,$r7,$r10
1c005fac:	00104529 	add.w	$r9,$r9,$r17
1c005fb0:	00102129 	add.w	$r9,$r9,$r8
1c005fb4:	0040c128 	slli.w	$r8,$r9,0x10
1c005fb8:	00151d07 	or	$r7,$r8,$r7
1c005fbc:	29bff247 	st.w	$r7,$r18,-4(0xffc)
1c005fc0:	0044c12c 	srli.w	$r12,$r9,0x10
1c005fc4:	6bffb26b 	bltu	$r19,$r11,-80(0x3ffb0) # 1c005f74 <__multiply+0xd0>
1c005fc8:	2980024c 	st.w	$r12,$r18,0
1c005fcc:	288000b2 	ld.w	$r18,$r5,0
1c005fd0:	0044c252 	srli.w	$r18,$r18,0x10
1c005fd4:	5bff7e40 	beq	$r18,$r0,-132(0x3ff7c) # 1c005f50 <__multiply+0xac>
1c005fd8:	288001e8 	ld.w	$r8,$r15,0
1c005fdc:	001501f1 	move	$r17,$r15
1c005fe0:	001500c7 	move	$r7,$r6
1c005fe4:	00150114 	move	$r20,$r8
1c005fe8:	00150013 	move	$r19,$r0
1c005fec:	288000e9 	ld.w	$r9,$r7,0
1c005ff0:	0044c28e 	srli.w	$r14,$r20,0x10
1c005ff4:	0014a908 	and	$r8,$r8,$r10
1c005ff8:	0014a929 	and	$r9,$r9,$r10
1c005ffc:	001c4929 	mul.w	$r9,$r9,$r18
1c006000:	02801231 	addi.w	$r17,$r17,4(0x4)
1c006004:	028010e7 	addi.w	$r7,$r7,4(0x4)
1c006008:	28800234 	ld.w	$r20,$r17,0
1c00600c:	0014aa8c 	and	$r12,$r20,$r10
1c006010:	00103929 	add.w	$r9,$r9,$r14
1c006014:	00104d29 	add.w	$r9,$r9,$r19
1c006018:	0040c133 	slli.w	$r19,$r9,0x10
1c00601c:	00152268 	or	$r8,$r19,$r8
1c006020:	29bff228 	st.w	$r8,$r17,-4(0xffc)
1c006024:	2a7ff8e8 	ld.hu	$r8,$r7,-2(0xffe)
1c006028:	0044c129 	srli.w	$r9,$r9,0x10
1c00602c:	001c4908 	mul.w	$r8,$r8,$r18
1c006030:	00103108 	add.w	$r8,$r8,$r12
1c006034:	00102508 	add.w	$r8,$r8,$r9
1c006038:	0044c113 	srli.w	$r19,$r8,0x10
1c00603c:	6bffb0eb 	bltu	$r7,$r11,-80(0x3ffb0) # 1c005fec <__multiply+0x148>
1c006040:	29800228 	st.w	$r8,$r17,0
1c006044:	028010a5 	addi.w	$r5,$r5,4(0x4)
1c006048:	028011ef 	addi.w	$r15,$r15,4(0x4)
1c00604c:	6bff10b0 	bltu	$r5,$r16,-240(0x3ff10) # 1c005f5c <__multiply+0xb8>
1c006050:	64002816 	bge	$r0,$r22,40(0x28) # 1c006078 <__multiply+0x1d4>
1c006054:	28bff1a9 	ld.w	$r9,$r13,-4(0xffc)
1c006058:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c00605c:	58001120 	beq	$r9,$r0,16(0x10) # 1c00606c <__multiply+0x1c8>
1c006060:	50001800 	b	24(0x18) # 1c006078 <__multiply+0x1d4>
1c006064:	288001a9 	ld.w	$r9,$r13,0
1c006068:	5c001120 	bne	$r9,$r0,16(0x10) # 1c006078 <__multiply+0x1d4>
1c00606c:	02bffed6 	addi.w	$r22,$r22,-1(0xfff)
1c006070:	02bff1ad 	addi.w	$r13,$r13,-4(0xffc)
1c006074:	5ffff2c0 	bne	$r22,$r0,-16(0x3fff0) # 1c006064 <__multiply+0x1c0>
1c006078:	29804096 	st.w	$r22,$r4,16(0x10)
1c00607c:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c006080:	28806076 	ld.w	$r22,$r3,24(0x18)
1c006084:	28805077 	ld.w	$r23,$r3,20(0x14)
1c006088:	28804078 	ld.w	$r24,$r3,16(0x10)
1c00608c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c006090:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c006094:	02808063 	addi.w	$r3,$r3,32(0x20)
1c006098:	4c000020 	jirl	$r0,$r1,0

1c00609c <__pow5mult>:
__pow5mult():
1c00609c:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0060a0:	29806076 	st.w	$r22,$r3,24(0x18)
1c0060a4:	29804078 	st.w	$r24,$r3,16(0x10)
1c0060a8:	29803079 	st.w	$r25,$r3,12(0xc)
1c0060ac:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0060b0:	29805077 	st.w	$r23,$r3,20(0x14)
1c0060b4:	03400cc9 	andi	$r9,$r6,0x3
1c0060b8:	001500d6 	move	$r22,$r6
1c0060bc:	00150099 	move	$r25,$r4
1c0060c0:	001500b8 	move	$r24,$r5
1c0060c4:	5c00bd20 	bne	$r9,$r0,188(0xbc) # 1c006180 <__pow5mult+0xe4>
1c0060c8:	00488ad6 	srai.w	$r22,$r22,0x2
1c0060cc:	58006ec0 	beq	$r22,$r0,108(0x6c) # 1c006138 <__pow5mult+0x9c>
1c0060d0:	28812337 	ld.w	$r23,$r25,72(0x48)
1c0060d4:	5800d6e0 	beq	$r23,$r0,212(0xd4) # 1c0061a8 <__pow5mult+0x10c>
1c0060d8:	034006c9 	andi	$r9,$r22,0x1
1c0060dc:	5c002120 	bne	$r9,$r0,32(0x20) # 1c0060fc <__pow5mult+0x60>
1c0060e0:	004886d6 	srai.w	$r22,$r22,0x1
1c0060e4:	580056c0 	beq	$r22,$r0,84(0x54) # 1c006138 <__pow5mult+0x9c>
1c0060e8:	288002e4 	ld.w	$r4,$r23,0
1c0060ec:	58006c80 	beq	$r4,$r0,108(0x6c) # 1c006158 <__pow5mult+0xbc>
1c0060f0:	00150097 	move	$r23,$r4
1c0060f4:	034006c9 	andi	$r9,$r22,0x1
1c0060f8:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c0060e0 <__pow5mult+0x44>
1c0060fc:	001502e6 	move	$r6,$r23
1c006100:	00150305 	move	$r5,$r24
1c006104:	00150324 	move	$r4,$r25
1c006108:	57fd9fff 	bl	-612(0xffffd9c) # 1c005ea4 <__multiply>
1c00610c:	58006f00 	beq	$r24,$r0,108(0x6c) # 1c006178 <__pow5mult+0xdc>
1c006110:	28801308 	ld.w	$r8,$r24,4(0x4)
1c006114:	28813329 	ld.w	$r9,$r25,76(0x4c)
1c006118:	004886d6 	srai.w	$r22,$r22,0x1
1c00611c:	00408908 	slli.w	$r8,$r8,0x2
1c006120:	00102129 	add.w	$r9,$r9,$r8
1c006124:	28800128 	ld.w	$r8,$r9,0
1c006128:	29800308 	st.w	$r8,$r24,0
1c00612c:	29800138 	st.w	$r24,$r9,0
1c006130:	00150098 	move	$r24,$r4
1c006134:	5fffb6c0 	bne	$r22,$r0,-76(0x3ffb4) # 1c0060e8 <__pow5mult+0x4c>
1c006138:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00613c:	28806076 	ld.w	$r22,$r3,24(0x18)
1c006140:	00150304 	move	$r4,$r24
1c006144:	28805077 	ld.w	$r23,$r3,20(0x14)
1c006148:	28804078 	ld.w	$r24,$r3,16(0x10)
1c00614c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c006150:	02808063 	addi.w	$r3,$r3,32(0x20)
1c006154:	4c000020 	jirl	$r0,$r1,0
1c006158:	001502e6 	move	$r6,$r23
1c00615c:	001502e5 	move	$r5,$r23
1c006160:	00150324 	move	$r4,$r25
1c006164:	57fd43ff 	bl	-704(0xffffd40) # 1c005ea4 <__multiply>
1c006168:	298002e4 	st.w	$r4,$r23,0
1c00616c:	29800080 	st.w	$r0,$r4,0
1c006170:	00150097 	move	$r23,$r4
1c006174:	53ff83ff 	b	-128(0xfffff80) # 1c0060f4 <__pow5mult+0x58>
1c006178:	00150098 	move	$r24,$r4
1c00617c:	53ff67ff 	b	-156(0xfffff64) # 1c0060e0 <__pow5mult+0x44>
1c006180:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c006184:	1dc7ff88 	pcaddu12i	$r8,-114692(0xe3ffc)
1c006188:	02b29108 	addi.w	$r8,$r8,-860(0xca4)
1c00618c:	00408929 	slli.w	$r9,$r9,0x2
1c006190:	00102509 	add.w	$r9,$r8,$r9
1c006194:	28800126 	ld.w	$r6,$r9,0
1c006198:	00150007 	move	$r7,$r0
1c00619c:	57f94fff 	bl	-1716(0xffff94c) # 1c005ae8 <__multadd>
1c0061a0:	00150098 	move	$r24,$r4
1c0061a4:	53ff27ff 	b	-220(0xfffff24) # 1c0060c8 <__pow5mult+0x2c>
1c0061a8:	02800405 	addi.w	$r5,$r0,1(0x1)
1c0061ac:	00150324 	move	$r4,$r25
1c0061b0:	57f86fff 	bl	-1940(0xffff86c) # 1c005a1c <_Balloc>
1c0061b4:	0289c409 	addi.w	$r9,$r0,625(0x271)
1c0061b8:	29805089 	st.w	$r9,$r4,20(0x14)
1c0061bc:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0061c0:	29804089 	st.w	$r9,$r4,16(0x10)
1c0061c4:	29812324 	st.w	$r4,$r25,72(0x48)
1c0061c8:	00150097 	move	$r23,$r4
1c0061cc:	29800080 	st.w	$r0,$r4,0
1c0061d0:	53ff0bff 	b	-248(0xfffff08) # 1c0060d8 <__pow5mult+0x3c>

1c0061d4 <__lshift>:
__lshift():
1c0061d4:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0061d8:	2980207a 	st.w	$r26,$r3,8(0x8)
1c0061dc:	288040ba 	ld.w	$r26,$r5,16(0x10)
1c0061e0:	29805077 	st.w	$r23,$r3,20(0x14)
1c0061e4:	288020a9 	ld.w	$r9,$r5,8(0x8)
1c0061e8:	004894d7 	srai.w	$r23,$r6,0x5
1c0061ec:	00106afa 	add.w	$r26,$r23,$r26
1c0061f0:	29806076 	st.w	$r22,$r3,24(0x18)
1c0061f4:	29804078 	st.w	$r24,$r3,16(0x10)
1c0061f8:	29803079 	st.w	$r25,$r3,12(0xc)
1c0061fc:	2980107b 	st.w	$r27,$r3,4(0x4)
1c006200:	29807061 	st.w	$r1,$r3,28(0x1c)
1c006204:	02800756 	addi.w	$r22,$r26,1(0x1)
1c006208:	001500b9 	move	$r25,$r5
1c00620c:	001500d8 	move	$r24,$r6
1c006210:	0015009b 	move	$r27,$r4
1c006214:	288010a5 	ld.w	$r5,$r5,4(0x4)
1c006218:	64001136 	bge	$r9,$r22,16(0x10) # 1c006228 <__lshift+0x54>
1c00621c:	00408529 	slli.w	$r9,$r9,0x1
1c006220:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c006224:	63fff936 	blt	$r9,$r22,-8(0x3fff8) # 1c00621c <__lshift+0x48>
1c006228:	00150364 	move	$r4,$r27
1c00622c:	57f7f3ff 	bl	-2064(0xffff7f0) # 1c005a1c <_Balloc>
1c006230:	02805088 	addi.w	$r8,$r4,20(0x14)
1c006234:	64002817 	bge	$r0,$r23,40(0x28) # 1c00625c <__lshift+0x88>
1c006238:	028016f7 	addi.w	$r23,$r23,5(0x5)
1c00623c:	00408af7 	slli.w	$r23,$r23,0x2
1c006240:	00105c87 	add.w	$r7,$r4,$r23
1c006244:	00150109 	move	$r9,$r8
1c006248:	02801129 	addi.w	$r9,$r9,4(0x4)
1c00624c:	29bff120 	st.w	$r0,$r9,-4(0xffc)
1c006250:	5ffff8e9 	bne	$r7,$r9,-8(0x3fff8) # 1c006248 <__lshift+0x74>
1c006254:	02bfb2f7 	addi.w	$r23,$r23,-20(0xfec)
1c006258:	00105d08 	add.w	$r8,$r8,$r23
1c00625c:	2880432a 	ld.w	$r10,$r25,16(0x10)
1c006260:	02805329 	addi.w	$r9,$r25,20(0x14)
1c006264:	03407f06 	andi	$r6,$r24,0x1f
1c006268:	0040894a 	slli.w	$r10,$r10,0x2
1c00626c:	0010292a 	add.w	$r10,$r9,$r10
1c006270:	580084c0 	beq	$r6,$r0,132(0x84) # 1c0062f4 <__lshift+0x120>
1c006274:	0280800b 	addi.w	$r11,$r0,32(0x20)
1c006278:	0011196b 	sub.w	$r11,$r11,$r6
1c00627c:	00150005 	move	$r5,$r0
1c006280:	28800127 	ld.w	$r7,$r9,0
1c006284:	02801108 	addi.w	$r8,$r8,4(0x4)
1c006288:	02801129 	addi.w	$r9,$r9,4(0x4)
1c00628c:	001718e7 	sll.w	$r7,$r7,$r6
1c006290:	001514e7 	or	$r7,$r7,$r5
1c006294:	29bff107 	st.w	$r7,$r8,-4(0xffc)
1c006298:	28bff127 	ld.w	$r7,$r9,-4(0xffc)
1c00629c:	0017ace5 	srl.w	$r5,$r7,$r11
1c0062a0:	6bffe12a 	bltu	$r9,$r10,-32(0x3ffe0) # 1c006280 <__lshift+0xac>
1c0062a4:	29800105 	st.w	$r5,$r8,0
1c0062a8:	580008a0 	beq	$r5,$r0,8(0x8) # 1c0062b0 <__lshift+0xdc>
1c0062ac:	001502da 	move	$r26,$r22
1c0062b0:	28801328 	ld.w	$r8,$r25,4(0x4)
1c0062b4:	28813369 	ld.w	$r9,$r27,76(0x4c)
1c0062b8:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0062bc:	00408908 	slli.w	$r8,$r8,0x2
1c0062c0:	00102129 	add.w	$r9,$r9,$r8
1c0062c4:	28800128 	ld.w	$r8,$r9,0
1c0062c8:	2980409a 	st.w	$r26,$r4,16(0x10)
1c0062cc:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0062d0:	29800328 	st.w	$r8,$r25,0
1c0062d4:	29800139 	st.w	$r25,$r9,0
1c0062d8:	28805077 	ld.w	$r23,$r3,20(0x14)
1c0062dc:	28804078 	ld.w	$r24,$r3,16(0x10)
1c0062e0:	28803079 	ld.w	$r25,$r3,12(0xc)
1c0062e4:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c0062e8:	2880107b 	ld.w	$r27,$r3,4(0x4)
1c0062ec:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0062f0:	4c000020 	jirl	$r0,$r1,0
1c0062f4:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0062f8:	28bff127 	ld.w	$r7,$r9,-4(0xffc)
1c0062fc:	02801108 	addi.w	$r8,$r8,4(0x4)
1c006300:	29bff107 	st.w	$r7,$r8,-4(0xffc)
1c006304:	6fffad2a 	bgeu	$r9,$r10,-84(0x3ffac) # 1c0062b0 <__lshift+0xdc>
1c006308:	02801129 	addi.w	$r9,$r9,4(0x4)
1c00630c:	28bff127 	ld.w	$r7,$r9,-4(0xffc)
1c006310:	02801108 	addi.w	$r8,$r8,4(0x4)
1c006314:	29bff107 	st.w	$r7,$r8,-4(0xffc)
1c006318:	6bffdd2a 	bltu	$r9,$r10,-36(0x3ffdc) # 1c0062f4 <__lshift+0x120>
1c00631c:	53ff97ff 	b	-108(0xfffff94) # 1c0062b0 <__lshift+0xdc>

1c006320 <__mcmp>:
__mcmp():
1c006320:	00150086 	move	$r6,$r4
1c006324:	288040a9 	ld.w	$r9,$r5,16(0x10)
1c006328:	28804084 	ld.w	$r4,$r4,16(0x10)
1c00632c:	00112484 	sub.w	$r4,$r4,$r9
1c006330:	5c003c80 	bne	$r4,$r0,60(0x3c) # 1c00636c <__mcmp+0x4c>
1c006334:	00408928 	slli.w	$r8,$r9,0x2
1c006338:	028050c6 	addi.w	$r6,$r6,20(0x14)
1c00633c:	028050a5 	addi.w	$r5,$r5,20(0x14)
1c006340:	001020c9 	add.w	$r9,$r6,$r8
1c006344:	001020a5 	add.w	$r5,$r5,$r8
1c006348:	50000800 	b	8(0x8) # 1c006350 <__mcmp+0x30>
1c00634c:	6c0020c9 	bgeu	$r6,$r9,32(0x20) # 1c00636c <__mcmp+0x4c>
1c006350:	02bff129 	addi.w	$r9,$r9,-4(0xffc)
1c006354:	02bff0a5 	addi.w	$r5,$r5,-4(0xffc)
1c006358:	28800127 	ld.w	$r7,$r9,0
1c00635c:	288000a8 	ld.w	$r8,$r5,0
1c006360:	5bffece8 	beq	$r7,$r8,-20(0x3ffec) # 1c00634c <__mcmp+0x2c>
1c006364:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c006368:	6c0008e8 	bgeu	$r7,$r8,8(0x8) # 1c006370 <__mcmp+0x50>
1c00636c:	4c000020 	jirl	$r0,$r1,0
1c006370:	02800404 	addi.w	$r4,$r0,1(0x1)
1c006374:	4c000020 	jirl	$r0,$r1,0

1c006378 <__mdiff>:
__mdiff():
1c006378:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c00637c:	29804078 	st.w	$r24,$r3,16(0x10)
1c006380:	288040c8 	ld.w	$r8,$r6,16(0x10)
1c006384:	288040b8 	ld.w	$r24,$r5,16(0x10)
1c006388:	29806076 	st.w	$r22,$r3,24(0x18)
1c00638c:	29805077 	st.w	$r23,$r3,20(0x14)
1c006390:	29803079 	st.w	$r25,$r3,12(0xc)
1c006394:	2980207a 	st.w	$r26,$r3,8(0x8)
1c006398:	29807061 	st.w	$r1,$r3,28(0x1c)
1c00639c:	00112318 	sub.w	$r24,$r24,$r8
1c0063a0:	001500b9 	move	$r25,$r5
1c0063a4:	001500da 	move	$r26,$r6
1c0063a8:	028050b6 	addi.w	$r22,$r5,20(0x14)
1c0063ac:	028050d7 	addi.w	$r23,$r6,20(0x14)
1c0063b0:	5c005300 	bne	$r24,$r0,80(0x50) # 1c006400 <__mdiff+0x88>
1c0063b4:	00408908 	slli.w	$r8,$r8,0x2
1c0063b8:	001022c9 	add.w	$r9,$r22,$r8
1c0063bc:	001022e8 	add.w	$r8,$r23,$r8
1c0063c0:	50000800 	b	8(0x8) # 1c0063c8 <__mdiff+0x50>
1c0063c4:	6c016ac9 	bgeu	$r22,$r9,360(0x168) # 1c00652c <__mdiff+0x1b4>
1c0063c8:	02bff129 	addi.w	$r9,$r9,-4(0xffc)
1c0063cc:	02bff108 	addi.w	$r8,$r8,-4(0xffc)
1c0063d0:	28800125 	ld.w	$r5,$r9,0
1c0063d4:	28800107 	ld.w	$r7,$r8,0
1c0063d8:	5bffeca7 	beq	$r5,$r7,-20(0x3ffec) # 1c0063c4 <__mdiff+0x4c>
1c0063dc:	6c002ca7 	bgeu	$r5,$r7,44(0x2c) # 1c006408 <__mdiff+0x90>
1c0063e0:	001502c8 	move	$r8,$r22
1c0063e4:	00150329 	move	$r9,$r25
1c0063e8:	001502f6 	move	$r22,$r23
1c0063ec:	00150359 	move	$r25,$r26
1c0063f0:	00150117 	move	$r23,$r8
1c0063f4:	0015013a 	move	$r26,$r9
1c0063f8:	02800418 	addi.w	$r24,$r0,1(0x1)
1c0063fc:	50000c00 	b	12(0xc) # 1c006408 <__mdiff+0x90>
1c006400:	63ffe300 	blt	$r24,$r0,-32(0x3ffe0) # 1c0063e0 <__mdiff+0x68>
1c006404:	00150018 	move	$r24,$r0
1c006408:	28801325 	ld.w	$r5,$r25,4(0x4)
1c00640c:	57f613ff 	bl	-2544(0xffff610) # 1c005a1c <_Balloc>
1c006410:	2880432f 	ld.w	$r15,$r25,16(0x10)
1c006414:	28804350 	ld.w	$r16,$r26,16(0x10)
1c006418:	140001e6 	lu12i.w	$r6,15(0xf)
1c00641c:	004089ed 	slli.w	$r13,$r15,0x2
1c006420:	00408a10 	slli.w	$r16,$r16,0x2
1c006424:	29803098 	st.w	$r24,$r4,12(0xc)
1c006428:	001036cd 	add.w	$r13,$r22,$r13
1c00642c:	001042f0 	add.w	$r16,$r23,$r16
1c006430:	0280508a 	addi.w	$r10,$r4,20(0x14)
1c006434:	00150009 	move	$r9,$r0
1c006438:	03bffcc6 	ori	$r6,$r6,0xfff
1c00643c:	50000800 	b	8(0x8) # 1c006444 <__mdiff+0xcc>
1c006440:	0015016a 	move	$r10,$r11
1c006444:	288002c8 	ld.w	$r8,$r22,0
1c006448:	288002e5 	ld.w	$r5,$r23,0
1c00644c:	0280114b 	addi.w	$r11,$r10,4(0x4)
1c006450:	00149907 	and	$r7,$r8,$r6
1c006454:	001024e7 	add.w	$r7,$r7,$r9
1c006458:	001498a9 	and	$r9,$r5,$r6
1c00645c:	001124e7 	sub.w	$r7,$r7,$r9
1c006460:	0044c0a5 	srli.w	$r5,$r5,0x10
1c006464:	0044c109 	srli.w	$r9,$r8,0x10
1c006468:	00111529 	sub.w	$r9,$r9,$r5
1c00646c:	0048c0e8 	srai.w	$r8,$r7,0x10
1c006470:	00102129 	add.w	$r9,$r9,$r8
1c006474:	0040c128 	slli.w	$r8,$r9,0x10
1c006478:	001498e7 	and	$r7,$r7,$r6
1c00647c:	00151d07 	or	$r7,$r8,$r7
1c006480:	028012f7 	addi.w	$r23,$r23,4(0x4)
1c006484:	29bff167 	st.w	$r7,$r11,-4(0xffc)
1c006488:	028012d6 	addi.w	$r22,$r22,4(0x4)
1c00648c:	0048c129 	srai.w	$r9,$r9,0x10
1c006490:	6bffb2f0 	bltu	$r23,$r16,-80(0x3ffb0) # 1c006440 <__mdiff+0xc8>
1c006494:	6c0062cd 	bgeu	$r22,$r13,96(0x60) # 1c0064f4 <__mdiff+0x17c>
1c006498:	140001f0 	lu12i.w	$r16,15(0xf)
1c00649c:	0015016a 	move	$r10,$r11
1c0064a0:	001502c5 	move	$r5,$r22
1c0064a4:	03bffe10 	ori	$r16,$r16,0xfff
1c0064a8:	288000a8 	ld.w	$r8,$r5,0
1c0064ac:	0280114a 	addi.w	$r10,$r10,4(0x4)
1c0064b0:	028010a5 	addi.w	$r5,$r5,4(0x4)
1c0064b4:	0014c106 	and	$r6,$r8,$r16
1c0064b8:	001024c6 	add.w	$r6,$r6,$r9
1c0064bc:	0048c0c7 	srai.w	$r7,$r6,0x10
1c0064c0:	0044c109 	srli.w	$r9,$r8,0x10
1c0064c4:	00101d29 	add.w	$r9,$r9,$r7
1c0064c8:	0040c127 	slli.w	$r7,$r9,0x10
1c0064cc:	0014c0c6 	and	$r6,$r6,$r16
1c0064d0:	001518e7 	or	$r7,$r7,$r6
1c0064d4:	29bff147 	st.w	$r7,$r10,-4(0xffc)
1c0064d8:	0048c129 	srai.w	$r9,$r9,0x10
1c0064dc:	6bffccad 	bltu	$r5,$r13,-52(0x3ffcc) # 1c0064a8 <__mdiff+0x130>
1c0064e0:	02bffdaa 	addi.w	$r10,$r13,-1(0xfff)
1c0064e4:	0011594a 	sub.w	$r10,$r10,$r22
1c0064e8:	0044894a 	srli.w	$r10,$r10,0x2
1c0064ec:	0040894a 	slli.w	$r10,$r10,0x2
1c0064f0:	0010296a 	add.w	$r10,$r11,$r10
1c0064f4:	5c0014e0 	bne	$r7,$r0,20(0x14) # 1c006508 <__mdiff+0x190>
1c0064f8:	02bff14a 	addi.w	$r10,$r10,-4(0xffc)
1c0064fc:	28800149 	ld.w	$r9,$r10,0
1c006500:	02bffdef 	addi.w	$r15,$r15,-1(0xfff)
1c006504:	5bfff520 	beq	$r9,$r0,-12(0x3fff4) # 1c0064f8 <__mdiff+0x180>
1c006508:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00650c:	28806076 	ld.w	$r22,$r3,24(0x18)
1c006510:	2980408f 	st.w	$r15,$r4,16(0x10)
1c006514:	28805077 	ld.w	$r23,$r3,20(0x14)
1c006518:	28804078 	ld.w	$r24,$r3,16(0x10)
1c00651c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c006520:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c006524:	02808063 	addi.w	$r3,$r3,32(0x20)
1c006528:	4c000020 	jirl	$r0,$r1,0
1c00652c:	00150005 	move	$r5,$r0
1c006530:	57f4efff 	bl	-2836(0xffff4ec) # 1c005a1c <_Balloc>
1c006534:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c006538:	28806076 	ld.w	$r22,$r3,24(0x18)
1c00653c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c006540:	29804089 	st.w	$r9,$r4,16(0x10)
1c006544:	29805080 	st.w	$r0,$r4,20(0x14)
1c006548:	28805077 	ld.w	$r23,$r3,20(0x14)
1c00654c:	28804078 	ld.w	$r24,$r3,16(0x10)
1c006550:	28803079 	ld.w	$r25,$r3,12(0xc)
1c006554:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c006558:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00655c:	4c000020 	jirl	$r0,$r1,0

1c006560 <__ulp>:
__ulp():
1c006560:	14ffe009 	lu12i.w	$r9,524032(0x7ff00)
1c006564:	00149525 	and	$r5,$r9,$r5
1c006568:	15f98009 	lu12i.w	$r9,-13312(0xfcc00)
1c00656c:	001024a5 	add.w	$r5,$r5,$r9
1c006570:	64001005 	bge	$r0,$r5,16(0x10) # 1c006580 <__ulp+0x20>
1c006574:	00150009 	move	$r9,$r0
1c006578:	00150124 	move	$r4,$r9
1c00657c:	4c000020 	jirl	$r0,$r1,0
1c006580:	00111405 	sub.w	$r5,$r0,$r5
1c006584:	0048d0a5 	srai.w	$r5,$r5,0x14
1c006588:	02804c09 	addi.w	$r9,$r0,19(0x13)
1c00658c:	60001125 	blt	$r9,$r5,16(0x10) # 1c00659c <__ulp+0x3c>
1c006590:	14001009 	lu12i.w	$r9,128(0x80)
1c006594:	00181525 	sra.w	$r5,$r9,$r5
1c006598:	53ffdfff 	b	-36(0xfffffdc) # 1c006574 <__ulp+0x14>
1c00659c:	02bfb0a8 	addi.w	$r8,$r5,-20(0xfec)
1c0065a0:	02807807 	addi.w	$r7,$r0,30(0x1e)
1c0065a4:	00150005 	move	$r5,$r0
1c0065a8:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0065ac:	63ffcce8 	blt	$r7,$r8,-52(0x3ffcc) # 1c006578 <__ulp+0x18>
1c0065b0:	15000009 	lu12i.w	$r9,-524288(0x80000)
1c0065b4:	0017a129 	srl.w	$r9,$r9,$r8
1c0065b8:	00150124 	move	$r4,$r9
1c0065bc:	4c000020 	jirl	$r0,$r1,0

1c0065c0 <__b2d>:
__b2d():
1c0065c0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0065c4:	29806076 	st.w	$r22,$r3,24(0x18)
1c0065c8:	28804096 	ld.w	$r22,$r4,16(0x10)
1c0065cc:	29805077 	st.w	$r23,$r3,20(0x14)
1c0065d0:	02805097 	addi.w	$r23,$r4,20(0x14)
1c0065d4:	00408ad6 	slli.w	$r22,$r22,0x2
1c0065d8:	00105af6 	add.w	$r22,$r23,$r22
1c0065dc:	29804078 	st.w	$r24,$r3,16(0x10)
1c0065e0:	28bff2d8 	ld.w	$r24,$r22,-4(0xffc)
1c0065e4:	29803079 	st.w	$r25,$r3,12(0xc)
1c0065e8:	2980207a 	st.w	$r26,$r3,8(0x8)
1c0065ec:	00150304 	move	$r4,$r24
1c0065f0:	001500ba 	move	$r26,$r5
1c0065f4:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0065f8:	57f743ff 	bl	-2240(0xffff740) # 1c005d38 <__hi0bits>
1c0065fc:	02808008 	addi.w	$r8,$r0,32(0x20)
1c006600:	00111109 	sub.w	$r9,$r8,$r4
1c006604:	29800349 	st.w	$r9,$r26,0
1c006608:	02802809 	addi.w	$r9,$r0,10(0xa)
1c00660c:	02bff2d9 	addi.w	$r25,$r22,-4(0xffc)
1c006610:	64008124 	bge	$r9,$r4,128(0x80) # 1c006690 <__b2d+0xd0>
1c006614:	02bfd484 	addi.w	$r4,$r4,-11(0xff5)
1c006618:	6c0042f9 	bgeu	$r23,$r25,64(0x40) # 1c006658 <__b2d+0x98>
1c00661c:	28bfe2c9 	ld.w	$r9,$r22,-8(0xff8)
1c006620:	58004080 	beq	$r4,$r0,64(0x40) # 1c006660 <__b2d+0xa0>
1c006624:	00111106 	sub.w	$r6,$r8,$r4
1c006628:	00179928 	srl.w	$r8,$r9,$r6
1c00662c:	00171307 	sll.w	$r7,$r24,$r4
1c006630:	001520e7 	or	$r7,$r7,$r8
1c006634:	02bfe2c5 	addi.w	$r5,$r22,-8(0xff8)
1c006638:	147fe008 	lu12i.w	$r8,261888(0x3ff00)
1c00663c:	001520e7 	or	$r7,$r7,$r8
1c006640:	00171129 	sll.w	$r9,$r9,$r4
1c006644:	6c0026e5 	bgeu	$r23,$r5,36(0x24) # 1c006668 <__b2d+0xa8>
1c006648:	28bfd2c8 	ld.w	$r8,$r22,-12(0xff4)
1c00664c:	00179908 	srl.w	$r8,$r8,$r6
1c006650:	00152129 	or	$r9,$r9,$r8
1c006654:	50001400 	b	20(0x14) # 1c006668 <__b2d+0xa8>
1c006658:	00150009 	move	$r9,$r0
1c00665c:	5c006880 	bne	$r4,$r0,104(0x68) # 1c0066c4 <__b2d+0x104>
1c006660:	147fe008 	lu12i.w	$r8,261888(0x3ff00)
1c006664:	00152307 	or	$r7,$r24,$r8
1c006668:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00666c:	28806076 	ld.w	$r22,$r3,24(0x18)
1c006670:	28805077 	ld.w	$r23,$r3,20(0x14)
1c006674:	28804078 	ld.w	$r24,$r3,16(0x10)
1c006678:	28803079 	ld.w	$r25,$r3,12(0xc)
1c00667c:	2880207a 	ld.w	$r26,$r3,8(0x8)
1c006680:	00150124 	move	$r4,$r9
1c006684:	001500e5 	move	$r5,$r7
1c006688:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00668c:	4c000020 	jirl	$r0,$r1,0
1c006690:	02802c06 	addi.w	$r6,$r0,11(0xb)
1c006694:	001110c6 	sub.w	$r6,$r6,$r4
1c006698:	00179b08 	srl.w	$r8,$r24,$r6
1c00669c:	147fe007 	lu12i.w	$r7,261888(0x3ff00)
1c0066a0:	00151d07 	or	$r7,$r8,$r7
1c0066a4:	00150008 	move	$r8,$r0
1c0066a8:	6c000ef9 	bgeu	$r23,$r25,12(0xc) # 1c0066b4 <__b2d+0xf4>
1c0066ac:	28bfe2c8 	ld.w	$r8,$r22,-8(0xff8)
1c0066b0:	00179908 	srl.w	$r8,$r8,$r6
1c0066b4:	02805484 	addi.w	$r4,$r4,21(0x15)
1c0066b8:	00171304 	sll.w	$r4,$r24,$r4
1c0066bc:	00152089 	or	$r9,$r4,$r8
1c0066c0:	53ffabff 	b	-88(0xfffffa8) # 1c006668 <__b2d+0xa8>
1c0066c4:	00171304 	sll.w	$r4,$r24,$r4
1c0066c8:	147fe008 	lu12i.w	$r8,261888(0x3ff00)
1c0066cc:	00152087 	or	$r7,$r4,$r8
1c0066d0:	00150009 	move	$r9,$r0
1c0066d4:	53ff97ff 	b	-108(0xfffff94) # 1c006668 <__b2d+0xa8>

1c0066d8 <__d2b>:
__d2b():
1c0066d8:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c0066dc:	2980507b 	st.w	$r27,$r3,20(0x14)
1c0066e0:	001500bb 	move	$r27,$r5
1c0066e4:	02800405 	addi.w	$r5,$r0,1(0x1)
1c0066e8:	2980a076 	st.w	$r22,$r3,40(0x28)
1c0066ec:	29809077 	st.w	$r23,$r3,36(0x24)
1c0066f0:	29808078 	st.w	$r24,$r3,32(0x20)
1c0066f4:	29807079 	st.w	$r25,$r3,28(0x1c)
1c0066f8:	2980607a 	st.w	$r26,$r3,24(0x18)
1c0066fc:	001500d9 	move	$r25,$r6
1c006700:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c006704:	001500f8 	move	$r24,$r7
1c006708:	00150117 	move	$r23,$r8
1c00670c:	57f313ff 	bl	-3312(0xffff310) # 1c005a1c <_Balloc>
1c006710:	0044d336 	srli.w	$r22,$r25,0x14
1c006714:	14001fe9 	lu12i.w	$r9,255(0xff)
1c006718:	03bffd29 	ori	$r9,$r9,0xfff
1c00671c:	035ffed6 	andi	$r22,$r22,0x7ff
1c006720:	0015009a 	move	$r26,$r4
1c006724:	0014e529 	and	$r9,$r9,$r25
1c006728:	58000ec0 	beq	$r22,$r0,12(0xc) # 1c006734 <__d2b+0x5c>
1c00672c:	14002006 	lu12i.w	$r6,256(0x100)
1c006730:	00151929 	or	$r9,$r9,$r6
1c006734:	29803069 	st.w	$r9,$r3,12(0xc)
1c006738:	58009b60 	beq	$r27,$r0,152(0x98) # 1c0067d0 <__d2b+0xf8>
1c00673c:	02802064 	addi.w	$r4,$r3,8(0x8)
1c006740:	2980207b 	st.w	$r27,$r3,8(0x8)
1c006744:	57f66fff 	bl	-2452(0xffff66c) # 1c005db0 <__lo0bits>
1c006748:	00150089 	move	$r9,$r4
1c00674c:	28803068 	ld.w	$r8,$r3,12(0xc)
1c006750:	5c006080 	bne	$r4,$r0,96(0x60) # 1c0067b0 <__d2b+0xd8>
1c006754:	28802067 	ld.w	$r7,$r3,8(0x8)
1c006758:	29805347 	st.w	$r7,$r26,20(0x14)
1c00675c:	0012a019 	sltu	$r25,$r0,$r8
1c006760:	02800739 	addi.w	$r25,$r25,1(0x1)
1c006764:	29806348 	st.w	$r8,$r26,24(0x18)
1c006768:	29804359 	st.w	$r25,$r26,16(0x10)
1c00676c:	58008ac0 	beq	$r22,$r0,136(0x88) # 1c0067f4 <__d2b+0x11c>
1c006770:	02af36d6 	addi.w	$r22,$r22,-1075(0xbcd)
1c006774:	001026d6 	add.w	$r22,$r22,$r9
1c006778:	0280d408 	addi.w	$r8,$r0,53(0x35)
1c00677c:	29800316 	st.w	$r22,$r24,0
1c006780:	00112509 	sub.w	$r9,$r8,$r9
1c006784:	298002e9 	st.w	$r9,$r23,0
1c006788:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c00678c:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c006790:	00150344 	move	$r4,$r26
1c006794:	28809077 	ld.w	$r23,$r3,36(0x24)
1c006798:	28808078 	ld.w	$r24,$r3,32(0x20)
1c00679c:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c0067a0:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c0067a4:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c0067a8:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c0067ac:	4c000020 	jirl	$r0,$r1,0
1c0067b0:	28802066 	ld.w	$r6,$r3,8(0x8)
1c0067b4:	00111007 	sub.w	$r7,$r0,$r4
1c0067b8:	00171d07 	sll.w	$r7,$r8,$r7
1c0067bc:	001518e7 	or	$r7,$r7,$r6
1c0067c0:	00179108 	srl.w	$r8,$r8,$r4
1c0067c4:	29805347 	st.w	$r7,$r26,20(0x14)
1c0067c8:	29803068 	st.w	$r8,$r3,12(0xc)
1c0067cc:	53ff93ff 	b	-112(0xfffff90) # 1c00675c <__d2b+0x84>
1c0067d0:	02803064 	addi.w	$r4,$r3,12(0xc)
1c0067d4:	57f5dfff 	bl	-2596(0xffff5dc) # 1c005db0 <__lo0bits>
1c0067d8:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0067dc:	29804349 	st.w	$r9,$r26,16(0x10)
1c0067e0:	28803069 	ld.w	$r9,$r3,12(0xc)
1c0067e4:	02800419 	addi.w	$r25,$r0,1(0x1)
1c0067e8:	29805349 	st.w	$r9,$r26,20(0x14)
1c0067ec:	02808089 	addi.w	$r9,$r4,32(0x20)
1c0067f0:	5fff82c0 	bne	$r22,$r0,-128(0x3ff80) # 1c006770 <__d2b+0x98>
1c0067f4:	00408b28 	slli.w	$r8,$r25,0x2
1c0067f8:	00102348 	add.w	$r8,$r26,$r8
1c0067fc:	28804104 	ld.w	$r4,$r8,16(0x10)
1c006800:	02af3929 	addi.w	$r9,$r9,-1074(0xbce)
1c006804:	29800309 	st.w	$r9,$r24,0
1c006808:	57f533ff 	bl	-2768(0xffff530) # 1c005d38 <__hi0bits>
1c00680c:	00409739 	slli.w	$r25,$r25,0x5
1c006810:	00111339 	sub.w	$r25,$r25,$r4
1c006814:	298002f9 	st.w	$r25,$r23,0
1c006818:	53ff73ff 	b	-144(0xfffff70) # 1c006788 <__d2b+0xb0>

1c00681c <__ratio>:
__ratio():
1c00681c:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c006820:	29808078 	st.w	$r24,$r3,32(0x20)
1c006824:	001500b8 	move	$r24,$r5
1c006828:	02802065 	addi.w	$r5,$r3,8(0x8)
1c00682c:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c006830:	2980a076 	st.w	$r22,$r3,40(0x28)
1c006834:	29809077 	st.w	$r23,$r3,36(0x24)
1c006838:	29807079 	st.w	$r25,$r3,28(0x1c)
1c00683c:	00150099 	move	$r25,$r4
1c006840:	57fd83ff 	bl	-640(0xffffd80) # 1c0065c0 <__b2d>
1c006844:	00150097 	move	$r23,$r4
1c006848:	001500b6 	move	$r22,$r5
1c00684c:	00150304 	move	$r4,$r24
1c006850:	02803065 	addi.w	$r5,$r3,12(0xc)
1c006854:	57fd6fff 	bl	-660(0xffffd6c) # 1c0065c0 <__b2d>
1c006858:	28804309 	ld.w	$r9,$r24,16(0x10)
1c00685c:	28804328 	ld.w	$r8,$r25,16(0x10)
1c006860:	00112508 	sub.w	$r8,$r8,$r9
1c006864:	28802067 	ld.w	$r7,$r3,8(0x8)
1c006868:	28803069 	ld.w	$r9,$r3,12(0xc)
1c00686c:	00409508 	slli.w	$r8,$r8,0x5
1c006870:	001124e7 	sub.w	$r7,$r7,$r9
1c006874:	00101d09 	add.w	$r9,$r8,$r7
1c006878:	64003c09 	bge	$r0,$r9,60(0x3c) # 1c0068b4 <__ratio+0x98>
1c00687c:	0040d129 	slli.w	$r9,$r9,0x14
1c006880:	00105936 	add.w	$r22,$r9,$r22
1c006884:	00150086 	move	$r6,$r4
1c006888:	001500a7 	move	$r7,$r5
1c00688c:	001502e4 	move	$r4,$r23
1c006890:	001502c5 	move	$r5,$r22
1c006894:	5443bc00 	bl	17340(0x43bc) # 1c00ac50 <__divdf3>
1c006898:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c00689c:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c0068a0:	28809077 	ld.w	$r23,$r3,36(0x24)
1c0068a4:	28808078 	ld.w	$r24,$r3,32(0x20)
1c0068a8:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c0068ac:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c0068b0:	4c000020 	jirl	$r0,$r1,0
1c0068b4:	0040d128 	slli.w	$r8,$r9,0x14
1c0068b8:	001120a5 	sub.w	$r5,$r5,$r8
1c0068bc:	53ffcbff 	b	-56(0xfffffc8) # 1c006884 <__ratio+0x68>

1c0068c0 <_mprec_log10>:
_mprec_log10():
1c0068c0:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0068c4:	29802076 	st.w	$r22,$r3,8(0x8)
1c0068c8:	29803061 	st.w	$r1,$r3,12(0xc)
1c0068cc:	29801078 	st.w	$r24,$r3,4(0x4)
1c0068d0:	29800079 	st.w	$r25,$r3,0
1c0068d4:	02805c09 	addi.w	$r9,$r0,23(0x17)
1c0068d8:	00150096 	move	$r22,$r4
1c0068dc:	64005124 	bge	$r9,$r4,80(0x50) # 1c00692c <_mprec_log10+0x6c>
1c0068e0:	1dc7ff89 	pcaddu12i	$r9,-114692(0xe3ffc)
1c0068e4:	028aa129 	addi.w	$r9,$r9,680(0x2a8)
1c0068e8:	28800124 	ld.w	$r4,$r9,0
1c0068ec:	28801125 	ld.w	$r5,$r9,4(0x4)
1c0068f0:	1dc7ff89 	pcaddu12i	$r9,-114692(0xe3ffc)
1c0068f4:	028a8129 	addi.w	$r9,$r9,672(0x2a0)
1c0068f8:	28800138 	ld.w	$r24,$r9,0
1c0068fc:	28801139 	ld.w	$r25,$r9,4(0x4)
1c006900:	02bffed6 	addi.w	$r22,$r22,-1(0xfff)
1c006904:	00150306 	move	$r6,$r24
1c006908:	00150327 	move	$r7,$r25
1c00690c:	544e6400 	bl	20068(0x4e64) # 1c00b770 <__muldf3>
1c006910:	5ffff2c0 	bne	$r22,$r0,-16(0x3fff0) # 1c006900 <_mprec_log10+0x40>
1c006914:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006918:	28802076 	ld.w	$r22,$r3,8(0x8)
1c00691c:	28801078 	ld.w	$r24,$r3,4(0x4)
1c006920:	28800079 	ld.w	$r25,$r3,0
1c006924:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006928:	4c000020 	jirl	$r0,$r1,0
1c00692c:	00408c96 	slli.w	$r22,$r4,0x3
1c006930:	1dc7ff69 	pcaddu12i	$r9,-114693(0xe3ffb)
1c006934:	02956129 	addi.w	$r9,$r9,1368(0x558)
1c006938:	00105936 	add.w	$r22,$r9,$r22
1c00693c:	288002c4 	ld.w	$r4,$r22,0
1c006940:	288012c5 	ld.w	$r5,$r22,4(0x4)
1c006944:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006948:	28802076 	ld.w	$r22,$r3,8(0x8)
1c00694c:	28801078 	ld.w	$r24,$r3,4(0x4)
1c006950:	28800079 	ld.w	$r25,$r3,0
1c006954:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006958:	4c000020 	jirl	$r0,$r1,0

1c00695c <__copybits>:
__copybits():
1c00695c:	288040c7 	ld.w	$r7,$r6,16(0x10)
1c006960:	02bffca5 	addi.w	$r5,$r5,-1(0xfff)
1c006964:	004894a5 	srai.w	$r5,$r5,0x5
1c006968:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c00696c:	028050c9 	addi.w	$r9,$r6,20(0x14)
1c006970:	004088e7 	slli.w	$r7,$r7,0x2
1c006974:	004088a5 	slli.w	$r5,$r5,0x2
1c006978:	00101d27 	add.w	$r7,$r9,$r7
1c00697c:	00101485 	add.w	$r5,$r4,$r5
1c006980:	6c003527 	bgeu	$r9,$r7,52(0x34) # 1c0069b4 <__copybits+0x58>
1c006984:	00150088 	move	$r8,$r4
1c006988:	02801129 	addi.w	$r9,$r9,4(0x4)
1c00698c:	28bff12a 	ld.w	$r10,$r9,-4(0xffc)
1c006990:	02801108 	addi.w	$r8,$r8,4(0x4)
1c006994:	29bff10a 	st.w	$r10,$r8,-4(0xffc)
1c006998:	6bfff127 	bltu	$r9,$r7,-16(0x3fff0) # 1c006988 <__copybits+0x2c>
1c00699c:	001118e9 	sub.w	$r9,$r7,$r6
1c0069a0:	02bfad29 	addi.w	$r9,$r9,-21(0xfeb)
1c0069a4:	00448929 	srli.w	$r9,$r9,0x2
1c0069a8:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0069ac:	00408929 	slli.w	$r9,$r9,0x2
1c0069b0:	00102484 	add.w	$r4,$r4,$r9
1c0069b4:	6c001085 	bgeu	$r4,$r5,16(0x10) # 1c0069c4 <__copybits+0x68>
1c0069b8:	02801084 	addi.w	$r4,$r4,4(0x4)
1c0069bc:	29bff080 	st.w	$r0,$r4,-4(0xffc)
1c0069c0:	6bfff885 	bltu	$r4,$r5,-8(0x3fff8) # 1c0069b8 <__copybits+0x5c>
1c0069c4:	4c000020 	jirl	$r0,$r1,0

1c0069c8 <__any_on>:
__any_on():
1c0069c8:	28804088 	ld.w	$r8,$r4,16(0x10)
1c0069cc:	004894a6 	srai.w	$r6,$r5,0x5
1c0069d0:	02805087 	addi.w	$r7,$r4,20(0x14)
1c0069d4:	64003506 	bge	$r8,$r6,52(0x34) # 1c006a08 <__any_on+0x40>
1c0069d8:	00408909 	slli.w	$r9,$r8,0x2
1c0069dc:	001024e9 	add.w	$r9,$r7,$r9
1c0069e0:	6c0058e9 	bgeu	$r7,$r9,88(0x58) # 1c006a38 <__any_on+0x70>
1c0069e4:	28bff124 	ld.w	$r4,$r9,-4(0xffc)
1c0069e8:	02bff129 	addi.w	$r9,$r9,-4(0xffc)
1c0069ec:	5c001480 	bne	$r4,$r0,20(0x14) # 1c006a00 <__any_on+0x38>
1c0069f0:	6c0044e9 	bgeu	$r7,$r9,68(0x44) # 1c006a34 <__any_on+0x6c>
1c0069f4:	02bff129 	addi.w	$r9,$r9,-4(0xffc)
1c0069f8:	28800128 	ld.w	$r8,$r9,0
1c0069fc:	5bfff500 	beq	$r8,$r0,-12(0x3fff4) # 1c0069f0 <__any_on+0x28>
1c006a00:	02800404 	addi.w	$r4,$r0,1(0x1)
1c006a04:	4c000020 	jirl	$r0,$r1,0
1c006a08:	004088c9 	slli.w	$r9,$r6,0x2
1c006a0c:	001024e9 	add.w	$r9,$r7,$r9
1c006a10:	67ffd0c8 	bge	$r6,$r8,-48(0x3ffd0) # 1c0069e0 <__any_on+0x18>
1c006a14:	03407ca5 	andi	$r5,$r5,0x1f
1c006a18:	5bffc8a0 	beq	$r5,$r0,-56(0x3ffc8) # 1c0069e0 <__any_on+0x18>
1c006a1c:	28800126 	ld.w	$r6,$r9,0
1c006a20:	02800404 	addi.w	$r4,$r0,1(0x1)
1c006a24:	001794c8 	srl.w	$r8,$r6,$r5
1c006a28:	00171505 	sll.w	$r5,$r8,$r5
1c006a2c:	5bffb4c5 	beq	$r6,$r5,-76(0x3ffb4) # 1c0069e0 <__any_on+0x18>
1c006a30:	4c000020 	jirl	$r0,$r1,0
1c006a34:	4c000020 	jirl	$r0,$r1,0
1c006a38:	00150004 	move	$r4,$r0
1c006a3c:	4c000020 	jirl	$r0,$r1,0

1c006a40 <_sbrk_r>:
_sbrk_r():
1c006a40:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c006a44:	29802076 	st.w	$r22,$r3,8(0x8)
1c006a48:	29801077 	st.w	$r23,$r3,4(0x4)
1c006a4c:	1dc7ff96 	pcaddu12i	$r22,-114692(0xe3ffc)
1c006a50:	288752d6 	ld.w	$r22,$r22,468(0x1d4)
1c006a54:	00150097 	move	$r23,$r4
1c006a58:	001500a4 	move	$r4,$r5
1c006a5c:	29803061 	st.w	$r1,$r3,12(0xc)
1c006a60:	298002c0 	st.w	$r0,$r22,0
1c006a64:	579c0bff 	bl	-25592(0xfff9c08) # 1c00066c <sbrk>
1c006a68:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c006a6c:	58001889 	beq	$r4,$r9,24(0x18) # 1c006a84 <_sbrk_r+0x44>
1c006a70:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006a74:	28802076 	ld.w	$r22,$r3,8(0x8)
1c006a78:	28801077 	ld.w	$r23,$r3,4(0x4)
1c006a7c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006a80:	4c000020 	jirl	$r0,$r1,0
1c006a84:	288002c9 	ld.w	$r9,$r22,0
1c006a88:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c006a70 <_sbrk_r+0x30>
1c006a8c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006a90:	28802076 	ld.w	$r22,$r3,8(0x8)
1c006a94:	298002e9 	st.w	$r9,$r23,0
1c006a98:	28801077 	ld.w	$r23,$r3,4(0x4)
1c006a9c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006aa0:	4c000020 	jirl	$r0,$r1,0

1c006aa4 <__fpclassifyd>:
__fpclassifyd():
1c006aa4:	00151488 	or	$r8,$r4,$r5
1c006aa8:	00150089 	move	$r9,$r4
1c006aac:	58005d00 	beq	$r8,$r0,92(0x5c) # 1c006b08 <__fpclassifyd+0x64>
1c006ab0:	15000008 	lu12i.w	$r8,-524288(0x80000)
1c006ab4:	580050a8 	beq	$r5,$r8,80(0x50) # 1c006b04 <__fpclassifyd+0x60>
1c006ab8:	15ffe007 	lu12i.w	$r7,-256(0xfff00)
1c006abc:	14ffbfe8 	lu12i.w	$r8,523775(0x7fdff)
1c006ac0:	001014e7 	add.w	$r7,$r7,$r5
1c006ac4:	03bffd08 	ori	$r8,$r8,0xfff
1c006ac8:	6c003507 	bgeu	$r8,$r7,52(0x34) # 1c006afc <__fpclassifyd+0x58>
1c006acc:	14ffe007 	lu12i.w	$r7,524032(0x7ff00)
1c006ad0:	001014e7 	add.w	$r7,$r7,$r5
1c006ad4:	6c002907 	bgeu	$r8,$r7,40(0x28) # 1c006afc <__fpclassifyd+0x58>
1c006ad8:	14ffe007 	lu12i.w	$r7,524032(0x7ff00)
1c006adc:	001494e8 	and	$r8,$r7,$r5
1c006ae0:	58003900 	beq	$r8,$r0,56(0x38) # 1c006b18 <__fpclassifyd+0x74>
1c006ae4:	14ffffe8 	lu12i.w	$r8,524287(0x7ffff)
1c006ae8:	03bffd08 	ori	$r8,$r8,0xfff
1c006aec:	00149505 	and	$r5,$r8,$r5
1c006af0:	00150004 	move	$r4,$r0
1c006af4:	58001ca7 	beq	$r5,$r7,28(0x1c) # 1c006b10 <__fpclassifyd+0x6c>
1c006af8:	4c000020 	jirl	$r0,$r1,0
1c006afc:	02801004 	addi.w	$r4,$r0,4(0x4)
1c006b00:	4c000020 	jirl	$r0,$r1,0
1c006b04:	5fffd480 	bne	$r4,$r0,-44(0x3ffd4) # 1c006ad8 <__fpclassifyd+0x34>
1c006b08:	02800804 	addi.w	$r4,$r0,2(0x2)
1c006b0c:	4c000020 	jirl	$r0,$r1,0
1c006b10:	02400524 	sltui	$r4,$r9,1(0x1)
1c006b14:	4c000020 	jirl	$r0,$r1,0
1c006b18:	02800c04 	addi.w	$r4,$r0,3(0x3)
1c006b1c:	4c000020 	jirl	$r0,$r1,0

1c006b20 <__sread>:
__sread():
1c006b20:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c006b24:	29802076 	st.w	$r22,$r3,8(0x8)
1c006b28:	001500b6 	move	$r22,$r5
1c006b2c:	284038a5 	ld.h	$r5,$r5,14(0xe)
1c006b30:	29803061 	st.w	$r1,$r3,12(0xc)
1c006b34:	5421c800 	bl	8648(0x21c8) # 1c008cfc <_read_r>
1c006b38:	60002080 	blt	$r4,$r0,32(0x20) # 1c006b58 <__sread+0x38>
1c006b3c:	288142c9 	ld.w	$r9,$r22,80(0x50)
1c006b40:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006b44:	00101129 	add.w	$r9,$r9,$r4
1c006b48:	298142c9 	st.w	$r9,$r22,80(0x50)
1c006b4c:	28802076 	ld.w	$r22,$r3,8(0x8)
1c006b50:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006b54:	4c000020 	jirl	$r0,$r1,0
1c006b58:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c006b5c:	15ffffc8 	lu12i.w	$r8,-2(0xffffe)
1c006b60:	03bffd08 	ori	$r8,$r8,0xfff
1c006b64:	0014a129 	and	$r9,$r9,$r8
1c006b68:	294032c9 	st.h	$r9,$r22,12(0xc)
1c006b6c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006b70:	28802076 	ld.w	$r22,$r3,8(0x8)
1c006b74:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006b78:	4c000020 	jirl	$r0,$r1,0

1c006b7c <__seofread>:
__seofread():
1c006b7c:	00150004 	move	$r4,$r0
1c006b80:	4c000020 	jirl	$r0,$r1,0

1c006b84 <__swrite>:
__swrite():
1c006b84:	284030a9 	ld.h	$r9,$r5,12(0xc)
1c006b88:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c006b8c:	29806076 	st.w	$r22,$r3,24(0x18)
1c006b90:	29805077 	st.w	$r23,$r3,20(0x14)
1c006b94:	29804078 	st.w	$r24,$r3,16(0x10)
1c006b98:	29803079 	st.w	$r25,$r3,12(0xc)
1c006b9c:	29807061 	st.w	$r1,$r3,28(0x1c)
1c006ba0:	03440128 	andi	$r8,$r9,0x100
1c006ba4:	001500b6 	move	$r22,$r5
1c006ba8:	00150097 	move	$r23,$r4
1c006bac:	001500d8 	move	$r24,$r6
1c006bb0:	001500f9 	move	$r25,$r7
1c006bb4:	284038a5 	ld.h	$r5,$r5,14(0xe)
1c006bb8:	5c003d00 	bne	$r8,$r0,60(0x3c) # 1c006bf4 <__swrite+0x70>
1c006bbc:	15ffffc8 	lu12i.w	$r8,-2(0xffffe)
1c006bc0:	03bffd08 	ori	$r8,$r8,0xfff
1c006bc4:	0014a129 	and	$r9,$r9,$r8
1c006bc8:	294032c9 	st.h	$r9,$r22,12(0xc)
1c006bcc:	28806076 	ld.w	$r22,$r3,24(0x18)
1c006bd0:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c006bd4:	00150327 	move	$r7,$r25
1c006bd8:	00150306 	move	$r6,$r24
1c006bdc:	28803079 	ld.w	$r25,$r3,12(0xc)
1c006be0:	28804078 	ld.w	$r24,$r3,16(0x10)
1c006be4:	001502e4 	move	$r4,$r23
1c006be8:	28805077 	ld.w	$r23,$r3,20(0x14)
1c006bec:	02808063 	addi.w	$r3,$r3,32(0x20)
1c006bf0:	50153400 	b	5428(0x1534) # 1c008124 <_write_r>
1c006bf4:	02800807 	addi.w	$r7,$r0,2(0x2)
1c006bf8:	00150006 	move	$r6,$r0
1c006bfc:	541f7400 	bl	8052(0x1f74) # 1c008b70 <_lseek_r>
1c006c00:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c006c04:	28403ac5 	ld.h	$r5,$r22,14(0xe)
1c006c08:	53ffb7ff 	b	-76(0xfffffb4) # 1c006bbc <__swrite+0x38>

1c006c0c <__sseek>:
__sseek():
1c006c0c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c006c10:	29802076 	st.w	$r22,$r3,8(0x8)
1c006c14:	001500b6 	move	$r22,$r5
1c006c18:	284038a5 	ld.h	$r5,$r5,14(0xe)
1c006c1c:	29803061 	st.w	$r1,$r3,12(0xc)
1c006c20:	541f5000 	bl	8016(0x1f50) # 1c008b70 <_lseek_r>
1c006c24:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c006c28:	58002889 	beq	$r4,$r9,40(0x28) # 1c006c50 <__sseek+0x44>
1c006c2c:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c006c30:	14000028 	lu12i.w	$r8,1(0x1)
1c006c34:	298142c4 	st.w	$r4,$r22,80(0x50)
1c006c38:	00152129 	or	$r9,$r9,$r8
1c006c3c:	294032c9 	st.h	$r9,$r22,12(0xc)
1c006c40:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006c44:	28802076 	ld.w	$r22,$r3,8(0x8)
1c006c48:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006c4c:	4c000020 	jirl	$r0,$r1,0
1c006c50:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c006c54:	15ffffc8 	lu12i.w	$r8,-2(0xffffe)
1c006c58:	03bffd08 	ori	$r8,$r8,0xfff
1c006c5c:	0014a129 	and	$r9,$r9,$r8
1c006c60:	294032c9 	st.h	$r9,$r22,12(0xc)
1c006c64:	28803061 	ld.w	$r1,$r3,12(0xc)
1c006c68:	28802076 	ld.w	$r22,$r3,8(0x8)
1c006c6c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c006c70:	4c000020 	jirl	$r0,$r1,0

1c006c74 <__sclose>:
__sclose():
1c006c74:	284038a5 	ld.h	$r5,$r5,14(0xe)
1c006c78:	5015d000 	b	5584(0x15d0) # 1c008248 <_close_r>

1c006c7c <strcmp>:
strcmp():
1c006c7c:	00151489 	or	$r9,$r4,$r5
1c006c80:	03400d29 	andi	$r9,$r9,0x3
1c006c84:	5c006120 	bne	$r9,$r0,96(0x60) # 1c006ce4 <strcmp+0x68>
1c006c88:	28800088 	ld.w	$r8,$r4,0
1c006c8c:	288000a9 	ld.w	$r9,$r5,0
1c006c90:	5c005528 	bne	$r9,$r8,84(0x54) # 1c006ce4 <strcmp+0x68>
1c006c94:	15fdfdeb 	lu12i.w	$r11,-4113(0xfefef)
1c006c98:	03bbfd6b 	ori	$r11,$r11,0xeff
1c006c9c:	00102d28 	add.w	$r8,$r9,$r11
1c006ca0:	1501010a 	lu12i.w	$r10,-522232(0x80808)
1c006ca4:	00142529 	nor	$r9,$r9,$r9
1c006ca8:	0014a509 	and	$r9,$r8,$r9
1c006cac:	0282014a 	addi.w	$r10,$r10,128(0x80)
1c006cb0:	0014a929 	and	$r9,$r9,$r10
1c006cb4:	58000d20 	beq	$r9,$r0,12(0xc) # 1c006cc0 <strcmp+0x44>
1c006cb8:	50007000 	b	112(0x70) # 1c006d28 <strcmp+0xac>
1c006cbc:	5c006d20 	bne	$r9,$r0,108(0x6c) # 1c006d28 <strcmp+0xac>
1c006cc0:	02801084 	addi.w	$r4,$r4,4(0x4)
1c006cc4:	28800088 	ld.w	$r8,$r4,0
1c006cc8:	028010a5 	addi.w	$r5,$r5,4(0x4)
1c006ccc:	288000a7 	ld.w	$r7,$r5,0
1c006cd0:	00102d09 	add.w	$r9,$r8,$r11
1c006cd4:	00142106 	nor	$r6,$r8,$r8
1c006cd8:	00149929 	and	$r9,$r9,$r6
1c006cdc:	0014a929 	and	$r9,$r9,$r10
1c006ce0:	5bffdd07 	beq	$r8,$r7,-36(0x3ffdc) # 1c006cbc <strcmp+0x40>
1c006ce4:	28000089 	ld.b	$r9,$r4,0
1c006ce8:	5c001920 	bne	$r9,$r0,24(0x18) # 1c006d00 <strcmp+0x84>
1c006cec:	50002c00 	b	44(0x2c) # 1c006d18 <strcmp+0x9c>
1c006cf0:	02800484 	addi.w	$r4,$r4,1(0x1)
1c006cf4:	28000089 	ld.b	$r9,$r4,0
1c006cf8:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c006cfc:	58001d20 	beq	$r9,$r0,28(0x1c) # 1c006d18 <strcmp+0x9c>
1c006d00:	280000a8 	ld.b	$r8,$r5,0
1c006d04:	5bffed09 	beq	$r8,$r9,-20(0x3ffec) # 1c006cf0 <strcmp+0x74>
1c006d08:	0343fd24 	andi	$r4,$r9,0xff
1c006d0c:	2a0000a9 	ld.bu	$r9,$r5,0
1c006d10:	00112484 	sub.w	$r4,$r4,$r9
1c006d14:	4c000020 	jirl	$r0,$r1,0
1c006d18:	2a0000a9 	ld.bu	$r9,$r5,0
1c006d1c:	00150004 	move	$r4,$r0
1c006d20:	00112484 	sub.w	$r4,$r4,$r9
1c006d24:	4c000020 	jirl	$r0,$r1,0
1c006d28:	00150004 	move	$r4,$r0
1c006d2c:	4c000020 	jirl	$r0,$r1,0

1c006d30 <strlen>:
strlen():
1c006d30:	03400c89 	andi	$r9,$r4,0x3
1c006d34:	5800a120 	beq	$r9,$r0,160(0xa0) # 1c006dd4 <strlen+0xa4>
1c006d38:	28000089 	ld.b	$r9,$r4,0
1c006d3c:	5800a120 	beq	$r9,$r0,160(0xa0) # 1c006ddc <strlen+0xac>
1c006d40:	00150089 	move	$r9,$r4
1c006d44:	50000c00 	b	12(0xc) # 1c006d50 <strlen+0x20>
1c006d48:	28000128 	ld.b	$r8,$r9,0
1c006d4c:	58008100 	beq	$r8,$r0,128(0x80) # 1c006dcc <strlen+0x9c>
1c006d50:	02800529 	addi.w	$r9,$r9,1(0x1)
1c006d54:	03400d28 	andi	$r8,$r9,0x3
1c006d58:	5ffff100 	bne	$r8,$r0,-16(0x3fff0) # 1c006d48 <strlen+0x18>
1c006d5c:	28800127 	ld.w	$r7,$r9,0
1c006d60:	15fdfde5 	lu12i.w	$r5,-4113(0xfefef)
1c006d64:	03bbfca5 	ori	$r5,$r5,0xeff
1c006d68:	001014e8 	add.w	$r8,$r7,$r5
1c006d6c:	15010106 	lu12i.w	$r6,-522232(0x80808)
1c006d70:	00141ce7 	nor	$r7,$r7,$r7
1c006d74:	00149d08 	and	$r8,$r8,$r7
1c006d78:	028200c6 	addi.w	$r6,$r6,128(0x80)
1c006d7c:	00149908 	and	$r8,$r8,$r6
1c006d80:	5c004500 	bne	$r8,$r0,68(0x44) # 1c006dc4 <strlen+0x94>
1c006d84:	02801129 	addi.w	$r9,$r9,4(0x4)
1c006d88:	28800127 	ld.w	$r7,$r9,0
1c006d8c:	001014e8 	add.w	$r8,$r7,$r5
1c006d90:	00141ce7 	nor	$r7,$r7,$r7
1c006d94:	00149d08 	and	$r8,$r8,$r7
1c006d98:	00149908 	and	$r8,$r8,$r6
1c006d9c:	5c002900 	bne	$r8,$r0,40(0x28) # 1c006dc4 <strlen+0x94>
1c006da0:	02801129 	addi.w	$r9,$r9,4(0x4)
1c006da4:	28800127 	ld.w	$r7,$r9,0
1c006da8:	001014e8 	add.w	$r8,$r7,$r5
1c006dac:	00141ce7 	nor	$r7,$r7,$r7
1c006db0:	00149d08 	and	$r8,$r8,$r7
1c006db4:	00149908 	and	$r8,$r8,$r6
1c006db8:	5bffcd00 	beq	$r8,$r0,-52(0x3ffcc) # 1c006d84 <strlen+0x54>
1c006dbc:	50000800 	b	8(0x8) # 1c006dc4 <strlen+0x94>
1c006dc0:	02800529 	addi.w	$r9,$r9,1(0x1)
1c006dc4:	28000128 	ld.b	$r8,$r9,0
1c006dc8:	5ffff900 	bne	$r8,$r0,-8(0x3fff8) # 1c006dc0 <strlen+0x90>
1c006dcc:	00111124 	sub.w	$r4,$r9,$r4
1c006dd0:	4c000020 	jirl	$r0,$r1,0
1c006dd4:	00150089 	move	$r9,$r4
1c006dd8:	53ff87ff 	b	-124(0xfffff84) # 1c006d5c <strlen+0x2c>
1c006ddc:	00150004 	move	$r4,$r0
1c006de0:	4c000020 	jirl	$r0,$r1,0

1c006de4 <__sprint_r.part.0>:
__sprint_r.part.0():
1c006de4:	288180a9 	ld.w	$r9,$r5,96(0x60)
1c006de8:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c006dec:	14000048 	lu12i.w	$r8,2(0x2)
1c006df0:	2980507b 	st.w	$r27,$r3,20(0x14)
1c006df4:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c006df8:	2980a076 	st.w	$r22,$r3,40(0x28)
1c006dfc:	29809077 	st.w	$r23,$r3,36(0x24)
1c006e00:	29808078 	st.w	$r24,$r3,32(0x20)
1c006e04:	29807079 	st.w	$r25,$r3,28(0x1c)
1c006e08:	2980607a 	st.w	$r26,$r3,24(0x18)
1c006e0c:	2980407c 	st.w	$r28,$r3,16(0x10)
1c006e10:	2980307d 	st.w	$r29,$r3,12(0xc)
1c006e14:	2980207e 	st.w	$r30,$r3,8(0x8)
1c006e18:	2980107f 	st.w	$r31,$r3,4(0x4)
1c006e1c:	0014a129 	and	$r9,$r9,$r8
1c006e20:	001500db 	move	$r27,$r6
1c006e24:	5800b920 	beq	$r9,$r0,184(0xb8) # 1c006edc <__sprint_r.part.0+0xf8>
1c006e28:	288020c9 	ld.w	$r9,$r6,8(0x8)
1c006e2c:	001500b7 	move	$r23,$r5
1c006e30:	00150099 	move	$r25,$r4
1c006e34:	288000dc 	ld.w	$r28,$r6,0
1c006e38:	02bffc1a 	addi.w	$r26,$r0,-1(0xfff)
1c006e3c:	02bff01e 	addi.w	$r30,$r0,-4(0xffc)
1c006e40:	58009520 	beq	$r9,$r0,148(0x94) # 1c006ed4 <__sprint_r.part.0+0xf0>
1c006e44:	2880139d 	ld.w	$r29,$r28,4(0x4)
1c006e48:	28800396 	ld.w	$r22,$r28,0
1c006e4c:	00448bb8 	srli.w	$r24,$r29,0x2
1c006e50:	58007300 	beq	$r24,$r0,112(0x70) # 1c006ec0 <__sprint_r.part.0+0xdc>
1c006e54:	0015001f 	move	$r31,$r0
1c006e58:	50000c00 	b	12(0xc) # 1c006e64 <__sprint_r.part.0+0x80>
1c006e5c:	028012d6 	addi.w	$r22,$r22,4(0x4)
1c006e60:	58005f1f 	beq	$r24,$r31,92(0x5c) # 1c006ebc <__sprint_r.part.0+0xd8>
1c006e64:	288002c5 	ld.w	$r5,$r22,0
1c006e68:	001502e6 	move	$r6,$r23
1c006e6c:	00150324 	move	$r4,$r25
1c006e70:	5416cc00 	bl	5836(0x16cc) # 1c00853c <_fputwc_r>
1c006e74:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c006e78:	5fffe49a 	bne	$r4,$r26,-28(0x3ffe4) # 1c006e5c <__sprint_r.part.0+0x78>
1c006e7c:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c006e80:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c006e84:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c006e88:	29802360 	st.w	$r0,$r27,8(0x8)
1c006e8c:	29801360 	st.w	$r0,$r27,4(0x4)
1c006e90:	28809077 	ld.w	$r23,$r3,36(0x24)
1c006e94:	28808078 	ld.w	$r24,$r3,32(0x20)
1c006e98:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c006e9c:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c006ea0:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c006ea4:	2880407c 	ld.w	$r28,$r3,16(0x10)
1c006ea8:	2880307d 	ld.w	$r29,$r3,12(0xc)
1c006eac:	2880207e 	ld.w	$r30,$r3,8(0x8)
1c006eb0:	2880107f 	ld.w	$r31,$r3,4(0x4)
1c006eb4:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c006eb8:	4c000020 	jirl	$r0,$r1,0
1c006ebc:	28802369 	ld.w	$r9,$r27,8(0x8)
1c006ec0:	0014fbbd 	and	$r29,$r29,$r30
1c006ec4:	00117529 	sub.w	$r9,$r9,$r29
1c006ec8:	29802369 	st.w	$r9,$r27,8(0x8)
1c006ecc:	0280239c 	addi.w	$r28,$r28,8(0x8)
1c006ed0:	5fff7520 	bne	$r9,$r0,-140(0x3ff74) # 1c006e44 <__sprint_r.part.0+0x60>
1c006ed4:	00150004 	move	$r4,$r0
1c006ed8:	53ffabff 	b	-88(0xfffffa8) # 1c006e80 <__sprint_r.part.0+0x9c>
1c006edc:	54177800 	bl	6008(0x1778) # 1c008654 <__sfvwrite_r>
1c006ee0:	53ffa3ff 	b	-96(0xfffffa0) # 1c006e80 <__sprint_r.part.0+0x9c>

1c006ee4 <__sprint_r>:
__sprint_r():
1c006ee4:	288020c8 	ld.w	$r8,$r6,8(0x8)
1c006ee8:	58000900 	beq	$r8,$r0,8(0x8) # 1c006ef0 <__sprint_r+0xc>
1c006eec:	53fefbff 	b	-264(0xffffef8) # 1c006de4 <__sprint_r.part.0>
1c006ef0:	298010c0 	st.w	$r0,$r6,4(0x4)
1c006ef4:	00150004 	move	$r4,$r0
1c006ef8:	4c000020 	jirl	$r0,$r1,0

1c006efc <_vfiprintf_r>:
_vfiprintf_r():
1c006efc:	02bcc063 	addi.w	$r3,$r3,-208(0xf30)
1c006f00:	2982e07a 	st.w	$r26,$r3,184(0xb8)
1c006f04:	2982d07b 	st.w	$r27,$r3,180(0xb4)
1c006f08:	2982907f 	st.w	$r31,$r3,164(0xa4)
1c006f0c:	29833061 	st.w	$r1,$r3,204(0xcc)
1c006f10:	29832076 	st.w	$r22,$r3,200(0xc8)
1c006f14:	29831077 	st.w	$r23,$r3,196(0xc4)
1c006f18:	29830078 	st.w	$r24,$r3,192(0xc0)
1c006f1c:	2982f079 	st.w	$r25,$r3,188(0xbc)
1c006f20:	2982c07c 	st.w	$r28,$r3,176(0xb0)
1c006f24:	2982b07d 	st.w	$r29,$r3,172(0xac)
1c006f28:	2982a07e 	st.w	$r30,$r3,168(0xa8)
1c006f2c:	29802067 	st.w	$r7,$r3,8(0x8)
1c006f30:	0015009b 	move	$r27,$r4
1c006f34:	001500ba 	move	$r26,$r5
1c006f38:	001500df 	move	$r31,$r6
1c006f3c:	58000c80 	beq	$r4,$r0,12(0xc) # 1c006f48 <_vfiprintf_r+0x4c>
1c006f40:	2880e089 	ld.w	$r9,$r4,56(0x38)
1c006f44:	58096120 	beq	$r9,$r0,2400(0x960) # 1c0078a4 <_vfiprintf_r+0x9a8>
1c006f48:	28403348 	ld.h	$r8,$r26,12(0xc)
1c006f4c:	14000047 	lu12i.w	$r7,2(0x2)
1c006f50:	0040c109 	slli.w	$r9,$r8,0x10
1c006f54:	0044c129 	srli.w	$r9,$r9,0x10
1c006f58:	00149d26 	and	$r6,$r9,$r7
1c006f5c:	5c0028c0 	bne	$r6,$r0,40(0x28) # 1c006f84 <_vfiprintf_r+0x88>
1c006f60:	28818346 	ld.w	$r6,$r26,96(0x60)
1c006f64:	00151d09 	or	$r9,$r8,$r7
1c006f68:	15ffffa8 	lu12i.w	$r8,-3(0xffffd)
1c006f6c:	03bffd08 	ori	$r8,$r8,0xfff
1c006f70:	0014a0c8 	and	$r8,$r6,$r8
1c006f74:	29403349 	st.h	$r9,$r26,12(0xc)
1c006f78:	0040c129 	slli.w	$r9,$r9,0x10
1c006f7c:	29818348 	st.w	$r8,$r26,96(0x60)
1c006f80:	0044c129 	srli.w	$r9,$r9,0x10
1c006f84:	03402128 	andi	$r8,$r9,0x8
1c006f88:	58012500 	beq	$r8,$r0,292(0x124) # 1c0070ac <_vfiprintf_r+0x1b0>
1c006f8c:	28804348 	ld.w	$r8,$r26,16(0x10)
1c006f90:	58011d00 	beq	$r8,$r0,284(0x11c) # 1c0070ac <_vfiprintf_r+0x1b0>
1c006f94:	03406929 	andi	$r9,$r9,0x1a
1c006f98:	02802808 	addi.w	$r8,$r0,10(0xa)
1c006f9c:	58013128 	beq	$r9,$r8,304(0x130) # 1c0070cc <_vfiprintf_r+0x1d0>
1c006fa0:	140000e9 	lu12i.w	$r9,7(0x7)
1c006fa4:	02818077 	addi.w	$r23,$r3,96(0x60)
1c006fa8:	03a0c129 	ori	$r9,$r9,0x830
1c006fac:	2980b077 	st.w	$r23,$r3,44(0x2c)
1c006fb0:	2980d060 	st.w	$r0,$r3,52(0x34)
1c006fb4:	2980c060 	st.w	$r0,$r3,48(0x30)
1c006fb8:	001502e8 	move	$r8,$r23
1c006fbc:	29803060 	st.w	$r0,$r3,12(0xc)
1c006fc0:	29800060 	st.w	$r0,$r3,0
1c006fc4:	29407869 	st.h	$r9,$r3,30(0x1e)
1c006fc8:	280003e9 	ld.b	$r9,$r31,0
1c006fcc:	58013120 	beq	$r9,$r0,304(0x130) # 1c0070fc <_vfiprintf_r+0x200>
1c006fd0:	02809407 	addi.w	$r7,$r0,37(0x25)
1c006fd4:	580db127 	beq	$r9,$r7,3504(0xdb0) # 1c007d84 <_vfiprintf_r+0xe88>
1c006fd8:	001503f6 	move	$r22,$r31
1c006fdc:	50000c00 	b	12(0xc) # 1c006fe8 <_vfiprintf_r+0xec>
1c006fe0:	58011127 	beq	$r9,$r7,272(0x110) # 1c0070f0 <_vfiprintf_r+0x1f4>
1c006fe4:	00150316 	move	$r22,$r24
1c006fe8:	280006c9 	ld.b	$r9,$r22,1(0x1)
1c006fec:	028006d8 	addi.w	$r24,$r22,1(0x1)
1c006ff0:	5ffff120 	bne	$r9,$r0,-16(0x3fff0) # 1c006fe0 <_vfiprintf_r+0xe4>
1c006ff4:	00117f19 	sub.w	$r25,$r24,$r31
1c006ff8:	58010720 	beq	$r25,$r0,260(0x104) # 1c0070fc <_vfiprintf_r+0x200>
1c006ffc:	2880d067 	ld.w	$r7,$r3,52(0x34)
1c007000:	2880c069 	ld.w	$r9,$r3,48(0x30)
1c007004:	2980011f 	st.w	$r31,$r8,0
1c007008:	00101f27 	add.w	$r7,$r25,$r7
1c00700c:	02800529 	addi.w	$r9,$r9,1(0x1)
1c007010:	29801119 	st.w	$r25,$r8,4(0x4)
1c007014:	2980d067 	st.w	$r7,$r3,52(0x34)
1c007018:	2980c069 	st.w	$r9,$r3,48(0x30)
1c00701c:	02801c06 	addi.w	$r6,$r0,7(0x7)
1c007020:	02802108 	addi.w	$r8,$r8,8(0x8)
1c007024:	640020c9 	bge	$r6,$r9,32(0x20) # 1c007044 <_vfiprintf_r+0x148>
1c007028:	580d14e0 	beq	$r7,$r0,3348(0xd14) # 1c007d3c <_vfiprintf_r+0xe40>
1c00702c:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007030:	00150345 	move	$r5,$r26
1c007034:	00150364 	move	$r4,$r27
1c007038:	57fdafff 	bl	-596(0xffffdac) # 1c006de4 <__sprint_r.part.0>
1c00703c:	5c00d880 	bne	$r4,$r0,216(0xd8) # 1c007114 <_vfiprintf_r+0x218>
1c007040:	001502e8 	move	$r8,$r23
1c007044:	28800067 	ld.w	$r7,$r3,0
1c007048:	280006c9 	ld.b	$r9,$r22,1(0x1)
1c00704c:	001064e7 	add.w	$r7,$r7,$r25
1c007050:	29800067 	st.w	$r7,$r3,0
1c007054:	5800a920 	beq	$r9,$r0,168(0xa8) # 1c0070fc <_vfiprintf_r+0x200>
1c007058:	28000707 	ld.b	$r7,$r24,1(0x1)
1c00705c:	0280071f 	addi.w	$r31,$r24,1(0x1)
1c007060:	29009c60 	st.b	$r0,$r3,39(0x27)
1c007064:	0015000d 	move	$r13,$r0
1c007068:	00150010 	move	$r16,$r0
1c00706c:	02bffc1d 	addi.w	$r29,$r0,-1(0xfff)
1c007070:	00150016 	move	$r22,$r0
1c007074:	0015000f 	move	$r15,$r0
1c007078:	02816005 	addi.w	$r5,$r0,88(0x58)
1c00707c:	02802404 	addi.w	$r4,$r0,9(0x9)
1c007080:	0280a812 	addi.w	$r18,$r0,42(0x2a)
1c007084:	0281b011 	addi.w	$r17,$r0,108(0x6c)
1c007088:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c00708c:	02bf80e9 	addi.w	$r9,$r7,-32(0xfe0)
1c007090:	6800f8a9 	bltu	$r5,$r9,248(0xf8) # 1c007188 <_vfiprintf_r+0x28c>
1c007094:	00408929 	slli.w	$r9,$r9,0x2
1c007098:	1dc7ff66 	pcaddu12i	$r6,-114693(0xe3ffb)
1c00709c:	02bba0c6 	addi.w	$r6,$r6,-280(0xee8)
1c0070a0:	00101929 	add.w	$r9,$r9,$r6
1c0070a4:	28800129 	ld.w	$r9,$r9,0
1c0070a8:	4c000120 	jirl	$r0,$r9,0
1c0070ac:	00150345 	move	$r5,$r26
1c0070b0:	00150364 	move	$r4,$r27
1c0070b4:	57b74fff 	bl	-18612(0xfffb74c) # 1c002800 <__swsetup_r>
1c0070b8:	5c0f5480 	bne	$r4,$r0,3924(0xf54) # 1c00800c <_vfiprintf_r+0x1110>
1c0070bc:	2a403349 	ld.hu	$r9,$r26,12(0xc)
1c0070c0:	02802808 	addi.w	$r8,$r0,10(0xa)
1c0070c4:	03406929 	andi	$r9,$r9,0x1a
1c0070c8:	5ffed928 	bne	$r9,$r8,-296(0x3fed8) # 1c006fa0 <_vfiprintf_r+0xa4>
1c0070cc:	28403b49 	ld.h	$r9,$r26,14(0xe)
1c0070d0:	63fed120 	blt	$r9,$r0,-304(0x3fed0) # 1c006fa0 <_vfiprintf_r+0xa4>
1c0070d4:	28802067 	ld.w	$r7,$r3,8(0x8)
1c0070d8:	001503e6 	move	$r6,$r31
1c0070dc:	00150345 	move	$r5,$r26
1c0070e0:	00150364 	move	$r4,$r27
1c0070e4:	540f7c00 	bl	3964(0xf7c) # 1c008060 <__sbprintf>
1c0070e8:	29800064 	st.w	$r4,$r3,0
1c0070ec:	50003400 	b	52(0x34) # 1c007120 <_vfiprintf_r+0x224>
1c0070f0:	00117f19 	sub.w	$r25,$r24,$r31
1c0070f4:	5bff6720 	beq	$r25,$r0,-156(0x3ff64) # 1c007058 <_vfiprintf_r+0x15c>
1c0070f8:	53ff07ff 	b	-252(0xfffff04) # 1c006ffc <_vfiprintf_r+0x100>
1c0070fc:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007100:	58001520 	beq	$r9,$r0,20(0x14) # 1c007114 <_vfiprintf_r+0x218>
1c007104:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007108:	00150345 	move	$r5,$r26
1c00710c:	00150364 	move	$r4,$r27
1c007110:	57fcd7ff 	bl	-812(0xffffcd4) # 1c006de4 <__sprint_r.part.0>
1c007114:	2a403349 	ld.hu	$r9,$r26,12(0xc)
1c007118:	03410129 	andi	$r9,$r9,0x40
1c00711c:	5c0ef120 	bne	$r9,$r0,3824(0xef0) # 1c00800c <_vfiprintf_r+0x1110>
1c007120:	28833061 	ld.w	$r1,$r3,204(0xcc)
1c007124:	28832076 	ld.w	$r22,$r3,200(0xc8)
1c007128:	28800064 	ld.w	$r4,$r3,0
1c00712c:	28831077 	ld.w	$r23,$r3,196(0xc4)
1c007130:	28830078 	ld.w	$r24,$r3,192(0xc0)
1c007134:	2882f079 	ld.w	$r25,$r3,188(0xbc)
1c007138:	2882e07a 	ld.w	$r26,$r3,184(0xb8)
1c00713c:	2882d07b 	ld.w	$r27,$r3,180(0xb4)
1c007140:	2882c07c 	ld.w	$r28,$r3,176(0xb0)
1c007144:	2882b07d 	ld.w	$r29,$r3,172(0xac)
1c007148:	2882a07e 	ld.w	$r30,$r3,168(0xa8)
1c00714c:	2882907f 	ld.w	$r31,$r3,164(0xa4)
1c007150:	02834063 	addi.w	$r3,$r3,208(0xd0)
1c007154:	4c000020 	jirl	$r0,$r1,0
1c007158:	00150016 	move	$r22,$r0
1c00715c:	02bf40e6 	addi.w	$r6,$r7,-48(0xfd0)
1c007160:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c007164:	00408ac9 	slli.w	$r9,$r22,0x2
1c007168:	283fffe7 	ld.b	$r7,$r31,-1(0xfff)
1c00716c:	00105936 	add.w	$r22,$r9,$r22
1c007170:	004086d6 	slli.w	$r22,$r22,0x1
1c007174:	001058d6 	add.w	$r22,$r6,$r22
1c007178:	02bf40e6 	addi.w	$r6,$r7,-48(0xfd0)
1c00717c:	6fffe486 	bgeu	$r4,$r6,-28(0x3ffe4) # 1c007160 <_vfiprintf_r+0x264>
1c007180:	02bf80e9 	addi.w	$r9,$r7,-32(0xfe0)
1c007184:	6fff10a9 	bgeu	$r5,$r9,-240(0x3ff10) # 1c007094 <_vfiprintf_r+0x198>
1c007188:	5c0de9a0 	bne	$r13,$r0,3560(0xde8) # 1c007f70 <_vfiprintf_r+0x1074>
1c00718c:	5bff70e0 	beq	$r7,$r0,-144(0x3ff70) # 1c0070fc <_vfiprintf_r+0x200>
1c007190:	2900e067 	st.b	$r7,$r3,56(0x38)
1c007194:	29009c60 	st.b	$r0,$r3,39(0x27)
1c007198:	02800419 	addi.w	$r25,$r0,1(0x1)
1c00719c:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c0071a0:	0280e07e 	addi.w	$r30,$r3,56(0x38)
1c0071a4:	50026c00 	b	620(0x26c) # 1c007410 <_vfiprintf_r+0x514>
1c0071a8:	038201ef 	ori	$r15,$r15,0x80
1c0071ac:	280003e7 	ld.b	$r7,$r31,0
1c0071b0:	53fedbff 	b	-296(0xffffed8) # 1c007088 <_vfiprintf_r+0x18c>
1c0071b4:	280003e7 	ld.b	$r7,$r31,0
1c0071b8:	028007e9 	addi.w	$r9,$r31,1(0x1)
1c0071bc:	580e64f2 	beq	$r7,$r18,3684(0xe64) # 1c008020 <_vfiprintf_r+0x1124>
1c0071c0:	02bf40e6 	addi.w	$r6,$r7,-48(0xfd0)
1c0071c4:	0015013f 	move	$r31,$r9
1c0071c8:	0015001d 	move	$r29,$r0
1c0071cc:	6bfec086 	bltu	$r4,$r6,-320(0x3fec0) # 1c00708c <_vfiprintf_r+0x190>
1c0071d0:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c0071d4:	00408ba9 	slli.w	$r9,$r29,0x2
1c0071d8:	283fffe7 	ld.b	$r7,$r31,-1(0xfff)
1c0071dc:	0010752a 	add.w	$r10,$r9,$r29
1c0071e0:	0040854a 	slli.w	$r10,$r10,0x1
1c0071e4:	0010195d 	add.w	$r29,$r10,$r6
1c0071e8:	02bf40e6 	addi.w	$r6,$r7,-48(0xfd0)
1c0071ec:	6fffe486 	bgeu	$r4,$r6,-28(0x3ffe4) # 1c0071d0 <_vfiprintf_r+0x2d4>
1c0071f0:	53fe9fff 	b	-356(0xffffe9c) # 1c00708c <_vfiprintf_r+0x190>
1c0071f4:	280003e7 	ld.b	$r7,$r31,0
1c0071f8:	038011ef 	ori	$r15,$r15,0x4
1c0071fc:	53fe8fff 	b	-372(0xffffe8c) # 1c007088 <_vfiprintf_r+0x18c>
1c007200:	280003e7 	ld.b	$r7,$r31,0
1c007204:	0280040d 	addi.w	$r13,$r0,1(0x1)
1c007208:	0280ac10 	addi.w	$r16,$r0,43(0x2b)
1c00720c:	53fe7fff 	b	-388(0xffffe7c) # 1c007088 <_vfiprintf_r+0x18c>
1c007210:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007214:	280003e7 	ld.b	$r7,$r31,0
1c007218:	28800136 	ld.w	$r22,$r9,0
1c00721c:	02801129 	addi.w	$r9,$r9,4(0x4)
1c007220:	29802069 	st.w	$r9,$r3,8(0x8)
1c007224:	67fe66c0 	bge	$r22,$r0,-412(0x3fe64) # 1c007088 <_vfiprintf_r+0x18c>
1c007228:	00115816 	sub.w	$r22,$r0,$r22
1c00722c:	038011ef 	ori	$r15,$r15,0x4
1c007230:	53fe5bff 	b	-424(0xffffe58) # 1c007088 <_vfiprintf_r+0x18c>
1c007234:	038005ef 	ori	$r15,$r15,0x1
1c007238:	280003e7 	ld.b	$r7,$r31,0
1c00723c:	53fe4fff 	b	-436(0xffffe4c) # 1c007088 <_vfiprintf_r+0x18c>
1c007240:	280003e7 	ld.b	$r7,$r31,0
1c007244:	5ffe4600 	bne	$r16,$r0,-444(0x3fe44) # 1c007088 <_vfiprintf_r+0x18c>
1c007248:	0280040d 	addi.w	$r13,$r0,1(0x1)
1c00724c:	02808010 	addi.w	$r16,$r0,32(0x20)
1c007250:	53fe3bff 	b	-456(0xffffe38) # 1c007088 <_vfiprintf_r+0x18c>
1c007254:	5c0d5da0 	bne	$r13,$r0,3420(0xd5c) # 1c007fb0 <_vfiprintf_r+0x10b4>
1c007258:	1dc7ff69 	pcaddu12i	$r9,-114693(0xe3ffb)
1c00725c:	02b43129 	addi.w	$r9,$r9,-756(0xd0c)
1c007260:	29803069 	st.w	$r9,$r3,12(0xc)
1c007264:	034081e9 	andi	$r9,$r15,0x20
1c007268:	5803ed20 	beq	$r9,$r0,1004(0x3ec) # 1c007654 <_vfiprintf_r+0x758>
1c00726c:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007270:	02bfe006 	addi.w	$r6,$r0,-8(0xff8)
1c007274:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c007278:	00149929 	and	$r9,$r9,$r6
1c00727c:	28800139 	ld.w	$r25,$r9,0
1c007280:	2880113c 	ld.w	$r28,$r9,4(0x4)
1c007284:	02802126 	addi.w	$r6,$r9,8(0x8)
1c007288:	29802066 	st.w	$r6,$r3,8(0x8)
1c00728c:	034005e6 	andi	$r6,$r15,0x1
1c007290:	02800809 	addi.w	$r9,$r0,2(0x2)
1c007294:	58042cc0 	beq	$r6,$r0,1068(0x42c) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c007298:	00157326 	or	$r6,$r25,$r28
1c00729c:	580424c0 	beq	$r6,$r0,1060(0x424) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c0072a0:	0280c006 	addi.w	$r6,$r0,48(0x30)
1c0072a4:	2900a066 	st.b	$r6,$r3,40(0x28)
1c0072a8:	2900a467 	st.b	$r7,$r3,41(0x29)
1c0072ac:	038009ef 	ori	$r15,$r15,0x2
1c0072b0:	50041000 	b	1040(0x410) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c0072b4:	5c0cdda0 	bne	$r13,$r0,3292(0xcdc) # 1c007f90 <_vfiprintf_r+0x1094>
1c0072b8:	034081e9 	andi	$r9,$r15,0x20
1c0072bc:	5c061920 	bne	$r9,$r0,1560(0x618) # 1c0078d4 <_vfiprintf_r+0x9d8>
1c0072c0:	28802069 	ld.w	$r9,$r3,8(0x8)
1c0072c4:	034041e7 	andi	$r7,$r15,0x10
1c0072c8:	28800139 	ld.w	$r25,$r9,0
1c0072cc:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0072d0:	5c0540e0 	bne	$r7,$r0,1344(0x540) # 1c007810 <_vfiprintf_r+0x914>
1c0072d4:	034101e7 	andi	$r7,$r15,0x40
1c0072d8:	580c38e0 	beq	$r7,$r0,3128(0xc38) # 1c007f10 <_vfiprintf_r+0x1014>
1c0072dc:	0040c339 	slli.w	$r25,$r25,0x10
1c0072e0:	29802069 	st.w	$r9,$r3,8(0x8)
1c0072e4:	0044c339 	srli.w	$r25,$r25,0x10
1c0072e8:	0015001c 	move	$r28,$r0
1c0072ec:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0072f0:	5003d000 	b	976(0x3d0) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c0072f4:	28802069 	ld.w	$r9,$r3,8(0x8)
1c0072f8:	29009c60 	st.b	$r0,$r3,39(0x27)
1c0072fc:	2880013e 	ld.w	$r30,$r9,0
1c007300:	02801138 	addi.w	$r24,$r9,4(0x4)
1c007304:	580bebc0 	beq	$r30,$r0,3048(0xbe8) # 1c007eec <_vfiprintf_r+0xff0>
1c007308:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c00730c:	580affa9 	beq	$r29,$r9,2812(0xafc) # 1c007e08 <_vfiprintf_r+0xf0c>
1c007310:	001503a6 	move	$r6,$r29
1c007314:	00150005 	move	$r5,$r0
1c007318:	001503c4 	move	$r4,$r30
1c00731c:	29802068 	st.w	$r8,$r3,8(0x8)
1c007320:	2980106f 	st.w	$r15,$r3,4(0x4)
1c007324:	57e43bff 	bl	-7112(0xfffe438) # 1c00575c <memchr>
1c007328:	2880106f 	ld.w	$r15,$r3,4(0x4)
1c00732c:	28802068 	ld.w	$r8,$r3,8(0x8)
1c007330:	580c4880 	beq	$r4,$r0,3144(0xc48) # 1c007f78 <_vfiprintf_r+0x107c>
1c007334:	28009c70 	ld.b	$r16,$r3,39(0x27)
1c007338:	29802078 	st.w	$r24,$r3,8(0x8)
1c00733c:	0011789c 	sub.w	$r28,$r4,$r30
1c007340:	001501f8 	move	$r24,$r15
1c007344:	0015001d 	move	$r29,$r0
1c007348:	001503b9 	move	$r25,$r29
1c00734c:	64000bbc 	bge	$r29,$r28,8(0x8) # 1c007354 <_vfiprintf_r+0x458>
1c007350:	00150399 	move	$r25,$r28
1c007354:	0012c010 	sltu	$r16,$r0,$r16
1c007358:	00104339 	add.w	$r25,$r25,$r16
1c00735c:	5000bc00 	b	188(0xbc) # 1c007418 <_vfiprintf_r+0x51c>
1c007360:	280003e7 	ld.b	$r7,$r31,0
1c007364:	580b78f1 	beq	$r7,$r17,2936(0xb78) # 1c007edc <_vfiprintf_r+0xfe0>
1c007368:	038041ef 	ori	$r15,$r15,0x10
1c00736c:	53fd1fff 	b	-740(0xffffd1c) # 1c007088 <_vfiprintf_r+0x18c>
1c007370:	038101ef 	ori	$r15,$r15,0x40
1c007374:	280003e7 	ld.b	$r7,$r31,0
1c007378:	53fd13ff 	b	-752(0xffffd10) # 1c007088 <_vfiprintf_r+0x18c>
1c00737c:	5c0c25a0 	bne	$r13,$r0,3108(0xc24) # 1c007fa0 <_vfiprintf_r+0x10a4>
1c007380:	034081e9 	andi	$r9,$r15,0x20
1c007384:	5c057920 	bne	$r9,$r0,1400(0x578) # 1c0078fc <_vfiprintf_r+0xa00>
1c007388:	28802069 	ld.w	$r9,$r3,8(0x8)
1c00738c:	034041e7 	andi	$r7,$r15,0x10
1c007390:	02801129 	addi.w	$r9,$r9,4(0x4)
1c007394:	5c03b8e0 	bne	$r7,$r0,952(0x3b8) # 1c00774c <_vfiprintf_r+0x850>
1c007398:	034101e7 	andi	$r7,$r15,0x40
1c00739c:	5803b0e0 	beq	$r7,$r0,944(0x3b0) # 1c00774c <_vfiprintf_r+0x850>
1c0073a0:	28802067 	ld.w	$r7,$r3,8(0x8)
1c0073a4:	29802069 	st.w	$r9,$r3,8(0x8)
1c0073a8:	284000f9 	ld.h	$r25,$r7,0
1c0073ac:	0048ff3c 	srai.w	$r28,$r25,0x1f
1c0073b0:	00150387 	move	$r7,$r28
1c0073b4:	6003b0e0 	blt	$r7,$r0,944(0x3b0) # 1c007764 <_vfiprintf_r+0x868>
1c0073b8:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c0073bc:	28009c70 	ld.b	$r16,$r3,39(0x27)
1c0073c0:	580567a9 	beq	$r29,$r9,1380(0x564) # 1c007924 <_vfiprintf_r+0xa28>
1c0073c4:	02bdfc07 	addi.w	$r7,$r0,-129(0xf7f)
1c0073c8:	00157329 	or	$r9,$r25,$r28
1c0073cc:	00149def 	and	$r15,$r15,$r7
1c0073d0:	5c055520 	bne	$r9,$r0,1364(0x554) # 1c007924 <_vfiprintf_r+0xa28>
1c0073d4:	5c055fa0 	bne	$r29,$r0,1372(0x55c) # 1c007930 <_vfiprintf_r+0xa34>
1c0073d8:	001501f8 	move	$r24,$r15
1c0073dc:	0015001d 	move	$r29,$r0
1c0073e0:	0015001c 	move	$r28,$r0
1c0073e4:	001502fe 	move	$r30,$r23
1c0073e8:	53ff63ff 	b	-160(0xfffff60) # 1c007348 <_vfiprintf_r+0x44c>
1c0073ec:	28802067 	ld.w	$r7,$r3,8(0x8)
1c0073f0:	29009c60 	st.b	$r0,$r3,39(0x27)
1c0073f4:	02800419 	addi.w	$r25,$r0,1(0x1)
1c0073f8:	288000e9 	ld.w	$r9,$r7,0
1c0073fc:	028010e7 	addi.w	$r7,$r7,4(0x4)
1c007400:	29802067 	st.w	$r7,$r3,8(0x8)
1c007404:	2900e069 	st.b	$r9,$r3,56(0x38)
1c007408:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c00740c:	0280e07e 	addi.w	$r30,$r3,56(0x38)
1c007410:	001501f8 	move	$r24,$r15
1c007414:	0015001d 	move	$r29,$r0
1c007418:	03400b13 	andi	$r19,$r24,0x2
1c00741c:	58000a60 	beq	$r19,$r0,8(0x8) # 1c007424 <_vfiprintf_r+0x528>
1c007420:	02800b39 	addi.w	$r25,$r25,2(0x2)
1c007424:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007428:	03421312 	andi	$r18,$r24,0x84
1c00742c:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007430:	028004e6 	addi.w	$r6,$r7,1(0x1)
1c007434:	001500c5 	move	$r5,$r6
1c007438:	5c000e40 	bne	$r18,$r0,12(0xc) # 1c007444 <_vfiprintf_r+0x548>
1c00743c:	001166cf 	sub.w	$r15,$r22,$r25
1c007440:	6007d40f 	blt	$r0,$r15,2004(0x7d4) # 1c007c14 <_vfiprintf_r+0xd18>
1c007444:	28009c64 	ld.b	$r4,$r3,39(0x27)
1c007448:	02802106 	addi.w	$r6,$r8,8(0x8)
1c00744c:	58003880 	beq	$r4,$r0,56(0x38) # 1c007484 <_vfiprintf_r+0x588>
1c007450:	02809c67 	addi.w	$r7,$r3,39(0x27)
1c007454:	29800107 	st.w	$r7,$r8,0
1c007458:	02800529 	addi.w	$r9,$r9,1(0x1)
1c00745c:	02800407 	addi.w	$r7,$r0,1(0x1)
1c007460:	29801107 	st.w	$r7,$r8,4(0x4)
1c007464:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007468:	2980c065 	st.w	$r5,$r3,48(0x30)
1c00746c:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c007470:	60072105 	blt	$r8,$r5,1824(0x720) # 1c007b90 <_vfiprintf_r+0xc94>
1c007474:	001500a7 	move	$r7,$r5
1c007478:	001500c8 	move	$r8,$r6
1c00747c:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c007480:	028020c6 	addi.w	$r6,$r6,8(0x8)
1c007484:	58005e60 	beq	$r19,$r0,92(0x5c) # 1c0074e0 <_vfiprintf_r+0x5e4>
1c007488:	0280a067 	addi.w	$r7,$r3,40(0x28)
1c00748c:	29800107 	st.w	$r7,$r8,0
1c007490:	02800929 	addi.w	$r9,$r9,2(0x2)
1c007494:	02800807 	addi.w	$r7,$r0,2(0x2)
1c007498:	29801107 	st.w	$r7,$r8,4(0x4)
1c00749c:	2980d069 	st.w	$r9,$r3,52(0x34)
1c0074a0:	2980c065 	st.w	$r5,$r3,48(0x30)
1c0074a4:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c0074a8:	64075105 	bge	$r8,$r5,1872(0x750) # 1c007bf8 <_vfiprintf_r+0xcfc>
1c0074ac:	5808c520 	beq	$r9,$r0,2244(0x8c4) # 1c007d70 <_vfiprintf_r+0xe74>
1c0074b0:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c0074b4:	00150345 	move	$r5,$r26
1c0074b8:	00150364 	move	$r4,$r27
1c0074bc:	29801072 	st.w	$r18,$r3,4(0x4)
1c0074c0:	57f927ff 	bl	-1756(0xffff924) # 1c006de4 <__sprint_r.part.0>
1c0074c4:	5ffc5080 	bne	$r4,$r0,-944(0x3fc50) # 1c007114 <_vfiprintf_r+0x218>
1c0074c8:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c0074cc:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c0074d0:	28801072 	ld.w	$r18,$r3,4(0x4)
1c0074d4:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c0074d8:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c0074dc:	001502e8 	move	$r8,$r23
1c0074e0:	02820004 	addi.w	$r4,$r0,128(0x80)
1c0074e4:	5804ca44 	beq	$r18,$r4,1224(0x4c8) # 1c0079ac <_vfiprintf_r+0xab0>
1c0074e8:	001173bd 	sub.w	$r29,$r29,$r28
1c0074ec:	6005b01d 	blt	$r0,$r29,1456(0x5b0) # 1c007a9c <_vfiprintf_r+0xba0>
1c0074f0:	00102789 	add.w	$r9,$r28,$r9
1c0074f4:	2980011e 	st.w	$r30,$r8,0
1c0074f8:	2980111c 	st.w	$r28,$r8,4(0x4)
1c0074fc:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007500:	2980c065 	st.w	$r5,$r3,48(0x30)
1c007504:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c007508:	64002505 	bge	$r8,$r5,36(0x24) # 1c00752c <_vfiprintf_r+0x630>
1c00750c:	58005520 	beq	$r9,$r0,84(0x54) # 1c007560 <_vfiprintf_r+0x664>
1c007510:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007514:	00150345 	move	$r5,$r26
1c007518:	00150364 	move	$r4,$r27
1c00751c:	57f8cbff 	bl	-1848(0xffff8c8) # 1c006de4 <__sprint_r.part.0>
1c007520:	5ffbf480 	bne	$r4,$r0,-1036(0x3fbf4) # 1c007114 <_vfiprintf_r+0x218>
1c007524:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007528:	001502e6 	move	$r6,$r23
1c00752c:	03401318 	andi	$r24,$r24,0x4
1c007530:	58000f00 	beq	$r24,$r0,12(0xc) # 1c00753c <_vfiprintf_r+0x640>
1c007534:	001166d8 	sub.w	$r24,$r22,$r25
1c007538:	60004018 	blt	$r0,$r24,64(0x40) # 1c007578 <_vfiprintf_r+0x67c>
1c00753c:	64000ad9 	bge	$r22,$r25,8(0x8) # 1c007544 <_vfiprintf_r+0x648>
1c007540:	00150336 	move	$r22,$r25
1c007544:	28800068 	ld.w	$r8,$r3,0
1c007548:	00105908 	add.w	$r8,$r8,$r22
1c00754c:	29800068 	st.w	$r8,$r3,0
1c007550:	5c061920 	bne	$r9,$r0,1560(0x618) # 1c007b68 <_vfiprintf_r+0xc6c>
1c007554:	2980c060 	st.w	$r0,$r3,48(0x30)
1c007558:	001502e8 	move	$r8,$r23
1c00755c:	53fa6fff 	b	-1428(0xffffa6c) # 1c006fc8 <_vfiprintf_r+0xcc>
1c007560:	2980c060 	st.w	$r0,$r3,48(0x30)
1c007564:	03401318 	andi	$r24,$r24,0x4
1c007568:	58078f00 	beq	$r24,$r0,1932(0x78c) # 1c007cf4 <_vfiprintf_r+0xdf8>
1c00756c:	001166d8 	sub.w	$r24,$r22,$r25
1c007570:	64078418 	bge	$r0,$r24,1924(0x784) # 1c007cf4 <_vfiprintf_r+0xdf8>
1c007574:	001502e6 	move	$r6,$r23
1c007578:	02804008 	addi.w	$r8,$r0,16(0x10)
1c00757c:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007580:	640a6918 	bge	$r8,$r24,2664(0xa68) # 1c007fe8 <_vfiprintf_r+0x10ec>
1c007584:	1dc7ff70 	pcaddu12i	$r16,-114693(0xe3ffb)
1c007588:	02adc210 	addi.w	$r16,$r16,-1168(0xb70)
1c00758c:	0280401c 	addi.w	$r28,$r0,16(0x10)
1c007590:	02801c1d 	addi.w	$r29,$r0,7(0x7)
1c007594:	50001800 	b	24(0x18) # 1c0075ac <_vfiprintf_r+0x6b0>
1c007598:	028008e5 	addi.w	$r5,$r7,2(0x2)
1c00759c:	028020c6 	addi.w	$r6,$r6,8(0x8)
1c0075a0:	00150107 	move	$r7,$r8
1c0075a4:	02bfc318 	addi.w	$r24,$r24,-16(0xff0)
1c0075a8:	64005b98 	bge	$r28,$r24,88(0x58) # 1c007600 <_vfiprintf_r+0x704>
1c0075ac:	02804129 	addi.w	$r9,$r9,16(0x10)
1c0075b0:	028004e8 	addi.w	$r8,$r7,1(0x1)
1c0075b4:	298000d0 	st.w	$r16,$r6,0
1c0075b8:	298010dc 	st.w	$r28,$r6,4(0x4)
1c0075bc:	2980d069 	st.w	$r9,$r3,52(0x34)
1c0075c0:	2980c068 	st.w	$r8,$r3,48(0x30)
1c0075c4:	67ffd7a8 	bge	$r29,$r8,-44(0x3ffd4) # 1c007598 <_vfiprintf_r+0x69c>
1c0075c8:	5803d520 	beq	$r9,$r0,980(0x3d4) # 1c00799c <_vfiprintf_r+0xaa0>
1c0075cc:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c0075d0:	00150345 	move	$r5,$r26
1c0075d4:	00150364 	move	$r4,$r27
1c0075d8:	29801070 	st.w	$r16,$r3,4(0x4)
1c0075dc:	57f80bff 	bl	-2040(0xffff808) # 1c006de4 <__sprint_r.part.0>
1c0075e0:	5ffb3480 	bne	$r4,$r0,-1228(0x3fb34) # 1c007114 <_vfiprintf_r+0x218>
1c0075e4:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c0075e8:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c0075ec:	02bfc318 	addi.w	$r24,$r24,-16(0xff0)
1c0075f0:	001502e6 	move	$r6,$r23
1c0075f4:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c0075f8:	28801070 	ld.w	$r16,$r3,4(0x4)
1c0075fc:	63ffb398 	blt	$r28,$r24,-80(0x3ffb0) # 1c0075ac <_vfiprintf_r+0x6b0>
1c007600:	00106129 	add.w	$r9,$r9,$r24
1c007604:	298000d0 	st.w	$r16,$r6,0
1c007608:	298010d8 	st.w	$r24,$r6,4(0x4)
1c00760c:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007610:	2980c065 	st.w	$r5,$r3,48(0x30)
1c007614:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c007618:	67ff2505 	bge	$r8,$r5,-220(0x3ff24) # 1c00753c <_vfiprintf_r+0x640>
1c00761c:	5806d920 	beq	$r9,$r0,1752(0x6d8) # 1c007cf4 <_vfiprintf_r+0xdf8>
1c007620:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007624:	00150345 	move	$r5,$r26
1c007628:	00150364 	move	$r4,$r27
1c00762c:	57f7bbff 	bl	-2120(0xffff7b8) # 1c006de4 <__sprint_r.part.0>
1c007630:	5ffae480 	bne	$r4,$r0,-1308(0x3fae4) # 1c007114 <_vfiprintf_r+0x218>
1c007634:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007638:	53ff07ff 	b	-252(0xfffff04) # 1c00753c <_vfiprintf_r+0x640>
1c00763c:	5c096da0 	bne	$r13,$r0,2412(0x96c) # 1c007fa8 <_vfiprintf_r+0x10ac>
1c007640:	1dc7ff69 	pcaddu12i	$r9,-114693(0xe3ffb)
1c007644:	02a44129 	addi.w	$r9,$r9,-1776(0x910)
1c007648:	29803069 	st.w	$r9,$r3,12(0xc)
1c00764c:	034081e9 	andi	$r9,$r15,0x20
1c007650:	5ffc1d20 	bne	$r9,$r0,-996(0x3fc1c) # 1c00726c <_vfiprintf_r+0x370>
1c007654:	28802066 	ld.w	$r6,$r3,8(0x8)
1c007658:	034041e9 	andi	$r9,$r15,0x10
1c00765c:	288000d9 	ld.w	$r25,$r6,0
1c007660:	028010c6 	addi.w	$r6,$r6,4(0x4)
1c007664:	29802066 	st.w	$r6,$r3,8(0x8)
1c007668:	5c06e120 	bne	$r9,$r0,1760(0x6e0) # 1c007d48 <_vfiprintf_r+0xe4c>
1c00766c:	034101e9 	andi	$r9,$r15,0x40
1c007670:	5806d920 	beq	$r9,$r0,1752(0x6d8) # 1c007d48 <_vfiprintf_r+0xe4c>
1c007674:	0040c339 	slli.w	$r25,$r25,0x10
1c007678:	0044c339 	srli.w	$r25,$r25,0x10
1c00767c:	0015001c 	move	$r28,$r0
1c007680:	53fc0fff 	b	-1012(0xffffc0c) # 1c00728c <_vfiprintf_r+0x390>
1c007684:	038081ef 	ori	$r15,$r15,0x20
1c007688:	280003e7 	ld.b	$r7,$r31,0
1c00768c:	53f9ffff 	b	-1540(0xffff9fc) # 1c007088 <_vfiprintf_r+0x18c>
1c007690:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007694:	2a407867 	ld.hu	$r7,$r3,30(0x1e)
1c007698:	0015001c 	move	$r28,$r0
1c00769c:	28800139 	ld.w	$r25,$r9,0
1c0076a0:	02801129 	addi.w	$r9,$r9,4(0x4)
1c0076a4:	29802069 	st.w	$r9,$r3,8(0x8)
1c0076a8:	1dc7ff69 	pcaddu12i	$r9,-114693(0xe3ffb)
1c0076ac:	02a2f129 	addi.w	$r9,$r9,-1860(0x8bc)
1c0076b0:	29803069 	st.w	$r9,$r3,12(0xc)
1c0076b4:	038009ef 	ori	$r15,$r15,0x2
1c0076b8:	2940a067 	st.h	$r7,$r3,40(0x28)
1c0076bc:	02800809 	addi.w	$r9,$r0,2(0x2)
1c0076c0:	29009c60 	st.b	$r0,$r3,39(0x27)
1c0076c4:	02bffc07 	addi.w	$r7,$r0,-1(0xfff)
1c0076c8:	00150010 	move	$r16,$r0
1c0076cc:	5800c3a7 	beq	$r29,$r7,192(0xc0) # 1c00778c <_vfiprintf_r+0x890>
1c0076d0:	02bdfc18 	addi.w	$r24,$r0,-129(0xf7f)
1c0076d4:	00157327 	or	$r7,$r25,$r28
1c0076d8:	0014e1f8 	and	$r24,$r15,$r24
1c0076dc:	5c0530e0 	bne	$r7,$r0,1328(0x530) # 1c007c0c <_vfiprintf_r+0xd10>
1c0076e0:	5c026ba0 	bne	$r29,$r0,616(0x268) # 1c007948 <_vfiprintf_r+0xa4c>
1c0076e4:	5ffcf920 	bne	$r9,$r0,-776(0x3fcf8) # 1c0073dc <_vfiprintf_r+0x4e0>
1c0076e8:	034005fc 	andi	$r28,$r15,0x1
1c0076ec:	001502fe 	move	$r30,$r23
1c0076f0:	5bfc5b80 	beq	$r28,$r0,-936(0x3fc58) # 1c007348 <_vfiprintf_r+0x44c>
1c0076f4:	0280c009 	addi.w	$r9,$r0,48(0x30)
1c0076f8:	29017c69 	st.b	$r9,$r3,95(0x5f)
1c0076fc:	02817c7e 	addi.w	$r30,$r3,95(0x5f)
1c007700:	53fc4bff 	b	-952(0xffffc48) # 1c007348 <_vfiprintf_r+0x44c>
1c007704:	5c0895a0 	bne	$r13,$r0,2196(0x894) # 1c007f98 <_vfiprintf_r+0x109c>
1c007708:	034081e9 	andi	$r9,$r15,0x20
1c00770c:	038041ef 	ori	$r15,$r15,0x10
1c007710:	5c019d20 	bne	$r9,$r0,412(0x19c) # 1c0078ac <_vfiprintf_r+0x9b0>
1c007714:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007718:	02801129 	addi.w	$r9,$r9,4(0x4)
1c00771c:	28802067 	ld.w	$r7,$r3,8(0x8)
1c007720:	0015001c 	move	$r28,$r0
1c007724:	29802069 	st.w	$r9,$r3,8(0x8)
1c007728:	288000f9 	ld.w	$r25,$r7,0
1c00772c:	00150009 	move	$r9,$r0
1c007730:	53ff93ff 	b	-112(0xfffff90) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c007734:	5c089da0 	bne	$r13,$r0,2204(0x89c) # 1c007fd0 <_vfiprintf_r+0x10d4>
1c007738:	034081e9 	andi	$r9,$r15,0x20
1c00773c:	038041ef 	ori	$r15,$r15,0x10
1c007740:	5c01bd20 	bne	$r9,$r0,444(0x1bc) # 1c0078fc <_vfiprintf_r+0xa00>
1c007744:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007748:	02801129 	addi.w	$r9,$r9,4(0x4)
1c00774c:	28802067 	ld.w	$r7,$r3,8(0x8)
1c007750:	288000f9 	ld.w	$r25,$r7,0
1c007754:	29802069 	st.w	$r9,$r3,8(0x8)
1c007758:	0048ff3c 	srai.w	$r28,$r25,0x1f
1c00775c:	00150387 	move	$r7,$r28
1c007760:	67fc58e0 	bge	$r7,$r0,-936(0x3fc58) # 1c0073b8 <_vfiprintf_r+0x4bc>
1c007764:	00116419 	sub.w	$r25,$r0,$r25
1c007768:	0012e409 	sltu	$r9,$r0,$r25
1c00776c:	0011701c 	sub.w	$r28,$r0,$r28
1c007770:	0011279c 	sub.w	$r28,$r28,$r9
1c007774:	0280b409 	addi.w	$r9,$r0,45(0x2d)
1c007778:	29009c69 	st.b	$r9,$r3,39(0x27)
1c00777c:	02bffc07 	addi.w	$r7,$r0,-1(0xfff)
1c007780:	0280b410 	addi.w	$r16,$r0,45(0x2d)
1c007784:	02800409 	addi.w	$r9,$r0,1(0x1)
1c007788:	5fff4ba7 	bne	$r29,$r7,-184(0x3ff48) # 1c0076d0 <_vfiprintf_r+0x7d4>
1c00778c:	02800407 	addi.w	$r7,$r0,1(0x1)
1c007790:	58019527 	beq	$r9,$r7,404(0x194) # 1c007924 <_vfiprintf_r+0xa28>
1c007794:	02800807 	addi.w	$r7,$r0,2(0x2)
1c007798:	5801c527 	beq	$r9,$r7,452(0x1c4) # 1c00795c <_vfiprintf_r+0xa60>
1c00779c:	001502e7 	move	$r7,$r23
1c0077a0:	50000800 	b	8(0x8) # 1c0077a8 <_vfiprintf_r+0x8ac>
1c0077a4:	001503c7 	move	$r7,$r30
1c0077a8:	0040f786 	slli.w	$r6,$r28,0x1d
1c0077ac:	03401f29 	andi	$r9,$r25,0x7
1c0077b0:	00448f39 	srli.w	$r25,$r25,0x3
1c0077b4:	0280c129 	addi.w	$r9,$r9,48(0x30)
1c0077b8:	001564d9 	or	$r25,$r6,$r25
1c0077bc:	00448f9c 	srli.w	$r28,$r28,0x3
1c0077c0:	293ffce9 	st.b	$r9,$r7,-1(0xfff)
1c0077c4:	00157326 	or	$r6,$r25,$r28
1c0077c8:	02bffcfe 	addi.w	$r30,$r7,-1(0xfff)
1c0077cc:	5fffd8c0 	bne	$r6,$r0,-40(0x3ffd8) # 1c0077a4 <_vfiprintf_r+0x8a8>
1c0077d0:	034005e6 	andi	$r6,$r15,0x1
1c0077d4:	5801bcc0 	beq	$r6,$r0,444(0x1bc) # 1c007990 <_vfiprintf_r+0xa94>
1c0077d8:	0280c006 	addi.w	$r6,$r0,48(0x30)
1c0077dc:	5801b526 	beq	$r9,$r6,436(0x1b4) # 1c007990 <_vfiprintf_r+0xa94>
1c0077e0:	02bff8e7 	addi.w	$r7,$r7,-2(0xffe)
1c0077e4:	293fffc6 	st.b	$r6,$r30,-1(0xfff)
1c0077e8:	00111efc 	sub.w	$r28,$r23,$r7
1c0077ec:	001501f8 	move	$r24,$r15
1c0077f0:	001500fe 	move	$r30,$r7
1c0077f4:	53fb57ff 	b	-1196(0xffffb54) # 1c007348 <_vfiprintf_r+0x44c>
1c0077f8:	5c07c1a0 	bne	$r13,$r0,1984(0x7c0) # 1c007fb8 <_vfiprintf_r+0x10bc>
1c0077fc:	034081e9 	andi	$r9,$r15,0x20
1c007800:	038041ef 	ori	$r15,$r15,0x10
1c007804:	5c00d120 	bne	$r9,$r0,208(0xd0) # 1c0078d4 <_vfiprintf_r+0x9d8>
1c007808:	28802069 	ld.w	$r9,$r3,8(0x8)
1c00780c:	02801129 	addi.w	$r9,$r9,4(0x4)
1c007810:	28802067 	ld.w	$r7,$r3,8(0x8)
1c007814:	0015001c 	move	$r28,$r0
1c007818:	29802069 	st.w	$r9,$r3,8(0x8)
1c00781c:	288000f9 	ld.w	$r25,$r7,0
1c007820:	02800409 	addi.w	$r9,$r0,1(0x1)
1c007824:	53fe9fff 	b	-356(0xffffe9c) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c007828:	5c07a1a0 	bne	$r13,$r0,1952(0x7a0) # 1c007fc8 <_vfiprintf_r+0x10cc>
1c00782c:	034081e9 	andi	$r9,$r15,0x20
1c007830:	5c007d20 	bne	$r9,$r0,124(0x7c) # 1c0078ac <_vfiprintf_r+0x9b0>
1c007834:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007838:	034041e7 	andi	$r7,$r15,0x10
1c00783c:	28800139 	ld.w	$r25,$r9,0
1c007840:	02801129 	addi.w	$r9,$r9,4(0x4)
1c007844:	5ffed8e0 	bne	$r7,$r0,-296(0x3fed8) # 1c00771c <_vfiprintf_r+0x820>
1c007848:	034101e7 	andi	$r7,$r15,0x40
1c00784c:	5806d4e0 	beq	$r7,$r0,1748(0x6d4) # 1c007f20 <_vfiprintf_r+0x1024>
1c007850:	0040c339 	slli.w	$r25,$r25,0x10
1c007854:	29802069 	st.w	$r9,$r3,8(0x8)
1c007858:	0044c339 	srli.w	$r25,$r25,0x10
1c00785c:	0015001c 	move	$r28,$r0
1c007860:	00150009 	move	$r9,$r0
1c007864:	53fe5fff 	b	-420(0xffffe5c) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c007868:	5c0759a0 	bne	$r13,$r0,1880(0x758) # 1c007fc0 <_vfiprintf_r+0x10c4>
1c00786c:	28802066 	ld.w	$r6,$r3,8(0x8)
1c007870:	034081e9 	andi	$r9,$r15,0x20
1c007874:	028010c7 	addi.w	$r7,$r6,4(0x4)
1c007878:	5c056120 	bne	$r9,$r0,1376(0x560) # 1c007dd8 <_vfiprintf_r+0xedc>
1c00787c:	034041e9 	andi	$r9,$r15,0x10
1c007880:	5c05b920 	bne	$r9,$r0,1464(0x5b8) # 1c007e38 <_vfiprintf_r+0xf3c>
1c007884:	034101ef 	andi	$r15,$r15,0x40
1c007888:	5805b1e0 	beq	$r15,$r0,1456(0x5b0) # 1c007e38 <_vfiprintf_r+0xf3c>
1c00788c:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007890:	29802067 	st.w	$r7,$r3,8(0x8)
1c007894:	28800067 	ld.w	$r7,$r3,0
1c007898:	28800129 	ld.w	$r9,$r9,0
1c00789c:	29400127 	st.h	$r7,$r9,0
1c0078a0:	53f72bff 	b	-2264(0xffff728) # 1c006fc8 <_vfiprintf_r+0xcc>
1c0078a4:	57ce8bff 	bl	-12664(0xfffce88) # 1c00472c <__sinit>
1c0078a8:	53f6a3ff 	b	-2400(0xffff6a0) # 1c006f48 <_vfiprintf_r+0x4c>
1c0078ac:	28802069 	ld.w	$r9,$r3,8(0x8)
1c0078b0:	02bfe007 	addi.w	$r7,$r0,-8(0xff8)
1c0078b4:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c0078b8:	00149d29 	and	$r9,$r9,$r7
1c0078bc:	02802127 	addi.w	$r7,$r9,8(0x8)
1c0078c0:	28800139 	ld.w	$r25,$r9,0
1c0078c4:	2880113c 	ld.w	$r28,$r9,4(0x4)
1c0078c8:	29802067 	st.w	$r7,$r3,8(0x8)
1c0078cc:	00150009 	move	$r9,$r0
1c0078d0:	53fdf3ff 	b	-528(0xffffdf0) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c0078d4:	28802069 	ld.w	$r9,$r3,8(0x8)
1c0078d8:	02bfe007 	addi.w	$r7,$r0,-8(0xff8)
1c0078dc:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c0078e0:	00149d29 	and	$r9,$r9,$r7
1c0078e4:	02802127 	addi.w	$r7,$r9,8(0x8)
1c0078e8:	28800139 	ld.w	$r25,$r9,0
1c0078ec:	2880113c 	ld.w	$r28,$r9,4(0x4)
1c0078f0:	29802067 	st.w	$r7,$r3,8(0x8)
1c0078f4:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0078f8:	53fdcbff 	b	-568(0xffffdc8) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c0078fc:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007900:	02bfe007 	addi.w	$r7,$r0,-8(0xff8)
1c007904:	02801d29 	addi.w	$r9,$r9,7(0x7)
1c007908:	00149d29 	and	$r9,$r9,$r7
1c00790c:	28801127 	ld.w	$r7,$r9,4(0x4)
1c007910:	02802126 	addi.w	$r6,$r9,8(0x8)
1c007914:	29802066 	st.w	$r6,$r3,8(0x8)
1c007918:	28800139 	ld.w	$r25,$r9,0
1c00791c:	001500fc 	move	$r28,$r7
1c007920:	53fa97ff 	b	-1388(0xffffa94) # 1c0073b4 <_vfiprintf_r+0x4b8>
1c007924:	5c052f80 	bne	$r28,$r0,1324(0x52c) # 1c007e50 <_vfiprintf_r+0xf54>
1c007928:	02802409 	addi.w	$r9,$r0,9(0x9)
1c00792c:	68052539 	bltu	$r9,$r25,1316(0x524) # 1c007e50 <_vfiprintf_r+0xf54>
1c007930:	0280c339 	addi.w	$r25,$r25,48(0x30)
1c007934:	29017c79 	st.b	$r25,$r3,95(0x5f)
1c007938:	001501f8 	move	$r24,$r15
1c00793c:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c007940:	02817c7e 	addi.w	$r30,$r3,95(0x5f)
1c007944:	53fa07ff 	b	-1532(0xffffa04) # 1c007348 <_vfiprintf_r+0x44c>
1c007948:	02800407 	addi.w	$r7,$r0,1(0x1)
1c00794c:	5806cd27 	beq	$r9,$r7,1740(0x6cc) # 1c008018 <_vfiprintf_r+0x111c>
1c007950:	02800807 	addi.w	$r7,$r0,2(0x2)
1c007954:	0015030f 	move	$r15,$r24
1c007958:	5ffe4527 	bne	$r9,$r7,-444(0x3fe44) # 1c00779c <_vfiprintf_r+0x8a0>
1c00795c:	001502fe 	move	$r30,$r23
1c007960:	28803067 	ld.w	$r7,$r3,12(0xc)
1c007964:	03403f29 	andi	$r9,$r25,0xf
1c007968:	00449339 	srli.w	$r25,$r25,0x4
1c00796c:	001024e9 	add.w	$r9,$r7,$r9
1c007970:	2a000129 	ld.bu	$r9,$r9,0
1c007974:	0040f387 	slli.w	$r7,$r28,0x1c
1c007978:	02bfffde 	addi.w	$r30,$r30,-1(0xfff)
1c00797c:	001564f9 	or	$r25,$r7,$r25
1c007980:	0044939c 	srli.w	$r28,$r28,0x4
1c007984:	290003c9 	st.b	$r9,$r30,0
1c007988:	00157329 	or	$r9,$r25,$r28
1c00798c:	5fffd520 	bne	$r9,$r0,-44(0x3ffd4) # 1c007960 <_vfiprintf_r+0xa64>
1c007990:	00117afc 	sub.w	$r28,$r23,$r30
1c007994:	001501f8 	move	$r24,$r15
1c007998:	53f9b3ff 	b	-1616(0xffff9b0) # 1c007348 <_vfiprintf_r+0x44c>
1c00799c:	02800405 	addi.w	$r5,$r0,1(0x1)
1c0079a0:	00150007 	move	$r7,$r0
1c0079a4:	001502e6 	move	$r6,$r23
1c0079a8:	53fbffff 	b	-1028(0xffffbfc) # 1c0075a4 <_vfiprintf_r+0x6a8>
1c0079ac:	001166cf 	sub.w	$r15,$r22,$r25
1c0079b0:	67fb380f 	bge	$r0,$r15,-1224(0x3fb38) # 1c0074e8 <_vfiprintf_r+0x5ec>
1c0079b4:	02804004 	addi.w	$r4,$r0,16(0x10)
1c0079b8:	6406408f 	bge	$r4,$r15,1600(0x640) # 1c007ff8 <_vfiprintf_r+0x10fc>
1c0079bc:	1dc7ff50 	pcaddu12i	$r16,-114694(0xe3ffa)
1c0079c0:	029ca210 	addi.w	$r16,$r16,1832(0x728)
1c0079c4:	02804011 	addi.w	$r17,$r0,16(0x10)
1c0079c8:	02801c12 	addi.w	$r18,$r0,7(0x7)
1c0079cc:	50001800 	b	24(0x18) # 1c0079e4 <_vfiprintf_r+0xae8>
1c0079d0:	028008e4 	addi.w	$r4,$r7,2(0x2)
1c0079d4:	02802108 	addi.w	$r8,$r8,8(0x8)
1c0079d8:	001500c7 	move	$r7,$r6
1c0079dc:	02bfc1ef 	addi.w	$r15,$r15,-16(0xff0)
1c0079e0:	64006a2f 	bge	$r17,$r15,104(0x68) # 1c007a48 <_vfiprintf_r+0xb4c>
1c0079e4:	02804129 	addi.w	$r9,$r9,16(0x10)
1c0079e8:	028004e6 	addi.w	$r6,$r7,1(0x1)
1c0079ec:	29800110 	st.w	$r16,$r8,0
1c0079f0:	29801111 	st.w	$r17,$r8,4(0x4)
1c0079f4:	2980d069 	st.w	$r9,$r3,52(0x34)
1c0079f8:	2980c066 	st.w	$r6,$r3,48(0x30)
1c0079fc:	67ffd646 	bge	$r18,$r6,-44(0x3ffd4) # 1c0079d0 <_vfiprintf_r+0xad4>
1c007a00:	58018120 	beq	$r9,$r0,384(0x180) # 1c007b80 <_vfiprintf_r+0xc84>
1c007a04:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007a08:	00150345 	move	$r5,$r26
1c007a0c:	00150364 	move	$r4,$r27
1c007a10:	29804070 	st.w	$r16,$r3,16(0x10)
1c007a14:	2980106f 	st.w	$r15,$r3,4(0x4)
1c007a18:	57f3cfff 	bl	-3124(0xffff3cc) # 1c006de4 <__sprint_r.part.0>
1c007a1c:	5ff6f880 	bne	$r4,$r0,-2312(0x3f6f8) # 1c007114 <_vfiprintf_r+0x218>
1c007a20:	2880106f 	ld.w	$r15,$r3,4(0x4)
1c007a24:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007a28:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007a2c:	02804011 	addi.w	$r17,$r0,16(0x10)
1c007a30:	02bfc1ef 	addi.w	$r15,$r15,-16(0xff0)
1c007a34:	001502e8 	move	$r8,$r23
1c007a38:	028004e4 	addi.w	$r4,$r7,1(0x1)
1c007a3c:	28804070 	ld.w	$r16,$r3,16(0x10)
1c007a40:	02801c12 	addi.w	$r18,$r0,7(0x7)
1c007a44:	63ffa22f 	blt	$r17,$r15,-96(0x3ffa0) # 1c0079e4 <_vfiprintf_r+0xae8>
1c007a48:	02802111 	addi.w	$r17,$r8,8(0x8)
1c007a4c:	00103d29 	add.w	$r9,$r9,$r15
1c007a50:	29800110 	st.w	$r16,$r8,0
1c007a54:	2980110f 	st.w	$r15,$r8,4(0x4)
1c007a58:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007a5c:	2980c064 	st.w	$r4,$r3,48(0x30)
1c007a60:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c007a64:	64036104 	bge	$r8,$r4,864(0x360) # 1c007dc4 <_vfiprintf_r+0xec8>
1c007a68:	5804d920 	beq	$r9,$r0,1240(0x4d8) # 1c007f40 <_vfiprintf_r+0x1044>
1c007a6c:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007a70:	00150345 	move	$r5,$r26
1c007a74:	00150364 	move	$r4,$r27
1c007a78:	57f36fff 	bl	-3220(0xffff36c) # 1c006de4 <__sprint_r.part.0>
1c007a7c:	5ff69880 	bne	$r4,$r0,-2408(0x3f698) # 1c007114 <_vfiprintf_r+0x218>
1c007a80:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007a84:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007a88:	001173bd 	sub.w	$r29,$r29,$r28
1c007a8c:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007a90:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c007a94:	001502e8 	move	$r8,$r23
1c007a98:	67fa581d 	bge	$r0,$r29,-1448(0x3fa58) # 1c0074f0 <_vfiprintf_r+0x5f4>
1c007a9c:	02804004 	addi.w	$r4,$r0,16(0x10)
1c007aa0:	6404909d 	bge	$r4,$r29,1168(0x490) # 1c007f30 <_vfiprintf_r+0x1034>
1c007aa4:	1dc7ff50 	pcaddu12i	$r16,-114694(0xe3ffa)
1c007aa8:	02990210 	addi.w	$r16,$r16,1600(0x640)
1c007aac:	0280400f 	addi.w	$r15,$r0,16(0x10)
1c007ab0:	02801c11 	addi.w	$r17,$r0,7(0x7)
1c007ab4:	50001800 	b	24(0x18) # 1c007acc <_vfiprintf_r+0xbd0>
1c007ab8:	028008e5 	addi.w	$r5,$r7,2(0x2)
1c007abc:	02802108 	addi.w	$r8,$r8,8(0x8)
1c007ac0:	001500c7 	move	$r7,$r6
1c007ac4:	02bfc3bd 	addi.w	$r29,$r29,-16(0xff0)
1c007ac8:	640061fd 	bge	$r15,$r29,96(0x60) # 1c007b28 <_vfiprintf_r+0xc2c>
1c007acc:	02804129 	addi.w	$r9,$r9,16(0x10)
1c007ad0:	028004e6 	addi.w	$r6,$r7,1(0x1)
1c007ad4:	29800110 	st.w	$r16,$r8,0
1c007ad8:	2980110f 	st.w	$r15,$r8,4(0x4)
1c007adc:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007ae0:	2980c066 	st.w	$r6,$r3,48(0x30)
1c007ae4:	67ffd626 	bge	$r17,$r6,-44(0x3ffd4) # 1c007ab8 <_vfiprintf_r+0xbbc>
1c007ae8:	58007120 	beq	$r9,$r0,112(0x70) # 1c007b58 <_vfiprintf_r+0xc5c>
1c007aec:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007af0:	00150345 	move	$r5,$r26
1c007af4:	00150364 	move	$r4,$r27
1c007af8:	29801070 	st.w	$r16,$r3,4(0x4)
1c007afc:	57f2ebff 	bl	-3352(0xffff2e8) # 1c006de4 <__sprint_r.part.0>
1c007b00:	5ff61480 	bne	$r4,$r0,-2540(0x3f614) # 1c007114 <_vfiprintf_r+0x218>
1c007b04:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007b08:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007b0c:	0280400f 	addi.w	$r15,$r0,16(0x10)
1c007b10:	02bfc3bd 	addi.w	$r29,$r29,-16(0xff0)
1c007b14:	001502e8 	move	$r8,$r23
1c007b18:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c007b1c:	28801070 	ld.w	$r16,$r3,4(0x4)
1c007b20:	02801c11 	addi.w	$r17,$r0,7(0x7)
1c007b24:	63ffa9fd 	blt	$r15,$r29,-88(0x3ffa8) # 1c007acc <_vfiprintf_r+0xbd0>
1c007b28:	02802107 	addi.w	$r7,$r8,8(0x8)
1c007b2c:	00107529 	add.w	$r9,$r9,$r29
1c007b30:	29800110 	st.w	$r16,$r8,0
1c007b34:	2980111d 	st.w	$r29,$r8,4(0x4)
1c007b38:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007b3c:	2980c065 	st.w	$r5,$r3,48(0x30)
1c007b40:	02801c08 	addi.w	$r8,$r0,7(0x7)
1c007b44:	6001c905 	blt	$r8,$r5,456(0x1c8) # 1c007d0c <_vfiprintf_r+0xe10>
1c007b48:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c007b4c:	028020e6 	addi.w	$r6,$r7,8(0x8)
1c007b50:	001500e8 	move	$r8,$r7
1c007b54:	53f99fff 	b	-1636(0xffff99c) # 1c0074f0 <_vfiprintf_r+0x5f4>
1c007b58:	02800405 	addi.w	$r5,$r0,1(0x1)
1c007b5c:	00150007 	move	$r7,$r0
1c007b60:	001502e8 	move	$r8,$r23
1c007b64:	53ff63ff 	b	-160(0xfffff60) # 1c007ac4 <_vfiprintf_r+0xbc8>
1c007b68:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007b6c:	00150345 	move	$r5,$r26
1c007b70:	00150364 	move	$r4,$r27
1c007b74:	57f273ff 	bl	-3472(0xffff270) # 1c006de4 <__sprint_r.part.0>
1c007b78:	5bf9dc80 	beq	$r4,$r0,-1572(0x3f9dc) # 1c007554 <_vfiprintf_r+0x658>
1c007b7c:	53f59bff 	b	-2664(0xffff598) # 1c007114 <_vfiprintf_r+0x218>
1c007b80:	02800404 	addi.w	$r4,$r0,1(0x1)
1c007b84:	00150007 	move	$r7,$r0
1c007b88:	001502e8 	move	$r8,$r23
1c007b8c:	53fe53ff 	b	-432(0xffffe50) # 1c0079dc <_vfiprintf_r+0xae0>
1c007b90:	5801c120 	beq	$r9,$r0,448(0x1c0) # 1c007d50 <_vfiprintf_r+0xe54>
1c007b94:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007b98:	00150345 	move	$r5,$r26
1c007b9c:	00150364 	move	$r4,$r27
1c007ba0:	29804072 	st.w	$r18,$r3,16(0x10)
1c007ba4:	29801073 	st.w	$r19,$r3,4(0x4)
1c007ba8:	57f23fff 	bl	-3524(0xffff23c) # 1c006de4 <__sprint_r.part.0>
1c007bac:	5ff56880 	bne	$r4,$r0,-2712(0x3f568) # 1c007114 <_vfiprintf_r+0x218>
1c007bb0:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007bb4:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007bb8:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007bbc:	001502e8 	move	$r8,$r23
1c007bc0:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c007bc4:	28804072 	ld.w	$r18,$r3,16(0x10)
1c007bc8:	28801073 	ld.w	$r19,$r3,4(0x4)
1c007bcc:	53f8bbff 	b	-1864(0xffff8b8) # 1c007484 <_vfiprintf_r+0x588>
1c007bd0:	5c01bd20 	bne	$r9,$r0,444(0x1bc) # 1c007d8c <_vfiprintf_r+0xe90>
1c007bd4:	28009c68 	ld.b	$r8,$r3,39(0x27)
1c007bd8:	5c037d00 	bne	$r8,$r0,892(0x37c) # 1c007f54 <_vfiprintf_r+0x1058>
1c007bdc:	58021a60 	beq	$r19,$r0,536(0x218) # 1c007df4 <_vfiprintf_r+0xef8>
1c007be0:	0280a069 	addi.w	$r9,$r3,40(0x28)
1c007be4:	29818069 	st.w	$r9,$r3,96(0x60)
1c007be8:	02800809 	addi.w	$r9,$r0,2(0x2)
1c007bec:	29819069 	st.w	$r9,$r3,100(0x64)
1c007bf0:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007bf4:	02800405 	addi.w	$r5,$r0,1(0x1)
1c007bf8:	001500c8 	move	$r8,$r6
1c007bfc:	001500a7 	move	$r7,$r5
1c007c00:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c007c04:	02802106 	addi.w	$r6,$r8,8(0x8)
1c007c08:	53f8dbff 	b	-1832(0xffff8d8) # 1c0074e0 <_vfiprintf_r+0x5e4>
1c007c0c:	0015030f 	move	$r15,$r24
1c007c10:	53fb7fff 	b	-1156(0xffffb7c) # 1c00778c <_vfiprintf_r+0x890>
1c007c14:	02804005 	addi.w	$r5,$r0,16(0x10)
1c007c18:	6403c0af 	bge	$r5,$r15,960(0x3c0) # 1c007fd8 <_vfiprintf_r+0x10dc>
1c007c1c:	1dc7ff50 	pcaddu12i	$r16,-114694(0xe3ffa)
1c007c20:	02936210 	addi.w	$r16,$r16,1240(0x4d8)
1c007c24:	02804011 	addi.w	$r17,$r0,16(0x10)
1c007c28:	02801c14 	addi.w	$r20,$r0,7(0x7)
1c007c2c:	50001c00 	b	28(0x1c) # 1c007c48 <_vfiprintf_r+0xd4c>
1c007c30:	028008e4 	addi.w	$r4,$r7,2(0x2)
1c007c34:	02802108 	addi.w	$r8,$r8,8(0x8)
1c007c38:	001500c7 	move	$r7,$r6
1c007c3c:	02bfc1ef 	addi.w	$r15,$r15,-16(0xff0)
1c007c40:	64007a2f 	bge	$r17,$r15,120(0x78) # 1c007cb8 <_vfiprintf_r+0xdbc>
1c007c44:	028004e6 	addi.w	$r6,$r7,1(0x1)
1c007c48:	02804129 	addi.w	$r9,$r9,16(0x10)
1c007c4c:	29800110 	st.w	$r16,$r8,0
1c007c50:	29801111 	st.w	$r17,$r8,4(0x4)
1c007c54:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007c58:	2980c066 	st.w	$r6,$r3,48(0x30)
1c007c5c:	67ffd686 	bge	$r20,$r6,-44(0x3ffd4) # 1c007c30 <_vfiprintf_r+0xd34>
1c007c60:	58008520 	beq	$r9,$r0,132(0x84) # 1c007ce4 <_vfiprintf_r+0xde8>
1c007c64:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007c68:	00150345 	move	$r5,$r26
1c007c6c:	00150364 	move	$r4,$r27
1c007c70:	29806070 	st.w	$r16,$r3,24(0x18)
1c007c74:	2980506f 	st.w	$r15,$r3,20(0x14)
1c007c78:	29804072 	st.w	$r18,$r3,16(0x10)
1c007c7c:	29801073 	st.w	$r19,$r3,4(0x4)
1c007c80:	57f167ff 	bl	-3740(0xffff164) # 1c006de4 <__sprint_r.part.0>
1c007c84:	5ff49080 	bne	$r4,$r0,-2928(0x3f490) # 1c007114 <_vfiprintf_r+0x218>
1c007c88:	2880506f 	ld.w	$r15,$r3,20(0x14)
1c007c8c:	28804072 	ld.w	$r18,$r3,16(0x10)
1c007c90:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007c94:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007c98:	02804011 	addi.w	$r17,$r0,16(0x10)
1c007c9c:	02bfc1ef 	addi.w	$r15,$r15,-16(0xff0)
1c007ca0:	001502e8 	move	$r8,$r23
1c007ca4:	028004e4 	addi.w	$r4,$r7,1(0x1)
1c007ca8:	28806070 	ld.w	$r16,$r3,24(0x18)
1c007cac:	02801c14 	addi.w	$r20,$r0,7(0x7)
1c007cb0:	28801073 	ld.w	$r19,$r3,4(0x4)
1c007cb4:	63ff922f 	blt	$r17,$r15,-112(0x3ff90) # 1c007c44 <_vfiprintf_r+0xd48>
1c007cb8:	00103d29 	add.w	$r9,$r9,$r15
1c007cbc:	29800110 	st.w	$r16,$r8,0
1c007cc0:	2980110f 	st.w	$r15,$r8,4(0x4)
1c007cc4:	2980d069 	st.w	$r9,$r3,52(0x34)
1c007cc8:	2980c064 	st.w	$r4,$r3,48(0x30)
1c007ccc:	02801c07 	addi.w	$r7,$r0,7(0x7)
1c007cd0:	63ff00e4 	blt	$r7,$r4,-256(0x3ff00) # 1c007bd0 <_vfiprintf_r+0xcd4>
1c007cd4:	02802108 	addi.w	$r8,$r8,8(0x8)
1c007cd8:	02800485 	addi.w	$r5,$r4,1(0x1)
1c007cdc:	00150087 	move	$r7,$r4
1c007ce0:	53f767ff 	b	-2204(0xffff764) # 1c007444 <_vfiprintf_r+0x548>
1c007ce4:	00150007 	move	$r7,$r0
1c007ce8:	02800404 	addi.w	$r4,$r0,1(0x1)
1c007cec:	001502e8 	move	$r8,$r23
1c007cf0:	53ff4fff 	b	-180(0xfffff4c) # 1c007c3c <_vfiprintf_r+0xd40>
1c007cf4:	64000ad9 	bge	$r22,$r25,8(0x8) # 1c007cfc <_vfiprintf_r+0xe00>
1c007cf8:	00150336 	move	$r22,$r25
1c007cfc:	28800069 	ld.w	$r9,$r3,0
1c007d00:	00105929 	add.w	$r9,$r9,$r22
1c007d04:	29800069 	st.w	$r9,$r3,0
1c007d08:	53f84fff 	b	-1972(0xffff84c) # 1c007554 <_vfiprintf_r+0x658>
1c007d0c:	5801b120 	beq	$r9,$r0,432(0x1b0) # 1c007ebc <_vfiprintf_r+0xfc0>
1c007d10:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007d14:	00150345 	move	$r5,$r26
1c007d18:	00150364 	move	$r4,$r27
1c007d1c:	57f0cbff 	bl	-3896(0xffff0c8) # 1c006de4 <__sprint_r.part.0>
1c007d20:	5ff3f480 	bne	$r4,$r0,-3084(0x3f3f4) # 1c007114 <_vfiprintf_r+0x218>
1c007d24:	2880c065 	ld.w	$r5,$r3,48(0x30)
1c007d28:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007d2c:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007d30:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c007d34:	001502e8 	move	$r8,$r23
1c007d38:	53f7bbff 	b	-2120(0xffff7b8) # 1c0074f0 <_vfiprintf_r+0x5f4>
1c007d3c:	2980c060 	st.w	$r0,$r3,48(0x30)
1c007d40:	001502e8 	move	$r8,$r23
1c007d44:	53f303ff 	b	-3328(0xffff300) # 1c007044 <_vfiprintf_r+0x148>
1c007d48:	0015001c 	move	$r28,$r0
1c007d4c:	53f543ff 	b	-2752(0xffff540) # 1c00728c <_vfiprintf_r+0x390>
1c007d50:	5800a660 	beq	$r19,$r0,164(0xa4) # 1c007df4 <_vfiprintf_r+0xef8>
1c007d54:	0280a069 	addi.w	$r9,$r3,40(0x28)
1c007d58:	29818069 	st.w	$r9,$r3,96(0x60)
1c007d5c:	02800809 	addi.w	$r9,$r0,2(0x2)
1c007d60:	29819069 	st.w	$r9,$r3,100(0x64)
1c007d64:	0281a068 	addi.w	$r8,$r3,104(0x68)
1c007d68:	02800407 	addi.w	$r7,$r0,1(0x1)
1c007d6c:	53fe97ff 	b	-364(0xffffe94) # 1c007c00 <_vfiprintf_r+0xd04>
1c007d70:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007d74:	02800405 	addi.w	$r5,$r0,1(0x1)
1c007d78:	00150007 	move	$r7,$r0
1c007d7c:	001502e8 	move	$r8,$r23
1c007d80:	53f763ff 	b	-2208(0xffff760) # 1c0074e0 <_vfiprintf_r+0x5e4>
1c007d84:	001503f8 	move	$r24,$r31
1c007d88:	53f2d3ff 	b	-3376(0xffff2d0) # 1c007058 <_vfiprintf_r+0x15c>
1c007d8c:	0280b066 	addi.w	$r6,$r3,44(0x2c)
1c007d90:	00150345 	move	$r5,$r26
1c007d94:	00150364 	move	$r4,$r27
1c007d98:	29804072 	st.w	$r18,$r3,16(0x10)
1c007d9c:	29801073 	st.w	$r19,$r3,4(0x4)
1c007da0:	57f047ff 	bl	-4028(0xffff044) # 1c006de4 <__sprint_r.part.0>
1c007da4:	5ff37080 	bne	$r4,$r0,-3216(0x3f370) # 1c007114 <_vfiprintf_r+0x218>
1c007da8:	2880c067 	ld.w	$r7,$r3,48(0x30)
1c007dac:	2880d069 	ld.w	$r9,$r3,52(0x34)
1c007db0:	001502e8 	move	$r8,$r23
1c007db4:	28804072 	ld.w	$r18,$r3,16(0x10)
1c007db8:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c007dbc:	28801073 	ld.w	$r19,$r3,4(0x4)
1c007dc0:	53f687ff 	b	-2428(0xffff684) # 1c007444 <_vfiprintf_r+0x548>
1c007dc4:	02800485 	addi.w	$r5,$r4,1(0x1)
1c007dc8:	02802226 	addi.w	$r6,$r17,8(0x8)
1c007dcc:	00150087 	move	$r7,$r4
1c007dd0:	00150228 	move	$r8,$r17
1c007dd4:	53f717ff 	b	-2284(0xffff714) # 1c0074e8 <_vfiprintf_r+0x5ec>
1c007dd8:	28800065 	ld.w	$r5,$r3,0
1c007ddc:	288000c9 	ld.w	$r9,$r6,0
1c007de0:	29802067 	st.w	$r7,$r3,8(0x8)
1c007de4:	0048fca6 	srai.w	$r6,$r5,0x1f
1c007de8:	29800125 	st.w	$r5,$r9,0
1c007dec:	29801126 	st.w	$r6,$r9,4(0x4)
1c007df0:	53f1dbff 	b	-3624(0xffff1d8) # 1c006fc8 <_vfiprintf_r+0xcc>
1c007df4:	00150007 	move	$r7,$r0
1c007df8:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007dfc:	02800405 	addi.w	$r5,$r0,1(0x1)
1c007e00:	001502e8 	move	$r8,$r23
1c007e04:	53f6dfff 	b	-2340(0xffff6dc) # 1c0074e0 <_vfiprintf_r+0x5e4>
1c007e08:	001503c4 	move	$r4,$r30
1c007e0c:	29804068 	st.w	$r8,$r3,16(0x10)
1c007e10:	2980106f 	st.w	$r15,$r3,4(0x4)
1c007e14:	57ef1fff 	bl	-4324(0xfffef1c) # 1c006d30 <strlen>
1c007e18:	2880106f 	ld.w	$r15,$r3,4(0x4)
1c007e1c:	29802078 	st.w	$r24,$r3,8(0x8)
1c007e20:	0015009c 	move	$r28,$r4
1c007e24:	28009c70 	ld.b	$r16,$r3,39(0x27)
1c007e28:	001501f8 	move	$r24,$r15
1c007e2c:	0015001d 	move	$r29,$r0
1c007e30:	28804068 	ld.w	$r8,$r3,16(0x10)
1c007e34:	53f517ff 	b	-2796(0xffff514) # 1c007348 <_vfiprintf_r+0x44c>
1c007e38:	28802069 	ld.w	$r9,$r3,8(0x8)
1c007e3c:	28800129 	ld.w	$r9,$r9,0
1c007e40:	29802067 	st.w	$r7,$r3,8(0x8)
1c007e44:	28800067 	ld.w	$r7,$r3,0
1c007e48:	29800127 	st.w	$r7,$r9,0
1c007e4c:	53f17fff 	b	-3716(0xffff17c) # 1c006fc8 <_vfiprintf_r+0xcc>
1c007e50:	001502fe 	move	$r30,$r23
1c007e54:	02802418 	addi.w	$r24,$r0,9(0x9)
1c007e58:	50000c00 	b	12(0xc) # 1c007e64 <_vfiprintf_r+0xf68>
1c007e5c:	00150099 	move	$r25,$r4
1c007e60:	001500bc 	move	$r28,$r5
1c007e64:	02802806 	addi.w	$r6,$r0,10(0xa)
1c007e68:	00150007 	move	$r7,$r0
1c007e6c:	00150324 	move	$r4,$r25
1c007e70:	00150385 	move	$r5,$r28
1c007e74:	29805070 	st.w	$r16,$r3,20(0x14)
1c007e78:	29804068 	st.w	$r8,$r3,16(0x10)
1c007e7c:	2980106f 	st.w	$r15,$r3,4(0x4)
1c007e80:	541f8000 	bl	8064(0x1f80) # 1c009e00 <__umoddi3>
1c007e84:	0280c084 	addi.w	$r4,$r4,48(0x30)
1c007e88:	02bfffde 	addi.w	$r30,$r30,-1(0xfff)
1c007e8c:	290003c4 	st.b	$r4,$r30,0
1c007e90:	02802806 	addi.w	$r6,$r0,10(0xa)
1c007e94:	00150007 	move	$r7,$r0
1c007e98:	00150324 	move	$r4,$r25
1c007e9c:	00150385 	move	$r5,$r28
1c007ea0:	541a2000 	bl	6688(0x1a20) # 1c0098c0 <__udivdi3>
1c007ea4:	2880106f 	ld.w	$r15,$r3,4(0x4)
1c007ea8:	28804068 	ld.w	$r8,$r3,16(0x10)
1c007eac:	28805070 	ld.w	$r16,$r3,20(0x14)
1c007eb0:	5fffaf80 	bne	$r28,$r0,-84(0x3ffac) # 1c007e5c <_vfiprintf_r+0xf60>
1c007eb4:	6bffab19 	bltu	$r24,$r25,-88(0x3ffa8) # 1c007e5c <_vfiprintf_r+0xf60>
1c007eb8:	53fadbff 	b	-1320(0xffffad8) # 1c007990 <_vfiprintf_r+0xa94>
1c007ebc:	02800408 	addi.w	$r8,$r0,1(0x1)
1c007ec0:	00150389 	move	$r9,$r28
1c007ec4:	2981807e 	st.w	$r30,$r3,96(0x60)
1c007ec8:	2981907c 	st.w	$r28,$r3,100(0x64)
1c007ecc:	2980d07c 	st.w	$r28,$r3,52(0x34)
1c007ed0:	2980c068 	st.w	$r8,$r3,48(0x30)
1c007ed4:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007ed8:	53f657ff 	b	-2476(0xffff654) # 1c00752c <_vfiprintf_r+0x630>
1c007edc:	280007e7 	ld.b	$r7,$r31,1(0x1)
1c007ee0:	038081ef 	ori	$r15,$r15,0x20
1c007ee4:	028007ff 	addi.w	$r31,$r31,1(0x1)
1c007ee8:	53f1a3ff 	b	-3680(0xffff1a0) # 1c007088 <_vfiprintf_r+0x18c>
1c007eec:	02801809 	addi.w	$r9,$r0,6(0x6)
1c007ef0:	001503bc 	move	$r28,$r29
1c007ef4:	6c00093d 	bgeu	$r9,$r29,8(0x8) # 1c007efc <_vfiprintf_r+0x1000>
1c007ef8:	0280181c 	addi.w	$r28,$r0,6(0x6)
1c007efc:	00150399 	move	$r25,$r28
1c007f00:	29802078 	st.w	$r24,$r3,8(0x8)
1c007f04:	1dc7ff5e 	pcaddu12i	$r30,-114694(0xe3ffa)
1c007f08:	0281d3de 	addi.w	$r30,$r30,116(0x74)
1c007f0c:	53f507ff 	b	-2812(0xffff504) # 1c007410 <_vfiprintf_r+0x514>
1c007f10:	29802069 	st.w	$r9,$r3,8(0x8)
1c007f14:	0015001c 	move	$r28,$r0
1c007f18:	02800409 	addi.w	$r9,$r0,1(0x1)
1c007f1c:	53f7a7ff 	b	-2140(0xffff7a4) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c007f20:	29802069 	st.w	$r9,$r3,8(0x8)
1c007f24:	0015001c 	move	$r28,$r0
1c007f28:	00150009 	move	$r9,$r0
1c007f2c:	53f797ff 	b	-2156(0xffff794) # 1c0076c0 <_vfiprintf_r+0x7c4>
1c007f30:	001500c7 	move	$r7,$r6
1c007f34:	1dc7ff50 	pcaddu12i	$r16,-114694(0xe3ffa)
1c007f38:	0286c210 	addi.w	$r16,$r16,432(0x1b0)
1c007f3c:	53fbf3ff 	b	-1040(0xffffbf0) # 1c007b2c <_vfiprintf_r+0xc30>
1c007f40:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007f44:	02800405 	addi.w	$r5,$r0,1(0x1)
1c007f48:	00150007 	move	$r7,$r0
1c007f4c:	001502e8 	move	$r8,$r23
1c007f50:	53f59bff 	b	-2664(0xffff598) # 1c0074e8 <_vfiprintf_r+0x5ec>
1c007f54:	02809c69 	addi.w	$r9,$r3,39(0x27)
1c007f58:	29818069 	st.w	$r9,$r3,96(0x60)
1c007f5c:	02800409 	addi.w	$r9,$r0,1(0x1)
1c007f60:	29819069 	st.w	$r9,$r3,100(0x64)
1c007f64:	0281a066 	addi.w	$r6,$r3,104(0x68)
1c007f68:	02800405 	addi.w	$r5,$r0,1(0x1)
1c007f6c:	53f50bff 	b	-2808(0xffff508) # 1c007474 <_vfiprintf_r+0x578>
1c007f70:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007f74:	53f21bff 	b	-3560(0xffff218) # 1c00718c <_vfiprintf_r+0x290>
1c007f78:	001503bc 	move	$r28,$r29
1c007f7c:	29802078 	st.w	$r24,$r3,8(0x8)
1c007f80:	28009c70 	ld.b	$r16,$r3,39(0x27)
1c007f84:	001501f8 	move	$r24,$r15
1c007f88:	0015001d 	move	$r29,$r0
1c007f8c:	53f3bfff 	b	-3140(0xffff3bc) # 1c007348 <_vfiprintf_r+0x44c>
1c007f90:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007f94:	53f327ff 	b	-3292(0xffff324) # 1c0072b8 <_vfiprintf_r+0x3bc>
1c007f98:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007f9c:	53f76fff 	b	-2196(0xffff76c) # 1c007708 <_vfiprintf_r+0x80c>
1c007fa0:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007fa4:	53f3dfff 	b	-3108(0xffff3dc) # 1c007380 <_vfiprintf_r+0x484>
1c007fa8:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007fac:	53f697ff 	b	-2412(0xffff694) # 1c007640 <_vfiprintf_r+0x744>
1c007fb0:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007fb4:	53f2a7ff 	b	-3420(0xffff2a4) # 1c007258 <_vfiprintf_r+0x35c>
1c007fb8:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007fbc:	53f843ff 	b	-1984(0xffff840) # 1c0077fc <_vfiprintf_r+0x900>
1c007fc0:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007fc4:	53f8abff 	b	-1880(0xffff8a8) # 1c00786c <_vfiprintf_r+0x970>
1c007fc8:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007fcc:	53f863ff 	b	-1952(0xffff860) # 1c00782c <_vfiprintf_r+0x930>
1c007fd0:	29009c70 	st.b	$r16,$r3,39(0x27)
1c007fd4:	53f767ff 	b	-2204(0xffff764) # 1c007738 <_vfiprintf_r+0x83c>
1c007fd8:	001500c4 	move	$r4,$r6
1c007fdc:	1dc7ff50 	pcaddu12i	$r16,-114694(0xe3ffa)
1c007fe0:	02846210 	addi.w	$r16,$r16,280(0x118)
1c007fe4:	53fcd7ff 	b	-812(0xffffcd4) # 1c007cb8 <_vfiprintf_r+0xdbc>
1c007fe8:	028004e5 	addi.w	$r5,$r7,1(0x1)
1c007fec:	1dc7ff50 	pcaddu12i	$r16,-114694(0xe3ffa)
1c007ff0:	02842210 	addi.w	$r16,$r16,264(0x108)
1c007ff4:	53f60fff 	b	-2548(0xffff60c) # 1c007600 <_vfiprintf_r+0x704>
1c007ff8:	001500d1 	move	$r17,$r6
1c007ffc:	001500a4 	move	$r4,$r5
1c008000:	1dc7ff50 	pcaddu12i	$r16,-114694(0xe3ffa)
1c008004:	02839210 	addi.w	$r16,$r16,228(0xe4)
1c008008:	53fa47ff 	b	-1468(0xffffa44) # 1c007a4c <_vfiprintf_r+0xb50>
1c00800c:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c008010:	29800069 	st.w	$r9,$r3,0
1c008014:	53f10fff 	b	-3828(0xffff10c) # 1c007120 <_vfiprintf_r+0x224>
1c008018:	0015030f 	move	$r15,$r24
1c00801c:	53f917ff 	b	-1772(0xffff914) # 1c007930 <_vfiprintf_r+0xa34>
1c008020:	28802067 	ld.w	$r7,$r3,8(0x8)
1c008024:	288000fd 	ld.w	$r29,$r7,0
1c008028:	028010fe 	addi.w	$r30,$r7,4(0x4)
1c00802c:	64000ba0 	bge	$r29,$r0,8(0x8) # 1c008034 <_vfiprintf_r+0x1138>
1c008030:	02bffc1d 	addi.w	$r29,$r0,-1(0xfff)
1c008034:	280007e7 	ld.b	$r7,$r31,1(0x1)
1c008038:	2980207e 	st.w	$r30,$r3,8(0x8)
1c00803c:	0015013f 	move	$r31,$r9
1c008040:	53f04bff 	b	-4024(0xffff048) # 1c007088 <_vfiprintf_r+0x18c>

1c008044 <vfiprintf>:
vfiprintf():
1c008044:	1dc7ff69 	pcaddu12i	$r9,-114693(0xe3ffb)
1c008048:	28b0c129 	ld.w	$r9,$r9,-976(0xc30)
1c00804c:	001500c7 	move	$r7,$r6
1c008050:	001500a6 	move	$r6,$r5
1c008054:	00150085 	move	$r5,$r4
1c008058:	28800124 	ld.w	$r4,$r9,0
1c00805c:	53eea3ff 	b	-4448(0xfffeea0) # 1c006efc <_vfiprintf_r>

1c008060 <__sbprintf>:
__sbprintf():
1c008060:	2a4030a9 	ld.hu	$r9,$r5,12(0xc)
1c008064:	288180af 	ld.w	$r15,$r5,96(0x60)
1c008068:	2a4038ad 	ld.hu	$r13,$r5,14(0xe)
1c00806c:	288070ab 	ld.w	$r11,$r5,28(0x1c)
1c008070:	288090aa 	ld.w	$r10,$r5,36(0x24)
1c008074:	02bff408 	addi.w	$r8,$r0,-3(0xffd)
1c008078:	02ae0063 	addi.w	$r3,$r3,-1152(0xb80)
1c00807c:	0014a129 	and	$r9,$r9,$r8
1c008080:	2991e076 	st.w	$r22,$r3,1144(0x478)
1c008084:	02900008 	addi.w	$r8,$r0,1024(0x400)
1c008088:	29406069 	st.h	$r9,$r3,24(0x18)
1c00808c:	001500b6 	move	$r22,$r5
1c008090:	0281c069 	addi.w	$r9,$r3,112(0x70)
1c008094:	02803065 	addi.w	$r5,$r3,12(0xc)
1c008098:	2991d077 	st.w	$r23,$r3,1140(0x474)
1c00809c:	2991c078 	st.w	$r24,$r3,1136(0x470)
1c0080a0:	2991f061 	st.w	$r1,$r3,1148(0x47c)
1c0080a4:	00150098 	move	$r24,$r4
1c0080a8:	2981b06f 	st.w	$r15,$r3,108(0x6c)
1c0080ac:	2940686d 	st.h	$r13,$r3,26(0x1a)
1c0080b0:	2980a06b 	st.w	$r11,$r3,40(0x28)
1c0080b4:	2980c06a 	st.w	$r10,$r3,48(0x30)
1c0080b8:	29803069 	st.w	$r9,$r3,12(0xc)
1c0080bc:	29807069 	st.w	$r9,$r3,28(0x1c)
1c0080c0:	29805068 	st.w	$r8,$r3,20(0x14)
1c0080c4:	29808068 	st.w	$r8,$r3,32(0x20)
1c0080c8:	29809060 	st.w	$r0,$r3,36(0x24)
1c0080cc:	57ee33ff 	bl	-4560(0xfffee30) # 1c006efc <_vfiprintf_r>
1c0080d0:	00150097 	move	$r23,$r4
1c0080d4:	64003880 	bge	$r4,$r0,56(0x38) # 1c00810c <__sbprintf+0xac>
1c0080d8:	2a406069 	ld.hu	$r9,$r3,24(0x18)
1c0080dc:	03410129 	andi	$r9,$r9,0x40
1c0080e0:	58001120 	beq	$r9,$r0,16(0x10) # 1c0080f0 <__sbprintf+0x90>
1c0080e4:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c0080e8:	03810129 	ori	$r9,$r9,0x40
1c0080ec:	294032c9 	st.h	$r9,$r22,12(0xc)
1c0080f0:	2891f061 	ld.w	$r1,$r3,1148(0x47c)
1c0080f4:	2891e076 	ld.w	$r22,$r3,1144(0x478)
1c0080f8:	001502e4 	move	$r4,$r23
1c0080fc:	2891c078 	ld.w	$r24,$r3,1136(0x470)
1c008100:	2891d077 	ld.w	$r23,$r3,1140(0x474)
1c008104:	02920063 	addi.w	$r3,$r3,1152(0x480)
1c008108:	4c000020 	jirl	$r0,$r1,0
1c00810c:	02803065 	addi.w	$r5,$r3,12(0xc)
1c008110:	00150304 	move	$r4,$r24
1c008114:	57c25fff 	bl	-15780(0xfffc25c) # 1c004370 <_fflush_r>
1c008118:	5bffc080 	beq	$r4,$r0,-64(0x3ffc0) # 1c0080d8 <__sbprintf+0x78>
1c00811c:	02bffc17 	addi.w	$r23,$r0,-1(0xfff)
1c008120:	53ffbbff 	b	-72(0xfffffb8) # 1c0080d8 <__sbprintf+0x78>

1c008124 <_write_r>:
_write_r():
1c008124:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c008128:	001500a9 	move	$r9,$r5
1c00812c:	29802076 	st.w	$r22,$r3,8(0x8)
1c008130:	29801077 	st.w	$r23,$r3,4(0x4)
1c008134:	001500c5 	move	$r5,$r6
1c008138:	00150097 	move	$r23,$r4
1c00813c:	1dc7ff76 	pcaddu12i	$r22,-114693(0xe3ffb)
1c008140:	28ab92d6 	ld.w	$r22,$r22,-1308(0xae4)
1c008144:	00150124 	move	$r4,$r9
1c008148:	001500e6 	move	$r6,$r7
1c00814c:	29803061 	st.w	$r1,$r3,12(0xc)
1c008150:	298002c0 	st.w	$r0,$r22,0
1c008154:	5416c000 	bl	5824(0x16c0) # 1c009814 <write>
1c008158:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c00815c:	58001889 	beq	$r4,$r9,24(0x18) # 1c008174 <_write_r+0x50>
1c008160:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008164:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008168:	28801077 	ld.w	$r23,$r3,4(0x4)
1c00816c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008170:	4c000020 	jirl	$r0,$r1,0
1c008174:	288002c9 	ld.w	$r9,$r22,0
1c008178:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c008160 <_write_r+0x3c>
1c00817c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008180:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008184:	298002e9 	st.w	$r9,$r23,0
1c008188:	28801077 	ld.w	$r23,$r3,4(0x4)
1c00818c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008190:	4c000020 	jirl	$r0,$r1,0

1c008194 <_calloc_r>:
_calloc_r():
1c008194:	001c18a5 	mul.w	$r5,$r5,$r6
1c008198:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00819c:	29802076 	st.w	$r22,$r3,8(0x8)
1c0081a0:	29803061 	st.w	$r1,$r3,12(0xc)
1c0081a4:	57cddfff 	bl	-12836(0xfffcddc) # 1c004f80 <_malloc_r>
1c0081a8:	00150096 	move	$r22,$r4
1c0081ac:	58003480 	beq	$r4,$r0,52(0x34) # 1c0081e0 <_calloc_r+0x4c>
1c0081b0:	28bff086 	ld.w	$r6,$r4,-4(0xffc)
1c0081b4:	02bff009 	addi.w	$r9,$r0,-4(0xffc)
1c0081b8:	02809008 	addi.w	$r8,$r0,36(0x24)
1c0081bc:	0014a4c6 	and	$r6,$r6,$r9
1c0081c0:	02bff0c6 	addi.w	$r6,$r6,-4(0xffc)
1c0081c4:	68006106 	bltu	$r8,$r6,96(0x60) # 1c008224 <_calloc_r+0x90>
1c0081c8:	02804c07 	addi.w	$r7,$r0,19(0x13)
1c0081cc:	00150089 	move	$r9,$r4
1c0081d0:	680024e6 	bltu	$r7,$r6,36(0x24) # 1c0081f4 <_calloc_r+0x60>
1c0081d4:	29800120 	st.w	$r0,$r9,0
1c0081d8:	29801120 	st.w	$r0,$r9,4(0x4)
1c0081dc:	29802120 	st.w	$r0,$r9,8(0x8)
1c0081e0:	001502c4 	move	$r4,$r22
1c0081e4:	28803061 	ld.w	$r1,$r3,12(0xc)
1c0081e8:	28802076 	ld.w	$r22,$r3,8(0x8)
1c0081ec:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0081f0:	4c000020 	jirl	$r0,$r1,0
1c0081f4:	29800080 	st.w	$r0,$r4,0
1c0081f8:	29801080 	st.w	$r0,$r4,4(0x4)
1c0081fc:	02806c09 	addi.w	$r9,$r0,27(0x1b)
1c008200:	6c004126 	bgeu	$r9,$r6,64(0x40) # 1c008240 <_calloc_r+0xac>
1c008204:	29802080 	st.w	$r0,$r4,8(0x8)
1c008208:	29803080 	st.w	$r0,$r4,12(0xc)
1c00820c:	02804089 	addi.w	$r9,$r4,16(0x10)
1c008210:	5fffc4c8 	bne	$r6,$r8,-60(0x3ffc4) # 1c0081d4 <_calloc_r+0x40>
1c008214:	29804080 	st.w	$r0,$r4,16(0x10)
1c008218:	02806089 	addi.w	$r9,$r4,24(0x18)
1c00821c:	29805080 	st.w	$r0,$r4,20(0x14)
1c008220:	53ffb7ff 	b	-76(0xfffffb4) # 1c0081d4 <_calloc_r+0x40>
1c008224:	00150005 	move	$r5,$r0
1c008228:	57d703ff 	bl	-10496(0xfffd700) # 1c005928 <memset>
1c00822c:	001502c4 	move	$r4,$r22
1c008230:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008234:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008238:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00823c:	4c000020 	jirl	$r0,$r1,0
1c008240:	02802089 	addi.w	$r9,$r4,8(0x8)
1c008244:	53ff93ff 	b	-112(0xfffff90) # 1c0081d4 <_calloc_r+0x40>

1c008248 <_close_r>:
_close_r():
1c008248:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00824c:	29802076 	st.w	$r22,$r3,8(0x8)
1c008250:	29801077 	st.w	$r23,$r3,4(0x4)
1c008254:	1dc7ff76 	pcaddu12i	$r22,-114693(0xe3ffb)
1c008258:	28a732d6 	ld.w	$r22,$r22,-1588(0x9cc)
1c00825c:	00150097 	move	$r23,$r4
1c008260:	001500a4 	move	$r4,$r5
1c008264:	29803061 	st.w	$r1,$r3,12(0xc)
1c008268:	298002c0 	st.w	$r0,$r22,0
1c00826c:	578353ff 	bl	-31920(0xfff8350) # 1c0005bc <close>
1c008270:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c008274:	58001889 	beq	$r4,$r9,24(0x18) # 1c00828c <_close_r+0x44>
1c008278:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00827c:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008280:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008284:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008288:	4c000020 	jirl	$r0,$r1,0
1c00828c:	288002c9 	ld.w	$r9,$r22,0
1c008290:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c008278 <_close_r+0x30>
1c008294:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008298:	28802076 	ld.w	$r22,$r3,8(0x8)
1c00829c:	298002e9 	st.w	$r9,$r23,0
1c0082a0:	28801077 	ld.w	$r23,$r3,4(0x4)
1c0082a4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0082a8:	4c000020 	jirl	$r0,$r1,0

1c0082ac <_fclose_r>:
_fclose_r():
1c0082ac:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0082b0:	29803061 	st.w	$r1,$r3,12(0xc)
1c0082b4:	29802076 	st.w	$r22,$r3,8(0x8)
1c0082b8:	29801077 	st.w	$r23,$r3,4(0x4)
1c0082bc:	29800078 	st.w	$r24,$r3,0
1c0082c0:	580020a0 	beq	$r5,$r0,32(0x20) # 1c0082e0 <_fclose_r+0x34>
1c0082c4:	00150097 	move	$r23,$r4
1c0082c8:	001500b6 	move	$r22,$r5
1c0082cc:	58000c80 	beq	$r4,$r0,12(0xc) # 1c0082d8 <_fclose_r+0x2c>
1c0082d0:	2880e089 	ld.w	$r9,$r4,56(0x38)
1c0082d4:	5800b120 	beq	$r9,$r0,176(0xb0) # 1c008384 <_fclose_r+0xd8>
1c0082d8:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c0082dc:	5c002520 	bne	$r9,$r0,36(0x24) # 1c008300 <_fclose_r+0x54>
1c0082e0:	28803061 	ld.w	$r1,$r3,12(0xc)
1c0082e4:	28802076 	ld.w	$r22,$r3,8(0x8)
1c0082e8:	00150018 	move	$r24,$r0
1c0082ec:	00150304 	move	$r4,$r24
1c0082f0:	28801077 	ld.w	$r23,$r3,4(0x4)
1c0082f4:	28800078 	ld.w	$r24,$r3,0
1c0082f8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0082fc:	4c000020 	jirl	$r0,$r1,0
1c008300:	001502c5 	move	$r5,$r22
1c008304:	001502e4 	move	$r4,$r23
1c008308:	57be0fff 	bl	-16884(0xfffbe0c) # 1c004114 <__sflush_r>
1c00830c:	2880b2c9 	ld.w	$r9,$r22,44(0x2c)
1c008310:	00150098 	move	$r24,$r4
1c008314:	58001520 	beq	$r9,$r0,20(0x14) # 1c008328 <_fclose_r+0x7c>
1c008318:	288072c5 	ld.w	$r5,$r22,28(0x1c)
1c00831c:	001502e4 	move	$r4,$r23
1c008320:	4c000121 	jirl	$r1,$r9,0
1c008324:	60007080 	blt	$r4,$r0,112(0x70) # 1c008394 <_fclose_r+0xe8>
1c008328:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c00832c:	03420129 	andi	$r9,$r9,0x80
1c008330:	5c007520 	bne	$r9,$r0,116(0x74) # 1c0083a4 <_fclose_r+0xf8>
1c008334:	2880c2c5 	ld.w	$r5,$r22,48(0x30)
1c008338:	580018a0 	beq	$r5,$r0,24(0x18) # 1c008350 <_fclose_r+0xa4>
1c00833c:	028102c9 	addi.w	$r9,$r22,64(0x40)
1c008340:	58000ca9 	beq	$r5,$r9,12(0xc) # 1c00834c <_fclose_r+0xa0>
1c008344:	001502e4 	move	$r4,$r23
1c008348:	57c537ff 	bl	-15052(0xfffc534) # 1c00487c <_free_r>
1c00834c:	2980c2c0 	st.w	$r0,$r22,48(0x30)
1c008350:	288112c5 	ld.w	$r5,$r22,68(0x44)
1c008354:	580010a0 	beq	$r5,$r0,16(0x10) # 1c008364 <_fclose_r+0xb8>
1c008358:	001502e4 	move	$r4,$r23
1c00835c:	57c523ff 	bl	-15072(0xfffc520) # 1c00487c <_free_r>
1c008360:	298112c0 	st.w	$r0,$r22,68(0x44)
1c008364:	294032c0 	st.h	$r0,$r22,12(0xc)
1c008368:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00836c:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008370:	00150304 	move	$r4,$r24
1c008374:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008378:	28800078 	ld.w	$r24,$r3,0
1c00837c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008380:	4c000020 	jirl	$r0,$r1,0
1c008384:	57c3abff 	bl	-15448(0xfffc3a8) # 1c00472c <__sinit>
1c008388:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c00838c:	5bff5520 	beq	$r9,$r0,-172(0x3ff54) # 1c0082e0 <_fclose_r+0x34>
1c008390:	53ff73ff 	b	-144(0xfffff70) # 1c008300 <_fclose_r+0x54>
1c008394:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c008398:	02bffc18 	addi.w	$r24,$r0,-1(0xfff)
1c00839c:	03420129 	andi	$r9,$r9,0x80
1c0083a0:	5bff9520 	beq	$r9,$r0,-108(0x3ff94) # 1c008334 <_fclose_r+0x88>
1c0083a4:	288042c5 	ld.w	$r5,$r22,16(0x10)
1c0083a8:	001502e4 	move	$r4,$r23
1c0083ac:	57c4d3ff 	bl	-15152(0xfffc4d0) # 1c00487c <_free_r>
1c0083b0:	53ff87ff 	b	-124(0xfffff84) # 1c008334 <_fclose_r+0x88>

1c0083b4 <fclose>:
fclose():
1c0083b4:	1dc7ff69 	pcaddu12i	$r9,-114693(0xe3ffb)
1c0083b8:	28a30129 	ld.w	$r9,$r9,-1856(0x8c0)
1c0083bc:	00150085 	move	$r5,$r4
1c0083c0:	28800124 	ld.w	$r4,$r9,0
1c0083c4:	53feebff 	b	-280(0xffffee8) # 1c0082ac <_fclose_r>

1c0083c8 <__fputwc>:
__fputwc():
1c0083c8:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c0083cc:	2980a076 	st.w	$r22,$r3,40(0x28)
1c0083d0:	29807079 	st.w	$r25,$r3,28(0x1c)
1c0083d4:	2980607a 	st.w	$r26,$r3,24(0x18)
1c0083d8:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c0083dc:	29809077 	st.w	$r23,$r3,36(0x24)
1c0083e0:	29808078 	st.w	$r24,$r3,32(0x20)
1c0083e4:	2980507b 	st.w	$r27,$r3,20(0x14)
1c0083e8:	00150099 	move	$r25,$r4
1c0083ec:	001500ba 	move	$r26,$r5
1c0083f0:	001500d6 	move	$r22,$r6
1c0083f4:	57c9a7ff 	bl	-13916(0xfffc9a4) # 1c004d98 <__locale_mb_cur_max>
1c0083f8:	02800409 	addi.w	$r9,$r0,1(0x1)
1c0083fc:	5c002489 	bne	$r4,$r9,36(0x24) # 1c008420 <__fputwc+0x58>
1c008400:	02bfff49 	addi.w	$r9,$r26,-1(0xfff)
1c008404:	0283f808 	addi.w	$r8,$r0,254(0xfe)
1c008408:	68001909 	bltu	$r8,$r9,24(0x18) # 1c008420 <__fputwc+0x58>
1c00840c:	0040e345 	slli.w	$r5,$r26,0x18
1c008410:	0048e0a5 	srai.w	$r5,$r5,0x18
1c008414:	29003065 	st.b	$r5,$r3,12(0xc)
1c008418:	0280041b 	addi.w	$r27,$r0,1(0x1)
1c00841c:	50002c00 	b	44(0x2c) # 1c008448 <__fputwc+0x80>
1c008420:	028162c7 	addi.w	$r7,$r22,88(0x58)
1c008424:	00150346 	move	$r6,$r26
1c008428:	02803065 	addi.w	$r5,$r3,12(0xc)
1c00842c:	00150324 	move	$r4,$r25
1c008430:	5411c000 	bl	4544(0x11c0) # 1c0095f0 <_wcrtomb_r>
1c008434:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c008438:	0015009b 	move	$r27,$r4
1c00843c:	5800f089 	beq	$r4,$r9,240(0xf0) # 1c00852c <__fputwc+0x164>
1c008440:	5800c080 	beq	$r4,$r0,192(0xc0) # 1c008500 <__fputwc+0x138>
1c008444:	28003065 	ld.b	$r5,$r3,12(0xc)
1c008448:	288022c9 	ld.w	$r9,$r22,8(0x8)
1c00844c:	00150017 	move	$r23,$r0
1c008450:	02802818 	addi.w	$r24,$r0,10(0xa)
1c008454:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c008458:	298022c9 	st.w	$r9,$r22,8(0x8)
1c00845c:	0343fca5 	andi	$r5,$r5,0xff
1c008460:	60004120 	blt	$r9,$r0,64(0x40) # 1c0084a0 <__fputwc+0xd8>
1c008464:	288002c9 	ld.w	$r9,$r22,0
1c008468:	29000125 	st.b	$r5,$r9,0
1c00846c:	288002c9 	ld.w	$r9,$r22,0
1c008470:	02800529 	addi.w	$r9,$r9,1(0x1)
1c008474:	298002c9 	st.w	$r9,$r22,0
1c008478:	028006f7 	addi.w	$r23,$r23,1(0x1)
1c00847c:	02803069 	addi.w	$r9,$r3,12(0xc)
1c008480:	00105d29 	add.w	$r9,$r9,$r23
1c008484:	6c007efb 	bgeu	$r23,$r27,124(0x7c) # 1c008500 <__fputwc+0x138>
1c008488:	28000125 	ld.b	$r5,$r9,0
1c00848c:	288022c9 	ld.w	$r9,$r22,8(0x8)
1c008490:	0343fca5 	andi	$r5,$r5,0xff
1c008494:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c008498:	298022c9 	st.w	$r9,$r22,8(0x8)
1c00849c:	67ffc920 	bge	$r9,$r0,-56(0x3ffc8) # 1c008464 <__fputwc+0x9c>
1c0084a0:	288062c8 	ld.w	$r8,$r22,24(0x18)
1c0084a4:	60004128 	blt	$r9,$r8,64(0x40) # 1c0084e4 <__fputwc+0x11c>
1c0084a8:	288002c9 	ld.w	$r9,$r22,0
1c0084ac:	29000125 	st.b	$r5,$r9,0
1c0084b0:	288002c9 	ld.w	$r9,$r22,0
1c0084b4:	2a000128 	ld.bu	$r8,$r9,0
1c0084b8:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0084bc:	5fffb918 	bne	$r8,$r24,-72(0x3ffb8) # 1c008474 <__fputwc+0xac>
1c0084c0:	001502c6 	move	$r6,$r22
1c0084c4:	02802805 	addi.w	$r5,$r0,10(0xa)
1c0084c8:	00150324 	move	$r4,$r25
1c0084cc:	540f8400 	bl	3972(0xf84) # 1c009450 <__swbuf_r>
1c0084d0:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0084d4:	02400484 	sltui	$r4,$r4,1(0x1)
1c0084d8:	5bffa080 	beq	$r4,$r0,-96(0x3ffa0) # 1c008478 <__fputwc+0xb0>
1c0084dc:	02bffc1b 	addi.w	$r27,$r0,-1(0xfff)
1c0084e0:	50002400 	b	36(0x24) # 1c008504 <__fputwc+0x13c>
1c0084e4:	001502c6 	move	$r6,$r22
1c0084e8:	00150324 	move	$r4,$r25
1c0084ec:	540f6400 	bl	3940(0xf64) # 1c009450 <__swbuf_r>
1c0084f0:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0084f4:	02400484 	sltui	$r4,$r4,1(0x1)
1c0084f8:	5bff8080 	beq	$r4,$r0,-128(0x3ff80) # 1c008478 <__fputwc+0xb0>
1c0084fc:	53ffe3ff 	b	-32(0xfffffe0) # 1c0084dc <__fputwc+0x114>
1c008500:	0015035b 	move	$r27,$r26
1c008504:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c008508:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c00850c:	00150364 	move	$r4,$r27
1c008510:	28809077 	ld.w	$r23,$r3,36(0x24)
1c008514:	28808078 	ld.w	$r24,$r3,32(0x20)
1c008518:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c00851c:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c008520:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c008524:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c008528:	4c000020 	jirl	$r0,$r1,0
1c00852c:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c008530:	03810129 	ori	$r9,$r9,0x40
1c008534:	294032c9 	st.h	$r9,$r22,12(0xc)
1c008538:	53ffcfff 	b	-52(0xfffffcc) # 1c008504 <__fputwc+0x13c>

1c00853c <_fputwc_r>:
_fputwc_r():
1c00853c:	284030c9 	ld.h	$r9,$r6,12(0xc)
1c008540:	14000048 	lu12i.w	$r8,2(0x2)
1c008544:	0014a127 	and	$r7,$r9,$r8
1c008548:	5c0018e0 	bne	$r7,$r0,24(0x18) # 1c008560 <_fputwc_r+0x24>
1c00854c:	288180c7 	ld.w	$r7,$r6,96(0x60)
1c008550:	00152129 	or	$r9,$r9,$r8
1c008554:	294030c9 	st.h	$r9,$r6,12(0xc)
1c008558:	001520e8 	or	$r8,$r7,$r8
1c00855c:	298180c8 	st.w	$r8,$r6,96(0x60)
1c008560:	53fe6bff 	b	-408(0xffffe68) # 1c0083c8 <__fputwc>

1c008564 <fputwc>:
fputwc():
1c008564:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c008568:	1dc7ff49 	pcaddu12i	$r9,-114694(0xe3ffa)
1c00856c:	289c3129 	ld.w	$r9,$r9,1804(0x70c)
1c008570:	29806076 	st.w	$r22,$r3,24(0x18)
1c008574:	28800136 	ld.w	$r22,$r9,0
1c008578:	29805077 	st.w	$r23,$r3,20(0x14)
1c00857c:	29807061 	st.w	$r1,$r3,28(0x1c)
1c008580:	00150097 	move	$r23,$r4
1c008584:	001500a6 	move	$r6,$r5
1c008588:	58000ec0 	beq	$r22,$r0,12(0xc) # 1c008594 <fputwc+0x30>
1c00858c:	2880e2c9 	ld.w	$r9,$r22,56(0x38)
1c008590:	58004520 	beq	$r9,$r0,68(0x44) # 1c0085d4 <fputwc+0x70>
1c008594:	284030c9 	ld.h	$r9,$r6,12(0xc)
1c008598:	14000048 	lu12i.w	$r8,2(0x2)
1c00859c:	0014a127 	and	$r7,$r9,$r8
1c0085a0:	5c0018e0 	bne	$r7,$r0,24(0x18) # 1c0085b8 <fputwc+0x54>
1c0085a4:	288180c7 	ld.w	$r7,$r6,96(0x60)
1c0085a8:	00152129 	or	$r9,$r9,$r8
1c0085ac:	294030c9 	st.h	$r9,$r6,12(0xc)
1c0085b0:	001520e8 	or	$r8,$r7,$r8
1c0085b4:	298180c8 	st.w	$r8,$r6,96(0x60)
1c0085b8:	001502c4 	move	$r4,$r22
1c0085bc:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0085c0:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0085c4:	001502e5 	move	$r5,$r23
1c0085c8:	28805077 	ld.w	$r23,$r3,20(0x14)
1c0085cc:	02808063 	addi.w	$r3,$r3,32(0x20)
1c0085d0:	53fdfbff 	b	-520(0xffffdf8) # 1c0083c8 <__fputwc>
1c0085d4:	001502c4 	move	$r4,$r22
1c0085d8:	29803065 	st.w	$r5,$r3,12(0xc)
1c0085dc:	57c153ff 	bl	-16048(0xfffc150) # 1c00472c <__sinit>
1c0085e0:	28803066 	ld.w	$r6,$r3,12(0xc)
1c0085e4:	53ffb3ff 	b	-80(0xfffffb0) # 1c008594 <fputwc+0x30>

1c0085e8 <_fstat_r>:
_fstat_r():
1c0085e8:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0085ec:	001500a9 	move	$r9,$r5
1c0085f0:	29802076 	st.w	$r22,$r3,8(0x8)
1c0085f4:	29801077 	st.w	$r23,$r3,4(0x4)
1c0085f8:	1dc7ff56 	pcaddu12i	$r22,-114694(0xe3ffa)
1c0085fc:	2898a2d6 	ld.w	$r22,$r22,1576(0x628)
1c008600:	00150097 	move	$r23,$r4
1c008604:	001500c5 	move	$r5,$r6
1c008608:	00150124 	move	$r4,$r9
1c00860c:	29803061 	st.w	$r1,$r3,12(0xc)
1c008610:	298002c0 	st.w	$r0,$r22,0
1c008614:	54127c00 	bl	4732(0x127c) # 1c009890 <fstat>
1c008618:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c00861c:	58001889 	beq	$r4,$r9,24(0x18) # 1c008634 <_fstat_r+0x4c>
1c008620:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008624:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008628:	28801077 	ld.w	$r23,$r3,4(0x4)
1c00862c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008630:	4c000020 	jirl	$r0,$r1,0
1c008634:	288002c9 	ld.w	$r9,$r22,0
1c008638:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c008620 <_fstat_r+0x38>
1c00863c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008640:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008644:	298002e9 	st.w	$r9,$r23,0
1c008648:	28801077 	ld.w	$r23,$r3,4(0x4)
1c00864c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008650:	4c000020 	jirl	$r0,$r1,0

1c008654 <__sfvwrite_r>:
__sfvwrite_r():
1c008654:	288020c9 	ld.w	$r9,$r6,8(0x8)
1c008658:	58033d20 	beq	$r9,$r0,828(0x33c) # 1c008994 <__sfvwrite_r+0x340>
1c00865c:	2a4030a8 	ld.hu	$r8,$r5,12(0xc)
1c008660:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c008664:	2980a076 	st.w	$r22,$r3,40(0x28)
1c008668:	2980607a 	st.w	$r26,$r3,24(0x18)
1c00866c:	2980207e 	st.w	$r30,$r3,8(0x8)
1c008670:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c008674:	29809077 	st.w	$r23,$r3,36(0x24)
1c008678:	29808078 	st.w	$r24,$r3,32(0x20)
1c00867c:	29807079 	st.w	$r25,$r3,28(0x1c)
1c008680:	2980507b 	st.w	$r27,$r3,20(0x14)
1c008684:	2980407c 	st.w	$r28,$r3,16(0x10)
1c008688:	2980307d 	st.w	$r29,$r3,12(0xc)
1c00868c:	2980107f 	st.w	$r31,$r3,4(0x4)
1c008690:	03402109 	andi	$r9,$r8,0x8
1c008694:	001500b6 	move	$r22,$r5
1c008698:	0015009a 	move	$r26,$r4
1c00869c:	001500de 	move	$r30,$r6
1c0086a0:	58009520 	beq	$r9,$r0,148(0x94) # 1c008734 <__sfvwrite_r+0xe0>
1c0086a4:	288040a9 	ld.w	$r9,$r5,16(0x10)
1c0086a8:	58008d20 	beq	$r9,$r0,140(0x8c) # 1c008734 <__sfvwrite_r+0xe0>
1c0086ac:	03400909 	andi	$r9,$r8,0x2
1c0086b0:	288003d7 	ld.w	$r23,$r30,0
1c0086b4:	5800a120 	beq	$r9,$r0,160(0xa0) # 1c008754 <__sfvwrite_r+0x100>
1c0086b8:	288092c8 	ld.w	$r8,$r22,36(0x24)
1c0086bc:	288072c9 	ld.w	$r9,$r22,28(0x1c)
1c0086c0:	14fffffb 	lu12i.w	$r27,524287(0x7ffff)
1c0086c4:	00150019 	move	$r25,$r0
1c0086c8:	00150018 	move	$r24,$r0
1c0086cc:	03b0037b 	ori	$r27,$r27,0xc00
1c0086d0:	00150326 	move	$r6,$r25
1c0086d4:	00150125 	move	$r5,$r9
1c0086d8:	00150344 	move	$r4,$r26
1c0086dc:	58004b00 	beq	$r24,$r0,72(0x48) # 1c008724 <__sfvwrite_r+0xd0>
1c0086e0:	00150307 	move	$r7,$r24
1c0086e4:	6c000b78 	bgeu	$r27,$r24,8(0x8) # 1c0086ec <__sfvwrite_r+0x98>
1c0086e8:	00150367 	move	$r7,$r27
1c0086ec:	4c000101 	jirl	$r1,$r8,0
1c0086f0:	64029004 	bge	$r0,$r4,656(0x290) # 1c008980 <__sfvwrite_r+0x32c>
1c0086f4:	288023c9 	ld.w	$r9,$r30,8(0x8)
1c0086f8:	00101339 	add.w	$r25,$r25,$r4
1c0086fc:	00111318 	sub.w	$r24,$r24,$r4
1c008700:	00111124 	sub.w	$r4,$r9,$r4
1c008704:	298023c4 	st.w	$r4,$r30,8(0x8)
1c008708:	58021880 	beq	$r4,$r0,536(0x218) # 1c008920 <__sfvwrite_r+0x2cc>
1c00870c:	288072c9 	ld.w	$r9,$r22,28(0x1c)
1c008710:	288092c8 	ld.w	$r8,$r22,36(0x24)
1c008714:	00150326 	move	$r6,$r25
1c008718:	00150125 	move	$r5,$r9
1c00871c:	00150344 	move	$r4,$r26
1c008720:	5fffc300 	bne	$r24,$r0,-64(0x3ffc0) # 1c0086e0 <__sfvwrite_r+0x8c>
1c008724:	288002f9 	ld.w	$r25,$r23,0
1c008728:	288012f8 	ld.w	$r24,$r23,4(0x4)
1c00872c:	028022f7 	addi.w	$r23,$r23,8(0x8)
1c008730:	53ffa3ff 	b	-96(0xfffffa0) # 1c0086d0 <__sfvwrite_r+0x7c>
1c008734:	001502c5 	move	$r5,$r22
1c008738:	00150344 	move	$r4,$r26
1c00873c:	57a0c7ff 	bl	-24380(0xfffa0c4) # 1c002800 <__swsetup_r>
1c008740:	5c03c480 	bne	$r4,$r0,964(0x3c4) # 1c008b04 <__sfvwrite_r+0x4b0>
1c008744:	2a4032c8 	ld.hu	$r8,$r22,12(0xc)
1c008748:	288003d7 	ld.w	$r23,$r30,0
1c00874c:	03400909 	andi	$r9,$r8,0x2
1c008750:	5fff6920 	bne	$r9,$r0,-152(0x3ff68) # 1c0086b8 <__sfvwrite_r+0x64>
1c008754:	03400509 	andi	$r9,$r8,0x1
1c008758:	5c024520 	bne	$r9,$r0,580(0x244) # 1c00899c <__sfvwrite_r+0x348>
1c00875c:	288022dd 	ld.w	$r29,$r22,8(0x8)
1c008760:	288002c4 	ld.w	$r4,$r22,0
1c008764:	14fffffb 	lu12i.w	$r27,524287(0x7ffff)
1c008768:	03bffb7b 	ori	$r27,$r27,0xffe
1c00876c:	0015001f 	move	$r31,$r0
1c008770:	00150018 	move	$r24,$r0
1c008774:	58010300 	beq	$r24,$r0,256(0x100) # 1c008874 <__sfvwrite_r+0x220>
1c008778:	03480107 	andi	$r7,$r8,0x200
1c00877c:	580258e0 	beq	$r7,$r0,600(0x258) # 1c0089d4 <__sfvwrite_r+0x380>
1c008780:	001503bc 	move	$r28,$r29
1c008784:	6802eb1d 	bltu	$r24,$r29,744(0x2e8) # 1c008a6c <__sfvwrite_r+0x418>
1c008788:	03520106 	andi	$r6,$r8,0x480
1c00878c:	580098c0 	beq	$r6,$r0,152(0x98) # 1c008824 <__sfvwrite_r+0x1d0>
1c008790:	288052c6 	ld.w	$r6,$r22,20(0x14)
1c008794:	288042c5 	ld.w	$r5,$r22,16(0x10)
1c008798:	02800709 	addi.w	$r9,$r24,1(0x1)
1c00879c:	004084d9 	slli.w	$r25,$r6,0x1
1c0087a0:	00101b26 	add.w	$r6,$r25,$r6
1c0087a4:	0044fcd9 	srli.w	$r25,$r6,0x1f
1c0087a8:	00101b39 	add.w	$r25,$r25,$r6
1c0087ac:	0011149d 	sub.w	$r29,$r4,$r5
1c0087b0:	00488739 	srai.w	$r25,$r25,0x1
1c0087b4:	00107529 	add.w	$r9,$r9,$r29
1c0087b8:	00150326 	move	$r6,$r25
1c0087bc:	6c000f29 	bgeu	$r25,$r9,12(0xc) # 1c0087c8 <__sfvwrite_r+0x174>
1c0087c0:	00150139 	move	$r25,$r9
1c0087c4:	00150126 	move	$r6,$r9
1c0087c8:	03500108 	andi	$r8,$r8,0x400
1c0087cc:	5802ed00 	beq	$r8,$r0,748(0x2ec) # 1c008ab8 <__sfvwrite_r+0x464>
1c0087d0:	001500c5 	move	$r5,$r6
1c0087d4:	00150344 	move	$r4,$r26
1c0087d8:	57c7abff 	bl	-14424(0xfffc7a8) # 1c004f80 <_malloc_r>
1c0087dc:	0015009c 	move	$r28,$r4
1c0087e0:	58031480 	beq	$r4,$r0,788(0x314) # 1c008af4 <__sfvwrite_r+0x4a0>
1c0087e4:	288042c5 	ld.w	$r5,$r22,16(0x10)
1c0087e8:	001503a6 	move	$r6,$r29
1c0087ec:	57d04fff 	bl	-12212(0xfffd04c) # 1c005838 <memcpy>
1c0087f0:	2a4032c8 	ld.hu	$r8,$r22,12(0xc)
1c0087f4:	02adfc09 	addi.w	$r9,$r0,-1153(0xb7f)
1c0087f8:	0014a508 	and	$r8,$r8,$r9
1c0087fc:	03820108 	ori	$r8,$r8,0x80
1c008800:	294032c8 	st.h	$r8,$r22,12(0xc)
1c008804:	00107784 	add.w	$r4,$r28,$r29
1c008808:	00117727 	sub.w	$r7,$r25,$r29
1c00880c:	298042dc 	st.w	$r28,$r22,16(0x10)
1c008810:	298002c4 	st.w	$r4,$r22,0
1c008814:	298052d9 	st.w	$r25,$r22,20(0x14)
1c008818:	0015031d 	move	$r29,$r24
1c00881c:	298022c7 	st.w	$r7,$r22,8(0x8)
1c008820:	0015031c 	move	$r28,$r24
1c008824:	00150386 	move	$r6,$r28
1c008828:	001503e5 	move	$r5,$r31
1c00882c:	5403b400 	bl	948(0x3b4) # 1c008be0 <memmove>
1c008830:	288022c8 	ld.w	$r8,$r22,8(0x8)
1c008834:	288002c6 	ld.w	$r6,$r22,0
1c008838:	00150319 	move	$r25,$r24
1c00883c:	00117509 	sub.w	$r9,$r8,$r29
1c008840:	001070c6 	add.w	$r6,$r6,$r28
1c008844:	298022c9 	st.w	$r9,$r22,8(0x8)
1c008848:	298002c6 	st.w	$r6,$r22,0
1c00884c:	00150018 	move	$r24,$r0
1c008850:	288023c4 	ld.w	$r4,$r30,8(0x8)
1c008854:	001067ff 	add.w	$r31,$r31,$r25
1c008858:	00116499 	sub.w	$r25,$r4,$r25
1c00885c:	298023d9 	st.w	$r25,$r30,8(0x8)
1c008860:	5800c320 	beq	$r25,$r0,192(0xc0) # 1c008920 <__sfvwrite_r+0x2cc>
1c008864:	288022dd 	ld.w	$r29,$r22,8(0x8)
1c008868:	288002c4 	ld.w	$r4,$r22,0
1c00886c:	2a4032c8 	ld.hu	$r8,$r22,12(0xc)
1c008870:	5fff0b00 	bne	$r24,$r0,-248(0x3ff08) # 1c008778 <__sfvwrite_r+0x124>
1c008874:	288002ff 	ld.w	$r31,$r23,0
1c008878:	288012f8 	ld.w	$r24,$r23,4(0x4)
1c00887c:	028022f7 	addi.w	$r23,$r23,8(0x8)
1c008880:	53fef7ff 	b	-268(0xffffef4) # 1c008774 <__sfvwrite_r+0x120>
1c008884:	288012f9 	ld.w	$r25,$r23,4(0x4)
1c008888:	288002fc 	ld.w	$r28,$r23,0
1c00888c:	028022f7 	addi.w	$r23,$r23,8(0x8)
1c008890:	5bfff720 	beq	$r25,$r0,-12(0x3fff4) # 1c008884 <__sfvwrite_r+0x230>
1c008894:	00150326 	move	$r6,$r25
1c008898:	02802805 	addi.w	$r5,$r0,10(0xa)
1c00889c:	00150384 	move	$r4,$r28
1c0088a0:	57cebfff 	bl	-12612(0xfffcebc) # 1c00575c <memchr>
1c0088a4:	58012480 	beq	$r4,$r0,292(0x124) # 1c0089c8 <__sfvwrite_r+0x374>
1c0088a8:	02800484 	addi.w	$r4,$r4,1(0x1)
1c0088ac:	0011709b 	sub.w	$r27,$r4,$r28
1c0088b0:	00150369 	move	$r9,$r27
1c0088b4:	0015033d 	move	$r29,$r25
1c0088b8:	6c000939 	bgeu	$r9,$r25,8(0x8) # 1c0088c0 <__sfvwrite_r+0x26c>
1c0088bc:	0015013d 	move	$r29,$r9
1c0088c0:	288002c4 	ld.w	$r4,$r22,0
1c0088c4:	288042c9 	ld.w	$r9,$r22,16(0x10)
1c0088c8:	288052c7 	ld.w	$r7,$r22,20(0x14)
1c0088cc:	6c001124 	bgeu	$r9,$r4,16(0x10) # 1c0088dc <__sfvwrite_r+0x288>
1c0088d0:	288022d8 	ld.w	$r24,$r22,8(0x8)
1c0088d4:	001060f8 	add.w	$r24,$r7,$r24
1c0088d8:	6000831d 	blt	$r24,$r29,128(0x80) # 1c008958 <__sfvwrite_r+0x304>
1c0088dc:	6001b3a7 	blt	$r29,$r7,432(0x1b0) # 1c008a8c <__sfvwrite_r+0x438>
1c0088e0:	288092c9 	ld.w	$r9,$r22,36(0x24)
1c0088e4:	288072c5 	ld.w	$r5,$r22,28(0x1c)
1c0088e8:	00150386 	move	$r6,$r28
1c0088ec:	00150344 	move	$r4,$r26
1c0088f0:	4c000121 	jirl	$r1,$r9,0
1c0088f4:	00150098 	move	$r24,$r4
1c0088f8:	64008804 	bge	$r0,$r4,136(0x88) # 1c008980 <__sfvwrite_r+0x32c>
1c0088fc:	0011637b 	sub.w	$r27,$r27,$r24
1c008900:	02800404 	addi.w	$r4,$r0,1(0x1)
1c008904:	58017760 	beq	$r27,$r0,372(0x174) # 1c008a78 <__sfvwrite_r+0x424>
1c008908:	288023c9 	ld.w	$r9,$r30,8(0x8)
1c00890c:	0010639c 	add.w	$r28,$r28,$r24
1c008910:	00116339 	sub.w	$r25,$r25,$r24
1c008914:	00116138 	sub.w	$r24,$r9,$r24
1c008918:	298023d8 	st.w	$r24,$r30,8(0x8)
1c00891c:	5c009300 	bne	$r24,$r0,144(0x90) # 1c0089ac <__sfvwrite_r+0x358>
1c008920:	00150004 	move	$r4,$r0
1c008924:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c008928:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c00892c:	28809077 	ld.w	$r23,$r3,36(0x24)
1c008930:	28808078 	ld.w	$r24,$r3,32(0x20)
1c008934:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c008938:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c00893c:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c008940:	2880407c 	ld.w	$r28,$r3,16(0x10)
1c008944:	2880307d 	ld.w	$r29,$r3,12(0xc)
1c008948:	2880207e 	ld.w	$r30,$r3,8(0x8)
1c00894c:	2880107f 	ld.w	$r31,$r3,4(0x4)
1c008950:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c008954:	4c000020 	jirl	$r0,$r1,0
1c008958:	00150385 	move	$r5,$r28
1c00895c:	00150306 	move	$r6,$r24
1c008960:	54028000 	bl	640(0x280) # 1c008be0 <memmove>
1c008964:	288002c9 	ld.w	$r9,$r22,0
1c008968:	001502c5 	move	$r5,$r22
1c00896c:	00150344 	move	$r4,$r26
1c008970:	00106129 	add.w	$r9,$r9,$r24
1c008974:	298002c9 	st.w	$r9,$r22,0
1c008978:	57b9fbff 	bl	-17928(0xfffb9f8) # 1c004370 <_fflush_r>
1c00897c:	5bff8080 	beq	$r4,$r0,-128(0x3ff80) # 1c0088fc <__sfvwrite_r+0x2a8>
1c008980:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c008984:	03810129 	ori	$r9,$r9,0x40
1c008988:	294032c9 	st.h	$r9,$r22,12(0xc)
1c00898c:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c008990:	53ff97ff 	b	-108(0xfffff94) # 1c008924 <__sfvwrite_r+0x2d0>
1c008994:	00150004 	move	$r4,$r0
1c008998:	4c000020 	jirl	$r0,$r1,0
1c00899c:	0015001b 	move	$r27,$r0
1c0089a0:	00150004 	move	$r4,$r0
1c0089a4:	0015001c 	move	$r28,$r0
1c0089a8:	00150019 	move	$r25,$r0
1c0089ac:	5bfedb20 	beq	$r25,$r0,-296(0x3fed8) # 1c008884 <__sfvwrite_r+0x230>
1c0089b0:	5fff0080 	bne	$r4,$r0,-256(0x3ff00) # 1c0088b0 <__sfvwrite_r+0x25c>
1c0089b4:	00150326 	move	$r6,$r25
1c0089b8:	02802805 	addi.w	$r5,$r0,10(0xa)
1c0089bc:	00150384 	move	$r4,$r28
1c0089c0:	57cd9fff 	bl	-12900(0xfffcd9c) # 1c00575c <memchr>
1c0089c4:	5ffee480 	bne	$r4,$r0,-284(0x3fee4) # 1c0088a8 <__sfvwrite_r+0x254>
1c0089c8:	02800729 	addi.w	$r9,$r25,1(0x1)
1c0089cc:	0015013b 	move	$r27,$r9
1c0089d0:	53fee7ff 	b	-284(0xffffee4) # 1c0088b4 <__sfvwrite_r+0x260>
1c0089d4:	288042c8 	ld.w	$r8,$r22,16(0x10)
1c0089d8:	68004904 	bltu	$r8,$r4,72(0x48) # 1c008a20 <__sfvwrite_r+0x3cc>
1c0089dc:	288052c8 	ld.w	$r8,$r22,20(0x14)
1c0089e0:	68004308 	bltu	$r24,$r8,64(0x40) # 1c008a20 <__sfvwrite_r+0x3cc>
1c0089e4:	00150307 	move	$r7,$r24
1c0089e8:	6c000f78 	bgeu	$r27,$r24,12(0xc) # 1c0089f4 <__sfvwrite_r+0x3a0>
1c0089ec:	14ffffe9 	lu12i.w	$r9,524287(0x7ffff)
1c0089f0:	03bffd27 	ori	$r7,$r9,0xfff
1c0089f4:	002020e7 	div.w	$r7,$r7,$r8
1c0089f8:	001c20e7 	mul.w	$r7,$r7,$r8
1c0089fc:	288092c9 	ld.w	$r9,$r22,36(0x24)
1c008a00:	288072c5 	ld.w	$r5,$r22,28(0x1c)
1c008a04:	001503e6 	move	$r6,$r31
1c008a08:	00150344 	move	$r4,$r26
1c008a0c:	4c000121 	jirl	$r1,$r9,0
1c008a10:	67ff7004 	bge	$r0,$r4,-144(0x3ff70) # 1c008980 <__sfvwrite_r+0x32c>
1c008a14:	00150099 	move	$r25,$r4
1c008a18:	00116718 	sub.w	$r24,$r24,$r25
1c008a1c:	53fe37ff 	b	-460(0xffffe34) # 1c008850 <__sfvwrite_r+0x1fc>
1c008a20:	001503b9 	move	$r25,$r29
1c008a24:	6c000b1d 	bgeu	$r24,$r29,8(0x8) # 1c008a2c <__sfvwrite_r+0x3d8>
1c008a28:	00150319 	move	$r25,$r24
1c008a2c:	00150326 	move	$r6,$r25
1c008a30:	001503e5 	move	$r5,$r31
1c008a34:	5401ac00 	bl	428(0x1ac) # 1c008be0 <memmove>
1c008a38:	288022c9 	ld.w	$r9,$r22,8(0x8)
1c008a3c:	288002c8 	ld.w	$r8,$r22,0
1c008a40:	00116529 	sub.w	$r9,$r9,$r25
1c008a44:	00106508 	add.w	$r8,$r8,$r25
1c008a48:	298022c9 	st.w	$r9,$r22,8(0x8)
1c008a4c:	298002c8 	st.w	$r8,$r22,0
1c008a50:	5fffc920 	bne	$r9,$r0,-56(0x3ffc8) # 1c008a18 <__sfvwrite_r+0x3c4>
1c008a54:	001502c5 	move	$r5,$r22
1c008a58:	00150344 	move	$r4,$r26
1c008a5c:	57b917ff 	bl	-18156(0xfffb914) # 1c004370 <_fflush_r>
1c008a60:	5fff2080 	bne	$r4,$r0,-224(0x3ff20) # 1c008980 <__sfvwrite_r+0x32c>
1c008a64:	00116718 	sub.w	$r24,$r24,$r25
1c008a68:	53fdebff 	b	-536(0xffffde8) # 1c008850 <__sfvwrite_r+0x1fc>
1c008a6c:	0015031d 	move	$r29,$r24
1c008a70:	0015031c 	move	$r28,$r24
1c008a74:	53fdb3ff 	b	-592(0xffffdb0) # 1c008824 <__sfvwrite_r+0x1d0>
1c008a78:	001502c5 	move	$r5,$r22
1c008a7c:	00150344 	move	$r4,$r26
1c008a80:	57b8f3ff 	bl	-18192(0xfffb8f0) # 1c004370 <_fflush_r>
1c008a84:	5bfe8480 	beq	$r4,$r0,-380(0x3fe84) # 1c008908 <__sfvwrite_r+0x2b4>
1c008a88:	53fefbff 	b	-264(0xffffef8) # 1c008980 <__sfvwrite_r+0x32c>
1c008a8c:	001503a6 	move	$r6,$r29
1c008a90:	00150385 	move	$r5,$r28
1c008a94:	54014c00 	bl	332(0x14c) # 1c008be0 <memmove>
1c008a98:	288022c8 	ld.w	$r8,$r22,8(0x8)
1c008a9c:	288002c9 	ld.w	$r9,$r22,0
1c008aa0:	001503b8 	move	$r24,$r29
1c008aa4:	00117508 	sub.w	$r8,$r8,$r29
1c008aa8:	0010753d 	add.w	$r29,$r9,$r29
1c008aac:	298022c8 	st.w	$r8,$r22,8(0x8)
1c008ab0:	298002dd 	st.w	$r29,$r22,0
1c008ab4:	53fe4bff 	b	-440(0xffffe48) # 1c0088fc <__sfvwrite_r+0x2a8>
1c008ab8:	00150344 	move	$r4,$r26
1c008abc:	5402b000 	bl	688(0x2b0) # 1c008d6c <_realloc_r>
1c008ac0:	0015009c 	move	$r28,$r4
1c008ac4:	5ffd4080 	bne	$r4,$r0,-704(0x3fd40) # 1c008804 <__sfvwrite_r+0x1b0>
1c008ac8:	288042c5 	ld.w	$r5,$r22,16(0x10)
1c008acc:	00150344 	move	$r4,$r26
1c008ad0:	57bdafff 	bl	-16980(0xfffbdac) # 1c00487c <_free_r>
1c008ad4:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c008ad8:	02bdfc08 	addi.w	$r8,$r0,-129(0xf7f)
1c008adc:	0014a129 	and	$r9,$r9,$r8
1c008ae0:	0040c129 	slli.w	$r9,$r9,0x10
1c008ae4:	02803008 	addi.w	$r8,$r0,12(0xc)
1c008ae8:	0048c129 	srai.w	$r9,$r9,0x10
1c008aec:	29800348 	st.w	$r8,$r26,0
1c008af0:	53fe97ff 	b	-364(0xffffe94) # 1c008984 <__sfvwrite_r+0x330>
1c008af4:	02803009 	addi.w	$r9,$r0,12(0xc)
1c008af8:	29800349 	st.w	$r9,$r26,0
1c008afc:	284032c9 	ld.h	$r9,$r22,12(0xc)
1c008b00:	53fe87ff 	b	-380(0xffffe84) # 1c008984 <__sfvwrite_r+0x330>
1c008b04:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c008b08:	53fe1fff 	b	-484(0xffffe1c) # 1c008924 <__sfvwrite_r+0x2d0>

1c008b0c <_isatty_r>:
_isatty_r():
1c008b0c:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c008b10:	29802076 	st.w	$r22,$r3,8(0x8)
1c008b14:	29801077 	st.w	$r23,$r3,4(0x4)
1c008b18:	1dc7ff56 	pcaddu12i	$r22,-114694(0xe3ffa)
1c008b1c:	288422d6 	ld.w	$r22,$r22,264(0x108)
1c008b20:	00150097 	move	$r23,$r4
1c008b24:	001500a4 	move	$r4,$r5
1c008b28:	29803061 	st.w	$r1,$r3,12(0xc)
1c008b2c:	298002c0 	st.w	$r0,$r22,0
1c008b30:	540d7400 	bl	3444(0xd74) # 1c0098a4 <isatty>
1c008b34:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c008b38:	58001889 	beq	$r4,$r9,24(0x18) # 1c008b50 <_isatty_r+0x44>
1c008b3c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008b40:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008b44:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008b48:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008b4c:	4c000020 	jirl	$r0,$r1,0
1c008b50:	288002c9 	ld.w	$r9,$r22,0
1c008b54:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c008b3c <_isatty_r+0x30>
1c008b58:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008b5c:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008b60:	298002e9 	st.w	$r9,$r23,0
1c008b64:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008b68:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008b6c:	4c000020 	jirl	$r0,$r1,0

1c008b70 <_lseek_r>:
_lseek_r():
1c008b70:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c008b74:	001500a9 	move	$r9,$r5
1c008b78:	29802076 	st.w	$r22,$r3,8(0x8)
1c008b7c:	29801077 	st.w	$r23,$r3,4(0x4)
1c008b80:	001500c5 	move	$r5,$r6
1c008b84:	00150097 	move	$r23,$r4
1c008b88:	1dc7ff56 	pcaddu12i	$r22,-114694(0xe3ffa)
1c008b8c:	288262d6 	ld.w	$r22,$r22,152(0x98)
1c008b90:	00150124 	move	$r4,$r9
1c008b94:	001500e6 	move	$r6,$r7
1c008b98:	29803061 	st.w	$r1,$r3,12(0xc)
1c008b9c:	298002c0 	st.w	$r0,$r22,0
1c008ba0:	540d0c00 	bl	3340(0xd0c) # 1c0098ac <lseek>
1c008ba4:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c008ba8:	58001889 	beq	$r4,$r9,24(0x18) # 1c008bc0 <_lseek_r+0x50>
1c008bac:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008bb0:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008bb4:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008bb8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008bbc:	4c000020 	jirl	$r0,$r1,0
1c008bc0:	288002c9 	ld.w	$r9,$r22,0
1c008bc4:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c008bac <_lseek_r+0x3c>
1c008bc8:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008bcc:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008bd0:	298002e9 	st.w	$r9,$r23,0
1c008bd4:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008bd8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008bdc:	4c000020 	jirl	$r0,$r1,0

1c008be0 <memmove>:
memmove():
1c008be0:	6c002ca4 	bgeu	$r5,$r4,44(0x2c) # 1c008c0c <memmove+0x2c>
1c008be4:	001018a9 	add.w	$r9,$r5,$r6
1c008be8:	6c002489 	bgeu	$r4,$r9,36(0x24) # 1c008c0c <memmove+0x2c>
1c008bec:	00101888 	add.w	$r8,$r4,$r6
1c008bf0:	5800ecc0 	beq	$r6,$r0,236(0xec) # 1c008cdc <memmove+0xfc>
1c008bf4:	02bffd29 	addi.w	$r9,$r9,-1(0xfff)
1c008bf8:	28000127 	ld.b	$r7,$r9,0
1c008bfc:	02bffd08 	addi.w	$r8,$r8,-1(0xfff)
1c008c00:	29000107 	st.b	$r7,$r8,0
1c008c04:	5ffff0a9 	bne	$r5,$r9,-16(0x3fff0) # 1c008bf4 <memmove+0x14>
1c008c08:	4c000020 	jirl	$r0,$r1,0
1c008c0c:	02803c09 	addi.w	$r9,$r0,15(0xf)
1c008c10:	68003126 	bltu	$r9,$r6,48(0x30) # 1c008c40 <memmove+0x60>
1c008c14:	00150089 	move	$r9,$r4
1c008c18:	02bffcc7 	addi.w	$r7,$r6,-1(0xfff)
1c008c1c:	5800d0c0 	beq	$r6,$r0,208(0xd0) # 1c008cec <memmove+0x10c>
1c008c20:	028004e7 	addi.w	$r7,$r7,1(0x1)
1c008c24:	00101d27 	add.w	$r7,$r9,$r7
1c008c28:	028004a5 	addi.w	$r5,$r5,1(0x1)
1c008c2c:	283ffca8 	ld.b	$r8,$r5,-1(0xfff)
1c008c30:	02800529 	addi.w	$r9,$r9,1(0x1)
1c008c34:	293ffd28 	st.b	$r8,$r9,-1(0xfff)
1c008c38:	5ffff127 	bne	$r9,$r7,-16(0x3fff0) # 1c008c28 <memmove+0x48>
1c008c3c:	4c000020 	jirl	$r0,$r1,0
1c008c40:	001510a9 	or	$r9,$r5,$r4
1c008c44:	03400d29 	andi	$r9,$r9,0x3
1c008c48:	5c009920 	bne	$r9,$r0,152(0x98) # 1c008ce0 <memmove+0x100>
1c008c4c:	02bfc0c8 	addi.w	$r8,$r6,-16(0xff0)
1c008c50:	00449108 	srli.w	$r8,$r8,0x4
1c008c54:	02800508 	addi.w	$r8,$r8,1(0x1)
1c008c58:	00409107 	slli.w	$r7,$r8,0x4
1c008c5c:	00101c8b 	add.w	$r11,$r4,$r7
1c008c60:	001500a8 	move	$r8,$r5
1c008c64:	00150089 	move	$r9,$r4
1c008c68:	2880010a 	ld.w	$r10,$r8,0
1c008c6c:	02804129 	addi.w	$r9,$r9,16(0x10)
1c008c70:	02804108 	addi.w	$r8,$r8,16(0x10)
1c008c74:	29bfc12a 	st.w	$r10,$r9,-16(0xff0)
1c008c78:	28bfd10a 	ld.w	$r10,$r8,-12(0xff4)
1c008c7c:	29bfd12a 	st.w	$r10,$r9,-12(0xff4)
1c008c80:	28bfe10a 	ld.w	$r10,$r8,-8(0xff8)
1c008c84:	29bfe12a 	st.w	$r10,$r9,-8(0xff8)
1c008c88:	28bff10a 	ld.w	$r10,$r8,-4(0xffc)
1c008c8c:	29bff12a 	st.w	$r10,$r9,-4(0xffc)
1c008c90:	5fffd969 	bne	$r11,$r9,-40(0x3ffd8) # 1c008c68 <memmove+0x88>
1c008c94:	034030ca 	andi	$r10,$r6,0xc
1c008c98:	00101ca8 	add.w	$r8,$r5,$r7
1c008c9c:	03403cc7 	andi	$r7,$r6,0xf
1c008ca0:	58005140 	beq	$r10,$r0,80(0x50) # 1c008cf0 <memmove+0x110>
1c008ca4:	02bff0ea 	addi.w	$r10,$r7,-4(0xffc)
1c008ca8:	0044894a 	srli.w	$r10,$r10,0x2
1c008cac:	0280054a 	addi.w	$r10,$r10,1(0x1)
1c008cb0:	0040894a 	slli.w	$r10,$r10,0x2
1c008cb4:	00102905 	add.w	$r5,$r8,$r10
1c008cb8:	00150127 	move	$r7,$r9
1c008cbc:	02801108 	addi.w	$r8,$r8,4(0x4)
1c008cc0:	28bff10b 	ld.w	$r11,$r8,-4(0xffc)
1c008cc4:	028010e7 	addi.w	$r7,$r7,4(0x4)
1c008cc8:	29bff0eb 	st.w	$r11,$r7,-4(0xffc)
1c008ccc:	5ffff105 	bne	$r8,$r5,-16(0x3fff0) # 1c008cbc <memmove+0xdc>
1c008cd0:	03400cc6 	andi	$r6,$r6,0x3
1c008cd4:	00102929 	add.w	$r9,$r9,$r10
1c008cd8:	53ff43ff 	b	-192(0xfffff40) # 1c008c18 <memmove+0x38>
1c008cdc:	4c000020 	jirl	$r0,$r1,0
1c008ce0:	02bffcc7 	addi.w	$r7,$r6,-1(0xfff)
1c008ce4:	00150089 	move	$r9,$r4
1c008ce8:	53ff3bff 	b	-200(0xfffff38) # 1c008c20 <memmove+0x40>
1c008cec:	4c000020 	jirl	$r0,$r1,0
1c008cf0:	00150105 	move	$r5,$r8
1c008cf4:	001500e6 	move	$r6,$r7
1c008cf8:	53ff23ff 	b	-224(0xfffff20) # 1c008c18 <memmove+0x38>

1c008cfc <_read_r>:
_read_r():
1c008cfc:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c008d00:	001500a9 	move	$r9,$r5
1c008d04:	29802076 	st.w	$r22,$r3,8(0x8)
1c008d08:	29801077 	st.w	$r23,$r3,4(0x4)
1c008d0c:	001500c5 	move	$r5,$r6
1c008d10:	00150097 	move	$r23,$r4
1c008d14:	1dc7ff56 	pcaddu12i	$r22,-114694(0xe3ffa)
1c008d18:	28bc32d6 	ld.w	$r22,$r22,-244(0xf0c)
1c008d1c:	00150124 	move	$r4,$r9
1c008d20:	001500e6 	move	$r6,$r7
1c008d24:	29803061 	st.w	$r1,$r3,12(0xc)
1c008d28:	298002c0 	st.w	$r0,$r22,0
1c008d2c:	57786bff 	bl	-34712(0xfff7868) # 1c000594 <read>
1c008d30:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c008d34:	58001889 	beq	$r4,$r9,24(0x18) # 1c008d4c <_read_r+0x50>
1c008d38:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008d3c:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008d40:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008d44:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008d48:	4c000020 	jirl	$r0,$r1,0
1c008d4c:	288002c9 	ld.w	$r9,$r22,0
1c008d50:	5bffe920 	beq	$r9,$r0,-24(0x3ffe8) # 1c008d38 <_read_r+0x3c>
1c008d54:	28803061 	ld.w	$r1,$r3,12(0xc)
1c008d58:	28802076 	ld.w	$r22,$r3,8(0x8)
1c008d5c:	298002e9 	st.w	$r9,$r23,0
1c008d60:	28801077 	ld.w	$r23,$r3,4(0x4)
1c008d64:	02804063 	addi.w	$r3,$r3,16(0x10)
1c008d68:	4c000020 	jirl	$r0,$r1,0

1c008d6c <_realloc_r>:
_realloc_r():
1c008d6c:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c008d70:	29807079 	st.w	$r25,$r3,28(0x1c)
1c008d74:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c008d78:	2980a076 	st.w	$r22,$r3,40(0x28)
1c008d7c:	29809077 	st.w	$r23,$r3,36(0x24)
1c008d80:	29808078 	st.w	$r24,$r3,32(0x20)
1c008d84:	2980607a 	st.w	$r26,$r3,24(0x18)
1c008d88:	2980507b 	st.w	$r27,$r3,20(0x14)
1c008d8c:	2980407c 	st.w	$r28,$r3,16(0x10)
1c008d90:	2980307d 	st.w	$r29,$r3,12(0xc)
1c008d94:	2980207e 	st.w	$r30,$r3,8(0x8)
1c008d98:	001500d9 	move	$r25,$r6
1c008d9c:	580238a0 	beq	$r5,$r0,568(0x238) # 1c008fd4 <_realloc_r+0x268>
1c008da0:	001500bc 	move	$r28,$r5
1c008da4:	0015009b 	move	$r27,$r4
1c008da8:	57cc6fff 	bl	-13204(0xfffcc6c) # 1c005a14 <__malloc_lock>
1c008dac:	02802f36 	addi.w	$r22,$r25,11(0xb)
1c008db0:	02805809 	addi.w	$r9,$r0,22(0x16)
1c008db4:	6c010d36 	bgeu	$r9,$r22,268(0x10c) # 1c008ec0 <_realloc_r+0x154>
1c008db8:	02bfe005 	addi.w	$r5,$r0,-8(0xff8)
1c008dbc:	001496d6 	and	$r22,$r22,$r5
1c008dc0:	001502c8 	move	$r8,$r22
1c008dc4:	60010ac0 	blt	$r22,$r0,264(0x108) # 1c008ecc <_realloc_r+0x160>
1c008dc8:	680106d9 	bltu	$r22,$r25,260(0x104) # 1c008ecc <_realloc_r+0x160>
1c008dcc:	28bff389 	ld.w	$r9,$r28,-4(0xffc)
1c008dd0:	02bff006 	addi.w	$r6,$r0,-4(0xffc)
1c008dd4:	02bfe398 	addi.w	$r24,$r28,-8(0xff8)
1c008dd8:	00149937 	and	$r23,$r9,$r6
1c008ddc:	00105f1a 	add.w	$r26,$r24,$r23
1c008de0:	6401a2e8 	bge	$r23,$r8,416(0x1a0) # 1c008f80 <_realloc_r+0x214>
1c008de4:	1dc7ff5d 	pcaddu12i	$r29,-114694(0xe3ffa)
1c008de8:	28b9f3bd 	ld.w	$r29,$r29,-388(0xe7c)
1c008dec:	288023a5 	ld.w	$r5,$r29,8(0x8)
1c008df0:	28801347 	ld.w	$r7,$r26,4(0x4)
1c008df4:	580244ba 	beq	$r5,$r26,580(0x244) # 1c009038 <_realloc_r+0x2cc>
1c008df8:	02bff805 	addi.w	$r5,$r0,-2(0xffe)
1c008dfc:	001494e5 	and	$r5,$r7,$r5
1c008e00:	00101745 	add.w	$r5,$r26,$r5
1c008e04:	288010a5 	ld.w	$r5,$r5,4(0x4)
1c008e08:	034004a5 	andi	$r5,$r5,0x1
1c008e0c:	5c01aca0 	bne	$r5,$r0,428(0x1ac) # 1c008fb8 <_realloc_r+0x24c>
1c008e10:	001498e7 	and	$r7,$r7,$r6
1c008e14:	00101ee5 	add.w	$r5,$r23,$r7
1c008e18:	640340a8 	bge	$r5,$r8,832(0x340) # 1c009158 <_realloc_r+0x3ec>
1c008e1c:	03400529 	andi	$r9,$r9,0x1
1c008e20:	5c002920 	bne	$r9,$r0,40(0x28) # 1c008e48 <_realloc_r+0xdc>
1c008e24:	28bfe39e 	ld.w	$r30,$r28,-8(0xff8)
1c008e28:	00117b1e 	sub.w	$r30,$r24,$r30
1c008e2c:	288013c9 	ld.w	$r9,$r30,4(0x4)
1c008e30:	00149926 	and	$r6,$r9,$r6
1c008e34:	00101cc7 	add.w	$r7,$r6,$r7
1c008e38:	00105cfd 	add.w	$r29,$r7,$r23
1c008e3c:	64035fa8 	bge	$r29,$r8,860(0x35c) # 1c009198 <_realloc_r+0x42c>
1c008e40:	00101afd 	add.w	$r29,$r23,$r6
1c008e44:	6400cba8 	bge	$r29,$r8,200(0xc8) # 1c008f0c <_realloc_r+0x1a0>
1c008e48:	00150325 	move	$r5,$r25
1c008e4c:	00150364 	move	$r4,$r27
1c008e50:	57c133ff 	bl	-16080(0xfffc130) # 1c004f80 <_malloc_r>
1c008e54:	00150099 	move	$r25,$r4
1c008e58:	58005c80 	beq	$r4,$r0,92(0x5c) # 1c008eb4 <_realloc_r+0x148>
1c008e5c:	28bff389 	ld.w	$r9,$r28,-4(0xffc)
1c008e60:	02bff807 	addi.w	$r7,$r0,-2(0xffe)
1c008e64:	02bfe088 	addi.w	$r8,$r4,-8(0xff8)
1c008e68:	00149d29 	and	$r9,$r9,$r7
1c008e6c:	00102709 	add.w	$r9,$r24,$r9
1c008e70:	58030528 	beq	$r9,$r8,772(0x304) # 1c009174 <_realloc_r+0x408>
1c008e74:	02bff2e6 	addi.w	$r6,$r23,-4(0xffc)
1c008e78:	02809009 	addi.w	$r9,$r0,36(0x24)
1c008e7c:	68031126 	bltu	$r9,$r6,784(0x310) # 1c00918c <_realloc_r+0x420>
1c008e80:	02804c08 	addi.w	$r8,$r0,19(0x13)
1c008e84:	28800387 	ld.w	$r7,$r28,0
1c008e88:	68027906 	bltu	$r8,$r6,632(0x278) # 1c009100 <_realloc_r+0x394>
1c008e8c:	00150089 	move	$r9,$r4
1c008e90:	00150388 	move	$r8,$r28
1c008e94:	29800127 	st.w	$r7,$r9,0
1c008e98:	28801107 	ld.w	$r7,$r8,4(0x4)
1c008e9c:	29801127 	st.w	$r7,$r9,4(0x4)
1c008ea0:	28802108 	ld.w	$r8,$r8,8(0x8)
1c008ea4:	29802128 	st.w	$r8,$r9,8(0x8)
1c008ea8:	00150385 	move	$r5,$r28
1c008eac:	00150364 	move	$r4,$r27
1c008eb0:	57b9cfff 	bl	-17972(0xfffb9cc) # 1c00487c <_free_r>
1c008eb4:	00150364 	move	$r4,$r27
1c008eb8:	57cb63ff 	bl	-13472(0xfffcb60) # 1c005a18 <__malloc_unlock>
1c008ebc:	50001c00 	b	28(0x1c) # 1c008ed8 <_realloc_r+0x16c>
1c008ec0:	02804016 	addi.w	$r22,$r0,16(0x10)
1c008ec4:	02804008 	addi.w	$r8,$r0,16(0x10)
1c008ec8:	6fff06d9 	bgeu	$r22,$r25,-252(0x3ff04) # 1c008dcc <_realloc_r+0x60>
1c008ecc:	02803009 	addi.w	$r9,$r0,12(0xc)
1c008ed0:	29800369 	st.w	$r9,$r27,0
1c008ed4:	00150019 	move	$r25,$r0
1c008ed8:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c008edc:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c008ee0:	00150324 	move	$r4,$r25
1c008ee4:	28809077 	ld.w	$r23,$r3,36(0x24)
1c008ee8:	28808078 	ld.w	$r24,$r3,32(0x20)
1c008eec:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c008ef0:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c008ef4:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c008ef8:	2880407c 	ld.w	$r28,$r3,16(0x10)
1c008efc:	2880307d 	ld.w	$r29,$r3,12(0xc)
1c008f00:	2880207e 	ld.w	$r30,$r3,8(0x8)
1c008f04:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c008f08:	4c000020 	jirl	$r0,$r1,0
1c008f0c:	288033c9 	ld.w	$r9,$r30,12(0xc)
1c008f10:	288023c8 	ld.w	$r8,$r30,8(0x8)
1c008f14:	02bff2e6 	addi.w	$r6,$r23,-4(0xffc)
1c008f18:	02809007 	addi.w	$r7,$r0,36(0x24)
1c008f1c:	29803109 	st.w	$r9,$r8,12(0xc)
1c008f20:	29802128 	st.w	$r8,$r9,8(0x8)
1c008f24:	028023d9 	addi.w	$r25,$r30,8(0x8)
1c008f28:	001077da 	add.w	$r26,$r30,$r29
1c008f2c:	6802fce6 	bltu	$r7,$r6,764(0x2fc) # 1c009228 <_realloc_r+0x4bc>
1c008f30:	02804c05 	addi.w	$r5,$r0,19(0x13)
1c008f34:	28800388 	ld.w	$r8,$r28,0
1c008f38:	00150329 	move	$r9,$r25
1c008f3c:	6c0024a6 	bgeu	$r5,$r6,36(0x24) # 1c008f60 <_realloc_r+0x1f4>
1c008f40:	298023c8 	st.w	$r8,$r30,8(0x8)
1c008f44:	28801388 	ld.w	$r8,$r28,4(0x4)
1c008f48:	02806c09 	addi.w	$r9,$r0,27(0x1b)
1c008f4c:	298033c8 	st.w	$r8,$r30,12(0xc)
1c008f50:	68033926 	bltu	$r9,$r6,824(0x338) # 1c009288 <_realloc_r+0x51c>
1c008f54:	28802388 	ld.w	$r8,$r28,8(0x8)
1c008f58:	028043c9 	addi.w	$r9,$r30,16(0x10)
1c008f5c:	0280239c 	addi.w	$r28,$r28,8(0x8)
1c008f60:	29800128 	st.w	$r8,$r9,0
1c008f64:	28801388 	ld.w	$r8,$r28,4(0x4)
1c008f68:	001503b7 	move	$r23,$r29
1c008f6c:	001503d8 	move	$r24,$r30
1c008f70:	29801128 	st.w	$r8,$r9,4(0x4)
1c008f74:	28802388 	ld.w	$r8,$r28,8(0x8)
1c008f78:	0015033c 	move	$r28,$r25
1c008f7c:	29802128 	st.w	$r8,$r9,8(0x8)
1c008f80:	28801306 	ld.w	$r6,$r24,4(0x4)
1c008f84:	00115ae9 	sub.w	$r9,$r23,$r22
1c008f88:	02803c08 	addi.w	$r8,$r0,15(0xf)
1c008f8c:	034004c6 	andi	$r6,$r6,0x1
1c008f90:	68007909 	bltu	$r8,$r9,120(0x78) # 1c009008 <_realloc_r+0x29c>
1c008f94:	00151ae6 	or	$r6,$r23,$r6
1c008f98:	29801306 	st.w	$r6,$r24,4(0x4)
1c008f9c:	28801349 	ld.w	$r9,$r26,4(0x4)
1c008fa0:	03800529 	ori	$r9,$r9,0x1
1c008fa4:	29801349 	st.w	$r9,$r26,4(0x4)
1c008fa8:	00150364 	move	$r4,$r27
1c008fac:	57ca6fff 	bl	-13716(0xfffca6c) # 1c005a18 <__malloc_unlock>
1c008fb0:	00150399 	move	$r25,$r28
1c008fb4:	53ff27ff 	b	-220(0xfffff24) # 1c008ed8 <_realloc_r+0x16c>
1c008fb8:	03400529 	andi	$r9,$r9,0x1
1c008fbc:	5ffe8d20 	bne	$r9,$r0,-372(0x3fe8c) # 1c008e48 <_realloc_r+0xdc>
1c008fc0:	28bfe39e 	ld.w	$r30,$r28,-8(0xff8)
1c008fc4:	00117b1e 	sub.w	$r30,$r24,$r30
1c008fc8:	288013c9 	ld.w	$r9,$r30,4(0x4)
1c008fcc:	00149926 	and	$r6,$r9,$r6
1c008fd0:	53fe73ff 	b	-400(0xffffe70) # 1c008e40 <_realloc_r+0xd4>
1c008fd4:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c008fd8:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c008fdc:	28809077 	ld.w	$r23,$r3,36(0x24)
1c008fe0:	28808078 	ld.w	$r24,$r3,32(0x20)
1c008fe4:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c008fe8:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c008fec:	2880507b 	ld.w	$r27,$r3,20(0x14)
1c008ff0:	2880407c 	ld.w	$r28,$r3,16(0x10)
1c008ff4:	2880307d 	ld.w	$r29,$r3,12(0xc)
1c008ff8:	2880207e 	ld.w	$r30,$r3,8(0x8)
1c008ffc:	001500c5 	move	$r5,$r6
1c009000:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c009004:	53bf7fff 	b	-16516(0xfffbf7c) # 1c004f80 <_malloc_r>
1c009008:	001558c6 	or	$r6,$r6,$r22
1c00900c:	29801306 	st.w	$r6,$r24,4(0x4)
1c009010:	00105b05 	add.w	$r5,$r24,$r22
1c009014:	03800529 	ori	$r9,$r9,0x1
1c009018:	298010a9 	st.w	$r9,$r5,4(0x4)
1c00901c:	28801349 	ld.w	$r9,$r26,4(0x4)
1c009020:	028020a5 	addi.w	$r5,$r5,8(0x8)
1c009024:	00150364 	move	$r4,$r27
1c009028:	03800529 	ori	$r9,$r9,0x1
1c00902c:	29801349 	st.w	$r9,$r26,4(0x4)
1c009030:	57b84fff 	bl	-18356(0xfffb84c) # 1c00487c <_free_r>
1c009034:	53ff77ff 	b	-140(0xfffff74) # 1c008fa8 <_realloc_r+0x23c>
1c009038:	001498e7 	and	$r7,$r7,$r6
1c00903c:	00101ee5 	add.w	$r5,$r23,$r7
1c009040:	028042c4 	addi.w	$r4,$r22,16(0x10)
1c009044:	6400e0a4 	bge	$r5,$r4,224(0xe0) # 1c009124 <_realloc_r+0x3b8>
1c009048:	03400529 	andi	$r9,$r9,0x1
1c00904c:	5ffdfd20 	bne	$r9,$r0,-516(0x3fdfc) # 1c008e48 <_realloc_r+0xdc>
1c009050:	28bfe39e 	ld.w	$r30,$r28,-8(0xff8)
1c009054:	00117b1e 	sub.w	$r30,$r24,$r30
1c009058:	288013c9 	ld.w	$r9,$r30,4(0x4)
1c00905c:	00149926 	and	$r6,$r9,$r6
1c009060:	00101cc7 	add.w	$r7,$r6,$r7
1c009064:	00105cfa 	add.w	$r26,$r7,$r23
1c009068:	63fddb44 	blt	$r26,$r4,-552(0x3fdd8) # 1c008e40 <_realloc_r+0xd4>
1c00906c:	288033c9 	ld.w	$r9,$r30,12(0xc)
1c009070:	288023c8 	ld.w	$r8,$r30,8(0x8)
1c009074:	02bff2e6 	addi.w	$r6,$r23,-4(0xffc)
1c009078:	02809007 	addi.w	$r7,$r0,36(0x24)
1c00907c:	29803109 	st.w	$r9,$r8,12(0xc)
1c009080:	29802128 	st.w	$r8,$r9,8(0x8)
1c009084:	028023d9 	addi.w	$r25,$r30,8(0x8)
1c009088:	680224e6 	bltu	$r7,$r6,548(0x224) # 1c0092ac <_realloc_r+0x540>
1c00908c:	02804c05 	addi.w	$r5,$r0,19(0x13)
1c009090:	28800388 	ld.w	$r8,$r28,0
1c009094:	00150329 	move	$r9,$r25
1c009098:	6c0024a6 	bgeu	$r5,$r6,36(0x24) # 1c0090bc <_realloc_r+0x350>
1c00909c:	298023c8 	st.w	$r8,$r30,8(0x8)
1c0090a0:	28801388 	ld.w	$r8,$r28,4(0x4)
1c0090a4:	02806c09 	addi.w	$r9,$r0,27(0x1b)
1c0090a8:	298033c8 	st.w	$r8,$r30,12(0xc)
1c0090ac:	68021126 	bltu	$r9,$r6,528(0x210) # 1c0092bc <_realloc_r+0x550>
1c0090b0:	28802388 	ld.w	$r8,$r28,8(0x8)
1c0090b4:	028043c9 	addi.w	$r9,$r30,16(0x10)
1c0090b8:	0280239c 	addi.w	$r28,$r28,8(0x8)
1c0090bc:	29800128 	st.w	$r8,$r9,0
1c0090c0:	28801388 	ld.w	$r8,$r28,4(0x4)
1c0090c4:	29801128 	st.w	$r8,$r9,4(0x4)
1c0090c8:	28802388 	ld.w	$r8,$r28,8(0x8)
1c0090cc:	29802128 	st.w	$r8,$r9,8(0x8)
1c0090d0:	00105bc8 	add.w	$r8,$r30,$r22
1c0090d4:	00115b49 	sub.w	$r9,$r26,$r22
1c0090d8:	298023a8 	st.w	$r8,$r29,8(0x8)
1c0090dc:	03800529 	ori	$r9,$r9,0x1
1c0090e0:	29801109 	st.w	$r9,$r8,4(0x4)
1c0090e4:	288013c9 	ld.w	$r9,$r30,4(0x4)
1c0090e8:	00150364 	move	$r4,$r27
1c0090ec:	03400529 	andi	$r9,$r9,0x1
1c0090f0:	00155936 	or	$r22,$r9,$r22
1c0090f4:	298013d6 	st.w	$r22,$r30,4(0x4)
1c0090f8:	57c923ff 	bl	-14048(0xfffc920) # 1c005a18 <__malloc_unlock>
1c0090fc:	53fddfff 	b	-548(0xffffddc) # 1c008ed8 <_realloc_r+0x16c>
1c009100:	29800087 	st.w	$r7,$r4,0
1c009104:	28801387 	ld.w	$r7,$r28,4(0x4)
1c009108:	02806c08 	addi.w	$r8,$r0,27(0x1b)
1c00910c:	29801087 	st.w	$r7,$r4,4(0x4)
1c009110:	68013506 	bltu	$r8,$r6,308(0x134) # 1c009244 <_realloc_r+0x4d8>
1c009114:	02802388 	addi.w	$r8,$r28,8(0x8)
1c009118:	02802089 	addi.w	$r9,$r4,8(0x8)
1c00911c:	28802387 	ld.w	$r7,$r28,8(0x8)
1c009120:	53fd77ff 	b	-652(0xffffd74) # 1c008e94 <_realloc_r+0x128>
1c009124:	00105b18 	add.w	$r24,$r24,$r22
1c009128:	001158a9 	sub.w	$r9,$r5,$r22
1c00912c:	298023b8 	st.w	$r24,$r29,8(0x8)
1c009130:	03800529 	ori	$r9,$r9,0x1
1c009134:	29801309 	st.w	$r9,$r24,4(0x4)
1c009138:	28bff389 	ld.w	$r9,$r28,-4(0xffc)
1c00913c:	00150364 	move	$r4,$r27
1c009140:	00150399 	move	$r25,$r28
1c009144:	03400529 	andi	$r9,$r9,0x1
1c009148:	00155936 	or	$r22,$r9,$r22
1c00914c:	29bff396 	st.w	$r22,$r28,-4(0xffc)
1c009150:	57c8cbff 	bl	-14136(0xfffc8c8) # 1c005a18 <__malloc_unlock>
1c009154:	53fd87ff 	b	-636(0xffffd84) # 1c008ed8 <_realloc_r+0x16c>
1c009158:	28803349 	ld.w	$r9,$r26,12(0xc)
1c00915c:	28802348 	ld.w	$r8,$r26,8(0x8)
1c009160:	001500b7 	move	$r23,$r5
1c009164:	0010171a 	add.w	$r26,$r24,$r5
1c009168:	29803109 	st.w	$r9,$r8,12(0xc)
1c00916c:	29802128 	st.w	$r8,$r9,8(0x8)
1c009170:	53fe13ff 	b	-496(0xffffe10) # 1c008f80 <_realloc_r+0x214>
1c009174:	28bff089 	ld.w	$r9,$r4,-4(0xffc)
1c009178:	02bff008 	addi.w	$r8,$r0,-4(0xffc)
1c00917c:	0014a129 	and	$r9,$r9,$r8
1c009180:	001026f7 	add.w	$r23,$r23,$r9
1c009184:	00105f1a 	add.w	$r26,$r24,$r23
1c009188:	53fdfbff 	b	-520(0xffffdf8) # 1c008f80 <_realloc_r+0x214>
1c00918c:	00150385 	move	$r5,$r28
1c009190:	57fa53ff 	bl	-1456(0xffffa50) # 1c008be0 <memmove>
1c009194:	53fd17ff 	b	-748(0xffffd14) # 1c008ea8 <_realloc_r+0x13c>
1c009198:	28803349 	ld.w	$r9,$r26,12(0xc)
1c00919c:	28802348 	ld.w	$r8,$r26,8(0x8)
1c0091a0:	02bff2e6 	addi.w	$r6,$r23,-4(0xffc)
1c0091a4:	02809007 	addi.w	$r7,$r0,36(0x24)
1c0091a8:	29803109 	st.w	$r9,$r8,12(0xc)
1c0091ac:	29802128 	st.w	$r8,$r9,8(0x8)
1c0091b0:	288033c9 	ld.w	$r9,$r30,12(0xc)
1c0091b4:	288023c8 	ld.w	$r8,$r30,8(0x8)
1c0091b8:	028023d9 	addi.w	$r25,$r30,8(0x8)
1c0091bc:	001077da 	add.w	$r26,$r30,$r29
1c0091c0:	29803109 	st.w	$r9,$r8,12(0xc)
1c0091c4:	29802128 	st.w	$r8,$r9,8(0x8)
1c0091c8:	680060e6 	bltu	$r7,$r6,96(0x60) # 1c009228 <_realloc_r+0x4bc>
1c0091cc:	02804c07 	addi.w	$r7,$r0,19(0x13)
1c0091d0:	28800388 	ld.w	$r8,$r28,0
1c0091d4:	00150329 	move	$r9,$r25
1c0091d8:	6ffd88e6 	bgeu	$r7,$r6,-632(0x3fd88) # 1c008f60 <_realloc_r+0x1f4>
1c0091dc:	298023c8 	st.w	$r8,$r30,8(0x8)
1c0091e0:	28801388 	ld.w	$r8,$r28,4(0x4)
1c0091e4:	02806c09 	addi.w	$r9,$r0,27(0x1b)
1c0091e8:	298033c8 	st.w	$r8,$r30,12(0xc)
1c0091ec:	28802388 	ld.w	$r8,$r28,8(0x8)
1c0091f0:	6ffd6926 	bgeu	$r9,$r6,-664(0x3fd68) # 1c008f58 <_realloc_r+0x1ec>
1c0091f4:	298043c8 	st.w	$r8,$r30,16(0x10)
1c0091f8:	28803388 	ld.w	$r8,$r28,12(0xc)
1c0091fc:	02809009 	addi.w	$r9,$r0,36(0x24)
1c009200:	298053c8 	st.w	$r8,$r30,20(0x14)
1c009204:	28804388 	ld.w	$r8,$r28,16(0x10)
1c009208:	5c0098c9 	bne	$r6,$r9,152(0x98) # 1c0092a0 <_realloc_r+0x534>
1c00920c:	298063c8 	st.w	$r8,$r30,24(0x18)
1c009210:	28805388 	ld.w	$r8,$r28,20(0x14)
1c009214:	028083c9 	addi.w	$r9,$r30,32(0x20)
1c009218:	0280639c 	addi.w	$r28,$r28,24(0x18)
1c00921c:	298073c8 	st.w	$r8,$r30,28(0x1c)
1c009220:	28800388 	ld.w	$r8,$r28,0
1c009224:	53fd3fff 	b	-708(0xffffd3c) # 1c008f60 <_realloc_r+0x1f4>
1c009228:	00150385 	move	$r5,$r28
1c00922c:	00150324 	move	$r4,$r25
1c009230:	57f9b3ff 	bl	-1616(0xffff9b0) # 1c008be0 <memmove>
1c009234:	0015033c 	move	$r28,$r25
1c009238:	001503b7 	move	$r23,$r29
1c00923c:	001503d8 	move	$r24,$r30
1c009240:	53fd43ff 	b	-704(0xffffd40) # 1c008f80 <_realloc_r+0x214>
1c009244:	28802388 	ld.w	$r8,$r28,8(0x8)
1c009248:	29802088 	st.w	$r8,$r4,8(0x8)
1c00924c:	28803388 	ld.w	$r8,$r28,12(0xc)
1c009250:	29803088 	st.w	$r8,$r4,12(0xc)
1c009254:	580014c9 	beq	$r6,$r9,20(0x14) # 1c009268 <_realloc_r+0x4fc>
1c009258:	02804388 	addi.w	$r8,$r28,16(0x10)
1c00925c:	02804089 	addi.w	$r9,$r4,16(0x10)
1c009260:	28804387 	ld.w	$r7,$r28,16(0x10)
1c009264:	53fc33ff 	b	-976(0xffffc30) # 1c008e94 <_realloc_r+0x128>
1c009268:	28804387 	ld.w	$r7,$r28,16(0x10)
1c00926c:	02806388 	addi.w	$r8,$r28,24(0x18)
1c009270:	02806089 	addi.w	$r9,$r4,24(0x18)
1c009274:	29804087 	st.w	$r7,$r4,16(0x10)
1c009278:	28805387 	ld.w	$r7,$r28,20(0x14)
1c00927c:	29805087 	st.w	$r7,$r4,20(0x14)
1c009280:	28806387 	ld.w	$r7,$r28,24(0x18)
1c009284:	53fc13ff 	b	-1008(0xffffc10) # 1c008e94 <_realloc_r+0x128>
1c009288:	28802389 	ld.w	$r9,$r28,8(0x8)
1c00928c:	298043c9 	st.w	$r9,$r30,16(0x10)
1c009290:	28803389 	ld.w	$r9,$r28,12(0xc)
1c009294:	298053c9 	st.w	$r9,$r30,20(0x14)
1c009298:	28804388 	ld.w	$r8,$r28,16(0x10)
1c00929c:	5bff70c7 	beq	$r6,$r7,-144(0x3ff70) # 1c00920c <_realloc_r+0x4a0>
1c0092a0:	028063c9 	addi.w	$r9,$r30,24(0x18)
1c0092a4:	0280439c 	addi.w	$r28,$r28,16(0x10)
1c0092a8:	53fcbbff 	b	-840(0xffffcb8) # 1c008f60 <_realloc_r+0x1f4>
1c0092ac:	00150385 	move	$r5,$r28
1c0092b0:	00150324 	move	$r4,$r25
1c0092b4:	57f92fff 	bl	-1748(0xffff92c) # 1c008be0 <memmove>
1c0092b8:	53fe1bff 	b	-488(0xffffe18) # 1c0090d0 <_realloc_r+0x364>
1c0092bc:	28802389 	ld.w	$r9,$r28,8(0x8)
1c0092c0:	298043c9 	st.w	$r9,$r30,16(0x10)
1c0092c4:	28803389 	ld.w	$r9,$r28,12(0xc)
1c0092c8:	298053c9 	st.w	$r9,$r30,20(0x14)
1c0092cc:	28804388 	ld.w	$r8,$r28,16(0x10)
1c0092d0:	580010c7 	beq	$r6,$r7,16(0x10) # 1c0092e0 <_realloc_r+0x574>
1c0092d4:	028063c9 	addi.w	$r9,$r30,24(0x18)
1c0092d8:	0280439c 	addi.w	$r28,$r28,16(0x10)
1c0092dc:	53fde3ff 	b	-544(0xffffde0) # 1c0090bc <_realloc_r+0x350>
1c0092e0:	298063c8 	st.w	$r8,$r30,24(0x18)
1c0092e4:	28805388 	ld.w	$r8,$r28,20(0x14)
1c0092e8:	028083c9 	addi.w	$r9,$r30,32(0x20)
1c0092ec:	0280639c 	addi.w	$r28,$r28,24(0x18)
1c0092f0:	298073c8 	st.w	$r8,$r30,28(0x1c)
1c0092f4:	28800388 	ld.w	$r8,$r28,0
1c0092f8:	53fdc7ff 	b	-572(0xffffdc4) # 1c0090bc <_realloc_r+0x350>

1c0092fc <cleanup_glue>:
cleanup_glue():
1c0092fc:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c009300:	29802076 	st.w	$r22,$r3,8(0x8)
1c009304:	001500b6 	move	$r22,$r5
1c009308:	288000a5 	ld.w	$r5,$r5,0
1c00930c:	29801077 	st.w	$r23,$r3,4(0x4)
1c009310:	29803061 	st.w	$r1,$r3,12(0xc)
1c009314:	00150097 	move	$r23,$r4
1c009318:	580008a0 	beq	$r5,$r0,8(0x8) # 1c009320 <cleanup_glue+0x24>
1c00931c:	57ffe3ff 	bl	-32(0xfffffe0) # 1c0092fc <cleanup_glue>
1c009320:	001502c5 	move	$r5,$r22
1c009324:	28802076 	ld.w	$r22,$r3,8(0x8)
1c009328:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00932c:	001502e4 	move	$r4,$r23
1c009330:	28801077 	ld.w	$r23,$r3,4(0x4)
1c009334:	02804063 	addi.w	$r3,$r3,16(0x10)
1c009338:	53b547ff 	b	-19132(0xfffb544) # 1c00487c <_free_r>

1c00933c <_reclaim_reent>:
_reclaim_reent():
1c00933c:	1dc7ff49 	pcaddu12i	$r9,-114694(0xe3ffa)
1c009340:	28a4e129 	ld.w	$r9,$r9,-1736(0x938)
1c009344:	28800129 	ld.w	$r9,$r9,0
1c009348:	58010524 	beq	$r9,$r4,260(0x104) # 1c00944c <_reclaim_reent+0x110>
1c00934c:	28813088 	ld.w	$r8,$r4,76(0x4c)
1c009350:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c009354:	29805077 	st.w	$r23,$r3,20(0x14)
1c009358:	29807061 	st.w	$r1,$r3,28(0x1c)
1c00935c:	29806076 	st.w	$r22,$r3,24(0x18)
1c009360:	29804078 	st.w	$r24,$r3,16(0x10)
1c009364:	29803079 	st.w	$r25,$r3,12(0xc)
1c009368:	00150097 	move	$r23,$r4
1c00936c:	58004500 	beq	$r8,$r0,68(0x44) # 1c0093b0 <_reclaim_reent+0x74>
1c009370:	00150018 	move	$r24,$r0
1c009374:	02820019 	addi.w	$r25,$r0,128(0x80)
1c009378:	00106109 	add.w	$r9,$r8,$r24
1c00937c:	28800125 	ld.w	$r5,$r9,0
1c009380:	58001ca0 	beq	$r5,$r0,28(0x1c) # 1c00939c <_reclaim_reent+0x60>
1c009384:	288000b6 	ld.w	$r22,$r5,0
1c009388:	001502e4 	move	$r4,$r23
1c00938c:	57b4f3ff 	bl	-19216(0xfffb4f0) # 1c00487c <_free_r>
1c009390:	001502c5 	move	$r5,$r22
1c009394:	5ffff2c0 	bne	$r22,$r0,-16(0x3fff0) # 1c009384 <_reclaim_reent+0x48>
1c009398:	288132e8 	ld.w	$r8,$r23,76(0x4c)
1c00939c:	02801318 	addi.w	$r24,$r24,4(0x4)
1c0093a0:	5fffdb19 	bne	$r24,$r25,-40(0x3ffd8) # 1c009378 <_reclaim_reent+0x3c>
1c0093a4:	00150105 	move	$r5,$r8
1c0093a8:	001502e4 	move	$r4,$r23
1c0093ac:	57b4d3ff 	bl	-19248(0xfffb4d0) # 1c00487c <_free_r>
1c0093b0:	288102e5 	ld.w	$r5,$r23,64(0x40)
1c0093b4:	58000ca0 	beq	$r5,$r0,12(0xc) # 1c0093c0 <_reclaim_reent+0x84>
1c0093b8:	001502e4 	move	$r4,$r23
1c0093bc:	57b4c3ff 	bl	-19264(0xfffb4c0) # 1c00487c <_free_r>
1c0093c0:	288522e5 	ld.w	$r5,$r23,328(0x148)
1c0093c4:	580020a0 	beq	$r5,$r0,32(0x20) # 1c0093e4 <_reclaim_reent+0xa8>
1c0093c8:	028532f8 	addi.w	$r24,$r23,332(0x14c)
1c0093cc:	580018b8 	beq	$r5,$r24,24(0x18) # 1c0093e4 <_reclaim_reent+0xa8>
1c0093d0:	288000b6 	ld.w	$r22,$r5,0
1c0093d4:	001502e4 	move	$r4,$r23
1c0093d8:	57b4a7ff 	bl	-19292(0xfffb4a4) # 1c00487c <_free_r>
1c0093dc:	001502c5 	move	$r5,$r22
1c0093e0:	5ffff316 	bne	$r24,$r22,-16(0x3fff0) # 1c0093d0 <_reclaim_reent+0x94>
1c0093e4:	288152e5 	ld.w	$r5,$r23,84(0x54)
1c0093e8:	58000ca0 	beq	$r5,$r0,12(0xc) # 1c0093f4 <_reclaim_reent+0xb8>
1c0093ec:	001502e4 	move	$r4,$r23
1c0093f0:	57b48fff 	bl	-19316(0xfffb48c) # 1c00487c <_free_r>
1c0093f4:	2880e2e9 	ld.w	$r9,$r23,56(0x38)
1c0093f8:	58003920 	beq	$r9,$r0,56(0x38) # 1c009430 <_reclaim_reent+0xf4>
1c0093fc:	2880f2e9 	ld.w	$r9,$r23,60(0x3c)
1c009400:	001502e4 	move	$r4,$r23
1c009404:	4c000121 	jirl	$r1,$r9,0
1c009408:	288b82e5 	ld.w	$r5,$r23,736(0x2e0)
1c00940c:	580024a0 	beq	$r5,$r0,36(0x24) # 1c009430 <_reclaim_reent+0xf4>
1c009410:	28806076 	ld.w	$r22,$r3,24(0x18)
1c009414:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c009418:	28804078 	ld.w	$r24,$r3,16(0x10)
1c00941c:	28803079 	ld.w	$r25,$r3,12(0xc)
1c009420:	001502e4 	move	$r4,$r23
1c009424:	28805077 	ld.w	$r23,$r3,20(0x14)
1c009428:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00942c:	53fed3ff 	b	-304(0xffffed0) # 1c0092fc <cleanup_glue>
1c009430:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c009434:	28806076 	ld.w	$r22,$r3,24(0x18)
1c009438:	28805077 	ld.w	$r23,$r3,20(0x14)
1c00943c:	28804078 	ld.w	$r24,$r3,16(0x10)
1c009440:	28803079 	ld.w	$r25,$r3,12(0xc)
1c009444:	02808063 	addi.w	$r3,$r3,32(0x20)
1c009448:	4c000020 	jirl	$r0,$r1,0
1c00944c:	4c000020 	jirl	$r0,$r1,0

1c009450 <__swbuf_r>:
__swbuf_r():
1c009450:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c009454:	29806076 	st.w	$r22,$r3,24(0x18)
1c009458:	29805077 	st.w	$r23,$r3,20(0x14)
1c00945c:	29804078 	st.w	$r24,$r3,16(0x10)
1c009460:	29807061 	st.w	$r1,$r3,28(0x1c)
1c009464:	29803079 	st.w	$r25,$r3,12(0xc)
1c009468:	00150098 	move	$r24,$r4
1c00946c:	001500b7 	move	$r23,$r5
1c009470:	001500d6 	move	$r22,$r6
1c009474:	58000c80 	beq	$r4,$r0,12(0xc) # 1c009480 <__swbuf_r+0x30>
1c009478:	2880e089 	ld.w	$r9,$r4,56(0x38)
1c00947c:	58015520 	beq	$r9,$r0,340(0x154) # 1c0095d0 <__swbuf_r+0x180>
1c009480:	284032c7 	ld.h	$r7,$r22,12(0xc)
1c009484:	288062c9 	ld.w	$r9,$r22,24(0x18)
1c009488:	0040c0e8 	slli.w	$r8,$r7,0x10
1c00948c:	0044c108 	srli.w	$r8,$r8,0x10
1c009490:	298022c9 	st.w	$r9,$r22,8(0x8)
1c009494:	03402109 	andi	$r9,$r8,0x8
1c009498:	58008920 	beq	$r9,$r0,136(0x88) # 1c009520 <__swbuf_r+0xd0>
1c00949c:	288042c9 	ld.w	$r9,$r22,16(0x10)
1c0094a0:	58008120 	beq	$r9,$r0,128(0x80) # 1c009520 <__swbuf_r+0xd0>
1c0094a4:	14000046 	lu12i.w	$r6,2(0x2)
1c0094a8:	00149908 	and	$r8,$r8,$r6
1c0094ac:	0343fef9 	andi	$r25,$r23,0xff
1c0094b0:	0343fef7 	andi	$r23,$r23,0xff
1c0094b4:	5800a100 	beq	$r8,$r0,160(0xa0) # 1c009554 <__swbuf_r+0x104>
1c0094b8:	288002c8 	ld.w	$r8,$r22,0
1c0094bc:	288052c7 	ld.w	$r7,$r22,20(0x14)
1c0094c0:	00112509 	sub.w	$r9,$r8,$r9
1c0094c4:	6400bd27 	bge	$r9,$r7,188(0xbc) # 1c009580 <__swbuf_r+0x130>
1c0094c8:	288022c7 	ld.w	$r7,$r22,8(0x8)
1c0094cc:	02800506 	addi.w	$r6,$r8,1(0x1)
1c0094d0:	298002c6 	st.w	$r6,$r22,0
1c0094d4:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c0094d8:	298022c7 	st.w	$r7,$r22,8(0x8)
1c0094dc:	29000119 	st.b	$r25,$r8,0
1c0094e0:	288052c8 	ld.w	$r8,$r22,20(0x14)
1c0094e4:	02800529 	addi.w	$r9,$r9,1(0x1)
1c0094e8:	5800d109 	beq	$r8,$r9,208(0xd0) # 1c0095b8 <__swbuf_r+0x168>
1c0094ec:	2a4032c9 	ld.hu	$r9,$r22,12(0xc)
1c0094f0:	03400529 	andi	$r9,$r9,0x1
1c0094f4:	58000d20 	beq	$r9,$r0,12(0xc) # 1c009500 <__swbuf_r+0xb0>
1c0094f8:	02802809 	addi.w	$r9,$r0,10(0xa)
1c0094fc:	5800bee9 	beq	$r23,$r9,188(0xbc) # 1c0095b8 <__swbuf_r+0x168>
1c009500:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c009504:	28806076 	ld.w	$r22,$r3,24(0x18)
1c009508:	001502e4 	move	$r4,$r23
1c00950c:	28804078 	ld.w	$r24,$r3,16(0x10)
1c009510:	28805077 	ld.w	$r23,$r3,20(0x14)
1c009514:	28803079 	ld.w	$r25,$r3,12(0xc)
1c009518:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00951c:	4c000020 	jirl	$r0,$r1,0
1c009520:	001502c5 	move	$r5,$r22
1c009524:	00150304 	move	$r4,$r24
1c009528:	5792dbff 	bl	-27944(0xfff92d8) # 1c002800 <__swsetup_r>
1c00952c:	5c009c80 	bne	$r4,$r0,156(0x9c) # 1c0095c8 <__swbuf_r+0x178>
1c009530:	284032c7 	ld.h	$r7,$r22,12(0xc)
1c009534:	14000046 	lu12i.w	$r6,2(0x2)
1c009538:	0343fef9 	andi	$r25,$r23,0xff
1c00953c:	0040c0e8 	slli.w	$r8,$r7,0x10
1c009540:	0044c108 	srli.w	$r8,$r8,0x10
1c009544:	00149908 	and	$r8,$r8,$r6
1c009548:	288042c9 	ld.w	$r9,$r22,16(0x10)
1c00954c:	0343fef7 	andi	$r23,$r23,0xff
1c009550:	5fff6900 	bne	$r8,$r0,-152(0x3ff68) # 1c0094b8 <__swbuf_r+0x68>
1c009554:	288182c8 	ld.w	$r8,$r22,96(0x60)
1c009558:	001518e7 	or	$r7,$r7,$r6
1c00955c:	15ffffa6 	lu12i.w	$r6,-3(0xffffd)
1c009560:	03bffcc6 	ori	$r6,$r6,0xfff
1c009564:	00149908 	and	$r8,$r8,$r6
1c009568:	298182c8 	st.w	$r8,$r22,96(0x60)
1c00956c:	288002c8 	ld.w	$r8,$r22,0
1c009570:	294032c7 	st.h	$r7,$r22,12(0xc)
1c009574:	288052c7 	ld.w	$r7,$r22,20(0x14)
1c009578:	00112509 	sub.w	$r9,$r8,$r9
1c00957c:	63ff4d27 	blt	$r9,$r7,-180(0x3ff4c) # 1c0094c8 <__swbuf_r+0x78>
1c009580:	001502c5 	move	$r5,$r22
1c009584:	00150304 	move	$r4,$r24
1c009588:	57adebff 	bl	-21016(0xfffade8) # 1c004370 <_fflush_r>
1c00958c:	5c003c80 	bne	$r4,$r0,60(0x3c) # 1c0095c8 <__swbuf_r+0x178>
1c009590:	288002c8 	ld.w	$r8,$r22,0
1c009594:	288022c7 	ld.w	$r7,$r22,8(0x8)
1c009598:	02800409 	addi.w	$r9,$r0,1(0x1)
1c00959c:	02800506 	addi.w	$r6,$r8,1(0x1)
1c0095a0:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c0095a4:	298002c6 	st.w	$r6,$r22,0
1c0095a8:	298022c7 	st.w	$r7,$r22,8(0x8)
1c0095ac:	29000119 	st.b	$r25,$r8,0
1c0095b0:	288052c8 	ld.w	$r8,$r22,20(0x14)
1c0095b4:	5fff3909 	bne	$r8,$r9,-200(0x3ff38) # 1c0094ec <__swbuf_r+0x9c>
1c0095b8:	001502c5 	move	$r5,$r22
1c0095bc:	00150304 	move	$r4,$r24
1c0095c0:	57adb3ff 	bl	-21072(0xfffadb0) # 1c004370 <_fflush_r>
1c0095c4:	5bff3c80 	beq	$r4,$r0,-196(0x3ff3c) # 1c009500 <__swbuf_r+0xb0>
1c0095c8:	02bffc17 	addi.w	$r23,$r0,-1(0xfff)
1c0095cc:	53ff37ff 	b	-204(0xfffff34) # 1c009500 <__swbuf_r+0xb0>
1c0095d0:	57b15fff 	bl	-20132(0xfffb15c) # 1c00472c <__sinit>
1c0095d4:	53feafff 	b	-340(0xffffeac) # 1c009480 <__swbuf_r+0x30>

1c0095d8 <__swbuf>:
__swbuf():
1c0095d8:	1dc7ff29 	pcaddu12i	$r9,-114695(0xe3ff9)
1c0095dc:	289a7129 	ld.w	$r9,$r9,1692(0x69c)
1c0095e0:	001500a6 	move	$r6,$r5
1c0095e4:	00150085 	move	$r5,$r4
1c0095e8:	28800124 	ld.w	$r4,$r9,0
1c0095ec:	53fe67ff 	b	-412(0xffffe64) # 1c009450 <__swbuf_r>

1c0095f0 <_wcrtomb_r>:
_wcrtomb_r():
1c0095f0:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c0095f4:	2980a076 	st.w	$r22,$r3,40(0x28)
1c0095f8:	29809077 	st.w	$r23,$r3,36(0x24)
1c0095fc:	29808078 	st.w	$r24,$r3,32(0x20)
1c009600:	1dc7ff29 	pcaddu12i	$r9,-114695(0xe3ff9)
1c009604:	289a1129 	ld.w	$r9,$r9,1668(0x684)
1c009608:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c00960c:	00150096 	move	$r22,$r4
1c009610:	001500f7 	move	$r23,$r7
1c009614:	28800138 	ld.w	$r24,$r9,0
1c009618:	580048a0 	beq	$r5,$r0,72(0x48) # 1c009660 <_wcrtomb_r+0x70>
1c00961c:	29803066 	st.w	$r6,$r3,12(0xc)
1c009620:	29802065 	st.w	$r5,$r3,8(0x8)
1c009624:	57b76bff 	bl	-18584(0xfffb768) # 1c004d8c <__locale_charset>
1c009628:	28803066 	ld.w	$r6,$r3,12(0xc)
1c00962c:	28802065 	ld.w	$r5,$r3,8(0x8)
1c009630:	00150087 	move	$r7,$r4
1c009634:	001502e8 	move	$r8,$r23
1c009638:	001502c4 	move	$r4,$r22
1c00963c:	4c000301 	jirl	$r1,$r24,0
1c009640:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c009644:	58004089 	beq	$r4,$r9,64(0x40) # 1c009684 <_wcrtomb_r+0x94>
1c009648:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c00964c:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c009650:	28809077 	ld.w	$r23,$r3,36(0x24)
1c009654:	28808078 	ld.w	$r24,$r3,32(0x20)
1c009658:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c00965c:	4c000020 	jirl	$r0,$r1,0
1c009660:	57b72fff 	bl	-18644(0xfffb72c) # 1c004d8c <__locale_charset>
1c009664:	00150087 	move	$r7,$r4
1c009668:	001502e8 	move	$r8,$r23
1c00966c:	00150006 	move	$r6,$r0
1c009670:	02805065 	addi.w	$r5,$r3,20(0x14)
1c009674:	001502c4 	move	$r4,$r22
1c009678:	4c000301 	jirl	$r1,$r24,0
1c00967c:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c009680:	5fffc889 	bne	$r4,$r9,-56(0x3ffc8) # 1c009648 <_wcrtomb_r+0x58>
1c009684:	298002e0 	st.w	$r0,$r23,0
1c009688:	02822809 	addi.w	$r9,$r0,138(0x8a)
1c00968c:	298002c9 	st.w	$r9,$r22,0
1c009690:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c009694:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c009698:	28809077 	ld.w	$r23,$r3,36(0x24)
1c00969c:	28808078 	ld.w	$r24,$r3,32(0x20)
1c0096a0:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c0096a4:	4c000020 	jirl	$r0,$r1,0

1c0096a8 <wcrtomb>:
wcrtomb():
1c0096a8:	02bf4063 	addi.w	$r3,$r3,-48(0xfd0)
1c0096ac:	1dc7ff29 	pcaddu12i	$r9,-114695(0xe3ff9)
1c0096b0:	28972129 	ld.w	$r9,$r9,1480(0x5c8)
1c0096b4:	29809077 	st.w	$r23,$r3,36(0x24)
1c0096b8:	29808078 	st.w	$r24,$r3,32(0x20)
1c0096bc:	29807079 	st.w	$r25,$r3,28(0x1c)
1c0096c0:	28800137 	ld.w	$r23,$r9,0
1c0096c4:	2980b061 	st.w	$r1,$r3,44(0x2c)
1c0096c8:	1dc7ff29 	pcaddu12i	$r9,-114695(0xe3ff9)
1c0096cc:	2896f129 	ld.w	$r9,$r9,1468(0x5bc)
1c0096d0:	2980a076 	st.w	$r22,$r3,40(0x28)
1c0096d4:	2980607a 	st.w	$r26,$r3,24(0x18)
1c0096d8:	001500d8 	move	$r24,$r6
1c0096dc:	28800139 	ld.w	$r25,$r9,0
1c0096e0:	58005080 	beq	$r4,$r0,80(0x50) # 1c009730 <wcrtomb+0x88>
1c0096e4:	001500ba 	move	$r26,$r5
1c0096e8:	00150096 	move	$r22,$r4
1c0096ec:	57b6a3ff 	bl	-18784(0xfffb6a0) # 1c004d8c <__locale_charset>
1c0096f0:	00150087 	move	$r7,$r4
1c0096f4:	00150308 	move	$r8,$r24
1c0096f8:	00150346 	move	$r6,$r26
1c0096fc:	001502c5 	move	$r5,$r22
1c009700:	001502e4 	move	$r4,$r23
1c009704:	4c000321 	jirl	$r1,$r25,0
1c009708:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c00970c:	58004889 	beq	$r4,$r9,72(0x48) # 1c009754 <wcrtomb+0xac>
1c009710:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c009714:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c009718:	28809077 	ld.w	$r23,$r3,36(0x24)
1c00971c:	28808078 	ld.w	$r24,$r3,32(0x20)
1c009720:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c009724:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c009728:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c00972c:	4c000020 	jirl	$r0,$r1,0
1c009730:	57b65fff 	bl	-18852(0xfffb65c) # 1c004d8c <__locale_charset>
1c009734:	00150087 	move	$r7,$r4
1c009738:	00150308 	move	$r8,$r24
1c00973c:	00150006 	move	$r6,$r0
1c009740:	02801065 	addi.w	$r5,$r3,4(0x4)
1c009744:	001502e4 	move	$r4,$r23
1c009748:	4c000321 	jirl	$r1,$r25,0
1c00974c:	02bffc09 	addi.w	$r9,$r0,-1(0xfff)
1c009750:	5fffc089 	bne	$r4,$r9,-64(0x3ffc0) # 1c009710 <wcrtomb+0x68>
1c009754:	2880b061 	ld.w	$r1,$r3,44(0x2c)
1c009758:	2880a076 	ld.w	$r22,$r3,40(0x28)
1c00975c:	29800300 	st.w	$r0,$r24,0
1c009760:	02822809 	addi.w	$r9,$r0,138(0x8a)
1c009764:	298002e9 	st.w	$r9,$r23,0
1c009768:	28808078 	ld.w	$r24,$r3,32(0x20)
1c00976c:	28809077 	ld.w	$r23,$r3,36(0x24)
1c009770:	28807079 	ld.w	$r25,$r3,28(0x1c)
1c009774:	2880607a 	ld.w	$r26,$r3,24(0x18)
1c009778:	0280c063 	addi.w	$r3,$r3,48(0x30)
1c00977c:	4c000020 	jirl	$r0,$r1,0

1c009780 <__ascii_wctomb>:
__ascii_wctomb():
1c009780:	580028a0 	beq	$r5,$r0,40(0x28) # 1c0097a8 <__ascii_wctomb+0x28>
1c009784:	0283fc09 	addi.w	$r9,$r0,255(0xff)
1c009788:	68001126 	bltu	$r9,$r6,16(0x10) # 1c009798 <__ascii_wctomb+0x18>
1c00978c:	290000a6 	st.b	$r6,$r5,0
1c009790:	02800404 	addi.w	$r4,$r0,1(0x1)
1c009794:	4c000020 	jirl	$r0,$r1,0
1c009798:	02822809 	addi.w	$r9,$r0,138(0x8a)
1c00979c:	29800089 	st.w	$r9,$r4,0
1c0097a0:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c0097a4:	4c000020 	jirl	$r0,$r1,0
1c0097a8:	00150004 	move	$r4,$r0
1c0097ac:	4c000020 	jirl	$r0,$r1,0

1c0097b0 <_wctomb_r>:
_wctomb_r():
1c0097b0:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c0097b4:	1dc7ff29 	pcaddu12i	$r9,-114695(0xe3ff9)
1c0097b8:	028f9129 	addi.w	$r9,$r9,996(0x3e4)
1c0097bc:	29806076 	st.w	$r22,$r3,24(0x18)
1c0097c0:	28800136 	ld.w	$r22,$r9,0
1c0097c4:	29805077 	st.w	$r23,$r3,20(0x14)
1c0097c8:	29804078 	st.w	$r24,$r3,16(0x10)
1c0097cc:	29807061 	st.w	$r1,$r3,28(0x1c)
1c0097d0:	001500f8 	move	$r24,$r7
1c0097d4:	00150097 	move	$r23,$r4
1c0097d8:	29803065 	st.w	$r5,$r3,12(0xc)
1c0097dc:	29802066 	st.w	$r6,$r3,8(0x8)
1c0097e0:	57b5afff 	bl	-19028(0xfffb5ac) # 1c004d8c <__locale_charset>
1c0097e4:	001502cd 	move	$r13,$r22
1c0097e8:	28806076 	ld.w	$r22,$r3,24(0x18)
1c0097ec:	28802066 	ld.w	$r6,$r3,8(0x8)
1c0097f0:	28803065 	ld.w	$r5,$r3,12(0xc)
1c0097f4:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c0097f8:	00150308 	move	$r8,$r24
1c0097fc:	00150087 	move	$r7,$r4
1c009800:	28804078 	ld.w	$r24,$r3,16(0x10)
1c009804:	001502e4 	move	$r4,$r23
1c009808:	28805077 	ld.w	$r23,$r3,20(0x14)
1c00980c:	02808063 	addi.w	$r3,$r3,32(0x20)
1c009810:	4c0001a0 	jirl	$r0,$r13,0

1c009814 <write>:
write():
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:29
1c009814:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c009818:	29804078 	st.w	$r24,$r3,16(0x10)
1c00981c:	29803079 	st.w	$r25,$r3,12(0xc)
1c009820:	29807061 	st.w	$r1,$r3,28(0x1c)
1c009824:	29806076 	st.w	$r22,$r3,24(0x18)
1c009828:	29805077 	st.w	$r23,$r3,20(0x14)
1c00982c:	001500d9 	move	$r25,$r6
1c009830:	001018b8 	add.w	$r24,$r5,$r6
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:32
1c009834:	64003c06 	bge	$r0,$r6,60(0x3c) # 1c009870 <write+0x5c>
1c009838:	001500b6 	move	$r22,$r5
1c00983c:	02802817 	addi.w	$r23,$r0,10(0xa)
1c009840:	50001000 	b	16(0x10) # 1c009850 <write+0x3c>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:36 (discriminator 2)
1c009844:	028006d6 	addi.w	$r22,$r22,1(0x1)
1c009848:	576d9fff 	bl	-37476(0xfff6d9c) # 1c0005e4 <outbyte>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:32
1c00984c:	580026d8 	beq	$r22,$r24,36(0x24) # 1c009870 <write+0x5c>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:33
1c009850:	280002c4 	ld.b	$r4,$r22,0
1c009854:	5ffff097 	bne	$r4,$r23,-16(0x3fff0) # 1c009844 <write+0x30>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:34
1c009858:	02803404 	addi.w	$r4,$r0,13(0xd)
1c00985c:	576d8bff 	bl	-37496(0xfff6d88) # 1c0005e4 <outbyte>
1c009860:	280002c4 	ld.b	$r4,$r22,0
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:36
1c009864:	028006d6 	addi.w	$r22,$r22,1(0x1)
1c009868:	576d7fff 	bl	-37508(0xfff6d7c) # 1c0005e4 <outbyte>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:32
1c00986c:	5fffe6d8 	bne	$r22,$r24,-28(0x3ffe4) # 1c009850 <write+0x3c>
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../write.c:39
1c009870:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c009874:	28806076 	ld.w	$r22,$r3,24(0x18)
1c009878:	00150324 	move	$r4,$r25
1c00987c:	28805077 	ld.w	$r23,$r3,20(0x14)
1c009880:	28804078 	ld.w	$r24,$r3,16(0x10)
1c009884:	28803079 	ld.w	$r25,$r3,12(0xc)
1c009888:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00988c:	4c000020 	jirl	$r0,$r1,0

1c009890 <fstat>:
fstat():
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../fstat.c:26
1c009890:	14000049 	lu12i.w	$r9,2(0x2)
1c009894:	298010a9 	st.w	$r9,$r5,4(0x4)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../fstat.c:27
1c009898:	2980b0a0 	st.w	$r0,$r5,44(0x2c)
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../fstat.c:30
1c00989c:	00150004 	move	$r4,$r0
1c0098a0:	4c000020 	jirl	$r0,$r1,0

1c0098a4 <isatty>:
isatty():
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../isatty.c:27
1c0098a4:	02800404 	addi.w	$r4,$r0,1(0x1)
1c0098a8:	4c000020 	jirl	$r0,$r1,0

1c0098ac <lseek>:
lseek():
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/../lseek.c:30
1c0098ac:	02bffc04 	addi.w	$r4,$r0,-1(0xfff)
1c0098b0:	4c000020 	jirl	$r0,$r1,0
	...

1c0098c0 <__udivdi3>:
__udivdi3():
1c0098c0:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c0098c4:	001500ad 	move	$r13,$r5
1c0098c8:	5c0220e0 	bne	$r7,$r0,544(0x220) # 1c009ae8 <__udivdi3+0x228>
1c0098cc:	001500ef 	move	$r15,$r7
1c0098d0:	001500ce 	move	$r14,$r6
1c0098d4:	00150091 	move	$r17,$r4
1c0098d8:	6c0108a6 	bgeu	$r5,$r6,264(0x108) # 1c0099e0 <__udivdi3+0x120>
1c0098dc:	1400020c 	lu12i.w	$r12,16(0x10)
1c0098e0:	6c02a8cc 	bgeu	$r6,$r12,680(0x2a8) # 1c009b88 <__udivdi3+0x2c8>
1c0098e4:	0283fc0c 	addi.w	$r12,$r0,255(0xff)
1c0098e8:	001500d2 	move	$r18,$r6
1c0098ec:	6c000d86 	bgeu	$r12,$r6,12(0xc) # 1c0098f8 <__udivdi3+0x38>
1c0098f0:	0044a0d2 	srli.w	$r18,$r6,0x8
1c0098f4:	0280200f 	addi.w	$r15,$r0,8(0x8)
1c0098f8:	1dc7ff2c 	pcaddu12i	$r12,-114695(0xe3ff9)
1c0098fc:	288de18c 	ld.w	$r12,$r12,888(0x378)
1c009900:	0010498c 	add.w	$r12,$r12,$r18
1c009904:	2a00018c 	ld.bu	$r12,$r12,0
1c009908:	02808010 	addi.w	$r16,$r0,32(0x20)
1c00990c:	00103d8f 	add.w	$r15,$r12,$r15
1c009910:	00113e0c 	sub.w	$r12,$r16,$r15
1c009914:	58001980 	beq	$r12,$r0,24(0x18) # 1c00992c <__udivdi3+0x6c>
1c009918:	001731ad 	sll.w	$r13,$r13,$r12
1c00991c:	0017bc8f 	srl.w	$r15,$r4,$r15
1c009920:	001730ce 	sll.w	$r14,$r6,$r12
1c009924:	00173091 	sll.w	$r17,$r4,$r12
1c009928:	001535e5 	or	$r5,$r15,$r13
1c00992c:	2980306e 	st.w	$r14,$r3,12(0xc)
1c009930:	2a403070 	ld.hu	$r16,$r3,12(0xc)
1c009934:	0044c1d2 	srli.w	$r18,$r14,0x10
1c009938:	0044c22d 	srli.w	$r13,$r17,0x10
1c00993c:	0021c8af 	mod.wu	$r15,$r5,$r18
1c009940:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009948 <__udivdi3+0x88>
1c009944:	002a0007 	break	0x7
1c009948:	002148ac 	div.wu	$r12,$r5,$r18
1c00994c:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009954 <__udivdi3+0x94>
1c009950:	002a0007 	break	0x7
1c009954:	0040c1ef 	slli.w	$r15,$r15,0x10
1c009958:	001535ed 	or	$r13,$r15,$r13
1c00995c:	001c320f 	mul.w	$r15,$r16,$r12
1c009960:	6c0019af 	bgeu	$r13,$r15,24(0x18) # 1c009978 <__udivdi3+0xb8>
1c009964:	001039ad 	add.w	$r13,$r13,$r14
1c009968:	02bffd93 	addi.w	$r19,$r12,-1(0xfff)
1c00996c:	680009ae 	bltu	$r13,$r14,8(0x8) # 1c009974 <__udivdi3+0xb4>
1c009970:	680471af 	bltu	$r13,$r15,1136(0x470) # 1c009de0 <__udivdi3+0x520>
1c009974:	0015026c 	move	$r12,$r19
1c009978:	00113dad 	sub.w	$r13,$r13,$r15
1c00997c:	002149a4 	div.wu	$r4,$r13,$r18
1c009980:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009988 <__udivdi3+0xc8>
1c009984:	002a0007 	break	0x7
1c009988:	001c1210 	mul.w	$r16,$r16,$r4
1c00998c:	29803071 	st.w	$r17,$r3,12(0xc)
1c009990:	0021c9af 	mod.wu	$r15,$r13,$r18
1c009994:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c00999c <__udivdi3+0xdc>
1c009998:	002a0007 	break	0x7
1c00999c:	2a403071 	ld.hu	$r17,$r3,12(0xc)
1c0099a0:	0040c1ef 	slli.w	$r15,$r15,0x10
1c0099a4:	001545ef 	or	$r15,$r15,$r17
1c0099a8:	6c001df0 	bgeu	$r15,$r16,28(0x1c) # 1c0099c4 <__udivdi3+0x104>
1c0099ac:	00103dcf 	add.w	$r15,$r14,$r15
1c0099b0:	02bffc8d 	addi.w	$r13,$r4,-1(0xfff)
1c0099b4:	68000dee 	bltu	$r15,$r14,12(0xc) # 1c0099c0 <__udivdi3+0x100>
1c0099b8:	02bff884 	addi.w	$r4,$r4,-2(0xffe)
1c0099bc:	680009f0 	bltu	$r15,$r16,8(0x8) # 1c0099c4 <__udivdi3+0x104>
1c0099c0:	001501a4 	move	$r4,$r13
1c0099c4:	0040c18c 	slli.w	$r12,$r12,0x10
1c0099c8:	00150005 	move	$r5,$r0
1c0099cc:	0015118c 	or	$r12,$r12,$r4
1c0099d0:	00150184 	move	$r4,$r12
1c0099d4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c0099d8:	4c000020 	jirl	$r0,$r1,0
1c0099dc:	03400000 	andi	$r0,$r0,0x0
1c0099e0:	5c0014c0 	bne	$r6,$r0,20(0x14) # 1c0099f4 <__udivdi3+0x134>
1c0099e4:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c0099e8:	0021198e 	div.wu	$r14,$r12,$r6
1c0099ec:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c0099f4 <__udivdi3+0x134>
1c0099f0:	002a0007 	break	0x7
1c0099f4:	1400020c 	lu12i.w	$r12,16(0x10)
1c0099f8:	680179cc 	bltu	$r14,$r12,376(0x178) # 1c009b70 <__udivdi3+0x2b0>
1c0099fc:	1402000c 	lu12i.w	$r12,4096(0x1000)
1c009a00:	0044c1d2 	srli.w	$r18,$r14,0x10
1c009a04:	0280400f 	addi.w	$r15,$r0,16(0x10)
1c009a08:	68000dcc 	bltu	$r14,$r12,12(0xc) # 1c009a14 <__udivdi3+0x154>
1c009a0c:	0044e1d2 	srli.w	$r18,$r14,0x18
1c009a10:	0280600f 	addi.w	$r15,$r0,24(0x18)
1c009a14:	1dc7ff30 	pcaddu12i	$r16,-114695(0xe3ff9)
1c009a18:	28897210 	ld.w	$r16,$r16,604(0x25c)
1c009a1c:	00104a10 	add.w	$r16,$r16,$r18
1c009a20:	2a000210 	ld.bu	$r16,$r16,0
1c009a24:	0280800c 	addi.w	$r12,$r0,32(0x20)
1c009a28:	00103e0f 	add.w	$r15,$r16,$r15
1c009a2c:	00113d8c 	sub.w	$r12,$r12,$r15
1c009a30:	5c02a180 	bne	$r12,$r0,672(0x2a0) # 1c009cd0 <__udivdi3+0x410>
1c009a34:	2980306e 	st.w	$r14,$r3,12(0xc)
1c009a38:	2a403070 	ld.hu	$r16,$r3,12(0xc)
1c009a3c:	001139ad 	sub.w	$r13,$r13,$r14
1c009a40:	0044c1d2 	srli.w	$r18,$r14,0x10
1c009a44:	02800405 	addi.w	$r5,$r0,1(0x1)
1c009a48:	002149ac 	div.wu	$r12,$r13,$r18
1c009a4c:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009a54 <__udivdi3+0x194>
1c009a50:	002a0007 	break	0x7
1c009a54:	001c4193 	mul.w	$r19,$r12,$r16
1c009a58:	0021c9af 	mod.wu	$r15,$r13,$r18
1c009a5c:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009a64 <__udivdi3+0x1a4>
1c009a60:	002a0007 	break	0x7
1c009a64:	0044c22d 	srli.w	$r13,$r17,0x10
1c009a68:	0040c1ef 	slli.w	$r15,$r15,0x10
1c009a6c:	001535ed 	or	$r13,$r15,$r13
1c009a70:	6c0019b3 	bgeu	$r13,$r19,24(0x18) # 1c009a88 <__udivdi3+0x1c8>
1c009a74:	001039ad 	add.w	$r13,$r13,$r14
1c009a78:	02bffd8f 	addi.w	$r15,$r12,-1(0xfff)
1c009a7c:	680009ae 	bltu	$r13,$r14,8(0x8) # 1c009a84 <__udivdi3+0x1c4>
1c009a80:	680371b3 	bltu	$r13,$r19,880(0x370) # 1c009df0 <__udivdi3+0x530>
1c009a84:	001501ec 	move	$r12,$r15
1c009a88:	00114dad 	sub.w	$r13,$r13,$r19
1c009a8c:	29803071 	st.w	$r17,$r3,12(0xc)
1c009a90:	002149a4 	div.wu	$r4,$r13,$r18
1c009a94:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009a9c <__udivdi3+0x1dc>
1c009a98:	002a0007 	break	0x7
1c009a9c:	001c4091 	mul.w	$r17,$r4,$r16
1c009aa0:	0021c9b0 	mod.wu	$r16,$r13,$r18
1c009aa4:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009aac <__udivdi3+0x1ec>
1c009aa8:	002a0007 	break	0x7
1c009aac:	2a40306f 	ld.hu	$r15,$r3,12(0xc)
1c009ab0:	0040c20d 	slli.w	$r13,$r16,0x10
1c009ab4:	00153daf 	or	$r15,$r13,$r15
1c009ab8:	6c001df1 	bgeu	$r15,$r17,28(0x1c) # 1c009ad4 <__udivdi3+0x214>
1c009abc:	00103dcf 	add.w	$r15,$r14,$r15
1c009ac0:	02bffc8d 	addi.w	$r13,$r4,-1(0xfff)
1c009ac4:	68000dee 	bltu	$r15,$r14,12(0xc) # 1c009ad0 <__udivdi3+0x210>
1c009ac8:	02bff884 	addi.w	$r4,$r4,-2(0xffe)
1c009acc:	680009f1 	bltu	$r15,$r17,8(0x8) # 1c009ad4 <__udivdi3+0x214>
1c009ad0:	001501a4 	move	$r4,$r13
1c009ad4:	0040c18c 	slli.w	$r12,$r12,0x10
1c009ad8:	0015118c 	or	$r12,$r12,$r4
1c009adc:	00150184 	move	$r4,$r12
1c009ae0:	02804063 	addi.w	$r3,$r3,16(0x10)
1c009ae4:	4c000020 	jirl	$r0,$r1,0
1c009ae8:	00150005 	move	$r5,$r0
1c009aec:	0015000c 	move	$r12,$r0
1c009af0:	6bfee1a7 	bltu	$r13,$r7,-288(0x3fee0) # 1c0099d0 <__udivdi3+0x110>
1c009af4:	1400020c 	lu12i.w	$r12,16(0x10)
1c009af8:	680058ec 	bltu	$r7,$r12,88(0x58) # 1c009b50 <__udivdi3+0x290>
1c009afc:	1402000c 	lu12i.w	$r12,4096(0x1000)
1c009b00:	0044c0ee 	srli.w	$r14,$r7,0x10
1c009b04:	02804011 	addi.w	$r17,$r0,16(0x10)
1c009b08:	68000cec 	bltu	$r7,$r12,12(0xc) # 1c009b14 <__udivdi3+0x254>
1c009b0c:	0044e0ee 	srli.w	$r14,$r7,0x18
1c009b10:	02806011 	addi.w	$r17,$r0,24(0x18)
1c009b14:	1dc7ff2f 	pcaddu12i	$r15,-114695(0xe3ff9)
1c009b18:	288571ef 	ld.w	$r15,$r15,348(0x15c)
1c009b1c:	001039ef 	add.w	$r15,$r15,$r14
1c009b20:	2a0001ee 	ld.bu	$r14,$r15,0
1c009b24:	02808010 	addi.w	$r16,$r0,32(0x20)
1c009b28:	001045ce 	add.w	$r14,$r14,$r17
1c009b2c:	00113a10 	sub.w	$r16,$r16,$r14
1c009b30:	5c007600 	bne	$r16,$r0,116(0x74) # 1c009ba4 <__udivdi3+0x2e4>
1c009b34:	00150005 	move	$r5,$r0
1c009b38:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c009b3c:	6bfe94ed 	bltu	$r7,$r13,-364(0x3fe94) # 1c0099d0 <__udivdi3+0x110>
1c009b40:	0012988c 	sltu	$r12,$r4,$r6
1c009b44:	03c0058c 	xori	$r12,$r12,0x1
1c009b48:	53fe8bff 	b	-376(0xffffe88) # 1c0099d0 <__udivdi3+0x110>
1c009b4c:	03400000 	andi	$r0,$r0,0x0
1c009b50:	0283fc0c 	addi.w	$r12,$r0,255(0xff)
1c009b54:	001500ee 	move	$r14,$r7
1c009b58:	00150011 	move	$r17,$r0
1c009b5c:	6fffb987 	bgeu	$r12,$r7,-72(0x3ffb8) # 1c009b14 <__udivdi3+0x254>
1c009b60:	0044a0ee 	srli.w	$r14,$r7,0x8
1c009b64:	02802011 	addi.w	$r17,$r0,8(0x8)
1c009b68:	53ffafff 	b	-84(0xfffffac) # 1c009b14 <__udivdi3+0x254>
1c009b6c:	03400000 	andi	$r0,$r0,0x0
1c009b70:	0283fc0c 	addi.w	$r12,$r0,255(0xff)
1c009b74:	001501d2 	move	$r18,$r14
1c009b78:	6ffe9d8e 	bgeu	$r12,$r14,-356(0x3fe9c) # 1c009a14 <__udivdi3+0x154>
1c009b7c:	0044a1d2 	srli.w	$r18,$r14,0x8
1c009b80:	0280200f 	addi.w	$r15,$r0,8(0x8)
1c009b84:	53fe93ff 	b	-368(0xffffe90) # 1c009a14 <__udivdi3+0x154>
1c009b88:	1402000c 	lu12i.w	$r12,4096(0x1000)
1c009b8c:	0044c0d2 	srli.w	$r18,$r6,0x10
1c009b90:	0280400f 	addi.w	$r15,$r0,16(0x10)
1c009b94:	6bfd64cc 	bltu	$r6,$r12,-668(0x3fd64) # 1c0098f8 <__udivdi3+0x38>
1c009b98:	0044e0d2 	srli.w	$r18,$r6,0x18
1c009b9c:	0280600f 	addi.w	$r15,$r0,24(0x18)
1c009ba0:	53fd5bff 	b	-680(0xffffd58) # 1c0098f8 <__udivdi3+0x38>
1c009ba4:	0017b8cc 	srl.w	$r12,$r6,$r14
1c009ba8:	001740e7 	sll.w	$r7,$r7,$r16
1c009bac:	00151d87 	or	$r7,$r12,$r7
1c009bb0:	29803067 	st.w	$r7,$r3,12(0xc)
1c009bb4:	0017b9af 	srl.w	$r15,$r13,$r14
1c009bb8:	2a403071 	ld.hu	$r17,$r3,12(0xc)
1c009bbc:	0017b88e 	srl.w	$r14,$r4,$r14
1c009bc0:	001741ad 	sll.w	$r13,$r13,$r16
1c009bc4:	0044c0f3 	srli.w	$r19,$r7,0x10
1c009bc8:	001535cd 	or	$r13,$r14,$r13
1c009bcc:	0021cdee 	mod.wu	$r14,$r15,$r19
1c009bd0:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009bd8 <__udivdi3+0x318>
1c009bd4:	002a0007 	break	0x7
1c009bd8:	00214df2 	div.wu	$r18,$r15,$r19
1c009bdc:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009be4 <__udivdi3+0x324>
1c009be0:	002a0007 	break	0x7
1c009be4:	0044c1ac 	srli.w	$r12,$r13,0x10
1c009be8:	0040c1ce 	slli.w	$r14,$r14,0x10
1c009bec:	001531ce 	or	$r14,$r14,$r12
1c009bf0:	001c4a2c 	mul.w	$r12,$r17,$r18
1c009bf4:	001740c6 	sll.w	$r6,$r6,$r16
1c009bf8:	6c001dcc 	bgeu	$r14,$r12,28(0x1c) # 1c009c14 <__udivdi3+0x354>
1c009bfc:	00101dce 	add.w	$r14,$r14,$r7
1c009c00:	02bffe4f 	addi.w	$r15,$r18,-1(0xfff)
1c009c04:	6801d5c7 	bltu	$r14,$r7,468(0x1d4) # 1c009dd8 <__udivdi3+0x518>
1c009c08:	6c01d1cc 	bgeu	$r14,$r12,464(0x1d0) # 1c009dd8 <__udivdi3+0x518>
1c009c0c:	02bffa52 	addi.w	$r18,$r18,-2(0xffe)
1c009c10:	00101dce 	add.w	$r14,$r14,$r7
1c009c14:	001131ce 	sub.w	$r14,$r14,$r12
1c009c18:	00214dd4 	div.wu	$r20,$r14,$r19
1c009c1c:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009c24 <__udivdi3+0x364>
1c009c20:	002a0007 	break	0x7
1c009c24:	001c5231 	mul.w	$r17,$r17,$r20
1c009c28:	2980306d 	st.w	$r13,$r3,12(0xc)
1c009c2c:	0021cdcf 	mod.wu	$r15,$r14,$r19
1c009c30:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009c38 <__udivdi3+0x378>
1c009c34:	002a0007 	break	0x7
1c009c38:	2a40306d 	ld.hu	$r13,$r3,12(0xc)
1c009c3c:	0040c1ee 	slli.w	$r14,$r15,0x10
1c009c40:	001535cd 	or	$r13,$r14,$r13
1c009c44:	6c001db1 	bgeu	$r13,$r17,28(0x1c) # 1c009c60 <__udivdi3+0x3a0>
1c009c48:	00101dad 	add.w	$r13,$r13,$r7
1c009c4c:	02bffe8c 	addi.w	$r12,$r20,-1(0xfff)
1c009c50:	680179a7 	bltu	$r13,$r7,376(0x178) # 1c009dc8 <__udivdi3+0x508>
1c009c54:	6c0175b1 	bgeu	$r13,$r17,372(0x174) # 1c009dc8 <__udivdi3+0x508>
1c009c58:	02bffa94 	addi.w	$r20,$r20,-2(0xffe)
1c009c5c:	00101dad 	add.w	$r13,$r13,$r7
1c009c60:	0040c24c 	slli.w	$r12,$r18,0x10
1c009c64:	140001f2 	lu12i.w	$r18,15(0xf)
1c009c68:	03bffe52 	ori	$r18,$r18,0xfff
1c009c6c:	0015518c 	or	$r12,$r12,$r20
1c009c70:	0044c0d3 	srli.w	$r19,$r6,0x10
1c009c74:	0044c18f 	srli.w	$r15,$r12,0x10
1c009c78:	0014c98e 	and	$r14,$r12,$r18
1c009c7c:	0014c8c6 	and	$r6,$r6,$r18
1c009c80:	001c19d2 	mul.w	$r18,$r14,$r6
1c009c84:	001145ad 	sub.w	$r13,$r13,$r17
1c009c88:	001c19e6 	mul.w	$r6,$r15,$r6
1c009c8c:	001c4dce 	mul.w	$r14,$r14,$r19
1c009c90:	001c4df1 	mul.w	$r17,$r15,$r19
1c009c94:	001019ce 	add.w	$r14,$r14,$r6
1c009c98:	0044c24f 	srli.w	$r15,$r18,0x10
1c009c9c:	001039ee 	add.w	$r14,$r15,$r14
1c009ca0:	6c000dc6 	bgeu	$r14,$r6,12(0xc) # 1c009cac <__udivdi3+0x3ec>
1c009ca4:	1400020f 	lu12i.w	$r15,16(0x10)
1c009ca8:	00103e31 	add.w	$r17,$r17,$r15
1c009cac:	0044c1cf 	srli.w	$r15,$r14,0x10
1c009cb0:	001045ef 	add.w	$r15,$r15,$r17
1c009cb4:	680101af 	bltu	$r13,$r15,256(0x100) # 1c009db4 <__udivdi3+0x4f4>
1c009cb8:	5800ddaf 	beq	$r13,$r15,220(0xdc) # 1c009d94 <__udivdi3+0x4d4>
1c009cbc:	00150005 	move	$r5,$r0
1c009cc0:	00150184 	move	$r4,$r12
1c009cc4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c009cc8:	4c000020 	jirl	$r0,$r1,0
1c009ccc:	03400000 	andi	$r0,$r0,0x0
1c009cd0:	001731ce 	sll.w	$r14,$r14,$r12
1c009cd4:	2980306e 	st.w	$r14,$r3,12(0xc)
1c009cd8:	0017bdb4 	srl.w	$r20,$r13,$r15
1c009cdc:	2a403070 	ld.hu	$r16,$r3,12(0xc)
1c009ce0:	001731ad 	sll.w	$r13,$r13,$r12
1c009ce4:	0017bc8f 	srl.w	$r15,$r4,$r15
1c009ce8:	0044c1d2 	srli.w	$r18,$r14,0x10
1c009cec:	001535ed 	or	$r13,$r15,$r13
1c009cf0:	00214a93 	div.wu	$r19,$r20,$r18
1c009cf4:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009cfc <__udivdi3+0x43c>
1c009cf8:	002a0007 	break	0x7
1c009cfc:	0044c1af 	srli.w	$r15,$r13,0x10
1c009d00:	00173091 	sll.w	$r17,$r4,$r12
1c009d04:	0021ca8c 	mod.wu	$r12,$r20,$r18
1c009d08:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009d10 <__udivdi3+0x450>
1c009d0c:	002a0007 	break	0x7
1c009d10:	0040c18c 	slli.w	$r12,$r12,0x10
1c009d14:	00153d8c 	or	$r12,$r12,$r15
1c009d18:	001c4e0f 	mul.w	$r15,$r16,$r19
1c009d1c:	6c001d8f 	bgeu	$r12,$r15,28(0x1c) # 1c009d38 <__udivdi3+0x478>
1c009d20:	0010398c 	add.w	$r12,$r12,$r14
1c009d24:	02bffe74 	addi.w	$r20,$r19,-1(0xfff)
1c009d28:	6800a98e 	bltu	$r12,$r14,168(0xa8) # 1c009dd0 <__udivdi3+0x510>
1c009d2c:	6c00a58f 	bgeu	$r12,$r15,164(0xa4) # 1c009dd0 <__udivdi3+0x510>
1c009d30:	02bffa73 	addi.w	$r19,$r19,-2(0xffe)
1c009d34:	0010398c 	add.w	$r12,$r12,$r14
1c009d38:	00113d8f 	sub.w	$r15,$r12,$r15
1c009d3c:	002149f4 	div.wu	$r20,$r15,$r18
1c009d40:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009d48 <__udivdi3+0x488>
1c009d44:	002a0007 	break	0x7
1c009d48:	001c5204 	mul.w	$r4,$r16,$r20
1c009d4c:	2980306d 	st.w	$r13,$r3,12(0xc)
1c009d50:	0021c9ec 	mod.wu	$r12,$r15,$r18
1c009d54:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009d5c <__udivdi3+0x49c>
1c009d58:	002a0007 	break	0x7
1c009d5c:	2a40306d 	ld.hu	$r13,$r3,12(0xc)
1c009d60:	0040c18c 	slli.w	$r12,$r12,0x10
1c009d64:	0015358d 	or	$r13,$r12,$r13
1c009d68:	6c001da4 	bgeu	$r13,$r4,28(0x1c) # 1c009d84 <__udivdi3+0x4c4>
1c009d6c:	001039ad 	add.w	$r13,$r13,$r14
1c009d70:	02bffe8c 	addi.w	$r12,$r20,-1(0xfff)
1c009d74:	68004dae 	bltu	$r13,$r14,76(0x4c) # 1c009dc0 <__udivdi3+0x500>
1c009d78:	6c0049a4 	bgeu	$r13,$r4,72(0x48) # 1c009dc0 <__udivdi3+0x500>
1c009d7c:	02bffa94 	addi.w	$r20,$r20,-2(0xffe)
1c009d80:	001039ad 	add.w	$r13,$r13,$r14
1c009d84:	0040c265 	slli.w	$r5,$r19,0x10
1c009d88:	001111ad 	sub.w	$r13,$r13,$r4
1c009d8c:	001550a5 	or	$r5,$r5,$r20
1c009d90:	53fcbbff 	b	-840(0xffffcb8) # 1c009a48 <__udivdi3+0x188>
1c009d94:	140001ef 	lu12i.w	$r15,15(0xf)
1c009d98:	03bffdef 	ori	$r15,$r15,0xfff
1c009d9c:	0014bdce 	and	$r14,$r14,$r15
1c009da0:	0014be52 	and	$r18,$r18,$r15
1c009da4:	0040c1ce 	slli.w	$r14,$r14,0x10
1c009da8:	0017408d 	sll.w	$r13,$r4,$r16
1c009dac:	001049ce 	add.w	$r14,$r14,$r18
1c009db0:	6fff0dae 	bgeu	$r13,$r14,-244(0x3ff0c) # 1c009cbc <__udivdi3+0x3fc>
1c009db4:	02bffd8c 	addi.w	$r12,$r12,-1(0xfff)
1c009db8:	00150005 	move	$r5,$r0
1c009dbc:	53ff07ff 	b	-252(0xfffff04) # 1c009cc0 <__udivdi3+0x400>
1c009dc0:	00150194 	move	$r20,$r12
1c009dc4:	53ffc3ff 	b	-64(0xfffffc0) # 1c009d84 <__udivdi3+0x4c4>
1c009dc8:	00150194 	move	$r20,$r12
1c009dcc:	53fe97ff 	b	-364(0xffffe94) # 1c009c60 <__udivdi3+0x3a0>
1c009dd0:	00150293 	move	$r19,$r20
1c009dd4:	53ff67ff 	b	-156(0xfffff64) # 1c009d38 <__udivdi3+0x478>
1c009dd8:	001501f2 	move	$r18,$r15
1c009ddc:	53fe3bff 	b	-456(0xffffe38) # 1c009c14 <__udivdi3+0x354>
1c009de0:	02bff98c 	addi.w	$r12,$r12,-2(0xffe)
1c009de4:	001039ad 	add.w	$r13,$r13,$r14
1c009de8:	53fb93ff 	b	-1136(0xffffb90) # 1c009978 <__udivdi3+0xb8>
1c009dec:	03400000 	andi	$r0,$r0,0x0
1c009df0:	02bff98c 	addi.w	$r12,$r12,-2(0xffe)
1c009df4:	001039ad 	add.w	$r13,$r13,$r14
1c009df8:	53fc93ff 	b	-880(0xffffc90) # 1c009a88 <__udivdi3+0x1c8>
1c009dfc:	03400000 	andi	$r0,$r0,0x0

1c009e00 <__umoddi3>:
__umoddi3():
1c009e00:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c009e04:	5c01e4e0 	bne	$r7,$r0,484(0x1e4) # 1c009fe8 <__umoddi3+0x1e8>
1c009e08:	001500ef 	move	$r15,$r7
1c009e0c:	001500cd 	move	$r13,$r6
1c009e10:	0015008c 	move	$r12,$r4
1c009e14:	6c00fca6 	bgeu	$r5,$r6,252(0xfc) # 1c009f10 <__umoddi3+0x110>
1c009e18:	1400020e 	lu12i.w	$r14,16(0x10)
1c009e1c:	001500b1 	move	$r17,$r5
1c009e20:	680278ce 	bltu	$r6,$r14,632(0x278) # 1c00a098 <__umoddi3+0x298>
1c009e24:	1402000e 	lu12i.w	$r14,4096(0x1000)
1c009e28:	0044c0d2 	srli.w	$r18,$r6,0x10
1c009e2c:	0280400f 	addi.w	$r15,$r0,16(0x10)
1c009e30:	68000cce 	bltu	$r6,$r14,12(0xc) # 1c009e3c <__umoddi3+0x3c>
1c009e34:	0044e0d2 	srli.w	$r18,$r6,0x18
1c009e38:	0280600f 	addi.w	$r15,$r0,24(0x18)
1c009e3c:	1dc7ff30 	pcaddu12i	$r16,-114695(0xe3ff9)
1c009e40:	28b8d210 	ld.w	$r16,$r16,-460(0xe34)
1c009e44:	00104a10 	add.w	$r16,$r16,$r18
1c009e48:	2a000210 	ld.bu	$r16,$r16,0
1c009e4c:	0280800e 	addi.w	$r14,$r0,32(0x20)
1c009e50:	00103e0f 	add.w	$r15,$r16,$r15
1c009e54:	00113dce 	sub.w	$r14,$r14,$r15
1c009e58:	580019c0 	beq	$r14,$r0,24(0x18) # 1c009e70 <__umoddi3+0x70>
1c009e5c:	001738a5 	sll.w	$r5,$r5,$r14
1c009e60:	0017bc8f 	srl.w	$r15,$r4,$r15
1c009e64:	001738cd 	sll.w	$r13,$r6,$r14
1c009e68:	0017388c 	sll.w	$r12,$r4,$r14
1c009e6c:	001515f1 	or	$r17,$r15,$r5
1c009e70:	2980306d 	st.w	$r13,$r3,12(0xc)
1c009e74:	2a403064 	ld.hu	$r4,$r3,12(0xc)
1c009e78:	0044c1b3 	srli.w	$r19,$r13,0x10
1c009e7c:	0044c18f 	srli.w	$r15,$r12,0x10
1c009e80:	0021ce30 	mod.wu	$r16,$r17,$r19
1c009e84:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009e8c <__umoddi3+0x8c>
1c009e88:	002a0007 	break	0x7
1c009e8c:	00214e32 	div.wu	$r18,$r17,$r19
1c009e90:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009e98 <__umoddi3+0x98>
1c009e94:	002a0007 	break	0x7
1c009e98:	0040c210 	slli.w	$r16,$r16,0x10
1c009e9c:	00153e0f 	or	$r15,$r16,$r15
1c009ea0:	001c4890 	mul.w	$r16,$r4,$r18
1c009ea4:	6c0011f0 	bgeu	$r15,$r16,16(0x10) # 1c009eb4 <__umoddi3+0xb4>
1c009ea8:	001035ef 	add.w	$r15,$r15,$r13
1c009eac:	680009ed 	bltu	$r15,$r13,8(0x8) # 1c009eb4 <__umoddi3+0xb4>
1c009eb0:	680441f0 	bltu	$r15,$r16,1088(0x440) # 1c00a2f0 <__umoddi3+0x4f0>
1c009eb4:	001141ef 	sub.w	$r15,$r15,$r16
1c009eb8:	2980306c 	st.w	$r12,$r3,12(0xc)
1c009ebc:	00214dec 	div.wu	$r12,$r15,$r19
1c009ec0:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009ec8 <__umoddi3+0xc8>
1c009ec4:	002a0007 	break	0x7
1c009ec8:	001c3084 	mul.w	$r4,$r4,$r12
1c009ecc:	2a403070 	ld.hu	$r16,$r3,12(0xc)
1c009ed0:	0021cdec 	mod.wu	$r12,$r15,$r19
1c009ed4:	5c000a60 	bne	$r19,$r0,8(0x8) # 1c009edc <__umoddi3+0xdc>
1c009ed8:	002a0007 	break	0x7
1c009edc:	0040c18c 	slli.w	$r12,$r12,0x10
1c009ee0:	0015418c 	or	$r12,$r12,$r16
1c009ee4:	6c001584 	bgeu	$r12,$r4,20(0x14) # 1c009ef8 <__umoddi3+0xf8>
1c009ee8:	0010358c 	add.w	$r12,$r12,$r13
1c009eec:	68000d8d 	bltu	$r12,$r13,12(0xc) # 1c009ef8 <__umoddi3+0xf8>
1c009ef0:	6c000984 	bgeu	$r12,$r4,8(0x8) # 1c009ef8 <__umoddi3+0xf8>
1c009ef4:	0010358c 	add.w	$r12,$r12,$r13
1c009ef8:	00111184 	sub.w	$r4,$r12,$r4
1c009efc:	0017b884 	srl.w	$r4,$r4,$r14
1c009f00:	00150005 	move	$r5,$r0
1c009f04:	02804063 	addi.w	$r3,$r3,16(0x10)
1c009f08:	4c000020 	jirl	$r0,$r1,0
1c009f0c:	03400000 	andi	$r0,$r0,0x0
1c009f10:	5c0014c0 	bne	$r6,$r0,20(0x14) # 1c009f24 <__umoddi3+0x124>
1c009f14:	0280040e 	addi.w	$r14,$r0,1(0x1)
1c009f18:	002119cd 	div.wu	$r13,$r14,$r6
1c009f1c:	5c0008c0 	bne	$r6,$r0,8(0x8) # 1c009f24 <__umoddi3+0x124>
1c009f20:	002a0007 	break	0x7
1c009f24:	1400020e 	lu12i.w	$r14,16(0x10)
1c009f28:	680159ae 	bltu	$r13,$r14,344(0x158) # 1c00a080 <__umoddi3+0x280>
1c009f2c:	1402000e 	lu12i.w	$r14,4096(0x1000)
1c009f30:	0044c1b1 	srli.w	$r17,$r13,0x10
1c009f34:	0280400f 	addi.w	$r15,$r0,16(0x10)
1c009f38:	68000dae 	bltu	$r13,$r14,12(0xc) # 1c009f44 <__umoddi3+0x144>
1c009f3c:	0044e1b1 	srli.w	$r17,$r13,0x18
1c009f40:	0280600f 	addi.w	$r15,$r0,24(0x18)
1c009f44:	1dc7ff30 	pcaddu12i	$r16,-114695(0xe3ff9)
1c009f48:	28b4b210 	ld.w	$r16,$r16,-724(0xd2c)
1c009f4c:	00104610 	add.w	$r16,$r16,$r17
1c009f50:	2a000211 	ld.bu	$r17,$r16,0
1c009f54:	0280800e 	addi.w	$r14,$r0,32(0x20)
1c009f58:	00103e2f 	add.w	$r15,$r17,$r15
1c009f5c:	00113dce 	sub.w	$r14,$r14,$r15
1c009f60:	5c0151c0 	bne	$r14,$r0,336(0x150) # 1c00a0b0 <__umoddi3+0x2b0>
1c009f64:	2980306d 	st.w	$r13,$r3,12(0xc)
1c009f68:	2a403073 	ld.hu	$r19,$r3,12(0xc)
1c009f6c:	001134a5 	sub.w	$r5,$r5,$r13
1c009f70:	0044c1b2 	srli.w	$r18,$r13,0x10
1c009f74:	002148af 	div.wu	$r15,$r5,$r18
1c009f78:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009f80 <__umoddi3+0x180>
1c009f7c:	002a0007 	break	0x7
1c009f80:	001c4df1 	mul.w	$r17,$r15,$r19
1c009f84:	0021c8b0 	mod.wu	$r16,$r5,$r18
1c009f88:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009f90 <__umoddi3+0x190>
1c009f8c:	002a0007 	break	0x7
1c009f90:	0040c210 	slli.w	$r16,$r16,0x10
1c009f94:	0044c18f 	srli.w	$r15,$r12,0x10
1c009f98:	00153e0f 	or	$r15,$r16,$r15
1c009f9c:	6c0015f1 	bgeu	$r15,$r17,20(0x14) # 1c009fb0 <__umoddi3+0x1b0>
1c009fa0:	001035ef 	add.w	$r15,$r15,$r13
1c009fa4:	68000ded 	bltu	$r15,$r13,12(0xc) # 1c009fb0 <__umoddi3+0x1b0>
1c009fa8:	6c0009f1 	bgeu	$r15,$r17,8(0x8) # 1c009fb0 <__umoddi3+0x1b0>
1c009fac:	001035ef 	add.w	$r15,$r15,$r13
1c009fb0:	001145ef 	sub.w	$r15,$r15,$r17
1c009fb4:	002149e4 	div.wu	$r4,$r15,$r18
1c009fb8:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009fc0 <__umoddi3+0x1c0>
1c009fbc:	002a0007 	break	0x7
1c009fc0:	001c4c84 	mul.w	$r4,$r4,$r19
1c009fc4:	2980306c 	st.w	$r12,$r3,12(0xc)
1c009fc8:	0021c9ec 	mod.wu	$r12,$r15,$r18
1c009fcc:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c009fd4 <__umoddi3+0x1d4>
1c009fd0:	002a0007 	break	0x7
1c009fd4:	2a403070 	ld.hu	$r16,$r3,12(0xc)
1c009fd8:	0040c18c 	slli.w	$r12,$r12,0x10
1c009fdc:	0015418c 	or	$r12,$r12,$r16
1c009fe0:	6fff1984 	bgeu	$r12,$r4,-232(0x3ff18) # 1c009ef8 <__umoddi3+0xf8>
1c009fe4:	53ff07ff 	b	-252(0xfffff04) # 1c009ee8 <__umoddi3+0xe8>
1c009fe8:	0015008d 	move	$r13,$r4
1c009fec:	6bff18a7 	bltu	$r5,$r7,-232(0x3ff18) # 1c009f04 <__umoddi3+0x104>
1c009ff0:	1400020c 	lu12i.w	$r12,16(0x10)
1c009ff4:	001500b0 	move	$r16,$r5
1c009ff8:	680068ec 	bltu	$r7,$r12,104(0x68) # 1c00a060 <__umoddi3+0x260>
1c009ffc:	1402000c 	lu12i.w	$r12,4096(0x1000)
1c00a000:	0044c0f1 	srli.w	$r17,$r7,0x10
1c00a004:	0280400e 	addi.w	$r14,$r0,16(0x10)
1c00a008:	68000cec 	bltu	$r7,$r12,12(0xc) # 1c00a014 <__umoddi3+0x214>
1c00a00c:	0044e0f1 	srli.w	$r17,$r7,0x18
1c00a010:	0280600e 	addi.w	$r14,$r0,24(0x18)
1c00a014:	1dc7ff2c 	pcaddu12i	$r12,-114695(0xe3ff9)
1c00a018:	28b1718c 	ld.w	$r12,$r12,-932(0xc5c)
1c00a01c:	0010458c 	add.w	$r12,$r12,$r17
1c00a020:	2a00018c 	ld.bu	$r12,$r12,0
1c00a024:	0280800f 	addi.w	$r15,$r0,32(0x20)
1c00a028:	0010398e 	add.w	$r14,$r12,$r14
1c00a02c:	001139ef 	sub.w	$r15,$r15,$r14
1c00a030:	5c0131e0 	bne	$r15,$r0,304(0x130) # 1c00a160 <__umoddi3+0x360>
1c00a034:	680008e5 	bltu	$r7,$r5,8(0x8) # 1c00a03c <__umoddi3+0x23c>
1c00a038:	68001486 	bltu	$r4,$r6,20(0x14) # 1c00a04c <__umoddi3+0x24c>
1c00a03c:	0011188d 	sub.w	$r13,$r4,$r6
1c00a040:	00111ca5 	sub.w	$r5,$r5,$r7
1c00a044:	0012b490 	sltu	$r16,$r4,$r13
1c00a048:	001140b0 	sub.w	$r16,$r5,$r16
1c00a04c:	001501a4 	move	$r4,$r13
1c00a050:	00150205 	move	$r5,$r16
1c00a054:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00a058:	4c000020 	jirl	$r0,$r1,0
1c00a05c:	03400000 	andi	$r0,$r0,0x0
1c00a060:	0283fc0c 	addi.w	$r12,$r0,255(0xff)
1c00a064:	001500f1 	move	$r17,$r7
1c00a068:	0015000e 	move	$r14,$r0
1c00a06c:	6fffa987 	bgeu	$r12,$r7,-88(0x3ffa8) # 1c00a014 <__umoddi3+0x214>
1c00a070:	0044a0f1 	srli.w	$r17,$r7,0x8
1c00a074:	0280200e 	addi.w	$r14,$r0,8(0x8)
1c00a078:	53ff9fff 	b	-100(0xfffff9c) # 1c00a014 <__umoddi3+0x214>
1c00a07c:	03400000 	andi	$r0,$r0,0x0
1c00a080:	0283fc0e 	addi.w	$r14,$r0,255(0xff)
1c00a084:	001501b1 	move	$r17,$r13
1c00a088:	6ffebdcd 	bgeu	$r14,$r13,-324(0x3febc) # 1c009f44 <__umoddi3+0x144>
1c00a08c:	0044a1b1 	srli.w	$r17,$r13,0x8
1c00a090:	0280200f 	addi.w	$r15,$r0,8(0x8)
1c00a094:	53feb3ff 	b	-336(0xffffeb0) # 1c009f44 <__umoddi3+0x144>
1c00a098:	0283fc0e 	addi.w	$r14,$r0,255(0xff)
1c00a09c:	001500d2 	move	$r18,$r6
1c00a0a0:	6ffd9dc6 	bgeu	$r14,$r6,-612(0x3fd9c) # 1c009e3c <__umoddi3+0x3c>
1c00a0a4:	0044a0d2 	srli.w	$r18,$r6,0x8
1c00a0a8:	0280200f 	addi.w	$r15,$r0,8(0x8)
1c00a0ac:	53fd93ff 	b	-624(0xffffd90) # 1c009e3c <__umoddi3+0x3c>
1c00a0b0:	001739ad 	sll.w	$r13,$r13,$r14
1c00a0b4:	2980306d 	st.w	$r13,$r3,12(0xc)
1c00a0b8:	2a403073 	ld.hu	$r19,$r3,12(0xc)
1c00a0bc:	0017bcb4 	srl.w	$r20,$r5,$r15
1c00a0c0:	0044c1b2 	srli.w	$r18,$r13,0x10
1c00a0c4:	00214a91 	div.wu	$r17,$r20,$r18
1c00a0c8:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c00a0d0 <__umoddi3+0x2d0>
1c00a0cc:	002a0007 	break	0x7
1c00a0d0:	001c4671 	mul.w	$r17,$r19,$r17
1c00a0d4:	001738a5 	sll.w	$r5,$r5,$r14
1c00a0d8:	0021ca90 	mod.wu	$r16,$r20,$r18
1c00a0dc:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c00a0e4 <__umoddi3+0x2e4>
1c00a0e0:	002a0007 	break	0x7
1c00a0e4:	0017bc8f 	srl.w	$r15,$r4,$r15
1c00a0e8:	001515ef 	or	$r15,$r15,$r5
1c00a0ec:	0044c1f4 	srli.w	$r20,$r15,0x10
1c00a0f0:	0040c210 	slli.w	$r16,$r16,0x10
1c00a0f4:	00155210 	or	$r16,$r16,$r20
1c00a0f8:	0017388c 	sll.w	$r12,$r4,$r14
1c00a0fc:	6c001611 	bgeu	$r16,$r17,20(0x14) # 1c00a110 <__umoddi3+0x310>
1c00a100:	00103610 	add.w	$r16,$r16,$r13
1c00a104:	68000e0d 	bltu	$r16,$r13,12(0xc) # 1c00a110 <__umoddi3+0x310>
1c00a108:	6c000a11 	bgeu	$r16,$r17,8(0x8) # 1c00a110 <__umoddi3+0x310>
1c00a10c:	00103610 	add.w	$r16,$r16,$r13
1c00a110:	00114610 	sub.w	$r16,$r16,$r17
1c00a114:	00214a05 	div.wu	$r5,$r16,$r18
1c00a118:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c00a120 <__umoddi3+0x320>
1c00a11c:	002a0007 	break	0x7
1c00a120:	001c1671 	mul.w	$r17,$r19,$r5
1c00a124:	2980306f 	st.w	$r15,$r3,12(0xc)
1c00a128:	2a40306f 	ld.hu	$r15,$r3,12(0xc)
1c00a12c:	0021ca05 	mod.wu	$r5,$r16,$r18
1c00a130:	5c000a40 	bne	$r18,$r0,8(0x8) # 1c00a138 <__umoddi3+0x338>
1c00a134:	002a0007 	break	0x7
1c00a138:	0040c0a5 	slli.w	$r5,$r5,0x10
1c00a13c:	00153caf 	or	$r15,$r5,$r15
1c00a140:	6c0015f1 	bgeu	$r15,$r17,20(0x14) # 1c00a154 <__umoddi3+0x354>
1c00a144:	001035ef 	add.w	$r15,$r15,$r13
1c00a148:	68000ded 	bltu	$r15,$r13,12(0xc) # 1c00a154 <__umoddi3+0x354>
1c00a14c:	6c0009f1 	bgeu	$r15,$r17,8(0x8) # 1c00a154 <__umoddi3+0x354>
1c00a150:	001035ef 	add.w	$r15,$r15,$r13
1c00a154:	001145e5 	sub.w	$r5,$r15,$r17
1c00a158:	53fe1fff 	b	-484(0xffffe1c) # 1c009f74 <__umoddi3+0x174>
1c00a15c:	03400000 	andi	$r0,$r0,0x0
1c00a160:	0017b8cc 	srl.w	$r12,$r6,$r14
1c00a164:	00173ce7 	sll.w	$r7,$r7,$r15
1c00a168:	00151d87 	or	$r7,$r12,$r7
1c00a16c:	29803067 	st.w	$r7,$r3,12(0xc)
1c00a170:	0017b8b1 	srl.w	$r17,$r5,$r14
1c00a174:	0017b88c 	srl.w	$r12,$r4,$r14
1c00a178:	00173ca5 	sll.w	$r5,$r5,$r15
1c00a17c:	2a403072 	ld.hu	$r18,$r3,12(0xc)
1c00a180:	0044c0f0 	srli.w	$r16,$r7,0x10
1c00a184:	00151585 	or	$r5,$r12,$r5
1c00a188:	0021c22d 	mod.wu	$r13,$r17,$r16
1c00a18c:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c00a194 <__umoddi3+0x394>
1c00a190:	002a0007 	break	0x7
1c00a194:	0021422c 	div.wu	$r12,$r17,$r16
1c00a198:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c00a1a0 <__umoddi3+0x3a0>
1c00a19c:	002a0007 	break	0x7
1c00a1a0:	0040c1ad 	slli.w	$r13,$r13,0x10
1c00a1a4:	0044c0b1 	srli.w	$r17,$r5,0x10
1c00a1a8:	001545ad 	or	$r13,$r13,$r17
1c00a1ac:	001c3251 	mul.w	$r17,$r18,$r12
1c00a1b0:	00173cc6 	sll.w	$r6,$r6,$r15
1c00a1b4:	00173c84 	sll.w	$r4,$r4,$r15
1c00a1b8:	6c001db1 	bgeu	$r13,$r17,28(0x1c) # 1c00a1d4 <__umoddi3+0x3d4>
1c00a1bc:	00101dad 	add.w	$r13,$r13,$r7
1c00a1c0:	02bffd93 	addi.w	$r19,$r12,-1(0xfff)
1c00a1c4:	680125a7 	bltu	$r13,$r7,292(0x124) # 1c00a2e8 <__umoddi3+0x4e8>
1c00a1c8:	6c0121b1 	bgeu	$r13,$r17,288(0x120) # 1c00a2e8 <__umoddi3+0x4e8>
1c00a1cc:	02bff98c 	addi.w	$r12,$r12,-2(0xffe)
1c00a1d0:	00101dad 	add.w	$r13,$r13,$r7
1c00a1d4:	001145ad 	sub.w	$r13,$r13,$r17
1c00a1d8:	002141b4 	div.wu	$r20,$r13,$r16
1c00a1dc:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c00a1e4 <__umoddi3+0x3e4>
1c00a1e0:	002a0007 	break	0x7
1c00a1e4:	001c5252 	mul.w	$r18,$r18,$r20
1c00a1e8:	29803065 	st.w	$r5,$r3,12(0xc)
1c00a1ec:	0021c1b1 	mod.wu	$r17,$r13,$r16
1c00a1f0:	5c000a00 	bne	$r16,$r0,8(0x8) # 1c00a1f8 <__umoddi3+0x3f8>
1c00a1f4:	002a0007 	break	0x7
1c00a1f8:	2a403065 	ld.hu	$r5,$r3,12(0xc)
1c00a1fc:	0040c231 	slli.w	$r17,$r17,0x10
1c00a200:	00151631 	or	$r17,$r17,$r5
1c00a204:	6c001e32 	bgeu	$r17,$r18,28(0x1c) # 1c00a220 <__umoddi3+0x420>
1c00a208:	00101e31 	add.w	$r17,$r17,$r7
1c00a20c:	02bffe8d 	addi.w	$r13,$r20,-1(0xfff)
1c00a210:	6800d227 	bltu	$r17,$r7,208(0xd0) # 1c00a2e0 <__umoddi3+0x4e0>
1c00a214:	6c00ce32 	bgeu	$r17,$r18,204(0xcc) # 1c00a2e0 <__umoddi3+0x4e0>
1c00a218:	02bffa94 	addi.w	$r20,$r20,-2(0xffe)
1c00a21c:	00101e31 	add.w	$r17,$r17,$r7
1c00a220:	0040c18c 	slli.w	$r12,$r12,0x10
1c00a224:	140001f0 	lu12i.w	$r16,15(0xf)
1c00a228:	0015518d 	or	$r13,$r12,$r20
1c00a22c:	03bffe10 	ori	$r16,$r16,0xfff
1c00a230:	0044c0d3 	srli.w	$r19,$r6,0x10
1c00a234:	00114a25 	sub.w	$r5,$r17,$r18
1c00a238:	0014c1b1 	and	$r17,$r13,$r16
1c00a23c:	0044c1ad 	srli.w	$r13,$r13,0x10
1c00a240:	0014c0d0 	and	$r16,$r6,$r16
1c00a244:	001c4232 	mul.w	$r18,$r17,$r16
1c00a248:	001c41b0 	mul.w	$r16,$r13,$r16
1c00a24c:	0044c24c 	srli.w	$r12,$r18,0x10
1c00a250:	001c4e31 	mul.w	$r17,$r17,$r19
1c00a254:	00104231 	add.w	$r17,$r17,$r16
1c00a258:	001c4dad 	mul.w	$r13,$r13,$r19
1c00a25c:	0010458c 	add.w	$r12,$r12,$r17
1c00a260:	6c000d90 	bgeu	$r12,$r16,12(0xc) # 1c00a26c <__umoddi3+0x46c>
1c00a264:	14000210 	lu12i.w	$r16,16(0x10)
1c00a268:	001041ad 	add.w	$r13,$r13,$r16
1c00a26c:	140001f1 	lu12i.w	$r17,15(0xf)
1c00a270:	03bffe31 	ori	$r17,$r17,0xfff
1c00a274:	0044c190 	srli.w	$r16,$r12,0x10
1c00a278:	0014c58c 	and	$r12,$r12,$r17
1c00a27c:	0014c652 	and	$r18,$r18,$r17
1c00a280:	0040c18c 	slli.w	$r12,$r12,0x10
1c00a284:	0010360d 	add.w	$r13,$r16,$r13
1c00a288:	0010498c 	add.w	$r12,$r12,$r18
1c00a28c:	680038ad 	bltu	$r5,$r13,56(0x38) # 1c00a2c4 <__umoddi3+0x4c4>
1c00a290:	580030ad 	beq	$r5,$r13,48(0x30) # 1c00a2c0 <__umoddi3+0x4c0>
1c00a294:	0011308c 	sub.w	$r12,$r4,$r12
1c00a298:	0012b084 	sltu	$r4,$r4,$r12
1c00a29c:	001134a5 	sub.w	$r5,$r5,$r13
1c00a2a0:	001110a5 	sub.w	$r5,$r5,$r4
1c00a2a4:	001738a4 	sll.w	$r4,$r5,$r14
1c00a2a8:	0017bd8c 	srl.w	$r12,$r12,$r15
1c00a2ac:	0017bca5 	srl.w	$r5,$r5,$r15
1c00a2b0:	00153084 	or	$r4,$r4,$r12
1c00a2b4:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00a2b8:	4c000020 	jirl	$r0,$r1,0
1c00a2bc:	03400000 	andi	$r0,$r0,0x0
1c00a2c0:	6fffd48c 	bgeu	$r4,$r12,-44(0x3ffd4) # 1c00a294 <__umoddi3+0x494>
1c00a2c4:	00111986 	sub.w	$r6,$r12,$r6
1c00a2c8:	00129990 	sltu	$r16,$r12,$r6
1c00a2cc:	00101e07 	add.w	$r7,$r16,$r7
1c00a2d0:	001500cc 	move	$r12,$r6
1c00a2d4:	00111dad 	sub.w	$r13,$r13,$r7
1c00a2d8:	53ffbfff 	b	-68(0xfffffbc) # 1c00a294 <__umoddi3+0x494>
1c00a2dc:	03400000 	andi	$r0,$r0,0x0
1c00a2e0:	001501b4 	move	$r20,$r13
1c00a2e4:	53ff3fff 	b	-196(0xfffff3c) # 1c00a220 <__umoddi3+0x420>
1c00a2e8:	0015026c 	move	$r12,$r19
1c00a2ec:	53feebff 	b	-280(0xffffee8) # 1c00a1d4 <__umoddi3+0x3d4>
1c00a2f0:	001035ef 	add.w	$r15,$r15,$r13
1c00a2f4:	53fbc3ff 	b	-1088(0xffffbc0) # 1c009eb4 <__umoddi3+0xb4>
1c00a2f8:	03400000 	andi	$r0,$r0,0x0
1c00a2fc:	03400000 	andi	$r0,$r0,0x0

1c00a300 <__adddf3>:
__adddf3():
1c00a300:	14001ff0 	lu12i.w	$r16,255(0xff)
1c00a304:	03bffe10 	ori	$r16,$r16,0xfff
1c00a308:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c00a30c:	00149613 	and	$r19,$r16,$r5
1c00a310:	00149e12 	and	$r18,$r16,$r7
1c00a314:	0044d0f1 	srli.w	$r17,$r7,0x14
1c00a318:	29805078 	st.w	$r24,$r3,20(0x14)
1c00a31c:	29804079 	st.w	$r25,$r3,16(0x10)
1c00a320:	0044d0b8 	srli.w	$r24,$r5,0x14
1c00a324:	0044f48d 	srli.w	$r13,$r4,0x1d
1c00a328:	0044f4d4 	srli.w	$r20,$r6,0x1d
1c00a32c:	00408e73 	slli.w	$r19,$r19,0x3
1c00a330:	00408e52 	slli.w	$r18,$r18,0x3
1c00a334:	0044fcb9 	srli.w	$r25,$r5,0x1f
1c00a338:	29807061 	st.w	$r1,$r3,28(0x1c)
1c00a33c:	29806077 	st.w	$r23,$r3,24(0x18)
1c00a340:	2980307a 	st.w	$r26,$r3,12(0xc)
1c00a344:	0044fce7 	srli.w	$r7,$r7,0x1f
1c00a348:	035fff18 	andi	$r24,$r24,0x7ff
1c00a34c:	00154db3 	or	$r19,$r13,$r19
1c00a350:	00408c85 	slli.w	$r5,$r4,0x3
1c00a354:	035ffe31 	andi	$r17,$r17,0x7ff
1c00a358:	00154a92 	or	$r18,$r20,$r18
1c00a35c:	00408cc8 	slli.w	$r8,$r6,0x3
1c00a360:	5801c727 	beq	$r25,$r7,452(0x1c4) # 1c00a524 <__adddf3+0x224>
1c00a364:	00114714 	sub.w	$r20,$r24,$r17
1c00a368:	64017c14 	bge	$r0,$r20,380(0x17c) # 1c00a4e4 <__adddf3+0x1e4>
1c00a36c:	58026620 	beq	$r17,$r0,612(0x264) # 1c00a5d0 <__adddf3+0x2d0>
1c00a370:	1401000d 	lu12i.w	$r13,2048(0x800)
1c00a374:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00a378:	00153652 	or	$r18,$r18,$r13
1c00a37c:	58045b0c 	beq	$r24,$r12,1112(0x458) # 1c00a7d4 <__adddf3+0x4d4>
1c00a380:	00152257 	or	$r23,$r18,$r8
1c00a384:	0280e00c 	addi.w	$r12,$r0,56(0x38)
1c00a388:	0012dc17 	sltu	$r23,$r0,$r23
1c00a38c:	60003594 	blt	$r12,$r20,52(0x34) # 1c00a3c0 <__adddf3+0xc0>
1c00a390:	02807c0c 	addi.w	$r12,$r0,31(0x1f)
1c00a394:	60058d94 	blt	$r12,$r20,1420(0x58c) # 1c00a920 <__adddf3+0x620>
1c00a398:	0280800c 	addi.w	$r12,$r0,32(0x20)
1c00a39c:	0017d10d 	srl.w	$r13,$r8,$r20
1c00a3a0:	0017d24e 	srl.w	$r14,$r18,$r20
1c00a3a4:	00115194 	sub.w	$r20,$r12,$r20
1c00a3a8:	00175257 	sll.w	$r23,$r18,$r20
1c00a3ac:	00175114 	sll.w	$r20,$r8,$r20
1c00a3b0:	001536f7 	or	$r23,$r23,$r13
1c00a3b4:	0012d014 	sltu	$r20,$r0,$r20
1c00a3b8:	00113a73 	sub.w	$r19,$r19,$r14
1c00a3bc:	001552f7 	or	$r23,$r23,$r20
1c00a3c0:	00115cb7 	sub.w	$r23,$r5,$r23
1c00a3c4:	0012dcae 	sltu	$r14,$r5,$r23
1c00a3c8:	00113a6e 	sub.w	$r14,$r19,$r14
1c00a3cc:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00a3d0:	0014b1cc 	and	$r12,$r14,$r12
1c00a3d4:	5802fd80 	beq	$r12,$r0,764(0x2fc) # 1c00a6d0 <__adddf3+0x3d0>
1c00a3d8:	1400ffed 	lu12i.w	$r13,2047(0x7ff)
1c00a3dc:	03bffdad 	ori	$r13,$r13,0xfff
1c00a3e0:	0014b5da 	and	$r26,$r14,$r13
1c00a3e4:	5803b340 	beq	$r26,$r0,944(0x3b0) # 1c00a794 <__adddf3+0x494>
1c00a3e8:	00150344 	move	$r4,$r26
1c00a3ec:	5429c400 	bl	10692(0x29c4) # 1c00cdb0 <__clzsi2>
1c00a3f0:	02bfe08f 	addi.w	$r15,$r4,-8(0xff8)
1c00a3f4:	00113c0c 	sub.w	$r12,$r0,$r15
1c00a3f8:	00173f4d 	sll.w	$r13,$r26,$r15
1c00a3fc:	0017b2fa 	srl.w	$r26,$r23,$r12
1c00a400:	0015375a 	or	$r26,$r26,$r13
1c00a404:	00173ef7 	sll.w	$r23,$r23,$r15
1c00a408:	6003b1f8 	blt	$r15,$r24,944(0x3b0) # 1c00a7b8 <__adddf3+0x4b8>
1c00a40c:	001161f8 	sub.w	$r24,$r15,$r24
1c00a410:	02807c0c 	addi.w	$r12,$r0,31(0x1f)
1c00a414:	0280070f 	addi.w	$r15,$r24,1(0x1)
1c00a418:	6004d98f 	blt	$r12,$r15,1240(0x4d8) # 1c00a8f0 <__adddf3+0x5f0>
1c00a41c:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00a420:	00113dad 	sub.w	$r13,$r13,$r15
1c00a424:	0017beec 	srl.w	$r12,$r23,$r15
1c00a428:	001736f7 	sll.w	$r23,$r23,$r13
1c00a42c:	0017374d 	sll.w	$r13,$r26,$r13
1c00a430:	001531ad 	or	$r13,$r13,$r12
1c00a434:	0012dc17 	sltu	$r23,$r0,$r23
1c00a438:	0017bf4e 	srl.w	$r14,$r26,$r15
1c00a43c:	00150018 	move	$r24,$r0
1c00a440:	00155db7 	or	$r23,$r13,$r23
1c00a444:	03401eec 	andi	$r12,$r23,0x7
1c00a448:	58002180 	beq	$r12,$r0,32(0x20) # 1c00a468 <__adddf3+0x168>
1c00a44c:	03403eec 	andi	$r12,$r23,0xf
1c00a450:	0280100d 	addi.w	$r13,$r0,4(0x4)
1c00a454:	5800158d 	beq	$r12,$r13,20(0x14) # 1c00a468 <__adddf3+0x168>
1c00a458:	028012ec 	addi.w	$r12,$r23,4(0x4)
1c00a45c:	0012dd8d 	sltu	$r13,$r12,$r23
1c00a460:	001035ce 	add.w	$r14,$r14,$r13
1c00a464:	00150197 	move	$r23,$r12
1c00a468:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00a46c:	0014b1cc 	and	$r12,$r14,$r12
1c00a470:	58026980 	beq	$r12,$r0,616(0x268) # 1c00a6d8 <__adddf3+0x3d8>
1c00a474:	02800718 	addi.w	$r24,$r24,1(0x1)
1c00a478:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00a47c:	035fff10 	andi	$r16,$r24,0x7ff
1c00a480:	5802870c 	beq	$r24,$r12,644(0x284) # 1c00a704 <__adddf3+0x404>
1c00a484:	15feffed 	lu12i.w	$r13,-2049(0xff7ff)
1c00a488:	03bffdad 	ori	$r13,$r13,0xfff
1c00a48c:	0014b5cd 	and	$r13,$r14,$r13
1c00a490:	0040f5af 	slli.w	$r15,$r13,0x1d
1c00a494:	00448ef7 	srli.w	$r23,$r23,0x3
1c00a498:	0040a5ad 	slli.w	$r13,$r13,0x9
1c00a49c:	00155def 	or	$r15,$r15,$r23
1c00a4a0:	0044b1ac 	srli.w	$r12,$r13,0xc
1c00a4a4:	14001fed 	lu12i.w	$r13,255(0xff)
1c00a4a8:	03bffdad 	ori	$r13,$r13,0xfff
1c00a4ac:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00a4b0:	0040d210 	slli.w	$r16,$r16,0x14
1c00a4b4:	0014b58c 	and	$r12,$r12,$r13
1c00a4b8:	0040ff25 	slli.w	$r5,$r25,0x1f
1c00a4bc:	0015418c 	or	$r12,$r12,$r16
1c00a4c0:	0015158c 	or	$r12,$r12,$r5
1c00a4c4:	28806077 	ld.w	$r23,$r3,24(0x18)
1c00a4c8:	28805078 	ld.w	$r24,$r3,20(0x14)
1c00a4cc:	28804079 	ld.w	$r25,$r3,16(0x10)
1c00a4d0:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c00a4d4:	001501e4 	move	$r4,$r15
1c00a4d8:	00150185 	move	$r5,$r12
1c00a4dc:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00a4e0:	4c000020 	jirl	$r0,$r1,0
1c00a4e4:	5c010e80 	bne	$r20,$r0,268(0x10c) # 1c00a5f0 <__adddf3+0x2f0>
1c00a4e8:	0280070c 	addi.w	$r12,$r24,1(0x1)
1c00a4ec:	035ff98c 	andi	$r12,$r12,0x7fe
1c00a4f0:	5c030180 	bne	$r12,$r0,768(0x300) # 1c00a7f0 <__adddf3+0x4f0>
1c00a4f4:	0015166c 	or	$r12,$r19,$r5
1c00a4f8:	0015224f 	or	$r15,$r18,$r8
1c00a4fc:	5c058700 	bne	$r24,$r0,1412(0x584) # 1c00aa80 <__adddf3+0x780>
1c00a500:	58051980 	beq	$r12,$r0,1304(0x518) # 1c00aa18 <__adddf3+0x718>
1c00a504:	5c05ade0 	bne	$r15,$r0,1452(0x5ac) # 1c00aab0 <__adddf3+0x7b0>
1c00a508:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00a50c:	03bffd8c 	ori	$r12,$r12,0xfff
1c00a510:	0040f66e 	slli.w	$r14,$r19,0x1d
1c00a514:	0014918f 	and	$r15,$r12,$r4
1c00a518:	00448e6d 	srli.w	$r13,$r19,0x3
1c00a51c:	001539ef 	or	$r15,$r15,$r14
1c00a520:	5001d000 	b	464(0x1d0) # 1c00a6f0 <__adddf3+0x3f0>
1c00a524:	0011470c 	sub.w	$r12,$r24,$r17
1c00a528:	6401ec0c 	bge	$r0,$r12,492(0x1ec) # 1c00a714 <__adddf3+0x414>
1c00a52c:	58014620 	beq	$r17,$r0,324(0x144) # 1c00a670 <__adddf3+0x370>
1c00a530:	1401000e 	lu12i.w	$r14,2048(0x800)
1c00a534:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00a538:	00153a52 	or	$r18,$r18,$r14
1c00a53c:	58029b0d 	beq	$r24,$r13,664(0x298) # 1c00a7d4 <__adddf3+0x4d4>
1c00a540:	00152257 	or	$r23,$r18,$r8
1c00a544:	0280e00d 	addi.w	$r13,$r0,56(0x38)
1c00a548:	0012dc17 	sltu	$r23,$r0,$r23
1c00a54c:	60002dac 	blt	$r13,$r12,44(0x2c) # 1c00a578 <__adddf3+0x278>
1c00a550:	02807c0d 	addi.w	$r13,$r0,31(0x1f)
1c00a554:	64044dac 	bge	$r13,$r12,1100(0x44c) # 1c00a9a0 <__adddf3+0x6a0>
1c00a558:	0280800e 	addi.w	$r14,$r0,32(0x20)
1c00a55c:	0017b24d 	srl.w	$r13,$r18,$r12
1c00a560:	5800118e 	beq	$r12,$r14,16(0x10) # 1c00a570 <__adddf3+0x270>
1c00a564:	0011300c 	sub.w	$r12,$r0,$r12
1c00a568:	00173257 	sll.w	$r23,$r18,$r12
1c00a56c:	00155d08 	or	$r8,$r8,$r23
1c00a570:	0012a017 	sltu	$r23,$r0,$r8
1c00a574:	001536f7 	or	$r23,$r23,$r13
1c00a578:	001016f7 	add.w	$r23,$r23,$r5
1c00a57c:	001296ee 	sltu	$r14,$r23,$r5
1c00a580:	00104dce 	add.w	$r14,$r14,$r19
1c00a584:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00a588:	0014b1cc 	and	$r12,$r14,$r12
1c00a58c:	58014580 	beq	$r12,$r0,324(0x144) # 1c00a6d0 <__adddf3+0x3d0>
1c00a590:	02800718 	addi.w	$r24,$r24,1(0x1)
1c00a594:	029ffc10 	addi.w	$r16,$r0,2047(0x7ff)
1c00a598:	0015000c 	move	$r12,$r0
1c00a59c:	0015000f 	move	$r15,$r0
1c00a5a0:	5bff0710 	beq	$r24,$r16,-252(0x3ff04) # 1c00a4a4 <__adddf3+0x1a4>
1c00a5a4:	15feffed 	lu12i.w	$r13,-2049(0xff7ff)
1c00a5a8:	03bffdad 	ori	$r13,$r13,0xfff
1c00a5ac:	004486ec 	srli.w	$r12,$r23,0x1
1c00a5b0:	0014b5cd 	and	$r13,$r14,$r13
1c00a5b4:	034006f7 	andi	$r23,$r23,0x1
1c00a5b8:	00155d97 	or	$r23,$r12,$r23
1c00a5bc:	0040fdaf 	slli.w	$r15,$r13,0x1f
1c00a5c0:	004485ae 	srli.w	$r14,$r13,0x1
1c00a5c4:	00155df7 	or	$r23,$r15,$r23
1c00a5c8:	53fe7fff 	b	-388(0xffffe7c) # 1c00a444 <__adddf3+0x144>
1c00a5cc:	03400000 	andi	$r0,$r0,0x0
1c00a5d0:	0015224c 	or	$r12,$r18,$r8
1c00a5d4:	58025180 	beq	$r12,$r0,592(0x250) # 1c00a824 <__adddf3+0x524>
1c00a5d8:	02bffe8c 	addi.w	$r12,$r20,-1(0xfff)
1c00a5dc:	58046980 	beq	$r12,$r0,1128(0x468) # 1c00aa44 <__adddf3+0x744>
1c00a5e0:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00a5e4:	5801f28d 	beq	$r20,$r13,496(0x1f0) # 1c00a7d4 <__adddf3+0x4d4>
1c00a5e8:	00150194 	move	$r20,$r12
1c00a5ec:	53fd97ff 	b	-620(0xffffd94) # 1c00a380 <__adddf3+0x80>
1c00a5f0:	0011622c 	sub.w	$r12,$r17,$r24
1c00a5f4:	5c02cf00 	bne	$r24,$r0,716(0x2cc) # 1c00a8c0 <__adddf3+0x5c0>
1c00a5f8:	0015166d 	or	$r13,$r19,$r5
1c00a5fc:	5803f9a0 	beq	$r13,$r0,1016(0x3f8) # 1c00a9f4 <__adddf3+0x6f4>
1c00a600:	02bffd8d 	addi.w	$r13,$r12,-1(0xfff)
1c00a604:	580541a0 	beq	$r13,$r0,1344(0x540) # 1c00ab44 <__adddf3+0x844>
1c00a608:	029ffc0e 	addi.w	$r14,$r0,2047(0x7ff)
1c00a60c:	5802c58e 	beq	$r12,$r14,708(0x2c4) # 1c00a8d0 <__adddf3+0x5d0>
1c00a610:	001501ac 	move	$r12,$r13
1c00a614:	00151677 	or	$r23,$r19,$r5
1c00a618:	0280e00d 	addi.w	$r13,$r0,56(0x38)
1c00a61c:	0012dc17 	sltu	$r23,$r0,$r23
1c00a620:	600035ac 	blt	$r13,$r12,52(0x34) # 1c00a654 <__adddf3+0x354>
1c00a624:	02807c0d 	addi.w	$r13,$r0,31(0x1f)
1c00a628:	6004bdac 	blt	$r13,$r12,1212(0x4bc) # 1c00aae4 <__adddf3+0x7e4>
1c00a62c:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00a630:	0017b26e 	srl.w	$r14,$r19,$r12
1c00a634:	0017b0b7 	srl.w	$r23,$r5,$r12
1c00a638:	001131ac 	sub.w	$r12,$r13,$r12
1c00a63c:	00173273 	sll.w	$r19,$r19,$r12
1c00a640:	001730ac 	sll.w	$r12,$r5,$r12
1c00a644:	00155e77 	or	$r23,$r19,$r23
1c00a648:	0012b00c 	sltu	$r12,$r0,$r12
1c00a64c:	00113a52 	sub.w	$r18,$r18,$r14
1c00a650:	001532f7 	or	$r23,$r23,$r12
1c00a654:	00115d17 	sub.w	$r23,$r8,$r23
1c00a658:	0012dd0d 	sltu	$r13,$r8,$r23
1c00a65c:	001500f9 	move	$r25,$r7
1c00a660:	00150238 	move	$r24,$r17
1c00a664:	0011364e 	sub.w	$r14,$r18,$r13
1c00a668:	53fd67ff 	b	-668(0xffffd64) # 1c00a3cc <__adddf3+0xcc>
1c00a66c:	03400000 	andi	$r0,$r0,0x0
1c00a670:	0015224d 	or	$r13,$r18,$r8
1c00a674:	5803eda0 	beq	$r13,$r0,1004(0x3ec) # 1c00aa60 <__adddf3+0x760>
1c00a678:	001020b7 	add.w	$r23,$r5,$r8
1c00a67c:	00104a70 	add.w	$r16,$r19,$r18
1c00a680:	001296ee 	sltu	$r14,$r23,$r5
1c00a684:	02bffd8d 	addi.w	$r13,$r12,-1(0xfff)
1c00a688:	00103a0e 	add.w	$r14,$r16,$r14
1c00a68c:	580351a0 	beq	$r13,$r0,848(0x350) # 1c00a9dc <__adddf3+0x6dc>
1c00a690:	029ffc0e 	addi.w	$r14,$r0,2047(0x7ff)
1c00a694:	5804758e 	beq	$r12,$r14,1140(0x474) # 1c00ab08 <__adddf3+0x808>
1c00a698:	001501ac 	move	$r12,$r13
1c00a69c:	53fea7ff 	b	-348(0xffffea4) # 1c00a540 <__adddf3+0x240>
1c00a6a0:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00a6a4:	5800618d 	beq	$r12,$r13,96(0x60) # 1c00a704 <__adddf3+0x404>
1c00a6a8:	001020a8 	add.w	$r8,$r5,$r8
1c00a6ac:	0012950e 	sltu	$r14,$r8,$r5
1c00a6b0:	00104a77 	add.w	$r23,$r19,$r18
1c00a6b4:	00103aed 	add.w	$r13,$r23,$r14
1c00a6b8:	00448508 	srli.w	$r8,$r8,0x1
1c00a6bc:	0040fdb7 	slli.w	$r23,$r13,0x1f
1c00a6c0:	00150198 	move	$r24,$r12
1c00a6c4:	004485ae 	srli.w	$r14,$r13,0x1
1c00a6c8:	001522f7 	or	$r23,$r23,$r8
1c00a6cc:	03400000 	andi	$r0,$r0,0x0
1c00a6d0:	03401eec 	andi	$r12,$r23,0x7
1c00a6d4:	5ffd7980 	bne	$r12,$r0,-648(0x3fd78) # 1c00a44c <__adddf3+0x14c>
1c00a6d8:	00448eef 	srli.w	$r15,$r23,0x3
1c00a6dc:	0040f5cc 	slli.w	$r12,$r14,0x1d
1c00a6e0:	00448dcd 	srli.w	$r13,$r14,0x3
1c00a6e4:	001531ef 	or	$r15,$r15,$r12
1c00a6e8:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00a6ec:	5800870c 	beq	$r24,$r12,132(0x84) # 1c00a770 <__adddf3+0x470>
1c00a6f0:	14001fee 	lu12i.w	$r14,255(0xff)
1c00a6f4:	03bffdce 	ori	$r14,$r14,0xfff
1c00a6f8:	035fff10 	andi	$r16,$r24,0x7ff
1c00a6fc:	0014b9ac 	and	$r12,$r13,$r14
1c00a700:	53fda7ff 	b	-604(0xffffda4) # 1c00a4a4 <__adddf3+0x1a4>
1c00a704:	029ffc10 	addi.w	$r16,$r0,2047(0x7ff)
1c00a708:	0015000c 	move	$r12,$r0
1c00a70c:	0015000f 	move	$r15,$r0
1c00a710:	53fd97ff 	b	-620(0xffffd94) # 1c00a4a4 <__adddf3+0x1a4>
1c00a714:	5c013180 	bne	$r12,$r0,304(0x130) # 1c00a844 <__adddf3+0x544>
1c00a718:	0280070c 	addi.w	$r12,$r24,1(0x1)
1c00a71c:	035ff98d 	andi	$r13,$r12,0x7fe
1c00a720:	5fff81a0 	bne	$r13,$r0,-128(0x3ff80) # 1c00a6a0 <__adddf3+0x3a0>
1c00a724:	0015166c 	or	$r12,$r19,$r5
1c00a728:	58021f00 	beq	$r24,$r0,540(0x21c) # 1c00a944 <__adddf3+0x644>
1c00a72c:	58025580 	beq	$r12,$r0,596(0x254) # 1c00a980 <__adddf3+0x680>
1c00a730:	00152257 	or	$r23,$r18,$r8
1c00a734:	0040f66e 	slli.w	$r14,$r19,0x1d
1c00a738:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00a73c:	5803f6e0 	beq	$r23,$r0,1012(0x3f4) # 1c00ab30 <__adddf3+0x830>
1c00a740:	03bffd8f 	ori	$r15,$r12,0xfff
1c00a744:	001491ec 	and	$r12,$r15,$r4
1c00a748:	0015398c 	or	$r12,$r12,$r14
1c00a74c:	02bfe00d 	addi.w	$r13,$r0,-8(0xff8)
1c00a750:	0044f58e 	srli.w	$r14,$r12,0x1d
1c00a754:	0014b66d 	and	$r13,$r19,$r13
1c00a758:	001539ad 	or	$r13,$r13,$r14
1c00a75c:	0014bd8c 	and	$r12,$r12,$r15
1c00a760:	0040f5af 	slli.w	$r15,$r13,0x1d
1c00a764:	001531ef 	or	$r15,$r15,$r12
1c00a768:	00448dad 	srli.w	$r13,$r13,0x3
1c00a76c:	03400000 	andi	$r0,$r0,0x0
1c00a770:	001535ec 	or	$r12,$r15,$r13
1c00a774:	5804c980 	beq	$r12,$r0,1224(0x4c8) # 1c00ac3c <__adddf3+0x93c>
1c00a778:	1400100e 	lu12i.w	$r14,128(0x80)
1c00a77c:	14001ff1 	lu12i.w	$r17,255(0xff)
1c00a780:	001539ac 	or	$r12,$r13,$r14
1c00a784:	03bffe2d 	ori	$r13,$r17,0xfff
1c00a788:	029ffc10 	addi.w	$r16,$r0,2047(0x7ff)
1c00a78c:	0014b58c 	and	$r12,$r12,$r13
1c00a790:	53fd17ff 	b	-748(0xffffd14) # 1c00a4a4 <__adddf3+0x1a4>
1c00a794:	001502e4 	move	$r4,$r23
1c00a798:	54261800 	bl	9752(0x2618) # 1c00cdb0 <__clzsi2>
1c00a79c:	02807c0c 	addi.w	$r12,$r0,31(0x1f)
1c00a7a0:	0280608f 	addi.w	$r15,$r4,24(0x18)
1c00a7a4:	67fc518f 	bge	$r12,$r15,-944(0x3fc50) # 1c00a3f4 <__adddf3+0xf4>
1c00a7a8:	02bfe09a 	addi.w	$r26,$r4,-8(0xff8)
1c00a7ac:	00176afa 	sll.w	$r26,$r23,$r26
1c00a7b0:	00150017 	move	$r23,$r0
1c00a7b4:	67fc59f8 	bge	$r15,$r24,-936(0x3fc58) # 1c00a40c <__adddf3+0x10c>
1c00a7b8:	15feffed 	lu12i.w	$r13,-2049(0xff7ff)
1c00a7bc:	03bffdad 	ori	$r13,$r13,0xfff
1c00a7c0:	03401eec 	andi	$r12,$r23,0x7
1c00a7c4:	00113f18 	sub.w	$r24,$r24,$r15
1c00a7c8:	0014b74e 	and	$r14,$r26,$r13
1c00a7cc:	5ffc8180 	bne	$r12,$r0,-896(0x3fc80) # 1c00a44c <__adddf3+0x14c>
1c00a7d0:	53ff0bff 	b	-248(0xfffff08) # 1c00a6d8 <__adddf3+0x3d8>
1c00a7d4:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00a7d8:	03bffd8c 	ori	$r12,$r12,0xfff
1c00a7dc:	0040f66e 	slli.w	$r14,$r19,0x1d
1c00a7e0:	0014918f 	and	$r15,$r12,$r4
1c00a7e4:	00448e6d 	srli.w	$r13,$r19,0x3
1c00a7e8:	001539ef 	or	$r15,$r15,$r14
1c00a7ec:	53ff87ff 	b	-124(0xfffff84) # 1c00a770 <__adddf3+0x470>
1c00a7f0:	001120b7 	sub.w	$r23,$r5,$r8
1c00a7f4:	00114a7a 	sub.w	$r26,$r19,$r18
1c00a7f8:	0012dcad 	sltu	$r13,$r5,$r23
1c00a7fc:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00a800:	0011375a 	sub.w	$r26,$r26,$r13
1c00a804:	0014b34c 	and	$r12,$r26,$r12
1c00a808:	5c029180 	bne	$r12,$r0,656(0x290) # 1c00aa98 <__adddf3+0x798>
1c00a80c:	00156aef 	or	$r15,$r23,$r26
1c00a810:	5ffbd5e0 	bne	$r15,$r0,-1068(0x3fbd4) # 1c00a3e4 <__adddf3+0xe4>
1c00a814:	0015000d 	move	$r13,$r0
1c00a818:	00150018 	move	$r24,$r0
1c00a81c:	00150019 	move	$r25,$r0
1c00a820:	53fed3ff 	b	-304(0xffffed0) # 1c00a6f0 <__adddf3+0x3f0>
1c00a824:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00a828:	03bffd8c 	ori	$r12,$r12,0xfff
1c00a82c:	0040f66e 	slli.w	$r14,$r19,0x1d
1c00a830:	0014918f 	and	$r15,$r12,$r4
1c00a834:	00448e6d 	srli.w	$r13,$r19,0x3
1c00a838:	00150298 	move	$r24,$r20
1c00a83c:	00153dcf 	or	$r15,$r14,$r15
1c00a840:	53feabff 	b	-344(0xffffea8) # 1c00a6e8 <__adddf3+0x3e8>
1c00a844:	0011622c 	sub.w	$r12,$r17,$r24
1c00a848:	5c012b00 	bne	$r24,$r0,296(0x128) # 1c00a970 <__adddf3+0x670>
1c00a84c:	0015166d 	or	$r13,$r19,$r5
1c00a850:	580361a0 	beq	$r13,$r0,864(0x360) # 1c00abb0 <__adddf3+0x8b0>
1c00a854:	02bffd8d 	addi.w	$r13,$r12,-1(0xfff)
1c00a858:	580175a0 	beq	$r13,$r0,372(0x174) # 1c00a9cc <__adddf3+0x6cc>
1c00a85c:	029ffc0e 	addi.w	$r14,$r0,2047(0x7ff)
1c00a860:	5801218e 	beq	$r12,$r14,288(0x120) # 1c00a980 <__adddf3+0x680>
1c00a864:	001501ac 	move	$r12,$r13
1c00a868:	00151677 	or	$r23,$r19,$r5
1c00a86c:	0280e00d 	addi.w	$r13,$r0,56(0x38)
1c00a870:	0012dc17 	sltu	$r23,$r0,$r23
1c00a874:	600035ac 	blt	$r13,$r12,52(0x34) # 1c00a8a8 <__adddf3+0x5a8>
1c00a878:	02807c0d 	addi.w	$r13,$r0,31(0x1f)
1c00a87c:	600369ac 	blt	$r13,$r12,872(0x368) # 1c00abe4 <__adddf3+0x8e4>
1c00a880:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00a884:	0017b26e 	srl.w	$r14,$r19,$r12
1c00a888:	0017b0b7 	srl.w	$r23,$r5,$r12
1c00a88c:	001131ac 	sub.w	$r12,$r13,$r12
1c00a890:	00173273 	sll.w	$r19,$r19,$r12
1c00a894:	001730ac 	sll.w	$r12,$r5,$r12
1c00a898:	00155e77 	or	$r23,$r19,$r23
1c00a89c:	0012b00c 	sltu	$r12,$r0,$r12
1c00a8a0:	00103a52 	add.w	$r18,$r18,$r14
1c00a8a4:	001532f7 	or	$r23,$r23,$r12
1c00a8a8:	001022f7 	add.w	$r23,$r23,$r8
1c00a8ac:	0012a2ed 	sltu	$r13,$r23,$r8
1c00a8b0:	00150238 	move	$r24,$r17
1c00a8b4:	001049ae 	add.w	$r14,$r13,$r18
1c00a8b8:	53fccfff 	b	-820(0xffffccc) # 1c00a584 <__adddf3+0x284>
1c00a8bc:	03400000 	andi	$r0,$r0,0x0
1c00a8c0:	1401000e 	lu12i.w	$r14,2048(0x800)
1c00a8c4:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00a8c8:	00153a73 	or	$r19,$r19,$r14
1c00a8cc:	5ffd4a2d 	bne	$r17,$r13,-696(0x3fd48) # 1c00a614 <__adddf3+0x314>
1c00a8d0:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00a8d4:	03bffd8c 	ori	$r12,$r12,0xfff
1c00a8d8:	0040f64f 	slli.w	$r15,$r18,0x1d
1c00a8dc:	0014998c 	and	$r12,$r12,$r6
1c00a8e0:	00448e4d 	srli.w	$r13,$r18,0x3
1c00a8e4:	001500f9 	move	$r25,$r7
1c00a8e8:	001531ef 	or	$r15,$r15,$r12
1c00a8ec:	53fe87ff 	b	-380(0xffffe84) # 1c00a770 <__adddf3+0x470>
1c00a8f0:	02bf8718 	addi.w	$r24,$r24,-31(0xfe1)
1c00a8f4:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00a8f8:	0017e34c 	srl.w	$r12,$r26,$r24
1c00a8fc:	580011ed 	beq	$r15,$r13,16(0x10) # 1c00a90c <__adddf3+0x60c>
1c00a900:	00113c0f 	sub.w	$r15,$r0,$r15
1c00a904:	00173f5a 	sll.w	$r26,$r26,$r15
1c00a908:	00156af7 	or	$r23,$r23,$r26
1c00a90c:	0012dc17 	sltu	$r23,$r0,$r23
1c00a910:	0015000e 	move	$r14,$r0
1c00a914:	00150018 	move	$r24,$r0
1c00a918:	001532f7 	or	$r23,$r23,$r12
1c00a91c:	53fdb7ff 	b	-588(0xffffdb4) # 1c00a6d0 <__adddf3+0x3d0>
1c00a920:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00a924:	0017d24c 	srl.w	$r12,$r18,$r20
1c00a928:	5800128d 	beq	$r20,$r13,16(0x10) # 1c00a938 <__adddf3+0x638>
1c00a92c:	00115014 	sub.w	$r20,$r0,$r20
1c00a930:	00175257 	sll.w	$r23,$r18,$r20
1c00a934:	00155d08 	or	$r8,$r8,$r23
1c00a938:	0012a017 	sltu	$r23,$r0,$r8
1c00a93c:	001532f7 	or	$r23,$r23,$r12
1c00a940:	53fa83ff 	b	-1408(0xffffa80) # 1c00a3c0 <__adddf3+0xc0>
1c00a944:	58021d80 	beq	$r12,$r0,540(0x21c) # 1c00ab60 <__adddf3+0x860>
1c00a948:	0015224c 	or	$r12,$r18,$r8
1c00a94c:	5c023580 	bne	$r12,$r0,564(0x234) # 1c00ab80 <__adddf3+0x880>
1c00a950:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00a954:	03bffd8c 	ori	$r12,$r12,0xfff
1c00a958:	0040f66f 	slli.w	$r15,$r19,0x1d
1c00a95c:	0014918c 	and	$r12,$r12,$r4
1c00a960:	00448e6d 	srli.w	$r13,$r19,0x3
1c00a964:	001531ef 	or	$r15,$r15,$r12
1c00a968:	53fd8bff 	b	-632(0xffffd88) # 1c00a6f0 <__adddf3+0x3f0>
1c00a96c:	03400000 	andi	$r0,$r0,0x0
1c00a970:	1401000e 	lu12i.w	$r14,2048(0x800)
1c00a974:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00a978:	00153a73 	or	$r19,$r19,$r14
1c00a97c:	5ffeee2d 	bne	$r17,$r13,-276(0x3feec) # 1c00a868 <__adddf3+0x568>
1c00a980:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00a984:	03bffd8c 	ori	$r12,$r12,0xfff
1c00a988:	0040f64f 	slli.w	$r15,$r18,0x1d
1c00a98c:	0014998c 	and	$r12,$r12,$r6
1c00a990:	00448e4d 	srli.w	$r13,$r18,0x3
1c00a994:	001531ef 	or	$r15,$r15,$r12
1c00a998:	53fddbff 	b	-552(0xffffdd8) # 1c00a770 <__adddf3+0x470>
1c00a99c:	03400000 	andi	$r0,$r0,0x0
1c00a9a0:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00a9a4:	0017b10e 	srl.w	$r14,$r8,$r12
1c00a9a8:	0017b24f 	srl.w	$r15,$r18,$r12
1c00a9ac:	001131ac 	sub.w	$r12,$r13,$r12
1c00a9b0:	00173257 	sll.w	$r23,$r18,$r12
1c00a9b4:	0017310c 	sll.w	$r12,$r8,$r12
1c00a9b8:	00153af7 	or	$r23,$r23,$r14
1c00a9bc:	0012b00c 	sltu	$r12,$r0,$r12
1c00a9c0:	00103e73 	add.w	$r19,$r19,$r15
1c00a9c4:	001532f7 	or	$r23,$r23,$r12
1c00a9c8:	53fbb3ff 	b	-1104(0xffffbb0) # 1c00a578 <__adddf3+0x278>
1c00a9cc:	001020b7 	add.w	$r23,$r5,$r8
1c00a9d0:	00104a70 	add.w	$r16,$r19,$r18
1c00a9d4:	0012a2ed 	sltu	$r13,$r23,$r8
1c00a9d8:	0010360e 	add.w	$r14,$r16,$r13
1c00a9dc:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00a9e0:	0014b1cc 	and	$r12,$r14,$r12
1c00a9e4:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00a9e8:	5bfce980 	beq	$r12,$r0,-792(0x3fce8) # 1c00a6d0 <__adddf3+0x3d0>
1c00a9ec:	02800818 	addi.w	$r24,$r0,2(0x2)
1c00a9f0:	53fbb7ff 	b	-1100(0xffffbb4) # 1c00a5a4 <__adddf3+0x2a4>
1c00a9f4:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00a9f8:	03bffdce 	ori	$r14,$r14,0xfff
1c00a9fc:	0040f64f 	slli.w	$r15,$r18,0x1d
1c00aa00:	001499c6 	and	$r6,$r14,$r6
1c00aa04:	00448e4d 	srli.w	$r13,$r18,0x3
1c00aa08:	001500f9 	move	$r25,$r7
1c00aa0c:	00150198 	move	$r24,$r12
1c00aa10:	001519ef 	or	$r15,$r15,$r6
1c00aa14:	53fcd7ff 	b	-812(0xffffcd4) # 1c00a6e8 <__adddf3+0x3e8>
1c00aa18:	0015000d 	move	$r13,$r0
1c00aa1c:	00150019 	move	$r25,$r0
1c00aa20:	5bfcd1e0 	beq	$r15,$r0,-816(0x3fcd0) # 1c00a6f0 <__adddf3+0x3f0>
1c00aa24:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00aa28:	03bffd8c 	ori	$r12,$r12,0xfff
1c00aa2c:	0040f64f 	slli.w	$r15,$r18,0x1d
1c00aa30:	0014998c 	and	$r12,$r12,$r6
1c00aa34:	00448e4d 	srli.w	$r13,$r18,0x3
1c00aa38:	001500f9 	move	$r25,$r7
1c00aa3c:	00153d8f 	or	$r15,$r12,$r15
1c00aa40:	53fcb3ff 	b	-848(0xffffcb0) # 1c00a6f0 <__adddf3+0x3f0>
1c00aa44:	001120b7 	sub.w	$r23,$r5,$r8
1c00aa48:	00114a70 	sub.w	$r16,$r19,$r18
1c00aa4c:	0012dcae 	sltu	$r14,$r5,$r23
1c00aa50:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00aa54:	00113a0e 	sub.w	$r14,$r16,$r14
1c00aa58:	53f977ff 	b	-1676(0xffff974) # 1c00a3cc <__adddf3+0xcc>
1c00aa5c:	03400000 	andi	$r0,$r0,0x0
1c00aa60:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00aa64:	00150198 	move	$r24,$r12
1c00aa68:	03bffdcc 	ori	$r12,$r14,0xfff
1c00aa6c:	0040f670 	slli.w	$r16,$r19,0x1d
1c00aa70:	0014918f 	and	$r15,$r12,$r4
1c00aa74:	00448e6d 	srli.w	$r13,$r19,0x3
1c00aa78:	001541ef 	or	$r15,$r15,$r16
1c00aa7c:	53fc6fff 	b	-916(0xffffc6c) # 1c00a6e8 <__adddf3+0x3e8>
1c00aa80:	5c00a580 	bne	$r12,$r0,164(0xa4) # 1c00ab24 <__adddf3+0x824>
1c00aa84:	5ffe4de0 	bne	$r15,$r0,-436(0x3fe4c) # 1c00a8d0 <__adddf3+0x5d0>
1c00aa88:	00150019 	move	$r25,$r0
1c00aa8c:	0015020d 	move	$r13,$r16
1c00aa90:	02bffc0f 	addi.w	$r15,$r0,-1(0xfff)
1c00aa94:	53fce7ff 	b	-796(0xffffce4) # 1c00a778 <__adddf3+0x478>
1c00aa98:	00111517 	sub.w	$r23,$r8,$r5
1c00aa9c:	00114e50 	sub.w	$r16,$r18,$r19
1c00aaa0:	0012dd0d 	sltu	$r13,$r8,$r23
1c00aaa4:	001500f9 	move	$r25,$r7
1c00aaa8:	0011361a 	sub.w	$r26,$r16,$r13
1c00aaac:	53f93bff 	b	-1736(0xffff938) # 1c00a3e4 <__adddf3+0xe4>
1c00aab0:	001120b7 	sub.w	$r23,$r5,$r8
1c00aab4:	00114a6d 	sub.w	$r13,$r19,$r18
1c00aab8:	0012dcae 	sltu	$r14,$r5,$r23
1c00aabc:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00aac0:	001139ae 	sub.w	$r14,$r13,$r14
1c00aac4:	0014b1cc 	and	$r12,$r14,$r12
1c00aac8:	58010980 	beq	$r12,$r0,264(0x108) # 1c00abd0 <__adddf3+0x8d0>
1c00aacc:	00111517 	sub.w	$r23,$r8,$r5
1c00aad0:	00114e50 	sub.w	$r16,$r18,$r19
1c00aad4:	0012dd0d 	sltu	$r13,$r8,$r23
1c00aad8:	001500f9 	move	$r25,$r7
1c00aadc:	0011360e 	sub.w	$r14,$r16,$r13
1c00aae0:	53f967ff 	b	-1692(0xffff964) # 1c00a444 <__adddf3+0x144>
1c00aae4:	0280800e 	addi.w	$r14,$r0,32(0x20)
1c00aae8:	0017b26d 	srl.w	$r13,$r19,$r12
1c00aaec:	5800118e 	beq	$r12,$r14,16(0x10) # 1c00aafc <__adddf3+0x7fc>
1c00aaf0:	0011300c 	sub.w	$r12,$r0,$r12
1c00aaf4:	00173273 	sll.w	$r19,$r19,$r12
1c00aaf8:	00154ca5 	or	$r5,$r5,$r19
1c00aafc:	00129417 	sltu	$r23,$r0,$r5
1c00ab00:	001536f7 	or	$r23,$r23,$r13
1c00ab04:	53fb53ff 	b	-1200(0xffffb50) # 1c00a654 <__adddf3+0x354>
1c00ab08:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00ab0c:	03bffd8c 	ori	$r12,$r12,0xfff
1c00ab10:	0040f66f 	slli.w	$r15,$r19,0x1d
1c00ab14:	0014918c 	and	$r12,$r12,$r4
1c00ab18:	00448e6d 	srli.w	$r13,$r19,0x3
1c00ab1c:	001531ef 	or	$r15,$r15,$r12
1c00ab20:	53fc53ff 	b	-944(0xffffc50) # 1c00a770 <__adddf3+0x470>
1c00ab24:	0040f66e 	slli.w	$r14,$r19,0x1d
1c00ab28:	5c00e1e0 	bne	$r15,$r0,224(0xe0) # 1c00ac08 <__adddf3+0x908>
1c00ab2c:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00ab30:	03bffd8c 	ori	$r12,$r12,0xfff
1c00ab34:	0014918c 	and	$r12,$r12,$r4
1c00ab38:	00448e6d 	srli.w	$r13,$r19,0x3
1c00ab3c:	0015398f 	or	$r15,$r12,$r14
1c00ab40:	53fc33ff 	b	-976(0xffffc30) # 1c00a770 <__adddf3+0x470>
1c00ab44:	00111517 	sub.w	$r23,$r8,$r5
1c00ab48:	00114e50 	sub.w	$r16,$r18,$r19
1c00ab4c:	0012dd0d 	sltu	$r13,$r8,$r23
1c00ab50:	001500f9 	move	$r25,$r7
1c00ab54:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00ab58:	0011360e 	sub.w	$r14,$r16,$r13
1c00ab5c:	53f873ff 	b	-1936(0xffff870) # 1c00a3cc <__adddf3+0xcc>
1c00ab60:	143fffec 	lu12i.w	$r12,131071(0x1ffff)
1c00ab64:	03bffd8c 	ori	$r12,$r12,0xfff
1c00ab68:	0040f64f 	slli.w	$r15,$r18,0x1d
1c00ab6c:	0014998c 	and	$r12,$r12,$r6
1c00ab70:	00448e4d 	srli.w	$r13,$r18,0x3
1c00ab74:	00153d8f 	or	$r15,$r12,$r15
1c00ab78:	53fb7bff 	b	-1160(0xffffb78) # 1c00a6f0 <__adddf3+0x3f0>
1c00ab7c:	03400000 	andi	$r0,$r0,0x0
1c00ab80:	001020b7 	add.w	$r23,$r5,$r8
1c00ab84:	00104a70 	add.w	$r16,$r19,$r18
1c00ab88:	001296ed 	sltu	$r13,$r23,$r5
1c00ab8c:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00ab90:	0010360e 	add.w	$r14,$r16,$r13
1c00ab94:	0014b1cc 	and	$r12,$r14,$r12
1c00ab98:	5bfb3980 	beq	$r12,$r0,-1224(0x3fb38) # 1c00a6d0 <__adddf3+0x3d0>
1c00ab9c:	15feffec 	lu12i.w	$r12,-2049(0xff7ff)
1c00aba0:	03bffd8c 	ori	$r12,$r12,0xfff
1c00aba4:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00aba8:	0014b1ce 	and	$r14,$r14,$r12
1c00abac:	53fb27ff 	b	-1244(0xffffb24) # 1c00a6d0 <__adddf3+0x3d0>
1c00abb0:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00abb4:	00150198 	move	$r24,$r12
1c00abb8:	03bffdcc 	ori	$r12,$r14,0xfff
1c00abbc:	0040f64f 	slli.w	$r15,$r18,0x1d
1c00abc0:	0014998c 	and	$r12,$r12,$r6
1c00abc4:	00448e4d 	srli.w	$r13,$r18,0x3
1c00abc8:	00153d8f 	or	$r15,$r12,$r15
1c00abcc:	53fb1fff 	b	-1252(0xffffb1c) # 1c00a6e8 <__adddf3+0x3e8>
1c00abd0:	00153aef 	or	$r15,$r23,$r14
1c00abd4:	5ffafde0 	bne	$r15,$r0,-1284(0x3fafc) # 1c00a6d0 <__adddf3+0x3d0>
1c00abd8:	0015000d 	move	$r13,$r0
1c00abdc:	00150019 	move	$r25,$r0
1c00abe0:	53fb13ff 	b	-1264(0xffffb10) # 1c00a6f0 <__adddf3+0x3f0>
1c00abe4:	0280800e 	addi.w	$r14,$r0,32(0x20)
1c00abe8:	0017b26d 	srl.w	$r13,$r19,$r12
1c00abec:	5800118e 	beq	$r12,$r14,16(0x10) # 1c00abfc <__adddf3+0x8fc>
1c00abf0:	0011300c 	sub.w	$r12,$r0,$r12
1c00abf4:	00173273 	sll.w	$r19,$r19,$r12
1c00abf8:	00154ca5 	or	$r5,$r5,$r19
1c00abfc:	00129417 	sltu	$r23,$r0,$r5
1c00ac00:	001536f7 	or	$r23,$r23,$r13
1c00ac04:	53fca7ff 	b	-860(0xffffca4) # 1c00a8a8 <__adddf3+0x5a8>
1c00ac08:	143fffef 	lu12i.w	$r15,131071(0x1ffff)
1c00ac0c:	02bfe00c 	addi.w	$r12,$r0,-8(0xff8)
1c00ac10:	03bffdef 	ori	$r15,$r15,0xfff
1c00ac14:	0014b26d 	and	$r13,$r19,$r12
1c00ac18:	001491ec 	and	$r12,$r15,$r4
1c00ac1c:	0015398c 	or	$r12,$r12,$r14
1c00ac20:	0044f58e 	srli.w	$r14,$r12,0x1d
1c00ac24:	0014bd8f 	and	$r15,$r12,$r15
1c00ac28:	001539ac 	or	$r12,$r13,$r14
1c00ac2c:	0040f58e 	slli.w	$r14,$r12,0x1d
1c00ac30:	00448d8d 	srli.w	$r13,$r12,0x3
1c00ac34:	001539ef 	or	$r15,$r15,$r14
1c00ac38:	53fb3bff 	b	-1224(0xffffb38) # 1c00a770 <__adddf3+0x470>
1c00ac3c:	0015000f 	move	$r15,$r0
1c00ac40:	029ffc10 	addi.w	$r16,$r0,2047(0x7ff)
1c00ac44:	0015000c 	move	$r12,$r0
1c00ac48:	53f85fff 	b	-1956(0xffff85c) # 1c00a4a4 <__adddf3+0x1a4>
1c00ac4c:	03400000 	andi	$r0,$r0,0x0

1c00ac50 <__divdf3>:
__divdf3():
1c00ac50:	02bf0063 	addi.w	$r3,$r3,-64(0xfc0)
1c00ac54:	2980d078 	st.w	$r24,$r3,52(0x34)
1c00ac58:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c00ac5c:	14001ff8 	lu12i.w	$r24,255(0xff)
1c00ac60:	0015009b 	move	$r27,$r4
1c00ac64:	0044d0a4 	srli.w	$r4,$r5,0x14
1c00ac68:	2980807d 	st.w	$r29,$r3,32(0x20)
1c00ac6c:	03bfff18 	ori	$r24,$r24,0xfff
1c00ac70:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c00ac74:	2980e077 	st.w	$r23,$r3,56(0x38)
1c00ac78:	2980c079 	st.w	$r25,$r3,48(0x30)
1c00ac7c:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c00ac80:	2980907c 	st.w	$r28,$r3,36(0x24)
1c00ac84:	2980707e 	st.w	$r30,$r3,28(0x1c)
1c00ac88:	035ffc84 	andi	$r4,$r4,0x7ff
1c00ac8c:	00149718 	and	$r24,$r24,$r5
1c00ac90:	0044fcbd 	srli.w	$r29,$r5,0x1f
1c00ac94:	58021c80 	beq	$r4,$r0,540(0x21c) # 1c00aeb0 <__divdf3+0x260>
1c00ac98:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00ac9c:	58026c8c 	beq	$r4,$r12,620(0x26c) # 1c00af08 <__divdf3+0x2b8>
1c00aca0:	0044f77c 	srli.w	$r28,$r27,0x1d
1c00aca4:	00408f18 	slli.w	$r24,$r24,0x3
1c00aca8:	1401000d 	lu12i.w	$r13,2048(0x800)
1c00acac:	00156398 	or	$r24,$r28,$r24
1c00acb0:	00408f7a 	slli.w	$r26,$r27,0x3
1c00acb4:	02b00499 	addi.w	$r25,$r4,-1023(0xc01)
1c00acb8:	0015001b 	move	$r27,$r0
1c00acbc:	0015001e 	move	$r30,$r0
1c00acc0:	0015371c 	or	$r28,$r24,$r13
1c00acc4:	14001ff7 	lu12i.w	$r23,255(0xff)
1c00acc8:	0044d0ef 	srli.w	$r15,$r7,0x14
1c00accc:	03bffef7 	ori	$r23,$r23,0xfff
1c00acd0:	035ffdef 	andi	$r15,$r15,0x7ff
1c00acd4:	0044fcf8 	srli.w	$r24,$r7,0x1f
1c00acd8:	00149ef7 	and	$r23,$r23,$r7
1c00acdc:	580185e0 	beq	$r15,$r0,388(0x184) # 1c00ae60 <__divdf3+0x210>
1c00ace0:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00ace4:	580051ec 	beq	$r15,$r12,80(0x50) # 1c00ad34 <__divdf3+0xe4>
1c00ace8:	00408ee4 	slli.w	$r4,$r23,0x3
1c00acec:	0044f4d7 	srli.w	$r23,$r6,0x1d
1c00acf0:	14010007 	lu12i.w	$r7,2048(0x800)
1c00acf4:	02b005ef 	addi.w	$r15,$r15,-1023(0xc01)
1c00acf8:	001512f7 	or	$r23,$r23,$r4
1c00acfc:	00408cd1 	slli.w	$r17,$r6,0x3
1c00ad00:	00113f39 	sub.w	$r25,$r25,$r15
1c00ad04:	0015000d 	move	$r13,$r0
1c00ad08:	00151ef7 	or	$r23,$r23,$r7
1c00ad0c:	02803c0c 	addi.w	$r12,$r0,15(0xf)
1c00ad10:	0015e3b0 	xor	$r16,$r29,$r24
1c00ad14:	6802959b 	bltu	$r12,$r27,660(0x294) # 1c00afa8 <__divdf3+0x358>
1c00ad18:	1dc7feef 	pcaddu12i	$r15,-114697(0xe3ff7)
1c00ad1c:	028fb1ef 	addi.w	$r15,$r15,1004(0x3ec)
1c00ad20:	00408b6e 	slli.w	$r14,$r27,0x2
1c00ad24:	001039ee 	add.w	$r14,$r15,$r14
1c00ad28:	288001cc 	ld.w	$r12,$r14,0
1c00ad2c:	001031ef 	add.w	$r15,$r15,$r12
1c00ad30:	4c0001e0 	jirl	$r0,$r15,0
1c00ad34:	00151af1 	or	$r17,$r23,$r6
1c00ad38:	02a00739 	addi.w	$r25,$r25,-2047(0x801)
1c00ad3c:	5c01ea20 	bne	$r17,$r0,488(0x1e8) # 1c00af24 <__divdf3+0x2d4>
1c00ad40:	03800b7b 	ori	$r27,$r27,0x2
1c00ad44:	00150017 	move	$r23,$r0
1c00ad48:	0280080d 	addi.w	$r13,$r0,2(0x2)
1c00ad4c:	53ffc3ff 	b	-64(0xfffffc0) # 1c00ad0c <__divdf3+0xbc>
1c00ad50:	001503b0 	move	$r16,$r29
1c00ad54:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00ad58:	0015000c 	move	$r12,$r0
1c00ad5c:	0015001a 	move	$r26,$r0
1c00ad60:	14001fee 	lu12i.w	$r14,255(0xff)
1c00ad64:	03bffdce 	ori	$r14,$r14,0xfff
1c00ad68:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c00ad6c:	0040d1ef 	slli.w	$r15,$r15,0x14
1c00ad70:	0014b98c 	and	$r12,$r12,$r14
1c00ad74:	0040fe10 	slli.w	$r16,$r16,0x1f
1c00ad78:	00153d8c 	or	$r12,$r12,$r15
1c00ad7c:	0015418c 	or	$r12,$r12,$r16
1c00ad80:	00150344 	move	$r4,$r26
1c00ad84:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c00ad88:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c00ad8c:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c00ad90:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c00ad94:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c00ad98:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c00ad9c:	2880807d 	ld.w	$r29,$r3,32(0x20)
1c00ada0:	2880707e 	ld.w	$r30,$r3,28(0x1c)
1c00ada4:	00150185 	move	$r5,$r12
1c00ada8:	02810063 	addi.w	$r3,$r3,64(0x40)
1c00adac:	4c000020 	jirl	$r0,$r1,0
1c00adb0:	0015031d 	move	$r29,$r24
1c00adb4:	001502fc 	move	$r28,$r23
1c00adb8:	0015023a 	move	$r26,$r17
1c00adbc:	001501be 	move	$r30,$r13
1c00adc0:	0280080c 	addi.w	$r12,$r0,2(0x2)
1c00adc4:	5bff8fcc 	beq	$r30,$r12,-116(0x3ff8c) # 1c00ad50 <__divdf3+0x100>
1c00adc8:	02800c0c 	addi.w	$r12,$r0,3(0x3)
1c00adcc:	580697cc 	beq	$r30,$r12,1684(0x694) # 1c00b460 <__divdf3+0x810>
1c00add0:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c00add4:	028fff33 	addi.w	$r19,$r25,1023(0x3ff)
1c00add8:	001503b0 	move	$r16,$r29
1c00addc:	580077cc 	beq	$r30,$r12,116(0x74) # 1c00ae50 <__divdf3+0x200>
1c00ade0:	64005813 	bge	$r0,$r19,88(0x58) # 1c00ae38 <__divdf3+0x1e8>
1c00ade4:	03401f4c 	andi	$r12,$r26,0x7
1c00ade8:	5c04fd80 	bne	$r12,$r0,1276(0x4fc) # 1c00b2e4 <__divdf3+0x694>
1c00adec:	00448f4e 	srli.w	$r14,$r26,0x3
1c00adf0:	1402000c 	lu12i.w	$r12,4096(0x1000)
1c00adf4:	0014b38c 	and	$r12,$r28,$r12
1c00adf8:	58001580 	beq	$r12,$r0,20(0x14) # 1c00ae0c <__divdf3+0x1bc>
1c00adfc:	15fdffec 	lu12i.w	$r12,-4097(0xfefff)
1c00ae00:	03bffd8c 	ori	$r12,$r12,0xfff
1c00ae04:	02900333 	addi.w	$r19,$r25,1024(0x400)
1c00ae08:	0014b39c 	and	$r28,$r28,$r12
1c00ae0c:	029ff80d 	addi.w	$r13,$r0,2046(0x7fe)
1c00ae10:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00ae14:	0015000c 	move	$r12,$r0
1c00ae18:	0015001a 	move	$r26,$r0
1c00ae1c:	63ff45b3 	blt	$r13,$r19,-188(0x3ff44) # 1c00ad60 <__divdf3+0x110>
1c00ae20:	0040f79a 	slli.w	$r26,$r28,0x1d
1c00ae24:	0040a78d 	slli.w	$r13,$r28,0x9
1c00ae28:	035ffe6f 	andi	$r15,$r19,0x7ff
1c00ae2c:	00153b5a 	or	$r26,$r26,$r14
1c00ae30:	0044b1ac 	srli.w	$r12,$r13,0xc
1c00ae34:	53ff2fff 	b	-212(0xfffff2c) # 1c00ad60 <__divdf3+0x110>
1c00ae38:	5804ee60 	beq	$r19,$r0,1260(0x4ec) # 1c00b324 <__divdf3+0x6d4>
1c00ae3c:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c00ae40:	0280e00d 	addi.w	$r13,$r0,56(0x38)
1c00ae44:	00114d8c 	sub.w	$r12,$r12,$r19
1c00ae48:	640569ac 	bge	$r13,$r12,1384(0x568) # 1c00b3b0 <__divdf3+0x760>
1c00ae4c:	03400000 	andi	$r0,$r0,0x0
1c00ae50:	0015000f 	move	$r15,$r0
1c00ae54:	0015000c 	move	$r12,$r0
1c00ae58:	0015001a 	move	$r26,$r0
1c00ae5c:	53ff07ff 	b	-252(0xfffff04) # 1c00ad60 <__divdf3+0x110>
1c00ae60:	00151af1 	or	$r17,$r23,$r6
1c00ae64:	5800e620 	beq	$r17,$r0,228(0xe4) # 1c00af48 <__divdf3+0x2f8>
1c00ae68:	5803dee0 	beq	$r23,$r0,988(0x3dc) # 1c00b244 <__divdf3+0x5f4>
1c00ae6c:	001502e4 	move	$r4,$r23
1c00ae70:	29802066 	st.w	$r6,$r3,8(0x8)
1c00ae74:	541f3c00 	bl	7996(0x1f3c) # 1c00cdb0 <__clzsi2>
1c00ae78:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00ae7c:	02bfd48d 	addi.w	$r13,$r4,-11(0xff5)
1c00ae80:	0280740c 	addi.w	$r12,$r0,29(0x1d)
1c00ae84:	02bfe091 	addi.w	$r17,$r4,-8(0xff8)
1c00ae88:	0011358c 	sub.w	$r12,$r12,$r13
1c00ae8c:	001746f7 	sll.w	$r23,$r23,$r17
1c00ae90:	001744d1 	sll.w	$r17,$r6,$r17
1c00ae94:	0017b0c6 	srl.w	$r6,$r6,$r12
1c00ae98:	00155cd7 	or	$r23,$r6,$r23
1c00ae9c:	00106484 	add.w	$r4,$r4,$r25
1c00aea0:	0015000d 	move	$r13,$r0
1c00aea4:	028fcc99 	addi.w	$r25,$r4,1011(0x3f3)
1c00aea8:	53fe67ff 	b	-412(0xffffe64) # 1c00ad0c <__divdf3+0xbc>
1c00aeac:	03400000 	andi	$r0,$r0,0x0
1c00aeb0:	00156f1c 	or	$r28,$r24,$r27
1c00aeb4:	58008380 	beq	$r28,$r0,128(0x80) # 1c00af34 <__divdf3+0x2e4>
1c00aeb8:	29803067 	st.w	$r7,$r3,12(0xc)
1c00aebc:	29802066 	st.w	$r6,$r3,8(0x8)
1c00aec0:	58035700 	beq	$r24,$r0,852(0x354) # 1c00b214 <__divdf3+0x5c4>
1c00aec4:	00150304 	move	$r4,$r24
1c00aec8:	541ee800 	bl	7912(0x1ee8) # 1c00cdb0 <__clzsi2>
1c00aecc:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00aed0:	28803067 	ld.w	$r7,$r3,12(0xc)
1c00aed4:	02bfd48e 	addi.w	$r14,$r4,-11(0xff5)
1c00aed8:	0280741c 	addi.w	$r28,$r0,29(0x1d)
1c00aedc:	02bfe08d 	addi.w	$r13,$r4,-8(0xff8)
1c00aee0:	00113b9c 	sub.w	$r28,$r28,$r14
1c00aee4:	00173718 	sll.w	$r24,$r24,$r13
1c00aee8:	0017377a 	sll.w	$r26,$r27,$r13
1c00aeec:	0017f36d 	srl.w	$r13,$r27,$r28
1c00aef0:	001561bc 	or	$r28,$r13,$r24
1c00aef4:	02b03419 	addi.w	$r25,$r0,-1011(0xc0d)
1c00aef8:	0015001b 	move	$r27,$r0
1c00aefc:	0015001e 	move	$r30,$r0
1c00af00:	00111339 	sub.w	$r25,$r25,$r4
1c00af04:	53fdc3ff 	b	-576(0xffffdc0) # 1c00acc4 <__divdf3+0x74>
1c00af08:	00156f1c 	or	$r28,$r24,$r27
1c00af0c:	5c004f80 	bne	$r28,$r0,76(0x4c) # 1c00af58 <__divdf3+0x308>
1c00af10:	0015001a 	move	$r26,$r0
1c00af14:	0280201b 	addi.w	$r27,$r0,8(0x8)
1c00af18:	029ffc19 	addi.w	$r25,$r0,2047(0x7ff)
1c00af1c:	0280081e 	addi.w	$r30,$r0,2(0x2)
1c00af20:	53fda7ff 	b	-604(0xffffda4) # 1c00acc4 <__divdf3+0x74>
1c00af24:	03800f7b 	ori	$r27,$r27,0x3
1c00af28:	001500d1 	move	$r17,$r6
1c00af2c:	02800c0d 	addi.w	$r13,$r0,3(0x3)
1c00af30:	53fddfff 	b	-548(0xffffddc) # 1c00ad0c <__divdf3+0xbc>
1c00af34:	0015001a 	move	$r26,$r0
1c00af38:	0280101b 	addi.w	$r27,$r0,4(0x4)
1c00af3c:	00150019 	move	$r25,$r0
1c00af40:	0280041e 	addi.w	$r30,$r0,1(0x1)
1c00af44:	53fd83ff 	b	-640(0xffffd80) # 1c00acc4 <__divdf3+0x74>
1c00af48:	0380077b 	ori	$r27,$r27,0x1
1c00af4c:	00150017 	move	$r23,$r0
1c00af50:	0280040d 	addi.w	$r13,$r0,1(0x1)
1c00af54:	53fdbbff 	b	-584(0xffffdb8) # 1c00ad0c <__divdf3+0xbc>
1c00af58:	0015037a 	move	$r26,$r27
1c00af5c:	0015031c 	move	$r28,$r24
1c00af60:	0280301b 	addi.w	$r27,$r0,12(0xc)
1c00af64:	029ffc19 	addi.w	$r25,$r0,2047(0x7ff)
1c00af68:	02800c1e 	addi.w	$r30,$r0,3(0x3)
1c00af6c:	53fd5bff 	b	-680(0xffffd58) # 1c00acc4 <__divdf3+0x74>
1c00af70:	14001fed 	lu12i.w	$r13,255(0xff)
1c00af74:	00150010 	move	$r16,$r0
1c00af78:	02bffc1a 	addi.w	$r26,$r0,-1(0xfff)
1c00af7c:	03bffdac 	ori	$r12,$r13,0xfff
1c00af80:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00af84:	53fddfff 	b	-548(0xffffddc) # 1c00ad60 <__divdf3+0x110>
1c00af88:	1400100d 	lu12i.w	$r13,128(0x80)
1c00af8c:	14001fee 	lu12i.w	$r14,255(0xff)
1c00af90:	0015378c 	or	$r12,$r28,$r13
1c00af94:	03bffdcd 	ori	$r13,$r14,0xfff
1c00af98:	001503b0 	move	$r16,$r29
1c00af9c:	0014b58c 	and	$r12,$r12,$r13
1c00afa0:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00afa4:	53fdbfff 	b	-580(0xffffdbc) # 1c00ad60 <__divdf3+0x110>
1c00afa8:	68030afc 	bltu	$r23,$r28,776(0x308) # 1c00b2b0 <__divdf3+0x660>
1c00afac:	5802fefc 	beq	$r23,$r28,764(0x2fc) # 1c00b2a8 <__divdf3+0x658>
1c00afb0:	02bfff39 	addi.w	$r25,$r25,-1(0xfff)
1c00afb4:	00150398 	move	$r24,$r28
1c00afb8:	00150012 	move	$r18,$r0
1c00afbc:	0044e22c 	srli.w	$r12,$r17,0x18
1c00afc0:	0040a2f7 	slli.w	$r23,$r23,0x8
1c00afc4:	00155d97 	or	$r23,$r12,$r23
1c00afc8:	29802077 	st.w	$r23,$r3,8(0x8)
1c00afcc:	2a402064 	ld.hu	$r4,$r3,8(0x8)
1c00afd0:	0044c2f4 	srli.w	$r20,$r23,0x10
1c00afd4:	0044c34e 	srli.w	$r14,$r26,0x10
1c00afd8:	0021d313 	mod.wu	$r19,$r24,$r20
1c00afdc:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00afe4 <__divdf3+0x394>
1c00afe0:	002a0007 	break	0x7
1c00afe4:	0021530f 	div.wu	$r15,$r24,$r20
1c00afe8:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00aff0 <__divdf3+0x3a0>
1c00afec:	002a0007 	break	0x7
1c00aff0:	0040c26c 	slli.w	$r12,$r19,0x10
1c00aff4:	001531ce 	or	$r14,$r14,$r12
1c00aff8:	001c3c8c 	mul.w	$r12,$r4,$r15
1c00affc:	0040a231 	slli.w	$r17,$r17,0x8
1c00b000:	6c0021cc 	bgeu	$r14,$r12,32(0x20) # 1c00b020 <__divdf3+0x3d0>
1c00b004:	00105dce 	add.w	$r14,$r14,$r23
1c00b008:	02bffded 	addi.w	$r13,$r15,-1(0xfff)
1c00b00c:	680395d7 	bltu	$r14,$r23,916(0x394) # 1c00b3a0 <__divdf3+0x750>
1c00b010:	6c0391cc 	bgeu	$r14,$r12,912(0x390) # 1c00b3a0 <__divdf3+0x750>
1c00b014:	02bff9ef 	addi.w	$r15,$r15,-2(0xffe)
1c00b018:	00105dce 	add.w	$r14,$r14,$r23
1c00b01c:	03400000 	andi	$r0,$r0,0x0
1c00b020:	001131ce 	sub.w	$r14,$r14,$r12
1c00b024:	002151d8 	div.wu	$r24,$r14,$r20
1c00b028:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00b030 <__divdf3+0x3e0>
1c00b02c:	002a0007 	break	0x7
1c00b030:	001c608d 	mul.w	$r13,$r4,$r24
1c00b034:	2980207a 	st.w	$r26,$r3,8(0x8)
1c00b038:	0021d1cc 	mod.wu	$r12,$r14,$r20
1c00b03c:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00b044 <__divdf3+0x3f4>
1c00b040:	002a0007 	break	0x7
1c00b044:	2a40207a 	ld.hu	$r26,$r3,8(0x8)
1c00b048:	0040c18e 	slli.w	$r14,$r12,0x10
1c00b04c:	00153b4e 	or	$r14,$r26,$r14
1c00b050:	6c0021cd 	bgeu	$r14,$r13,32(0x20) # 1c00b070 <__divdf3+0x420>
1c00b054:	00105dce 	add.w	$r14,$r14,$r23
1c00b058:	02bfff0c 	addi.w	$r12,$r24,-1(0xfff)
1c00b05c:	68034dd7 	bltu	$r14,$r23,844(0x34c) # 1c00b3a8 <__divdf3+0x758>
1c00b060:	6c0349cd 	bgeu	$r14,$r13,840(0x348) # 1c00b3a8 <__divdf3+0x758>
1c00b064:	02bffb18 	addi.w	$r24,$r24,-2(0xffe)
1c00b068:	00105dce 	add.w	$r14,$r14,$r23
1c00b06c:	03400000 	andi	$r0,$r0,0x0
1c00b070:	0040c1ef 	slli.w	$r15,$r15,0x10
1c00b074:	140001f3 	lu12i.w	$r19,15(0xf)
1c00b078:	001561fc 	or	$r28,$r15,$r24
1c00b07c:	03bffe6f 	ori	$r15,$r19,0xfff
1c00b080:	0014bf93 	and	$r19,$r28,$r15
1c00b084:	0044c225 	srli.w	$r5,$r17,0x10
1c00b088:	001135da 	sub.w	$r26,$r14,$r13
1c00b08c:	001c4cac 	mul.w	$r12,$r5,$r19
1c00b090:	0044c38d 	srli.w	$r13,$r28,0x10
1c00b094:	0014be2f 	and	$r15,$r17,$r15
1c00b098:	001c3e66 	mul.w	$r6,$r19,$r15
1c00b09c:	001c3da7 	mul.w	$r7,$r13,$r15
1c00b0a0:	0044c0ce 	srli.w	$r14,$r6,0x10
1c00b0a4:	00101d8c 	add.w	$r12,$r12,$r7
1c00b0a8:	001c15b3 	mul.w	$r19,$r13,$r5
1c00b0ac:	001031cc 	add.w	$r12,$r14,$r12
1c00b0b0:	6c000d87 	bgeu	$r12,$r7,12(0xc) # 1c00b0bc <__divdf3+0x46c>
1c00b0b4:	1400020d 	lu12i.w	$r13,16(0x10)
1c00b0b8:	00103673 	add.w	$r19,$r19,$r13
1c00b0bc:	140001ee 	lu12i.w	$r14,15(0xf)
1c00b0c0:	03bffdce 	ori	$r14,$r14,0xfff
1c00b0c4:	0044c18d 	srli.w	$r13,$r12,0x10
1c00b0c8:	0014b98c 	and	$r12,$r12,$r14
1c00b0cc:	0014b8c6 	and	$r6,$r6,$r14
1c00b0d0:	0040c18c 	slli.w	$r12,$r12,0x10
1c00b0d4:	00104dad 	add.w	$r13,$r13,$r19
1c00b0d8:	0010198c 	add.w	$r12,$r12,$r6
1c00b0dc:	6801a74d 	bltu	$r26,$r13,420(0x1a4) # 1c00b280 <__divdf3+0x630>
1c00b0e0:	58019b4d 	beq	$r26,$r13,408(0x198) # 1c00b278 <__divdf3+0x628>
1c00b0e4:	0011324c 	sub.w	$r12,$r18,$r12
1c00b0e8:	0011374e 	sub.w	$r14,$r26,$r13
1c00b0ec:	0012b24d 	sltu	$r13,$r18,$r12
1c00b0f0:	001135ce 	sub.w	$r14,$r14,$r13
1c00b0f4:	028fff33 	addi.w	$r19,$r25,1023(0x3ff)
1c00b0f8:	580212ee 	beq	$r23,$r14,528(0x210) # 1c00b308 <__divdf3+0x6b8>
1c00b0fc:	002151cd 	div.wu	$r13,$r14,$r20
1c00b100:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00b108 <__divdf3+0x4b8>
1c00b104:	002a0007 	break	0x7
1c00b108:	001c3486 	mul.w	$r6,$r4,$r13
1c00b10c:	0021d1d2 	mod.wu	$r18,$r14,$r20
1c00b110:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00b118 <__divdf3+0x4c8>
1c00b114:	002a0007 	break	0x7
1c00b118:	0044c18e 	srli.w	$r14,$r12,0x10
1c00b11c:	0040c252 	slli.w	$r18,$r18,0x10
1c00b120:	001549ce 	or	$r14,$r14,$r18
1c00b124:	6c001dc6 	bgeu	$r14,$r6,28(0x1c) # 1c00b140 <__divdf3+0x4f0>
1c00b128:	00105dce 	add.w	$r14,$r14,$r23
1c00b12c:	02bffdb2 	addi.w	$r18,$r13,-1(0xfff)
1c00b130:	6802f9d7 	bltu	$r14,$r23,760(0x2f8) # 1c00b428 <__divdf3+0x7d8>
1c00b134:	6c02f5c6 	bgeu	$r14,$r6,756(0x2f4) # 1c00b428 <__divdf3+0x7d8>
1c00b138:	02bff9ad 	addi.w	$r13,$r13,-2(0xffe)
1c00b13c:	00105dce 	add.w	$r14,$r14,$r23
1c00b140:	001119ce 	sub.w	$r14,$r14,$r6
1c00b144:	002151da 	div.wu	$r26,$r14,$r20
1c00b148:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00b150 <__divdf3+0x500>
1c00b14c:	002a0007 	break	0x7
1c00b150:	001c6884 	mul.w	$r4,$r4,$r26
1c00b154:	2980206c 	st.w	$r12,$r3,8(0x8)
1c00b158:	0021d1d2 	mod.wu	$r18,$r14,$r20
1c00b15c:	5c000a80 	bne	$r20,$r0,8(0x8) # 1c00b164 <__divdf3+0x514>
1c00b160:	002a0007 	break	0x7
1c00b164:	2a40206c 	ld.hu	$r12,$r3,8(0x8)
1c00b168:	0040c24e 	slli.w	$r14,$r18,0x10
1c00b16c:	0015398c 	or	$r12,$r12,$r14
1c00b170:	6c002184 	bgeu	$r12,$r4,32(0x20) # 1c00b190 <__divdf3+0x540>
1c00b174:	00105d8c 	add.w	$r12,$r12,$r23
1c00b178:	02bfff4e 	addi.w	$r14,$r26,-1(0xfff)
1c00b17c:	6802a597 	bltu	$r12,$r23,676(0x2a4) # 1c00b420 <__divdf3+0x7d0>
1c00b180:	6c02a184 	bgeu	$r12,$r4,672(0x2a0) # 1c00b420 <__divdf3+0x7d0>
1c00b184:	02bffb5a 	addi.w	$r26,$r26,-2(0xffe)
1c00b188:	00105d8c 	add.w	$r12,$r12,$r23
1c00b18c:	03400000 	andi	$r0,$r0,0x0
1c00b190:	0040c1ad 	slli.w	$r13,$r13,0x10
1c00b194:	001569ba 	or	$r26,$r13,$r26
1c00b198:	2980207a 	st.w	$r26,$r3,8(0x8)
1c00b19c:	2a40206d 	ld.hu	$r13,$r3,8(0x8)
1c00b1a0:	0044c34e 	srli.w	$r14,$r26,0x10
1c00b1a4:	001c3dd2 	mul.w	$r18,$r14,$r15
1c00b1a8:	0011118c 	sub.w	$r12,$r12,$r4
1c00b1ac:	001c38ae 	mul.w	$r14,$r5,$r14
1c00b1b0:	001c3daf 	mul.w	$r15,$r13,$r15
1c00b1b4:	001c34a5 	mul.w	$r5,$r5,$r13
1c00b1b8:	0044c1ed 	srli.w	$r13,$r15,0x10
1c00b1bc:	001048a5 	add.w	$r5,$r5,$r18
1c00b1c0:	001015ad 	add.w	$r13,$r13,$r5
1c00b1c4:	6c000db2 	bgeu	$r13,$r18,12(0xc) # 1c00b1d0 <__divdf3+0x580>
1c00b1c8:	14000212 	lu12i.w	$r18,16(0x10)
1c00b1cc:	001049ce 	add.w	$r14,$r14,$r18
1c00b1d0:	140001f4 	lu12i.w	$r20,15(0xf)
1c00b1d4:	03bffe94 	ori	$r20,$r20,0xfff
1c00b1d8:	0044c1b2 	srli.w	$r18,$r13,0x10
1c00b1dc:	0014d1ad 	and	$r13,$r13,$r20
1c00b1e0:	0014d1ef 	and	$r15,$r15,$r20
1c00b1e4:	0040c1ad 	slli.w	$r13,$r13,0x10
1c00b1e8:	00103a4e 	add.w	$r14,$r18,$r14
1c00b1ec:	00103dad 	add.w	$r13,$r13,$r15
1c00b1f0:	6c00d98e 	bgeu	$r12,$r14,216(0xd8) # 1c00b2c8 <__divdf3+0x678>
1c00b1f4:	001032ec 	add.w	$r12,$r23,$r12
1c00b1f8:	02bfff4f 	addi.w	$r15,$r26,-1(0xfff)
1c00b1fc:	68025d97 	bltu	$r12,$r23,604(0x25c) # 1c00b458 <__divdf3+0x808>
1c00b200:	6802318e 	bltu	$r12,$r14,560(0x230) # 1c00b430 <__divdf3+0x7e0>
1c00b204:	58027d8e 	beq	$r12,$r14,636(0x27c) # 1c00b480 <__divdf3+0x830>
1c00b208:	001501fa 	move	$r26,$r15
1c00b20c:	0380075a 	ori	$r26,$r26,0x1
1c00b210:	53fbd3ff 	b	-1072(0xffffbd0) # 1c00ade0 <__divdf3+0x190>
1c00b214:	00150364 	move	$r4,$r27
1c00b218:	541b9800 	bl	7064(0x1b98) # 1c00cdb0 <__clzsi2>
1c00b21c:	02bfe08d 	addi.w	$r13,$r4,-8(0xff8)
1c00b220:	0280548e 	addi.w	$r14,$r4,21(0x15)
1c00b224:	0280700f 	addi.w	$r15,$r0,28(0x1c)
1c00b228:	0015001a 	move	$r26,$r0
1c00b22c:	02808084 	addi.w	$r4,$r4,32(0x20)
1c00b230:	0017377c 	sll.w	$r28,$r27,$r13
1c00b234:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00b238:	28803067 	ld.w	$r7,$r3,12(0xc)
1c00b23c:	63fcb9ee 	blt	$r15,$r14,-840(0x3fcb8) # 1c00aef4 <__divdf3+0x2a4>
1c00b240:	53fc9bff 	b	-872(0xffffc98) # 1c00aed8 <__divdf3+0x288>
1c00b244:	001500c4 	move	$r4,$r6
1c00b248:	29802066 	st.w	$r6,$r3,8(0x8)
1c00b24c:	541b6400 	bl	7012(0x1b64) # 1c00cdb0 <__clzsi2>
1c00b250:	0280548d 	addi.w	$r13,$r4,21(0x15)
1c00b254:	0280700c 	addi.w	$r12,$r0,28(0x1c)
1c00b258:	00150087 	move	$r7,$r4
1c00b25c:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00b260:	02808084 	addi.w	$r4,$r4,32(0x20)
1c00b264:	67fc1d8d 	bge	$r12,$r13,-996(0x3fc1c) # 1c00ae80 <__divdf3+0x230>
1c00b268:	02bfe0e7 	addi.w	$r7,$r7,-8(0xff8)
1c00b26c:	00150011 	move	$r17,$r0
1c00b270:	00171cd7 	sll.w	$r23,$r6,$r7
1c00b274:	53fc2bff 	b	-984(0xffffc28) # 1c00ae9c <__divdf3+0x24c>
1c00b278:	6ffe6e4c 	bgeu	$r18,$r12,-404(0x3fe6c) # 1c00b0e4 <__divdf3+0x494>
1c00b27c:	03400000 	andi	$r0,$r0,0x0
1c00b280:	00104652 	add.w	$r18,$r18,$r17
1c00b284:	0012c64e 	sltu	$r14,$r18,$r17
1c00b288:	00105dce 	add.w	$r14,$r14,$r23
1c00b28c:	00103b5a 	add.w	$r26,$r26,$r14
1c00b290:	02bfff93 	addi.w	$r19,$r28,-1(0xfff)
1c00b294:	6c0042fa 	bgeu	$r23,$r26,64(0x40) # 1c00b2d4 <__divdf3+0x684>
1c00b298:	68016f4d 	bltu	$r26,$r13,364(0x16c) # 1c00b404 <__divdf3+0x7b4>
1c00b29c:	580165ba 	beq	$r13,$r26,356(0x164) # 1c00b400 <__divdf3+0x7b0>
1c00b2a0:	0015027c 	move	$r28,$r19
1c00b2a4:	53fe43ff 	b	-448(0xffffe40) # 1c00b0e4 <__divdf3+0x494>
1c00b2a8:	6bfd0b51 	bltu	$r26,$r17,-760(0x3fd08) # 1c00afb0 <__divdf3+0x360>
1c00b2ac:	03400000 	andi	$r0,$r0,0x0
1c00b2b0:	0040ff8f 	slli.w	$r15,$r28,0x1f
1c00b2b4:	0044874d 	srli.w	$r13,$r26,0x1
1c00b2b8:	0040ff52 	slli.w	$r18,$r26,0x1f
1c00b2bc:	00448798 	srli.w	$r24,$r28,0x1
1c00b2c0:	001535fa 	or	$r26,$r15,$r13
1c00b2c4:	53fcfbff 	b	-776(0xffffcf8) # 1c00afbc <__divdf3+0x36c>
1c00b2c8:	5fff458e 	bne	$r12,$r14,-188(0x3ff44) # 1c00b20c <__divdf3+0x5bc>
1c00b2cc:	5bfb15a0 	beq	$r13,$r0,-1260(0x3fb14) # 1c00ade0 <__divdf3+0x190>
1c00b2d0:	53ff27ff 	b	-220(0xfffff24) # 1c00b1f4 <__divdf3+0x5a4>
1c00b2d4:	5fffcefa 	bne	$r23,$r26,-52(0x3ffcc) # 1c00b2a0 <__divdf3+0x650>
1c00b2d8:	6fffc251 	bgeu	$r18,$r17,-64(0x3ffc0) # 1c00b298 <__divdf3+0x648>
1c00b2dc:	0015027c 	move	$r28,$r19
1c00b2e0:	53fe07ff 	b	-508(0xffffe04) # 1c00b0e4 <__divdf3+0x494>
1c00b2e4:	03403f4c 	andi	$r12,$r26,0xf
1c00b2e8:	0280100d 	addi.w	$r13,$r0,4(0x4)
1c00b2ec:	5bfb018d 	beq	$r12,$r13,-1280(0x3fb00) # 1c00adec <__divdf3+0x19c>
1c00b2f0:	027ff34c 	sltui	$r12,$r26,-4(0xffc)
1c00b2f4:	0280134d 	addi.w	$r13,$r26,4(0x4)
1c00b2f8:	03c0058c 	xori	$r12,$r12,0x1
1c00b2fc:	00448dae 	srli.w	$r14,$r13,0x3
1c00b300:	0010339c 	add.w	$r28,$r28,$r12
1c00b304:	53faefff 	b	-1300(0xffffaec) # 1c00adf0 <__divdf3+0x1a0>
1c00b308:	0015000e 	move	$r14,$r0
1c00b30c:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c00b310:	63fff013 	blt	$r0,$r19,-16(0x3fff0) # 1c00b300 <__divdf3+0x6b0>
1c00b314:	02bffc1a 	addi.w	$r26,$r0,-1(0xfff)
1c00b318:	5ffb2660 	bne	$r19,$r0,-1244(0x3fb24) # 1c00ae3c <__divdf3+0x1ec>
1c00b31c:	02b00419 	addi.w	$r25,$r0,-1023(0xc01)
1c00b320:	02bffc1a 	addi.w	$r26,$r0,-1(0xfff)
1c00b324:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c00b328:	02907b24 	addi.w	$r4,$r25,1054(0x41e)
1c00b32c:	0017b351 	srl.w	$r17,$r26,$r12
1c00b330:	00171398 	sll.w	$r24,$r28,$r4
1c00b334:	0017135a 	sll.w	$r26,$r26,$r4
1c00b338:	00154711 	or	$r17,$r24,$r17
1c00b33c:	0012e81a 	sltu	$r26,$r0,$r26
1c00b340:	00156a31 	or	$r17,$r17,$r26
1c00b344:	0017b38e 	srl.w	$r14,$r28,$r12
1c00b348:	03401e2c 	andi	$r12,$r17,0x7
1c00b34c:	58002180 	beq	$r12,$r0,32(0x20) # 1c00b36c <__divdf3+0x71c>
1c00b350:	03403e2c 	andi	$r12,$r17,0xf
1c00b354:	0280100d 	addi.w	$r13,$r0,4(0x4)
1c00b358:	5800158d 	beq	$r12,$r13,20(0x14) # 1c00b36c <__divdf3+0x71c>
1c00b35c:	0280122c 	addi.w	$r12,$r17,4(0x4)
1c00b360:	0012c58d 	sltu	$r13,$r12,$r17
1c00b364:	001035ce 	add.w	$r14,$r14,$r13
1c00b368:	00150191 	move	$r17,$r12
1c00b36c:	1401000d 	lu12i.w	$r13,2048(0x800)
1c00b370:	0014b5cd 	and	$r13,$r14,$r13
1c00b374:	0280040f 	addi.w	$r15,$r0,1(0x1)
1c00b378:	0015000c 	move	$r12,$r0
1c00b37c:	0015001a 	move	$r26,$r0
1c00b380:	5ff9e1a0 	bne	$r13,$r0,-1568(0x3f9e0) # 1c00ad60 <__divdf3+0x110>
1c00b384:	0040a5cd 	slli.w	$r13,$r14,0x9
1c00b388:	0044b1ac 	srli.w	$r12,$r13,0xc
1c00b38c:	0040f5ce 	slli.w	$r14,$r14,0x1d
1c00b390:	00448e3a 	srli.w	$r26,$r17,0x3
1c00b394:	0015000f 	move	$r15,$r0
1c00b398:	00153b5a 	or	$r26,$r26,$r14
1c00b39c:	53f9c7ff 	b	-1596(0xffff9c4) # 1c00ad60 <__divdf3+0x110>
1c00b3a0:	001501af 	move	$r15,$r13
1c00b3a4:	53fc7fff 	b	-900(0xffffc7c) # 1c00b020 <__divdf3+0x3d0>
1c00b3a8:	00150198 	move	$r24,$r12
1c00b3ac:	53fcc7ff 	b	-828(0xffffcc4) # 1c00b070 <__divdf3+0x420>
1c00b3b0:	02807c0d 	addi.w	$r13,$r0,31(0x1f)
1c00b3b4:	67ff75ac 	bge	$r13,$r12,-140(0x3ff74) # 1c00b328 <__divdf3+0x6d8>
1c00b3b8:	02bf8411 	addi.w	$r17,$r0,-31(0xfe1)
1c00b3bc:	00114e31 	sub.w	$r17,$r17,$r19
1c00b3c0:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00b3c4:	0017c791 	srl.w	$r17,$r28,$r17
1c00b3c8:	5800118d 	beq	$r12,$r13,16(0x10) # 1c00b3d8 <__divdf3+0x788>
1c00b3cc:	0290fb2d 	addi.w	$r13,$r25,1086(0x43e)
1c00b3d0:	0017378d 	sll.w	$r13,$r28,$r13
1c00b3d4:	0015375a 	or	$r26,$r26,$r13
1c00b3d8:	0012e81a 	sltu	$r26,$r0,$r26
1c00b3dc:	00154751 	or	$r17,$r26,$r17
1c00b3e0:	03401e2e 	andi	$r14,$r17,0x7
1c00b3e4:	0015000c 	move	$r12,$r0
1c00b3e8:	5bffa9c0 	beq	$r14,$r0,-88(0x3ffa8) # 1c00b390 <__divdf3+0x740>
1c00b3ec:	03403e2c 	andi	$r12,$r17,0xf
1c00b3f0:	0280100d 	addi.w	$r13,$r0,4(0x4)
1c00b3f4:	0015000e 	move	$r14,$r0
1c00b3f8:	5fff658d 	bne	$r12,$r13,-156(0x3ff64) # 1c00b35c <__divdf3+0x70c>
1c00b3fc:	53ff8bff 	b	-120(0xfffff88) # 1c00b384 <__divdf3+0x734>
1c00b400:	6ffea24c 	bgeu	$r18,$r12,-352(0x3fea0) # 1c00b2a0 <__divdf3+0x650>
1c00b404:	00104652 	add.w	$r18,$r18,$r17
1c00b408:	0012c64e 	sltu	$r14,$r18,$r17
1c00b40c:	00105dce 	add.w	$r14,$r14,$r23
1c00b410:	02bffb9c 	addi.w	$r28,$r28,-2(0xffe)
1c00b414:	00103b5a 	add.w	$r26,$r26,$r14
1c00b418:	53fccfff 	b	-820(0xffffccc) # 1c00b0e4 <__divdf3+0x494>
1c00b41c:	03400000 	andi	$r0,$r0,0x0
1c00b420:	001501da 	move	$r26,$r14
1c00b424:	53fd6fff 	b	-660(0xffffd6c) # 1c00b190 <__divdf3+0x540>
1c00b428:	0015024d 	move	$r13,$r18
1c00b42c:	53fd17ff 	b	-748(0xffffd14) # 1c00b140 <__divdf3+0x4f0>
1c00b430:	00408632 	slli.w	$r18,$r17,0x1
1c00b434:	0012c64f 	sltu	$r15,$r18,$r17
1c00b438:	00105df7 	add.w	$r23,$r15,$r23
1c00b43c:	02bffb5a 	addi.w	$r26,$r26,-2(0xffe)
1c00b440:	00150251 	move	$r17,$r18
1c00b444:	00105d8c 	add.w	$r12,$r12,$r23
1c00b448:	5ffdc58e 	bne	$r12,$r14,-572(0x3fdc4) # 1c00b20c <__divdf3+0x5bc>
1c00b44c:	5bf9962d 	beq	$r17,$r13,-1644(0x3f994) # 1c00ade0 <__divdf3+0x190>
1c00b450:	0380075a 	ori	$r26,$r26,0x1
1c00b454:	53f98fff 	b	-1652(0xffff98c) # 1c00ade0 <__divdf3+0x190>
1c00b458:	001501fa 	move	$r26,$r15
1c00b45c:	53ffefff 	b	-20(0xfffffec) # 1c00b448 <__divdf3+0x7f8>
1c00b460:	1400100e 	lu12i.w	$r14,128(0x80)
1c00b464:	14001fed 	lu12i.w	$r13,255(0xff)
1c00b468:	00153b8c 	or	$r12,$r28,$r14
1c00b46c:	03bffdad 	ori	$r13,$r13,0xfff
1c00b470:	001503b0 	move	$r16,$r29
1c00b474:	0014b58c 	and	$r12,$r12,$r13
1c00b478:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00b47c:	53f8e7ff 	b	-1820(0xffff8e4) # 1c00ad60 <__divdf3+0x110>
1c00b480:	6bffb22d 	bltu	$r17,$r13,-80(0x3ffb0) # 1c00b430 <__divdf3+0x7e0>
1c00b484:	001501fa 	move	$r26,$r15
1c00b488:	53ffc7ff 	b	-60(0xfffffc4) # 1c00b44c <__divdf3+0x7fc>
1c00b48c:	03400000 	andi	$r0,$r0,0x0

1c00b490 <__eqdf2>:
__eqdf2():
1c00b490:	0044d0ad 	srli.w	$r13,$r5,0x14
1c00b494:	14001fec 	lu12i.w	$r12,255(0xff)
1c00b498:	03bffd8c 	ori	$r12,$r12,0xfff
1c00b49c:	0044d0ee 	srli.w	$r14,$r7,0x14
1c00b4a0:	035ffdad 	andi	$r13,$r13,0x7ff
1c00b4a4:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00b4a8:	00149591 	and	$r17,$r12,$r5
1c00b4ac:	00150090 	move	$r16,$r4
1c00b4b0:	00149d8c 	and	$r12,$r12,$r7
1c00b4b4:	00150092 	move	$r18,$r4
1c00b4b8:	0044fca5 	srli.w	$r5,$r5,0x1f
1c00b4bc:	001500d3 	move	$r19,$r6
1c00b4c0:	035ffdce 	andi	$r14,$r14,0x7ff
1c00b4c4:	0044fce7 	srli.w	$r7,$r7,0x1f
1c00b4c8:	580019af 	beq	$r13,$r15,24(0x18) # 1c00b4e0 <__eqdf2+0x50>
1c00b4cc:	02800404 	addi.w	$r4,$r0,1(0x1)
1c00b4d0:	58000dcf 	beq	$r14,$r15,12(0xc) # 1c00b4dc <__eqdf2+0x4c>
1c00b4d4:	5c0009ae 	bne	$r13,$r14,8(0x8) # 1c00b4dc <__eqdf2+0x4c>
1c00b4d8:	5800222c 	beq	$r17,$r12,32(0x20) # 1c00b4f8 <__eqdf2+0x68>
1c00b4dc:	4c000020 	jirl	$r0,$r1,0
1c00b4e0:	0015122f 	or	$r15,$r17,$r4
1c00b4e4:	02800404 	addi.w	$r4,$r0,1(0x1)
1c00b4e8:	5ffff5e0 	bne	$r15,$r0,-12(0x3fff4) # 1c00b4dc <__eqdf2+0x4c>
1c00b4ec:	5ffff1cd 	bne	$r14,$r13,-16(0x3fff0) # 1c00b4dc <__eqdf2+0x4c>
1c00b4f0:	0015198c 	or	$r12,$r12,$r6
1c00b4f4:	5fffe980 	bne	$r12,$r0,-24(0x3ffe8) # 1c00b4dc <__eqdf2+0x4c>
1c00b4f8:	02800404 	addi.w	$r4,$r0,1(0x1)
1c00b4fc:	5fffe253 	bne	$r18,$r19,-32(0x3ffe0) # 1c00b4dc <__eqdf2+0x4c>
1c00b500:	00150004 	move	$r4,$r0
1c00b504:	5bffd8a7 	beq	$r5,$r7,-40(0x3ffd8) # 1c00b4dc <__eqdf2+0x4c>
1c00b508:	02800404 	addi.w	$r4,$r0,1(0x1)
1c00b50c:	5fffd1a0 	bne	$r13,$r0,-48(0x3ffd0) # 1c00b4dc <__eqdf2+0x4c>
1c00b510:	00154230 	or	$r16,$r17,$r16
1c00b514:	0012c004 	sltu	$r4,$r0,$r16
1c00b518:	4c000020 	jirl	$r0,$r1,0
1c00b51c:	03400000 	andi	$r0,$r0,0x0

1c00b520 <__gedf2>:
__gtdf2():
1c00b520:	0044d0ad 	srli.w	$r13,$r5,0x14
1c00b524:	14001fec 	lu12i.w	$r12,255(0xff)
1c00b528:	03bffd8c 	ori	$r12,$r12,0xfff
1c00b52c:	0044d0ee 	srli.w	$r14,$r7,0x14
1c00b530:	035ffdad 	andi	$r13,$r13,0x7ff
1c00b534:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00b538:	00149590 	and	$r16,$r12,$r5
1c00b53c:	00150091 	move	$r17,$r4
1c00b540:	00149d8c 	and	$r12,$r12,$r7
1c00b544:	0044fca5 	srli.w	$r5,$r5,0x1f
1c00b548:	001500d2 	move	$r18,$r6
1c00b54c:	035ffdce 	andi	$r14,$r14,0x7ff
1c00b550:	0044fce7 	srli.w	$r7,$r7,0x1f
1c00b554:	580061af 	beq	$r13,$r15,96(0x60) # 1c00b5b4 <__gedf2+0x94>
1c00b558:	580039cf 	beq	$r14,$r15,56(0x38) # 1c00b590 <__gedf2+0x70>
1c00b55c:	5c0065a0 	bne	$r13,$r0,100(0x64) # 1c00b5c0 <__gedf2+0xa0>
1c00b560:	00151204 	or	$r4,$r16,$r4
1c00b564:	0240048f 	sltui	$r15,$r4,1(0x1)
1c00b568:	5c000dc0 	bne	$r14,$r0,12(0xc) # 1c00b574 <__gedf2+0x54>
1c00b56c:	00151986 	or	$r6,$r12,$r6
1c00b570:	580060c0 	beq	$r6,$r0,96(0x60) # 1c00b5d0 <__gedf2+0xb0>
1c00b574:	5c0035e0 	bne	$r15,$r0,52(0x34) # 1c00b5a8 <__gedf2+0x88>
1c00b578:	580068a7 	beq	$r5,$r7,104(0x68) # 1c00b5e0 <__gedf2+0xc0>
1c00b57c:	02bffca7 	addi.w	$r7,$r5,-1(0xfff)
1c00b580:	034008e7 	andi	$r7,$r7,0x2
1c00b584:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c00b588:	001500e4 	move	$r4,$r7
1c00b58c:	4c000020 	jirl	$r0,$r1,0
1c00b590:	00151986 	or	$r6,$r12,$r6
1c00b594:	5c0084c0 	bne	$r6,$r0,132(0x84) # 1c00b618 <__gedf2+0xf8>
1c00b598:	5fffe1a0 	bne	$r13,$r0,-32(0x3ffe0) # 1c00b578 <__gedf2+0x58>
1c00b59c:	00151204 	or	$r4,$r16,$r4
1c00b5a0:	0240048f 	sltui	$r15,$r4,1(0x1)
1c00b5a4:	5bffd5e0 	beq	$r15,$r0,-44(0x3ffd4) # 1c00b578 <__gedf2+0x58>
1c00b5a8:	5fffe0e0 	bne	$r7,$r0,-32(0x3ffe0) # 1c00b588 <__gedf2+0x68>
1c00b5ac:	02bffc07 	addi.w	$r7,$r0,-1(0xfff)
1c00b5b0:	53ffdbff 	b	-40(0xfffffd8) # 1c00b588 <__gedf2+0x68>
1c00b5b4:	0015120f 	or	$r15,$r16,$r4
1c00b5b8:	5c0061e0 	bne	$r15,$r0,96(0x60) # 1c00b618 <__gedf2+0xf8>
1c00b5bc:	5bffd5cd 	beq	$r14,$r13,-44(0x3ffd4) # 1c00b590 <__gedf2+0x70>
1c00b5c0:	5fffb9c0 	bne	$r14,$r0,-72(0x3ffb8) # 1c00b578 <__gedf2+0x58>
1c00b5c4:	00151986 	or	$r6,$r12,$r6
1c00b5c8:	5fffb0c0 	bne	$r6,$r0,-80(0x3ffb0) # 1c00b578 <__gedf2+0x58>
1c00b5cc:	53ffb3ff 	b	-80(0xfffffb0) # 1c00b57c <__gedf2+0x5c>
1c00b5d0:	00150007 	move	$r7,$r0
1c00b5d4:	5bffb480 	beq	$r4,$r0,-76(0x3ffb4) # 1c00b588 <__gedf2+0x68>
1c00b5d8:	53ffa7ff 	b	-92(0xfffffa4) # 1c00b57c <__gedf2+0x5c>
1c00b5dc:	03400000 	andi	$r0,$r0,0x0
1c00b5e0:	600025cd 	blt	$r14,$r13,36(0x24) # 1c00b604 <__gedf2+0xe4>
1c00b5e4:	63ffc5ae 	blt	$r13,$r14,-60(0x3ffc4) # 1c00b5a8 <__gedf2+0x88>
1c00b5e8:	68003990 	bltu	$r12,$r16,56(0x38) # 1c00b620 <__gedf2+0x100>
1c00b5ec:	5800460c 	beq	$r16,$r12,68(0x44) # 1c00b630 <__gedf2+0x110>
1c00b5f0:	00150007 	move	$r7,$r0
1c00b5f4:	6fff960c 	bgeu	$r16,$r12,-108(0x3ff94) # 1c00b588 <__gedf2+0x68>
1c00b5f8:	5bffb4a0 	beq	$r5,$r0,-76(0x3ffb4) # 1c00b5ac <__gedf2+0x8c>
1c00b5fc:	001500a7 	move	$r7,$r5
1c00b600:	53ff8bff 	b	-120(0xfffff88) # 1c00b588 <__gedf2+0x68>
1c00b604:	024004e7 	sltui	$r7,$r7,1(0x1)
1c00b608:	00111c07 	sub.w	$r7,$r0,$r7
1c00b60c:	034008e7 	andi	$r7,$r7,0x2
1c00b610:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c00b614:	53ff77ff 	b	-140(0xfffff74) # 1c00b588 <__gedf2+0x68>
1c00b618:	02bff807 	addi.w	$r7,$r0,-2(0xffe)
1c00b61c:	53ff6fff 	b	-148(0xfffff6c) # 1c00b588 <__gedf2+0x68>
1c00b620:	02bffca5 	addi.w	$r5,$r5,-1(0xfff)
1c00b624:	034008a7 	andi	$r7,$r5,0x2
1c00b628:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c00b62c:	53ff5fff 	b	-164(0xfffff5c) # 1c00b588 <__gedf2+0x68>
1c00b630:	6bfff251 	bltu	$r18,$r17,-16(0x3fff0) # 1c00b620 <__gedf2+0x100>
1c00b634:	00150007 	move	$r7,$r0
1c00b638:	6fff5232 	bgeu	$r17,$r18,-176(0x3ff50) # 1c00b588 <__gedf2+0x68>
1c00b63c:	53ffbfff 	b	-68(0xfffffbc) # 1c00b5f8 <__gedf2+0xd8>

1c00b640 <__ledf2>:
__ltdf2():
1c00b640:	0044d0ad 	srli.w	$r13,$r5,0x14
1c00b644:	14001fec 	lu12i.w	$r12,255(0xff)
1c00b648:	03bffd8c 	ori	$r12,$r12,0xfff
1c00b64c:	0044d0ee 	srli.w	$r14,$r7,0x14
1c00b650:	035ffdad 	andi	$r13,$r13,0x7ff
1c00b654:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00b658:	00149590 	and	$r16,$r12,$r5
1c00b65c:	00150091 	move	$r17,$r4
1c00b660:	00149d8c 	and	$r12,$r12,$r7
1c00b664:	0044fca5 	srli.w	$r5,$r5,0x1f
1c00b668:	001500d2 	move	$r18,$r6
1c00b66c:	035ffdce 	andi	$r14,$r14,0x7ff
1c00b670:	0044fce7 	srli.w	$r7,$r7,0x1f
1c00b674:	58002daf 	beq	$r13,$r15,44(0x2c) # 1c00b6a0 <__ledf2+0x60>
1c00b678:	580035cf 	beq	$r14,$r15,52(0x34) # 1c00b6ac <__ledf2+0x6c>
1c00b67c:	5c0085a0 	bne	$r13,$r0,132(0x84) # 1c00b700 <__ledf2+0xc0>
1c00b680:	00151204 	or	$r4,$r16,$r4
1c00b684:	0240048f 	sltui	$r15,$r4,1(0x1)
1c00b688:	5c0039c0 	bne	$r14,$r0,56(0x38) # 1c00b6c0 <__ledf2+0x80>
1c00b68c:	00151986 	or	$r6,$r12,$r6
1c00b690:	5c0030c0 	bne	$r6,$r0,48(0x30) # 1c00b6c0 <__ledf2+0x80>
1c00b694:	00150007 	move	$r7,$r0
1c00b698:	58004c80 	beq	$r4,$r0,76(0x4c) # 1c00b6e4 <__ledf2+0xa4>
1c00b69c:	50002c00 	b	44(0x2c) # 1c00b6c8 <__ledf2+0x88>
1c00b6a0:	0015120f 	or	$r15,$r16,$r4
1c00b6a4:	5c003de0 	bne	$r15,$r0,60(0x3c) # 1c00b6e0 <__ledf2+0xa0>
1c00b6a8:	5c0059cd 	bne	$r14,$r13,88(0x58) # 1c00b700 <__ledf2+0xc0>
1c00b6ac:	00151986 	or	$r6,$r12,$r6
1c00b6b0:	5c0030c0 	bne	$r6,$r0,48(0x30) # 1c00b6e0 <__ledf2+0xa0>
1c00b6b4:	5c0011a0 	bne	$r13,$r0,16(0x10) # 1c00b6c4 <__ledf2+0x84>
1c00b6b8:	00151204 	or	$r4,$r16,$r4
1c00b6bc:	0240048f 	sltui	$r15,$r4,1(0x1)
1c00b6c0:	5c0031e0 	bne	$r15,$r0,48(0x30) # 1c00b6f0 <__ledf2+0xb0>
1c00b6c4:	58004ca7 	beq	$r5,$r7,76(0x4c) # 1c00b710 <__ledf2+0xd0>
1c00b6c8:	02bffca7 	addi.w	$r7,$r5,-1(0xfff)
1c00b6cc:	034008e7 	andi	$r7,$r7,0x2
1c00b6d0:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c00b6d4:	001500e4 	move	$r4,$r7
1c00b6d8:	4c000020 	jirl	$r0,$r1,0
1c00b6dc:	03400000 	andi	$r0,$r0,0x0
1c00b6e0:	02800807 	addi.w	$r7,$r0,2(0x2)
1c00b6e4:	001500e4 	move	$r4,$r7
1c00b6e8:	4c000020 	jirl	$r0,$r1,0
1c00b6ec:	03400000 	andi	$r0,$r0,0x0
1c00b6f0:	5ffff4e0 	bne	$r7,$r0,-12(0x3fff4) # 1c00b6e4 <__ledf2+0xa4>
1c00b6f4:	02bffc07 	addi.w	$r7,$r0,-1(0xfff)
1c00b6f8:	53ffefff 	b	-20(0xfffffec) # 1c00b6e4 <__ledf2+0xa4>
1c00b6fc:	03400000 	andi	$r0,$r0,0x0
1c00b700:	5fffc5c0 	bne	$r14,$r0,-60(0x3ffc4) # 1c00b6c4 <__ledf2+0x84>
1c00b704:	00151986 	or	$r6,$r12,$r6
1c00b708:	5fffbcc0 	bne	$r6,$r0,-68(0x3ffbc) # 1c00b6c4 <__ledf2+0x84>
1c00b70c:	53ffbfff 	b	-68(0xfffffbc) # 1c00b6c8 <__ledf2+0x88>
1c00b710:	640019cd 	bge	$r14,$r13,24(0x18) # 1c00b728 <__ledf2+0xe8>
1c00b714:	024004e7 	sltui	$r7,$r7,1(0x1)
1c00b718:	00111c07 	sub.w	$r7,$r0,$r7
1c00b71c:	034008e7 	andi	$r7,$r7,0x2
1c00b720:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c00b724:	53ffc3ff 	b	-64(0xfffffc0) # 1c00b6e4 <__ledf2+0xa4>
1c00b728:	63ffc9ae 	blt	$r13,$r14,-56(0x3ffc8) # 1c00b6f0 <__ledf2+0xb0>
1c00b72c:	68001d90 	bltu	$r12,$r16,28(0x1c) # 1c00b748 <__ledf2+0x108>
1c00b730:	58002a0c 	beq	$r16,$r12,40(0x28) # 1c00b758 <__ledf2+0x118>
1c00b734:	00150007 	move	$r7,$r0
1c00b738:	6fffae0c 	bgeu	$r16,$r12,-84(0x3ffac) # 1c00b6e4 <__ledf2+0xa4>
1c00b73c:	5bffb8a0 	beq	$r5,$r0,-72(0x3ffb8) # 1c00b6f4 <__ledf2+0xb4>
1c00b740:	001500a7 	move	$r7,$r5
1c00b744:	53ffa3ff 	b	-96(0xfffffa0) # 1c00b6e4 <__ledf2+0xa4>
1c00b748:	02bffca5 	addi.w	$r5,$r5,-1(0xfff)
1c00b74c:	034008a7 	andi	$r7,$r5,0x2
1c00b750:	02bffce7 	addi.w	$r7,$r7,-1(0xfff)
1c00b754:	53ff93ff 	b	-112(0xfffff90) # 1c00b6e4 <__ledf2+0xa4>
1c00b758:	6bfff251 	bltu	$r18,$r17,-16(0x3fff0) # 1c00b748 <__ledf2+0x108>
1c00b75c:	00150007 	move	$r7,$r0
1c00b760:	6fff8632 	bgeu	$r17,$r18,-124(0x3ff84) # 1c00b6e4 <__ledf2+0xa4>
1c00b764:	53ffdbff 	b	-40(0xfffffd8) # 1c00b73c <__ledf2+0xfc>
1c00b768:	03400000 	andi	$r0,$r0,0x0
1c00b76c:	03400000 	andi	$r0,$r0,0x0

1c00b770 <__muldf3>:
__muldf3():
1c00b770:	02bf0063 	addi.w	$r3,$r3,-64(0xfc0)
1c00b774:	2980e077 	st.w	$r23,$r3,56(0x38)
1c00b778:	0044d0ad 	srli.w	$r13,$r5,0x14
1c00b77c:	14001ff7 	lu12i.w	$r23,255(0xff)
1c00b780:	2980d078 	st.w	$r24,$r3,52(0x34)
1c00b784:	2980807d 	st.w	$r29,$r3,32(0x20)
1c00b788:	03bffef7 	ori	$r23,$r23,0xfff
1c00b78c:	2980f061 	st.w	$r1,$r3,60(0x3c)
1c00b790:	2980c079 	st.w	$r25,$r3,48(0x30)
1c00b794:	2980b07a 	st.w	$r26,$r3,44(0x2c)
1c00b798:	2980a07b 	st.w	$r27,$r3,40(0x28)
1c00b79c:	2980907c 	st.w	$r28,$r3,36(0x24)
1c00b7a0:	2980707e 	st.w	$r30,$r3,28(0x1c)
1c00b7a4:	035ffdad 	andi	$r13,$r13,0x7ff
1c00b7a8:	00150098 	move	$r24,$r4
1c00b7ac:	0044fcbd 	srli.w	$r29,$r5,0x1f
1c00b7b0:	001496f7 	and	$r23,$r23,$r5
1c00b7b4:	580145a0 	beq	$r13,$r0,324(0x144) # 1c00b8f8 <__muldf3+0x188>
1c00b7b8:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00b7bc:	580205ac 	beq	$r13,$r12,516(0x204) # 1c00b9c0 <__muldf3+0x250>
1c00b7c0:	00408ee4 	slli.w	$r4,$r23,0x3
1c00b7c4:	0044f717 	srli.w	$r23,$r24,0x1d
1c00b7c8:	14010005 	lu12i.w	$r5,2048(0x800)
1c00b7cc:	001512f7 	or	$r23,$r23,$r4
1c00b7d0:	00408f1a 	slli.w	$r26,$r24,0x3
1c00b7d4:	02b005bb 	addi.w	$r27,$r13,-1023(0xc01)
1c00b7d8:	00150019 	move	$r25,$r0
1c00b7dc:	0015001c 	move	$r28,$r0
1c00b7e0:	001516f7 	or	$r23,$r23,$r5
1c00b7e4:	14001ff8 	lu12i.w	$r24,255(0xff)
1c00b7e8:	0044d0ed 	srli.w	$r13,$r7,0x14
1c00b7ec:	03bfff18 	ori	$r24,$r24,0xfff
1c00b7f0:	035ffdad 	andi	$r13,$r13,0x7ff
1c00b7f4:	0044fcfe 	srli.w	$r30,$r7,0x1f
1c00b7f8:	00149f18 	and	$r24,$r24,$r7
1c00b7fc:	580175a0 	beq	$r13,$r0,372(0x174) # 1c00b970 <__muldf3+0x200>
1c00b800:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00b804:	580055ac 	beq	$r13,$r12,84(0x54) # 1c00b858 <__muldf3+0xe8>
1c00b808:	00408f04 	slli.w	$r4,$r24,0x3
1c00b80c:	0044f4d8 	srli.w	$r24,$r6,0x1d
1c00b810:	14010007 	lu12i.w	$r7,2048(0x800)
1c00b814:	02b005ad 	addi.w	$r13,$r13,-1023(0xc01)
1c00b818:	00151318 	or	$r24,$r24,$r4
1c00b81c:	00408cd0 	slli.w	$r16,$r6,0x3
1c00b820:	0010377b 	add.w	$r27,$r27,$r13
1c00b824:	00150012 	move	$r18,$r0
1c00b828:	00151f18 	or	$r24,$r24,$r7
1c00b82c:	02803c0c 	addi.w	$r12,$r0,15(0xf)
1c00b830:	0015fbaf 	xor	$r15,$r29,$r30
1c00b834:	02800771 	addi.w	$r17,$r27,1(0x1)
1c00b838:	68024199 	bltu	$r12,$r25,576(0x240) # 1c00ba78 <__muldf3+0x308>
1c00b83c:	1dc7feee 	pcaddu12i	$r14,-114697(0xe3ff7)
1c00b840:	02a421ce 	addi.w	$r14,$r14,-1784(0x908)
1c00b844:	00408b39 	slli.w	$r25,$r25,0x2
1c00b848:	001065d9 	add.w	$r25,$r14,$r25
1c00b84c:	2880032c 	ld.w	$r12,$r25,0
1c00b850:	001031ce 	add.w	$r14,$r14,$r12
1c00b854:	4c0001c0 	jirl	$r0,$r14,0
1c00b858:	00151b10 	or	$r16,$r24,$r6
1c00b85c:	029fff7b 	addi.w	$r27,$r27,2047(0x7ff)
1c00b860:	5c01ca00 	bne	$r16,$r0,456(0x1c8) # 1c00ba28 <__muldf3+0x2b8>
1c00b864:	03800b39 	ori	$r25,$r25,0x2
1c00b868:	00150018 	move	$r24,$r0
1c00b86c:	02800812 	addi.w	$r18,$r0,2(0x2)
1c00b870:	53ffbfff 	b	-68(0xfffffbc) # 1c00b82c <__muldf3+0xbc>
1c00b874:	001503cf 	move	$r15,$r30
1c00b878:	00150317 	move	$r23,$r24
1c00b87c:	0015021a 	move	$r26,$r16
1c00b880:	0015025c 	move	$r28,$r18
1c00b884:	0280080c 	addi.w	$r12,$r0,2(0x2)
1c00b888:	58015b8c 	beq	$r28,$r12,344(0x158) # 1c00b9e0 <__muldf3+0x270>
1c00b88c:	02800c0c 	addi.w	$r12,$r0,3(0x3)
1c00b890:	58056b8c 	beq	$r28,$r12,1384(0x568) # 1c00bdf8 <__muldf3+0x688>
1c00b894:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c00b898:	5c03b78c 	bne	$r28,$r12,948(0x3b4) # 1c00bc4c <__muldf3+0x4dc>
1c00b89c:	0015000d 	move	$r13,$r0
1c00b8a0:	00150017 	move	$r23,$r0
1c00b8a4:	0015001a 	move	$r26,$r0
1c00b8a8:	14001fe5 	lu12i.w	$r5,255(0xff)
1c00b8ac:	03bffca5 	ori	$r5,$r5,0xfff
1c00b8b0:	001496f7 	and	$r23,$r23,$r5
1c00b8b4:	2880f061 	ld.w	$r1,$r3,60(0x3c)
1c00b8b8:	0040d1ad 	slli.w	$r13,$r13,0x14
1c00b8bc:	0040fdef 	slli.w	$r15,$r15,0x1f
1c00b8c0:	001536f7 	or	$r23,$r23,$r13
1c00b8c4:	00153ef7 	or	$r23,$r23,$r15
1c00b8c8:	00150344 	move	$r4,$r26
1c00b8cc:	001502e5 	move	$r5,$r23
1c00b8d0:	2880e077 	ld.w	$r23,$r3,56(0x38)
1c00b8d4:	2880d078 	ld.w	$r24,$r3,52(0x34)
1c00b8d8:	2880c079 	ld.w	$r25,$r3,48(0x30)
1c00b8dc:	2880b07a 	ld.w	$r26,$r3,44(0x2c)
1c00b8e0:	2880a07b 	ld.w	$r27,$r3,40(0x28)
1c00b8e4:	2880907c 	ld.w	$r28,$r3,36(0x24)
1c00b8e8:	2880807d 	ld.w	$r29,$r3,32(0x20)
1c00b8ec:	2880707e 	ld.w	$r30,$r3,28(0x1c)
1c00b8f0:	02810063 	addi.w	$r3,$r3,64(0x40)
1c00b8f4:	4c000020 	jirl	$r0,$r1,0
1c00b8f8:	001512fa 	or	$r26,$r23,$r4
1c00b8fc:	58011b40 	beq	$r26,$r0,280(0x118) # 1c00ba14 <__muldf3+0x2a4>
1c00b900:	29803067 	st.w	$r7,$r3,12(0xc)
1c00b904:	29802066 	st.w	$r6,$r3,8(0x8)
1c00b908:	5803e2e0 	beq	$r23,$r0,992(0x3e0) # 1c00bce8 <__muldf3+0x578>
1c00b90c:	001502e4 	move	$r4,$r23
1c00b910:	5414a000 	bl	5280(0x14a0) # 1c00cdb0 <__clzsi2>
1c00b914:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00b918:	28803067 	ld.w	$r7,$r3,12(0xc)
1c00b91c:	0015008d 	move	$r13,$r4
1c00b920:	02bfd48f 	addi.w	$r15,$r4,-11(0xff5)
1c00b924:	0280740e 	addi.w	$r14,$r0,29(0x1d)
1c00b928:	02bfe1ac 	addi.w	$r12,$r13,-8(0xff8)
1c00b92c:	00113dce 	sub.w	$r14,$r14,$r15
1c00b930:	001732f7 	sll.w	$r23,$r23,$r12
1c00b934:	0017331a 	sll.w	$r26,$r24,$r12
1c00b938:	0017bb18 	srl.w	$r24,$r24,$r14
1c00b93c:	00155f17 	or	$r23,$r24,$r23
1c00b940:	02b0341b 	addi.w	$r27,$r0,-1011(0xc0d)
1c00b944:	0011377b 	sub.w	$r27,$r27,$r13
1c00b948:	14001ff8 	lu12i.w	$r24,255(0xff)
1c00b94c:	0044d0ed 	srli.w	$r13,$r7,0x14
1c00b950:	03bfff18 	ori	$r24,$r24,0xfff
1c00b954:	035ffdad 	andi	$r13,$r13,0x7ff
1c00b958:	00150019 	move	$r25,$r0
1c00b95c:	0015001c 	move	$r28,$r0
1c00b960:	0044fcfe 	srli.w	$r30,$r7,0x1f
1c00b964:	00149f18 	and	$r24,$r24,$r7
1c00b968:	5ffe99a0 	bne	$r13,$r0,-360(0x3fe98) # 1c00b800 <__muldf3+0x90>
1c00b96c:	03400000 	andi	$r0,$r0,0x0
1c00b970:	00151b10 	or	$r16,$r24,$r6
1c00b974:	58007e00 	beq	$r16,$r0,124(0x7c) # 1c00b9f0 <__muldf3+0x280>
1c00b978:	58034300 	beq	$r24,$r0,832(0x340) # 1c00bcb8 <__muldf3+0x548>
1c00b97c:	00150304 	move	$r4,$r24
1c00b980:	29802066 	st.w	$r6,$r3,8(0x8)
1c00b984:	54142c00 	bl	5164(0x142c) # 1c00cdb0 <__clzsi2>
1c00b988:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00b98c:	0015008d 	move	$r13,$r4
1c00b990:	02bfd48e 	addi.w	$r14,$r4,-11(0xff5)
1c00b994:	0280740c 	addi.w	$r12,$r0,29(0x1d)
1c00b998:	02bfe1b0 	addi.w	$r16,$r13,-8(0xff8)
1c00b99c:	0011398c 	sub.w	$r12,$r12,$r14
1c00b9a0:	00174318 	sll.w	$r24,$r24,$r16
1c00b9a4:	001740d0 	sll.w	$r16,$r6,$r16
1c00b9a8:	0017b0c6 	srl.w	$r6,$r6,$r12
1c00b9ac:	001560d8 	or	$r24,$r6,$r24
1c00b9b0:	0011376d 	sub.w	$r13,$r27,$r13
1c00b9b4:	00150012 	move	$r18,$r0
1c00b9b8:	02b035bb 	addi.w	$r27,$r13,-1011(0xc0d)
1c00b9bc:	53fe73ff 	b	-400(0xffffe70) # 1c00b82c <__muldf3+0xbc>
1c00b9c0:	001512fa 	or	$r26,$r23,$r4
1c00b9c4:	5c003f40 	bne	$r26,$r0,60(0x3c) # 1c00ba00 <__muldf3+0x290>
1c00b9c8:	00150017 	move	$r23,$r0
1c00b9cc:	02802019 	addi.w	$r25,$r0,8(0x8)
1c00b9d0:	029ffc1b 	addi.w	$r27,$r0,2047(0x7ff)
1c00b9d4:	0280081c 	addi.w	$r28,$r0,2(0x2)
1c00b9d8:	53fe0fff 	b	-500(0xffffe0c) # 1c00b7e4 <__muldf3+0x74>
1c00b9dc:	03400000 	andi	$r0,$r0,0x0
1c00b9e0:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00b9e4:	00150017 	move	$r23,$r0
1c00b9e8:	0015001a 	move	$r26,$r0
1c00b9ec:	53febfff 	b	-324(0xffffebc) # 1c00b8a8 <__muldf3+0x138>
1c00b9f0:	03800739 	ori	$r25,$r25,0x1
1c00b9f4:	00150018 	move	$r24,$r0
1c00b9f8:	02800412 	addi.w	$r18,$r0,1(0x1)
1c00b9fc:	53fe33ff 	b	-464(0xffffe30) # 1c00b82c <__muldf3+0xbc>
1c00ba00:	0015009a 	move	$r26,$r4
1c00ba04:	02803019 	addi.w	$r25,$r0,12(0xc)
1c00ba08:	029ffc1b 	addi.w	$r27,$r0,2047(0x7ff)
1c00ba0c:	02800c1c 	addi.w	$r28,$r0,3(0x3)
1c00ba10:	53fdd7ff 	b	-556(0xffffdd4) # 1c00b7e4 <__muldf3+0x74>
1c00ba14:	00150017 	move	$r23,$r0
1c00ba18:	02801019 	addi.w	$r25,$r0,4(0x4)
1c00ba1c:	0015001b 	move	$r27,$r0
1c00ba20:	0280041c 	addi.w	$r28,$r0,1(0x1)
1c00ba24:	53fdc3ff 	b	-576(0xffffdc0) # 1c00b7e4 <__muldf3+0x74>
1c00ba28:	03800f39 	ori	$r25,$r25,0x3
1c00ba2c:	001500d0 	move	$r16,$r6
1c00ba30:	02800c12 	addi.w	$r18,$r0,3(0x3)
1c00ba34:	53fdfbff 	b	-520(0xffffdf8) # 1c00b82c <__muldf3+0xbc>
1c00ba38:	001503af 	move	$r15,$r29
1c00ba3c:	53fe4bff 	b	-440(0xffffe48) # 1c00b884 <__muldf3+0x114>
1c00ba40:	14001ff7 	lu12i.w	$r23,255(0xff)
1c00ba44:	0015000f 	move	$r15,$r0
1c00ba48:	02bffc1a 	addi.w	$r26,$r0,-1(0xfff)
1c00ba4c:	03bffef7 	ori	$r23,$r23,0xfff
1c00ba50:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00ba54:	53fe57ff 	b	-428(0xffffe54) # 1c00b8a8 <__muldf3+0x138>
1c00ba58:	14001005 	lu12i.w	$r5,128(0x80)
1c00ba5c:	14001fec 	lu12i.w	$r12,255(0xff)
1c00ba60:	001516f7 	or	$r23,$r23,$r5
1c00ba64:	03bffd8c 	ori	$r12,$r12,0xfff
1c00ba68:	001503af 	move	$r15,$r29
1c00ba6c:	0014b2f7 	and	$r23,$r23,$r12
1c00ba70:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00ba74:	53fe37ff 	b	-460(0xffffe34) # 1c00b8a8 <__muldf3+0x138>
1c00ba78:	140001ed 	lu12i.w	$r13,15(0xf)
1c00ba7c:	03bffdad 	ori	$r13,$r13,0xfff
1c00ba80:	0044c209 	srli.w	$r9,$r16,0x10
1c00ba84:	0044c348 	srli.w	$r8,$r26,0x10
1c00ba88:	0014b610 	and	$r16,$r16,$r13
1c00ba8c:	001c2514 	mul.w	$r20,$r8,$r9
1c00ba90:	0014b74c 	and	$r12,$r26,$r13
1c00ba94:	001c4193 	mul.w	$r19,$r12,$r16
1c00ba98:	001c4112 	mul.w	$r18,$r8,$r16
1c00ba9c:	0044c26e 	srli.w	$r14,$r19,0x10
1c00baa0:	001c312d 	mul.w	$r13,$r9,$r12
1c00baa4:	001049ad 	add.w	$r13,$r13,$r18
1c00baa8:	001035ce 	add.w	$r14,$r14,$r13
1c00baac:	6c000dd2 	bgeu	$r14,$r18,12(0xc) # 1c00bab8 <__muldf3+0x348>
1c00bab0:	1400020d 	lu12i.w	$r13,16(0x10)
1c00bab4:	00103694 	add.w	$r20,$r20,$r13
1c00bab8:	140001ed 	lu12i.w	$r13,15(0xf)
1c00babc:	03bffdad 	ori	$r13,$r13,0xfff
1c00bac0:	0044c305 	srli.w	$r5,$r24,0x10
1c00bac4:	0014b718 	and	$r24,$r24,$r13
1c00bac8:	001c3306 	mul.w	$r6,$r24,$r12
1c00bacc:	0014b673 	and	$r19,$r19,$r13
1c00bad0:	0044c1da 	srli.w	$r26,$r14,0x10
1c00bad4:	0014b5ce 	and	$r14,$r14,$r13
1c00bad8:	0040c1ce 	slli.w	$r14,$r14,0x10
1c00badc:	00104dd3 	add.w	$r19,$r14,$r19
1c00bae0:	001c30ac 	mul.w	$r12,$r5,$r12
1c00bae4:	0044c0cd 	srli.w	$r13,$r6,0x10
1c00bae8:	001c6112 	mul.w	$r18,$r8,$r24
1c00baec:	0010498c 	add.w	$r12,$r12,$r18
1c00baf0:	001c150e 	mul.w	$r14,$r8,$r5
1c00baf4:	001031ad 	add.w	$r13,$r13,$r12
1c00baf8:	6c000db2 	bgeu	$r13,$r18,12(0xc) # 1c00bb04 <__muldf3+0x394>
1c00bafc:	1400020c 	lu12i.w	$r12,16(0x10)
1c00bb00:	001031ce 	add.w	$r14,$r14,$r12
1c00bb04:	0044c1ac 	srli.w	$r12,$r13,0x10
1c00bb08:	00103988 	add.w	$r8,$r12,$r14
1c00bb0c:	140001ee 	lu12i.w	$r14,15(0xf)
1c00bb10:	03bffdce 	ori	$r14,$r14,0xfff
1c00bb14:	0014b9ad 	and	$r13,$r13,$r14
1c00bb18:	0014b8c6 	and	$r6,$r6,$r14
1c00bb1c:	0040c1ad 	slli.w	$r13,$r13,0x10
1c00bb20:	0014baee 	and	$r14,$r23,$r14
1c00bb24:	0044c2f7 	srli.w	$r23,$r23,0x10
1c00bb28:	001019a6 	add.w	$r6,$r13,$r6
1c00bb2c:	00101b5a 	add.w	$r26,$r26,$r6
1c00bb30:	001c41cd 	mul.w	$r13,$r14,$r16
1c00bb34:	001c392c 	mul.w	$r12,$r9,$r14
1c00bb38:	001c42f0 	mul.w	$r16,$r23,$r16
1c00bb3c:	001c5d24 	mul.w	$r4,$r9,$r23
1c00bb40:	0010418c 	add.w	$r12,$r12,$r16
1c00bb44:	0044c1a9 	srli.w	$r9,$r13,0x10
1c00bb48:	00103129 	add.w	$r9,$r9,$r12
1c00bb4c:	6c000d30 	bgeu	$r9,$r16,12(0xc) # 1c00bb58 <__muldf3+0x3e8>
1c00bb50:	1400020c 	lu12i.w	$r12,16(0x10)
1c00bb54:	00103084 	add.w	$r4,$r4,$r12
1c00bb58:	140001f0 	lu12i.w	$r16,15(0xf)
1c00bb5c:	03bffe10 	ori	$r16,$r16,0xfff
1c00bb60:	0014c1ac 	and	$r12,$r13,$r16
1c00bb64:	0014c12d 	and	$r13,$r9,$r16
1c00bb68:	0040c1ad 	slli.w	$r13,$r13,0x10
1c00bb6c:	0044c129 	srli.w	$r9,$r9,0x10
1c00bb70:	00101129 	add.w	$r9,$r9,$r4
1c00bb74:	001031ad 	add.w	$r13,$r13,$r12
1c00bb78:	001c3b0a 	mul.w	$r10,$r24,$r14
1c00bb7c:	001c38b2 	mul.w	$r18,$r5,$r14
1c00bb80:	001c62f8 	mul.w	$r24,$r23,$r24
1c00bb84:	001c5cb7 	mul.w	$r23,$r5,$r23
1c00bb88:	00106250 	add.w	$r16,$r18,$r24
1c00bb8c:	0044c145 	srli.w	$r5,$r10,0x10
1c00bb90:	001040b0 	add.w	$r16,$r5,$r16
1c00bb94:	6c000e18 	bgeu	$r16,$r24,12(0xc) # 1c00bba0 <__muldf3+0x430>
1c00bb98:	1400020c 	lu12i.w	$r12,16(0x10)
1c00bb9c:	001032f7 	add.w	$r23,$r23,$r12
1c00bba0:	140001ee 	lu12i.w	$r14,15(0xf)
1c00bba4:	03bffdce 	ori	$r14,$r14,0xfff
1c00bba8:	0014ba0c 	and	$r12,$r16,$r14
1c00bbac:	0014b94a 	and	$r10,$r10,$r14
1c00bbb0:	0040c18c 	slli.w	$r12,$r12,0x10
1c00bbb4:	0010535a 	add.w	$r26,$r26,$r20
1c00bbb8:	0010298c 	add.w	$r12,$r12,$r10
1c00bbbc:	00129b54 	sltu	$r20,$r26,$r6
1c00bbc0:	0010218c 	add.w	$r12,$r12,$r8
1c00bbc4:	00105185 	add.w	$r5,$r12,$r20
1c00bbc8:	0010375a 	add.w	$r26,$r26,$r13
1c00bbcc:	0012b74d 	sltu	$r13,$r26,$r13
1c00bbd0:	001024b2 	add.w	$r18,$r5,$r9
1c00bbd4:	0012a18c 	sltu	$r12,$r12,$r8
1c00bbd8:	0012d0a5 	sltu	$r5,$r5,$r20
1c00bbdc:	00103654 	add.w	$r20,$r18,$r13
1c00bbe0:	00151585 	or	$r5,$r12,$r5
1c00bbe4:	0044c210 	srli.w	$r16,$r16,0x10
1c00bbe8:	0012a649 	sltu	$r9,$r18,$r9
1c00bbec:	0012b68d 	sltu	$r13,$r20,$r13
1c00bbf0:	001040a5 	add.w	$r5,$r5,$r16
1c00bbf4:	00153529 	or	$r9,$r9,$r13
1c00bbf8:	0040a74e 	slli.w	$r14,$r26,0x9
1c00bbfc:	001024a5 	add.w	$r5,$r5,$r9
1c00bc00:	00154dd3 	or	$r19,$r14,$r19
1c00bc04:	00105ca5 	add.w	$r5,$r5,$r23
1c00bc08:	0044df5a 	srli.w	$r26,$r26,0x17
1c00bc0c:	0012cc13 	sltu	$r19,$r0,$r19
1c00bc10:	0044de84 	srli.w	$r4,$r20,0x17
1c00bc14:	0040a4a5 	slli.w	$r5,$r5,0x9
1c00bc18:	0040a68c 	slli.w	$r12,$r20,0x9
1c00bc1c:	1402000e 	lu12i.w	$r14,4096(0x1000)
1c00bc20:	00156a7a 	or	$r26,$r19,$r26
1c00bc24:	001510b7 	or	$r23,$r5,$r4
1c00bc28:	0015335a 	or	$r26,$r26,$r12
1c00bc2c:	0014baec 	and	$r12,$r23,$r14
1c00bc30:	5801c180 	beq	$r12,$r0,448(0x1c0) # 1c00bdf0 <__muldf3+0x680>
1c00bc34:	0044874d 	srli.w	$r13,$r26,0x1
1c00bc38:	0340075a 	andi	$r26,$r26,0x1
1c00bc3c:	0040feec 	slli.w	$r12,$r23,0x1f
1c00bc40:	001569ba 	or	$r26,$r13,$r26
1c00bc44:	0015335a 	or	$r26,$r26,$r12
1c00bc48:	004486f7 	srli.w	$r23,$r23,0x1
1c00bc4c:	028ffe2d 	addi.w	$r13,$r17,1023(0x3ff)
1c00bc50:	6400c40d 	bge	$r0,$r13,196(0xc4) # 1c00bd14 <__muldf3+0x5a4>
1c00bc54:	03401f4c 	andi	$r12,$r26,0x7
1c00bc58:	58002180 	beq	$r12,$r0,32(0x20) # 1c00bc78 <__muldf3+0x508>
1c00bc5c:	03403f4c 	andi	$r12,$r26,0xf
1c00bc60:	0280100e 	addi.w	$r14,$r0,4(0x4)
1c00bc64:	5800158e 	beq	$r12,$r14,20(0x14) # 1c00bc78 <__muldf3+0x508>
1c00bc68:	0280134c 	addi.w	$r12,$r26,4(0x4)
1c00bc6c:	0012e98e 	sltu	$r14,$r12,$r26
1c00bc70:	00103af7 	add.w	$r23,$r23,$r14
1c00bc74:	0015019a 	move	$r26,$r12
1c00bc78:	1402000c 	lu12i.w	$r12,4096(0x1000)
1c00bc7c:	0014b2ec 	and	$r12,$r23,$r12
1c00bc80:	58001580 	beq	$r12,$r0,20(0x14) # 1c00bc94 <__muldf3+0x524>
1c00bc84:	15fdffec 	lu12i.w	$r12,-4097(0xfefff)
1c00bc88:	03bffd8c 	ori	$r12,$r12,0xfff
1c00bc8c:	0290022d 	addi.w	$r13,$r17,1024(0x400)
1c00bc90:	0014b2f7 	and	$r23,$r23,$r12
1c00bc94:	029ff80c 	addi.w	$r12,$r0,2046(0x7fe)
1c00bc98:	63fd498d 	blt	$r12,$r13,-696(0x3fd48) # 1c00b9e0 <__muldf3+0x270>
1c00bc9c:	00448f4c 	srli.w	$r12,$r26,0x3
1c00bca0:	0040a6e5 	slli.w	$r5,$r23,0x9
1c00bca4:	0040f6fa 	slli.w	$r26,$r23,0x1d
1c00bca8:	035ffdad 	andi	$r13,$r13,0x7ff
1c00bcac:	0015335a 	or	$r26,$r26,$r12
1c00bcb0:	0044b0b7 	srli.w	$r23,$r5,0xc
1c00bcb4:	53fbf7ff 	b	-1036(0xffffbf4) # 1c00b8a8 <__muldf3+0x138>
1c00bcb8:	001500c4 	move	$r4,$r6
1c00bcbc:	29802066 	st.w	$r6,$r3,8(0x8)
1c00bcc0:	5410f000 	bl	4336(0x10f0) # 1c00cdb0 <__clzsi2>
1c00bcc4:	0280700c 	addi.w	$r12,$r0,28(0x1c)
1c00bcc8:	0280548e 	addi.w	$r14,$r4,21(0x15)
1c00bccc:	0280808d 	addi.w	$r13,$r4,32(0x20)
1c00bcd0:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00bcd4:	67fcc18e 	bge	$r12,$r14,-832(0x3fcc0) # 1c00b994 <__muldf3+0x224>
1c00bcd8:	02bfe084 	addi.w	$r4,$r4,-8(0xff8)
1c00bcdc:	00150010 	move	$r16,$r0
1c00bce0:	001710d8 	sll.w	$r24,$r6,$r4
1c00bce4:	53fccfff 	b	-820(0xffffccc) # 1c00b9b0 <__muldf3+0x240>
1c00bce8:	5410c800 	bl	4296(0x10c8) # 1c00cdb0 <__clzsi2>
1c00bcec:	0280700c 	addi.w	$r12,$r0,28(0x1c)
1c00bcf0:	0280548f 	addi.w	$r15,$r4,21(0x15)
1c00bcf4:	0280808d 	addi.w	$r13,$r4,32(0x20)
1c00bcf8:	28802066 	ld.w	$r6,$r3,8(0x8)
1c00bcfc:	28803067 	ld.w	$r7,$r3,12(0xc)
1c00bd00:	67fc258f 	bge	$r12,$r15,-988(0x3fc24) # 1c00b924 <__muldf3+0x1b4>
1c00bd04:	02bfe084 	addi.w	$r4,$r4,-8(0xff8)
1c00bd08:	0015001a 	move	$r26,$r0
1c00bd0c:	00171317 	sll.w	$r23,$r24,$r4
1c00bd10:	53fc33ff 	b	-976(0xffffc30) # 1c00b940 <__muldf3+0x1d0>
1c00bd14:	0280040c 	addi.w	$r12,$r0,1(0x1)
1c00bd18:	0011358c 	sub.w	$r12,$r12,$r13
1c00bd1c:	5c007da0 	bne	$r13,$r0,124(0x7c) # 1c00bd98 <__muldf3+0x628>
1c00bd20:	02907a31 	addi.w	$r17,$r17,1054(0x41e)
1c00bd24:	0017b350 	srl.w	$r16,$r26,$r12
1c00bd28:	0017475a 	sll.w	$r26,$r26,$r17
1c00bd2c:	001746f1 	sll.w	$r17,$r23,$r17
1c00bd30:	0012e81a 	sltu	$r26,$r0,$r26
1c00bd34:	00154230 	or	$r16,$r17,$r16
1c00bd38:	00156a10 	or	$r16,$r16,$r26
1c00bd3c:	0017b2ee 	srl.w	$r14,$r23,$r12
1c00bd40:	03401e0c 	andi	$r12,$r16,0x7
1c00bd44:	58002180 	beq	$r12,$r0,32(0x20) # 1c00bd64 <__muldf3+0x5f4>
1c00bd48:	03403e0c 	andi	$r12,$r16,0xf
1c00bd4c:	0280100d 	addi.w	$r13,$r0,4(0x4)
1c00bd50:	5800158d 	beq	$r12,$r13,20(0x14) # 1c00bd64 <__muldf3+0x5f4>
1c00bd54:	0280120c 	addi.w	$r12,$r16,4(0x4)
1c00bd58:	0012c18d 	sltu	$r13,$r12,$r16
1c00bd5c:	001035ce 	add.w	$r14,$r14,$r13
1c00bd60:	00150190 	move	$r16,$r12
1c00bd64:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00bd68:	0014b1cc 	and	$r12,$r14,$r12
1c00bd6c:	0280040d 	addi.w	$r13,$r0,1(0x1)
1c00bd70:	00150017 	move	$r23,$r0
1c00bd74:	0015001a 	move	$r26,$r0
1c00bd78:	5ffb3180 	bne	$r12,$r0,-1232(0x3fb30) # 1c00b8a8 <__muldf3+0x138>
1c00bd7c:	0040a5cc 	slli.w	$r12,$r14,0x9
1c00bd80:	0044b197 	srli.w	$r23,$r12,0xc
1c00bd84:	0040f5ce 	slli.w	$r14,$r14,0x1d
1c00bd88:	00448e1a 	srli.w	$r26,$r16,0x3
1c00bd8c:	0015000d 	move	$r13,$r0
1c00bd90:	00153b5a 	or	$r26,$r26,$r14
1c00bd94:	53fb17ff 	b	-1260(0xffffb14) # 1c00b8a8 <__muldf3+0x138>
1c00bd98:	0280e00e 	addi.w	$r14,$r0,56(0x38)
1c00bd9c:	63fb01cc 	blt	$r14,$r12,-1280(0x3fb00) # 1c00b89c <__muldf3+0x12c>
1c00bda0:	02807c0e 	addi.w	$r14,$r0,31(0x1f)
1c00bda4:	67ff7dcc 	bge	$r14,$r12,-132(0x3ff7c) # 1c00bd20 <__muldf3+0x5b0>
1c00bda8:	02bf8410 	addi.w	$r16,$r0,-31(0xfe1)
1c00bdac:	0011360d 	sub.w	$r13,$r16,$r13
1c00bdb0:	0280800e 	addi.w	$r14,$r0,32(0x20)
1c00bdb4:	0017b6f0 	srl.w	$r16,$r23,$r13
1c00bdb8:	5800118e 	beq	$r12,$r14,16(0x10) # 1c00bdc8 <__muldf3+0x658>
1c00bdbc:	0290fa2c 	addi.w	$r12,$r17,1086(0x43e)
1c00bdc0:	001732ec 	sll.w	$r12,$r23,$r12
1c00bdc4:	0015335a 	or	$r26,$r26,$r12
1c00bdc8:	0012e81a 	sltu	$r26,$r0,$r26
1c00bdcc:	00154350 	or	$r16,$r26,$r16
1c00bdd0:	03401e0e 	andi	$r14,$r16,0x7
1c00bdd4:	00150017 	move	$r23,$r0
1c00bdd8:	5bffb1c0 	beq	$r14,$r0,-80(0x3ffb0) # 1c00bd88 <__muldf3+0x618>
1c00bddc:	03403e0c 	andi	$r12,$r16,0xf
1c00bde0:	0280100d 	addi.w	$r13,$r0,4(0x4)
1c00bde4:	0015000e 	move	$r14,$r0
1c00bde8:	5fff6d8d 	bne	$r12,$r13,-148(0x3ff6c) # 1c00bd54 <__muldf3+0x5e4>
1c00bdec:	53ff93ff 	b	-112(0xfffff90) # 1c00bd7c <__muldf3+0x60c>
1c00bdf0:	00150371 	move	$r17,$r27
1c00bdf4:	53fe5bff 	b	-424(0xffffe58) # 1c00bc4c <__muldf3+0x4dc>
1c00bdf8:	1400100d 	lu12i.w	$r13,128(0x80)
1c00bdfc:	14001fec 	lu12i.w	$r12,255(0xff)
1c00be00:	001536f7 	or	$r23,$r23,$r13
1c00be04:	03bffd8c 	ori	$r12,$r12,0xfff
1c00be08:	0014b2f7 	and	$r23,$r23,$r12
1c00be0c:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00be10:	53fa9bff 	b	-1384(0xffffa98) # 1c00b8a8 <__muldf3+0x138>
1c00be14:	03400000 	andi	$r0,$r0,0x0
1c00be18:	03400000 	andi	$r0,$r0,0x0
1c00be1c:	03400000 	andi	$r0,$r0,0x0

1c00be20 <__subdf3>:
__subdf3():
1c00be20:	14001fed 	lu12i.w	$r13,255(0xff)
1c00be24:	03bffdad 	ori	$r13,$r13,0xfff
1c00be28:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c00be2c:	0044d0ec 	srli.w	$r12,$r7,0x14
1c00be30:	001495ae 	and	$r14,$r13,$r5
1c00be34:	00149dad 	and	$r13,$r13,$r7
1c00be38:	29805078 	st.w	$r24,$r3,20(0x14)
1c00be3c:	29804079 	st.w	$r25,$r3,16(0x10)
1c00be40:	2980307a 	st.w	$r26,$r3,12(0xc)
1c00be44:	0044d0b8 	srli.w	$r24,$r5,0x14
1c00be48:	0044f49a 	srli.w	$r26,$r4,0x1d
1c00be4c:	0044f4cf 	srli.w	$r15,$r6,0x1d
1c00be50:	00408dce 	slli.w	$r14,$r14,0x3
1c00be54:	00408dad 	slli.w	$r13,$r13,0x3
1c00be58:	29807061 	st.w	$r1,$r3,28(0x1c)
1c00be5c:	29806077 	st.w	$r23,$r3,24(0x18)
1c00be60:	035ffd8c 	andi	$r12,$r12,0x7ff
1c00be64:	029ffc11 	addi.w	$r17,$r0,2047(0x7ff)
1c00be68:	035fff18 	andi	$r24,$r24,0x7ff
1c00be6c:	0044fcb9 	srli.w	$r25,$r5,0x1f
1c00be70:	00153b4e 	or	$r14,$r26,$r14
1c00be74:	00408c92 	slli.w	$r18,$r4,0x3
1c00be78:	0044fce7 	srli.w	$r7,$r7,0x1f
1c00be7c:	001535ed 	or	$r13,$r15,$r13
1c00be80:	00408cd4 	slli.w	$r20,$r6,0x3
1c00be84:	58022d91 	beq	$r12,$r17,556(0x22c) # 1c00c0b0 <__subdf3+0x290>
1c00be88:	03c004e7 	xori	$r7,$r7,0x1
1c00be8c:	0011330f 	sub.w	$r15,$r24,$r12
1c00be90:	58018327 	beq	$r25,$r7,384(0x180) # 1c00c010 <__subdf3+0x1f0>
1c00be94:	64022c0f 	bge	$r0,$r15,556(0x22c) # 1c00c0c0 <__subdf3+0x2a0>
1c00be98:	58026980 	beq	$r12,$r0,616(0x268) # 1c00c100 <__subdf3+0x2e0>
1c00be9c:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00bea0:	001531ad 	or	$r13,$r13,$r12
1c00bea4:	5804b311 	beq	$r24,$r17,1200(0x4b0) # 1c00c354 <__subdf3+0x534>
1c00bea8:	001551b7 	or	$r23,$r13,$r20
1c00beac:	0280e00c 	addi.w	$r12,$r0,56(0x38)
1c00beb0:	0012dc17 	sltu	$r23,$r0,$r23
1c00beb4:	6000358f 	blt	$r12,$r15,52(0x34) # 1c00bee8 <__subdf3+0xc8>
1c00beb8:	02807c0c 	addi.w	$r12,$r0,31(0x1f)
1c00bebc:	6005858f 	blt	$r12,$r15,1412(0x584) # 1c00c440 <__subdf3+0x620>
1c00bec0:	0280800c 	addi.w	$r12,$r0,32(0x20)
1c00bec4:	0017be90 	srl.w	$r16,$r20,$r15
1c00bec8:	0017bdb1 	srl.w	$r17,$r13,$r15
1c00becc:	00113d8f 	sub.w	$r15,$r12,$r15
1c00bed0:	00173db7 	sll.w	$r23,$r13,$r15
1c00bed4:	00173e8f 	sll.w	$r15,$r20,$r15
1c00bed8:	001542f7 	or	$r23,$r23,$r16
1c00bedc:	0012bc0f 	sltu	$r15,$r0,$r15
1c00bee0:	001145ce 	sub.w	$r14,$r14,$r17
1c00bee4:	00153ef7 	or	$r23,$r23,$r15
1c00bee8:	00115e57 	sub.w	$r23,$r18,$r23
1c00beec:	0012de51 	sltu	$r17,$r18,$r23
1c00bef0:	001145d1 	sub.w	$r17,$r14,$r17
1c00bef4:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00bef8:	0014b22c 	and	$r12,$r17,$r12
1c00befc:	58033580 	beq	$r12,$r0,820(0x334) # 1c00c230 <__subdf3+0x410>
1c00bf00:	1400fffa 	lu12i.w	$r26,2047(0x7ff)
1c00bf04:	03bfff5a 	ori	$r26,$r26,0xfff
1c00bf08:	0014ea3a 	and	$r26,$r17,$r26
1c00bf0c:	58037740 	beq	$r26,$r0,884(0x374) # 1c00c280 <__subdf3+0x460>
1c00bf10:	00150344 	move	$r4,$r26
1c00bf14:	540e9c00 	bl	3740(0xe9c) # 1c00cdb0 <__clzsi2>
1c00bf18:	02bfe08e 	addi.w	$r14,$r4,-8(0xff8)
1c00bf1c:	0011380c 	sub.w	$r12,$r0,$r14
1c00bf20:	0017b2ec 	srl.w	$r12,$r23,$r12
1c00bf24:	00173b5a 	sll.w	$r26,$r26,$r14
1c00bf28:	00173af7 	sll.w	$r23,$r23,$r14
1c00bf2c:	0015699a 	or	$r26,$r12,$r26
1c00bf30:	600331d8 	blt	$r14,$r24,816(0x330) # 1c00c260 <__subdf3+0x440>
1c00bf34:	001161d8 	sub.w	$r24,$r14,$r24
1c00bf38:	02807c0d 	addi.w	$r13,$r0,31(0x1f)
1c00bf3c:	0280070c 	addi.w	$r12,$r24,1(0x1)
1c00bf40:	6004d1ac 	blt	$r13,$r12,1232(0x4d0) # 1c00c410 <__subdf3+0x5f0>
1c00bf44:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00bf48:	0017b2ee 	srl.w	$r14,$r23,$r12
1c00bf4c:	0017b351 	srl.w	$r17,$r26,$r12
1c00bf50:	001131ac 	sub.w	$r12,$r13,$r12
1c00bf54:	001732f7 	sll.w	$r23,$r23,$r12
1c00bf58:	0017335a 	sll.w	$r26,$r26,$r12
1c00bf5c:	00153b5a 	or	$r26,$r26,$r14
1c00bf60:	0012dc17 	sltu	$r23,$r0,$r23
1c00bf64:	00150018 	move	$r24,$r0
1c00bf68:	00155f57 	or	$r23,$r26,$r23
1c00bf6c:	03401eec 	andi	$r12,$r23,0x7
1c00bf70:	58002180 	beq	$r12,$r0,32(0x20) # 1c00bf90 <__subdf3+0x170>
1c00bf74:	03403eee 	andi	$r14,$r23,0xf
1c00bf78:	0280100c 	addi.w	$r12,$r0,4(0x4)
1c00bf7c:	580015cc 	beq	$r14,$r12,20(0x14) # 1c00bf90 <__subdf3+0x170>
1c00bf80:	028012ec 	addi.w	$r12,$r23,4(0x4)
1c00bf84:	0012dd8d 	sltu	$r13,$r12,$r23
1c00bf88:	00103631 	add.w	$r17,$r17,$r13
1c00bf8c:	00150197 	move	$r23,$r12
1c00bf90:	1401000e 	lu12i.w	$r14,2048(0x800)
1c00bf94:	0014ba2e 	and	$r14,$r17,$r14
1c00bf98:	5806bdc0 	beq	$r14,$r0,1724(0x6bc) # 1c00c654 <__subdf3+0x834>
1c00bf9c:	02800718 	addi.w	$r24,$r24,1(0x1)
1c00bfa0:	029ffc0c 	addi.w	$r12,$r0,2047(0x7ff)
1c00bfa4:	035fff0f 	andi	$r15,$r24,0x7ff
1c00bfa8:	5802ab0c 	beq	$r24,$r12,680(0x2a8) # 1c00c250 <__subdf3+0x430>
1c00bfac:	15feffed 	lu12i.w	$r13,-2049(0xff7ff)
1c00bfb0:	03bffdad 	ori	$r13,$r13,0xfff
1c00bfb4:	0014b62d 	and	$r13,$r17,$r13
1c00bfb8:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00bfbc:	00448ef7 	srli.w	$r23,$r23,0x3
1c00bfc0:	0040a5ad 	slli.w	$r13,$r13,0x9
1c00bfc4:	00155e10 	or	$r16,$r16,$r23
1c00bfc8:	0044b1ac 	srli.w	$r12,$r13,0xc
1c00bfcc:	14001fed 	lu12i.w	$r13,255(0xff)
1c00bfd0:	03bffdad 	ori	$r13,$r13,0xfff
1c00bfd4:	28807061 	ld.w	$r1,$r3,28(0x1c)
1c00bfd8:	0040d1ef 	slli.w	$r15,$r15,0x14
1c00bfdc:	0014b58c 	and	$r12,$r12,$r13
1c00bfe0:	0040ff25 	slli.w	$r5,$r25,0x1f
1c00bfe4:	00153d8c 	or	$r12,$r12,$r15
1c00bfe8:	0015158c 	or	$r12,$r12,$r5
1c00bfec:	28806077 	ld.w	$r23,$r3,24(0x18)
1c00bff0:	28805078 	ld.w	$r24,$r3,20(0x14)
1c00bff4:	28804079 	ld.w	$r25,$r3,16(0x10)
1c00bff8:	2880307a 	ld.w	$r26,$r3,12(0xc)
1c00bffc:	00150204 	move	$r4,$r16
1c00c000:	00150185 	move	$r5,$r12
1c00c004:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00c008:	4c000020 	jirl	$r0,$r1,0
1c00c00c:	03400000 	andi	$r0,$r0,0x0
1c00c010:	6401180f 	bge	$r0,$r15,280(0x118) # 1c00c128 <__subdf3+0x308>
1c00c014:	5801d180 	beq	$r12,$r0,464(0x1d0) # 1c00c1e4 <__subdf3+0x3c4>
1c00c018:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00c01c:	001531ad 	or	$r13,$r13,$r12
1c00c020:	58033711 	beq	$r24,$r17,820(0x334) # 1c00c354 <__subdf3+0x534>
1c00c024:	001551b7 	or	$r23,$r13,$r20
1c00c028:	0280e00c 	addi.w	$r12,$r0,56(0x38)
1c00c02c:	0012dc17 	sltu	$r23,$r0,$r23
1c00c030:	60002d8f 	blt	$r12,$r15,44(0x2c) # 1c00c05c <__subdf3+0x23c>
1c00c034:	02807c0c 	addi.w	$r12,$r0,31(0x1f)
1c00c038:	64045d8f 	bge	$r12,$r15,1116(0x45c) # 1c00c494 <__subdf3+0x674>
1c00c03c:	02808010 	addi.w	$r16,$r0,32(0x20)
1c00c040:	0017bdac 	srl.w	$r12,$r13,$r15
1c00c044:	580011f0 	beq	$r15,$r16,16(0x10) # 1c00c054 <__subdf3+0x234>
1c00c048:	00113c0f 	sub.w	$r15,$r0,$r15
1c00c04c:	00173db7 	sll.w	$r23,$r13,$r15
1c00c050:	00155e94 	or	$r20,$r20,$r23
1c00c054:	0012d017 	sltu	$r23,$r0,$r20
1c00c058:	001532f7 	or	$r23,$r23,$r12
1c00c05c:	00104af7 	add.w	$r23,$r23,$r18
1c00c060:	0012caf1 	sltu	$r17,$r23,$r18
1c00c064:	00103a31 	add.w	$r17,$r17,$r14
1c00c068:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00c06c:	0014b22c 	and	$r12,$r17,$r12
1c00c070:	5801c180 	beq	$r12,$r0,448(0x1c0) # 1c00c230 <__subdf3+0x410>
1c00c074:	02800718 	addi.w	$r24,$r24,1(0x1)
1c00c078:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00c07c:	0015000c 	move	$r12,$r0
1c00c080:	00150010 	move	$r16,$r0
1c00c084:	5bff4b0f 	beq	$r24,$r15,-184(0x3ff48) # 1c00bfcc <__subdf3+0x1ac>
1c00c088:	15feffed 	lu12i.w	$r13,-2049(0xff7ff)
1c00c08c:	03bffdad 	ori	$r13,$r13,0xfff
1c00c090:	004486ec 	srli.w	$r12,$r23,0x1
1c00c094:	0014b62d 	and	$r13,$r17,$r13
1c00c098:	034006f7 	andi	$r23,$r23,0x1
1c00c09c:	00155d97 	or	$r23,$r12,$r23
1c00c0a0:	0040fdac 	slli.w	$r12,$r13,0x1f
1c00c0a4:	004485b1 	srli.w	$r17,$r13,0x1
1c00c0a8:	00155d97 	or	$r23,$r12,$r23
1c00c0ac:	53fec3ff 	b	-320(0xffffec0) # 1c00bf6c <__subdf3+0x14c>
1c00c0b0:	001551b3 	or	$r19,$r13,$r20
1c00c0b4:	02a0070f 	addi.w	$r15,$r24,-2047(0x801)
1c00c0b8:	58006a60 	beq	$r19,$r0,104(0x68) # 1c00c120 <__subdf3+0x300>
1c00c0bc:	58006f27 	beq	$r25,$r7,108(0x6c) # 1c00c128 <__subdf3+0x308>
1c00c0c0:	5c00a9e0 	bne	$r15,$r0,168(0xa8) # 1c00c168 <__subdf3+0x348>
1c00c0c4:	0280070c 	addi.w	$r12,$r24,1(0x1)
1c00c0c8:	035ff98c 	andi	$r12,$r12,0x7fe
1c00c0cc:	5c01d980 	bne	$r12,$r0,472(0x1d8) # 1c00c2a4 <__subdf3+0x484>
1c00c0d0:	001549cc 	or	$r12,$r14,$r18
1c00c0d4:	001551b0 	or	$r16,$r13,$r20
1c00c0d8:	5c04c300 	bne	$r24,$r0,1216(0x4c0) # 1c00c598 <__subdf3+0x778>
1c00c0dc:	58042980 	beq	$r12,$r0,1064(0x428) # 1c00c504 <__subdf3+0x6e4>
1c00c0e0:	5c04e200 	bne	$r16,$r0,1248(0x4e0) # 1c00c5c0 <__subdf3+0x7a0>
1c00c0e4:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c0e8:	03bffdad 	ori	$r13,$r13,0xfff
1c00c0ec:	0040f5d7 	slli.w	$r23,$r14,0x1d
1c00c0f0:	001491b0 	and	$r16,$r13,$r4
1c00c0f4:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c0f8:	001542f0 	or	$r16,$r23,$r16
1c00c0fc:	5001f800 	b	504(0x1f8) # 1c00c2f4 <__subdf3+0x4d4>
1c00c100:	001551ac 	or	$r12,$r13,$r20
1c00c104:	5801d180 	beq	$r12,$r0,464(0x1d0) # 1c00c2d4 <__subdf3+0x4b4>
1c00c108:	02bffdec 	addi.w	$r12,$r15,-1(0xfff)
1c00c10c:	58042580 	beq	$r12,$r0,1060(0x424) # 1c00c530 <__subdf3+0x710>
1c00c110:	580455f1 	beq	$r15,$r17,1108(0x454) # 1c00c564 <__subdf3+0x744>
1c00c114:	0015018f 	move	$r15,$r12
1c00c118:	53fd93ff 	b	-624(0xffffd90) # 1c00bea8 <__subdf3+0x88>
1c00c11c:	03400000 	andi	$r0,$r0,0x0
1c00c120:	03c004e7 	xori	$r7,$r7,0x1
1c00c124:	5fff9f27 	bne	$r25,$r7,-100(0x3ff9c) # 1c00c0c0 <__subdf3+0x2a0>
1c00c128:	5c0249e0 	bne	$r15,$r0,584(0x248) # 1c00c370 <__subdf3+0x550>
1c00c12c:	0280070c 	addi.w	$r12,$r24,1(0x1)
1c00c130:	035ff990 	andi	$r16,$r12,0x7fe
1c00c134:	5c00ce00 	bne	$r16,$r0,204(0xcc) # 1c00c200 <__subdf3+0x3e0>
1c00c138:	001549cc 	or	$r12,$r14,$r18
1c00c13c:	5c01cf00 	bne	$r24,$r0,460(0x1cc) # 1c00c308 <__subdf3+0x4e8>
1c00c140:	58054980 	beq	$r12,$r0,1352(0x548) # 1c00c688 <__subdf3+0x868>
1c00c144:	001551ac 	or	$r12,$r13,$r20
1c00c148:	5c055d80 	bne	$r12,$r0,1372(0x55c) # 1c00c6a4 <__subdf3+0x884>
1c00c14c:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c150:	03bffdad 	ori	$r13,$r13,0xfff
1c00c154:	0040f5d0 	slli.w	$r16,$r14,0x1d
1c00c158:	001491ad 	and	$r13,$r13,$r4
1c00c15c:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c160:	001541b0 	or	$r16,$r13,$r16
1c00c164:	50019000 	b	400(0x190) # 1c00c2f4 <__subdf3+0x4d4>
1c00c168:	0011618f 	sub.w	$r15,$r12,$r24
1c00c16c:	001500f9 	move	$r25,$r7
1c00c170:	5c027300 	bne	$r24,$r0,624(0x270) # 1c00c3e0 <__subdf3+0x5c0>
1c00c174:	001549d0 	or	$r16,$r14,$r18
1c00c178:	58037200 	beq	$r16,$r0,880(0x370) # 1c00c4e8 <__subdf3+0x6c8>
1c00c17c:	02bffdf0 	addi.w	$r16,$r15,-1(0xfff)
1c00c180:	5804f200 	beq	$r16,$r0,1264(0x4f0) # 1c00c670 <__subdf3+0x850>
1c00c184:	029ffc11 	addi.w	$r17,$r0,2047(0x7ff)
1c00c188:	580269f1 	beq	$r15,$r17,616(0x268) # 1c00c3f0 <__subdf3+0x5d0>
1c00c18c:	0015020f 	move	$r15,$r16
1c00c190:	001549d7 	or	$r23,$r14,$r18
1c00c194:	0280e010 	addi.w	$r16,$r0,56(0x38)
1c00c198:	0012dc17 	sltu	$r23,$r0,$r23
1c00c19c:	6000360f 	blt	$r16,$r15,52(0x34) # 1c00c1d0 <__subdf3+0x3b0>
1c00c1a0:	02807c10 	addi.w	$r16,$r0,31(0x1f)
1c00c1a4:	6004520f 	blt	$r16,$r15,1104(0x450) # 1c00c5f4 <__subdf3+0x7d4>
1c00c1a8:	02808010 	addi.w	$r16,$r0,32(0x20)
1c00c1ac:	0017bdd1 	srl.w	$r17,$r14,$r15
1c00c1b0:	0017be57 	srl.w	$r23,$r18,$r15
1c00c1b4:	00113e0f 	sub.w	$r15,$r16,$r15
1c00c1b8:	00173dce 	sll.w	$r14,$r14,$r15
1c00c1bc:	00173e4f 	sll.w	$r15,$r18,$r15
1c00c1c0:	00155dd7 	or	$r23,$r14,$r23
1c00c1c4:	0012bc0e 	sltu	$r14,$r0,$r15
1c00c1c8:	001145ad 	sub.w	$r13,$r13,$r17
1c00c1cc:	00153af7 	or	$r23,$r23,$r14
1c00c1d0:	00115e97 	sub.w	$r23,$r20,$r23
1c00c1d4:	0012de91 	sltu	$r17,$r20,$r23
1c00c1d8:	00150198 	move	$r24,$r12
1c00c1dc:	001145b1 	sub.w	$r17,$r13,$r17
1c00c1e0:	53fd17ff 	b	-748(0xffffd14) # 1c00bef4 <__subdf3+0xd4>
1c00c1e4:	001551ac 	or	$r12,$r13,$r20
1c00c1e8:	58036180 	beq	$r12,$r0,864(0x360) # 1c00c548 <__subdf3+0x728>
1c00c1ec:	02bffdec 	addi.w	$r12,$r15,-1(0xfff)
1c00c1f0:	5802d180 	beq	$r12,$r0,720(0x2d0) # 1c00c4c0 <__subdf3+0x6a0>
1c00c1f4:	580425f1 	beq	$r15,$r17,1060(0x424) # 1c00c618 <__subdf3+0x7f8>
1c00c1f8:	0015018f 	move	$r15,$r12
1c00c1fc:	53fe2bff 	b	-472(0xffffe28) # 1c00c024 <__subdf3+0x204>
1c00c200:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00c204:	58004d8f 	beq	$r12,$r15,76(0x4c) # 1c00c250 <__subdf3+0x430>
1c00c208:	00105254 	add.w	$r20,$r18,$r20
1c00c20c:	0012ca91 	sltu	$r17,$r20,$r18
1c00c210:	001035da 	add.w	$r26,$r14,$r13
1c00c214:	0010474d 	add.w	$r13,$r26,$r17
1c00c218:	00448694 	srli.w	$r20,$r20,0x1
1c00c21c:	0040fdb7 	slli.w	$r23,$r13,0x1f
1c00c220:	00150198 	move	$r24,$r12
1c00c224:	004485b1 	srli.w	$r17,$r13,0x1
1c00c228:	001552f7 	or	$r23,$r23,$r20
1c00c22c:	03400000 	andi	$r0,$r0,0x0
1c00c230:	03401eec 	andi	$r12,$r23,0x7
1c00c234:	5ffd4180 	bne	$r12,$r0,-704(0x3fd40) # 1c00bf74 <__subdf3+0x154>
1c00c238:	00448ef7 	srli.w	$r23,$r23,0x3
1c00c23c:	0040f62d 	slli.w	$r13,$r17,0x1d
1c00c240:	00448e2c 	srli.w	$r12,$r17,0x3
1c00c244:	0015030f 	move	$r15,$r24
1c00c248:	001536f0 	or	$r16,$r23,$r13
1c00c24c:	5000a000 	b	160(0xa0) # 1c00c2ec <__subdf3+0x4cc>
1c00c250:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00c254:	0015000c 	move	$r12,$r0
1c00c258:	00150010 	move	$r16,$r0
1c00c25c:	53fd73ff 	b	-656(0xffffd70) # 1c00bfcc <__subdf3+0x1ac>
1c00c260:	15fefff1 	lu12i.w	$r17,-2049(0xff7ff)
1c00c264:	03bffe31 	ori	$r17,$r17,0xfff
1c00c268:	03401eec 	andi	$r12,$r23,0x7
1c00c26c:	00113b18 	sub.w	$r24,$r24,$r14
1c00c270:	0014c751 	and	$r17,$r26,$r17
1c00c274:	5ffd0180 	bne	$r12,$r0,-768(0x3fd00) # 1c00bf74 <__subdf3+0x154>
1c00c278:	53ffc3ff 	b	-64(0xfffffc0) # 1c00c238 <__subdf3+0x418>
1c00c27c:	03400000 	andi	$r0,$r0,0x0
1c00c280:	001502e4 	move	$r4,$r23
1c00c284:	540b2c00 	bl	2860(0xb2c) # 1c00cdb0 <__clzsi2>
1c00c288:	02807c0c 	addi.w	$r12,$r0,31(0x1f)
1c00c28c:	0280608e 	addi.w	$r14,$r4,24(0x18)
1c00c290:	67fc8d8e 	bge	$r12,$r14,-884(0x3fc8c) # 1c00bf1c <__subdf3+0xfc>
1c00c294:	02bfe09a 	addi.w	$r26,$r4,-8(0xff8)
1c00c298:	00176afa 	sll.w	$r26,$r23,$r26
1c00c29c:	00150017 	move	$r23,$r0
1c00c2a0:	53fc93ff 	b	-880(0xffffc90) # 1c00bf30 <__subdf3+0x110>
1c00c2a4:	00115257 	sub.w	$r23,$r18,$r20
1c00c2a8:	001135da 	sub.w	$r26,$r14,$r13
1c00c2ac:	0012de50 	sltu	$r16,$r18,$r23
1c00c2b0:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00c2b4:	0011435a 	sub.w	$r26,$r26,$r16
1c00c2b8:	0014b34c 	and	$r12,$r26,$r12
1c00c2bc:	5c02c580 	bne	$r12,$r0,708(0x2c4) # 1c00c580 <__subdf3+0x760>
1c00c2c0:	00156af0 	or	$r16,$r23,$r26
1c00c2c4:	5ffc4a00 	bne	$r16,$r0,-952(0x3fc48) # 1c00bf0c <__subdf3+0xec>
1c00c2c8:	0015000c 	move	$r12,$r0
1c00c2cc:	00150019 	move	$r25,$r0
1c00c2d0:	50002400 	b	36(0x24) # 1c00c2f4 <__subdf3+0x4d4>
1c00c2d4:	143ffff0 	lu12i.w	$r16,131071(0x1ffff)
1c00c2d8:	03bffe10 	ori	$r16,$r16,0xfff
1c00c2dc:	0040f5d7 	slli.w	$r23,$r14,0x1d
1c00c2e0:	00149210 	and	$r16,$r16,$r4
1c00c2e4:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c2e8:	00155e10 	or	$r16,$r16,$r23
1c00c2ec:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00c2f0:	580041ed 	beq	$r15,$r13,64(0x40) # 1c00c330 <__subdf3+0x510>
1c00c2f4:	14001fee 	lu12i.w	$r14,255(0xff)
1c00c2f8:	03bffdce 	ori	$r14,$r14,0xfff
1c00c2fc:	035ffdef 	andi	$r15,$r15,0x7ff
1c00c300:	0014b98c 	and	$r12,$r12,$r14
1c00c304:	53fccbff 	b	-824(0xffffcc8) # 1c00bfcc <__subdf3+0x1ac>
1c00c308:	5800e980 	beq	$r12,$r0,232(0xe8) # 1c00c3f0 <__subdf3+0x5d0>
1c00c30c:	001551b7 	or	$r23,$r13,$r20
1c00c310:	0040f5d0 	slli.w	$r16,$r14,0x1d
1c00c314:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c318:	5c0456e0 	bne	$r23,$r0,1108(0x454) # 1c00c76c <__subdf3+0x94c>
1c00c31c:	03bffdad 	ori	$r13,$r13,0xfff
1c00c320:	001491ad 	and	$r13,$r13,$r4
1c00c324:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c328:	001541b0 	or	$r16,$r13,$r16
1c00c32c:	03400000 	andi	$r0,$r0,0x0
1c00c330:	0015320d 	or	$r13,$r16,$r12
1c00c334:	580451a0 	beq	$r13,$r0,1104(0x450) # 1c00c784 <__subdf3+0x964>
1c00c338:	1400100e 	lu12i.w	$r14,128(0x80)
1c00c33c:	14001fed 	lu12i.w	$r13,255(0xff)
1c00c340:	0015398c 	or	$r12,$r12,$r14
1c00c344:	03bffdad 	ori	$r13,$r13,0xfff
1c00c348:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00c34c:	0014b58c 	and	$r12,$r12,$r13
1c00c350:	53fc7fff 	b	-900(0xffffc7c) # 1c00bfcc <__subdf3+0x1ac>
1c00c354:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c358:	03bffdad 	ori	$r13,$r13,0xfff
1c00c35c:	0040f5d7 	slli.w	$r23,$r14,0x1d
1c00c360:	001491b0 	and	$r16,$r13,$r4
1c00c364:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c368:	00155e10 	or	$r16,$r16,$r23
1c00c36c:	53ffc7ff 	b	-60(0xfffffc4) # 1c00c330 <__subdf3+0x510>
1c00c370:	0011618f 	sub.w	$r15,$r12,$r24
1c00c374:	5800f300 	beq	$r24,$r0,240(0xf0) # 1c00c464 <__subdf3+0x644>
1c00c378:	14010011 	lu12i.w	$r17,2048(0x800)
1c00c37c:	029ffc10 	addi.w	$r16,$r0,2047(0x7ff)
1c00c380:	001545ce 	or	$r14,$r14,$r17
1c00c384:	58006d90 	beq	$r12,$r16,108(0x6c) # 1c00c3f0 <__subdf3+0x5d0>
1c00c388:	001549d7 	or	$r23,$r14,$r18
1c00c38c:	0280e010 	addi.w	$r16,$r0,56(0x38)
1c00c390:	0012dc17 	sltu	$r23,$r0,$r23
1c00c394:	6000360f 	blt	$r16,$r15,52(0x34) # 1c00c3c8 <__subdf3+0x5a8>
1c00c398:	02807c10 	addi.w	$r16,$r0,31(0x1f)
1c00c39c:	60036a0f 	blt	$r16,$r15,872(0x368) # 1c00c704 <__subdf3+0x8e4>
1c00c3a0:	02808010 	addi.w	$r16,$r0,32(0x20)
1c00c3a4:	0017bdd1 	srl.w	$r17,$r14,$r15
1c00c3a8:	0017be57 	srl.w	$r23,$r18,$r15
1c00c3ac:	00113e0f 	sub.w	$r15,$r16,$r15
1c00c3b0:	00173dce 	sll.w	$r14,$r14,$r15
1c00c3b4:	00173e4f 	sll.w	$r15,$r18,$r15
1c00c3b8:	00155dd7 	or	$r23,$r14,$r23
1c00c3bc:	0012bc0e 	sltu	$r14,$r0,$r15
1c00c3c0:	001045ad 	add.w	$r13,$r13,$r17
1c00c3c4:	00153af7 	or	$r23,$r23,$r14
1c00c3c8:	001052f7 	add.w	$r23,$r23,$r20
1c00c3cc:	0012d2f1 	sltu	$r17,$r23,$r20
1c00c3d0:	00150198 	move	$r24,$r12
1c00c3d4:	00103631 	add.w	$r17,$r17,$r13
1c00c3d8:	53fc93ff 	b	-880(0xffffc90) # 1c00c068 <__subdf3+0x248>
1c00c3dc:	03400000 	andi	$r0,$r0,0x0
1c00c3e0:	14010011 	lu12i.w	$r17,2048(0x800)
1c00c3e4:	029ffc10 	addi.w	$r16,$r0,2047(0x7ff)
1c00c3e8:	001545ce 	or	$r14,$r14,$r17
1c00c3ec:	5ffda590 	bne	$r12,$r16,-604(0x3fda4) # 1c00c190 <__subdf3+0x370>
1c00c3f0:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00c3f4:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00c3f8:	00448dac 	srli.w	$r12,$r13,0x3
1c00c3fc:	03bffdcd 	ori	$r13,$r14,0xfff
1c00c400:	001499ad 	and	$r13,$r13,$r6
1c00c404:	00153610 	or	$r16,$r16,$r13
1c00c408:	53ff2bff 	b	-216(0xfffff28) # 1c00c330 <__subdf3+0x510>
1c00c40c:	03400000 	andi	$r0,$r0,0x0
1c00c410:	02bf8718 	addi.w	$r24,$r24,-31(0xfe1)
1c00c414:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00c418:	0017e34e 	srl.w	$r14,$r26,$r24
1c00c41c:	5800118d 	beq	$r12,$r13,16(0x10) # 1c00c42c <__subdf3+0x60c>
1c00c420:	0011300c 	sub.w	$r12,$r0,$r12
1c00c424:	0017335a 	sll.w	$r26,$r26,$r12
1c00c428:	00156af7 	or	$r23,$r23,$r26
1c00c42c:	0012dc17 	sltu	$r23,$r0,$r23
1c00c430:	00150011 	move	$r17,$r0
1c00c434:	00150018 	move	$r24,$r0
1c00c438:	00153af7 	or	$r23,$r23,$r14
1c00c43c:	53fdf7ff 	b	-524(0xffffdf4) # 1c00c230 <__subdf3+0x410>
1c00c440:	02808010 	addi.w	$r16,$r0,32(0x20)
1c00c444:	0017bdac 	srl.w	$r12,$r13,$r15
1c00c448:	580011f0 	beq	$r15,$r16,16(0x10) # 1c00c458 <__subdf3+0x638>
1c00c44c:	00113c0f 	sub.w	$r15,$r0,$r15
1c00c450:	00173db7 	sll.w	$r23,$r13,$r15
1c00c454:	00155e94 	or	$r20,$r20,$r23
1c00c458:	0012d017 	sltu	$r23,$r0,$r20
1c00c45c:	001532f7 	or	$r23,$r23,$r12
1c00c460:	53fa8bff 	b	-1400(0xffffa88) # 1c00bee8 <__subdf3+0xc8>
1c00c464:	001549d0 	or	$r16,$r14,$r18
1c00c468:	58026e00 	beq	$r16,$r0,620(0x26c) # 1c00c6d4 <__subdf3+0x8b4>
1c00c46c:	00105257 	add.w	$r23,$r18,$r20
1c00c470:	001035da 	add.w	$r26,$r14,$r13
1c00c474:	0012d2f1 	sltu	$r17,$r23,$r20
1c00c478:	02bffdf0 	addi.w	$r16,$r15,-1(0xfff)
1c00c47c:	00104751 	add.w	$r17,$r26,$r17
1c00c480:	58005200 	beq	$r16,$r0,80(0x50) # 1c00c4d0 <__subdf3+0x6b0>
1c00c484:	029ffc11 	addi.w	$r17,$r0,2047(0x7ff)
1c00c488:	5bff69f1 	beq	$r15,$r17,-152(0x3ff68) # 1c00c3f0 <__subdf3+0x5d0>
1c00c48c:	0015020f 	move	$r15,$r16
1c00c490:	53fefbff 	b	-264(0xffffef8) # 1c00c388 <__subdf3+0x568>
1c00c494:	0280800c 	addi.w	$r12,$r0,32(0x20)
1c00c498:	0017be90 	srl.w	$r16,$r20,$r15
1c00c49c:	0017bdb1 	srl.w	$r17,$r13,$r15
1c00c4a0:	00113d8f 	sub.w	$r15,$r12,$r15
1c00c4a4:	00173db7 	sll.w	$r23,$r13,$r15
1c00c4a8:	00173e8f 	sll.w	$r15,$r20,$r15
1c00c4ac:	001542f7 	or	$r23,$r23,$r16
1c00c4b0:	0012bc0f 	sltu	$r15,$r0,$r15
1c00c4b4:	001045ce 	add.w	$r14,$r14,$r17
1c00c4b8:	00153ef7 	or	$r23,$r23,$r15
1c00c4bc:	53fba3ff 	b	-1120(0xffffba0) # 1c00c05c <__subdf3+0x23c>
1c00c4c0:	00105257 	add.w	$r23,$r18,$r20
1c00c4c4:	001035da 	add.w	$r26,$r14,$r13
1c00c4c8:	0012caf1 	sltu	$r17,$r23,$r18
1c00c4cc:	00104751 	add.w	$r17,$r26,$r17
1c00c4d0:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00c4d4:	0014b22c 	and	$r12,$r17,$r12
1c00c4d8:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00c4dc:	5bfd5580 	beq	$r12,$r0,-684(0x3fd54) # 1c00c230 <__subdf3+0x410>
1c00c4e0:	02800818 	addi.w	$r24,$r0,2(0x2)
1c00c4e4:	53fba7ff 	b	-1116(0xffffba4) # 1c00c088 <__subdf3+0x268>
1c00c4e8:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00c4ec:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00c4f0:	00448dac 	srli.w	$r12,$r13,0x3
1c00c4f4:	03bffdcd 	ori	$r13,$r14,0xfff
1c00c4f8:	001499a6 	and	$r6,$r13,$r6
1c00c4fc:	001540d0 	or	$r16,$r6,$r16
1c00c500:	53fdefff 	b	-532(0xffffdec) # 1c00c2ec <__subdf3+0x4cc>
1c00c504:	00150019 	move	$r25,$r0
1c00c508:	5bfdee00 	beq	$r16,$r0,-532(0x3fdec) # 1c00c2f4 <__subdf3+0x4d4>
1c00c50c:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00c510:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00c514:	00448dac 	srli.w	$r12,$r13,0x3
1c00c518:	03bffdcd 	ori	$r13,$r14,0xfff
1c00c51c:	001499ad 	and	$r13,$r13,$r6
1c00c520:	001500f9 	move	$r25,$r7
1c00c524:	001541b0 	or	$r16,$r13,$r16
1c00c528:	53fdcfff 	b	-564(0xffffdcc) # 1c00c2f4 <__subdf3+0x4d4>
1c00c52c:	03400000 	andi	$r0,$r0,0x0
1c00c530:	00115257 	sub.w	$r23,$r18,$r20
1c00c534:	001135da 	sub.w	$r26,$r14,$r13
1c00c538:	0012de51 	sltu	$r17,$r18,$r23
1c00c53c:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00c540:	00114751 	sub.w	$r17,$r26,$r17
1c00c544:	53f9b3ff 	b	-1616(0xffff9b0) # 1c00bef4 <__subdf3+0xd4>
1c00c548:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c54c:	03bffdad 	ori	$r13,$r13,0xfff
1c00c550:	0040f5d7 	slli.w	$r23,$r14,0x1d
1c00c554:	001491b0 	and	$r16,$r13,$r4
1c00c558:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c55c:	00155e10 	or	$r16,$r16,$r23
1c00c560:	53fd8fff 	b	-628(0xffffd8c) # 1c00c2ec <__subdf3+0x4cc>
1c00c564:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c568:	03bffdad 	ori	$r13,$r13,0xfff
1c00c56c:	0040f5d0 	slli.w	$r16,$r14,0x1d
1c00c570:	001491a4 	and	$r4,$r13,$r4
1c00c574:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c578:	00151210 	or	$r16,$r16,$r4
1c00c57c:	53fdb7ff 	b	-588(0xffffdb4) # 1c00c330 <__subdf3+0x510>
1c00c580:	00114a97 	sub.w	$r23,$r20,$r18
1c00c584:	001139ba 	sub.w	$r26,$r13,$r14
1c00c588:	0012de94 	sltu	$r20,$r20,$r23
1c00c58c:	001500f9 	move	$r25,$r7
1c00c590:	0011535a 	sub.w	$r26,$r26,$r20
1c00c594:	53f97bff 	b	-1672(0xffff978) # 1c00bf0c <__subdf3+0xec>
1c00c598:	5c009d80 	bne	$r12,$r0,156(0x9c) # 1c00c634 <__subdf3+0x814>
1c00c59c:	58018e00 	beq	$r16,$r0,396(0x18c) # 1c00c728 <__subdf3+0x908>
1c00c5a0:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00c5a4:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00c5a8:	00448dac 	srli.w	$r12,$r13,0x3
1c00c5ac:	03bffdcd 	ori	$r13,$r14,0xfff
1c00c5b0:	001499ad 	and	$r13,$r13,$r6
1c00c5b4:	001500f9 	move	$r25,$r7
1c00c5b8:	00153610 	or	$r16,$r16,$r13
1c00c5bc:	53fd77ff 	b	-652(0xffffd74) # 1c00c330 <__subdf3+0x510>
1c00c5c0:	00115257 	sub.w	$r23,$r18,$r20
1c00c5c4:	001135da 	sub.w	$r26,$r14,$r13
1c00c5c8:	0012de51 	sltu	$r17,$r18,$r23
1c00c5cc:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00c5d0:	00114751 	sub.w	$r17,$r26,$r17
1c00c5d4:	0014b22c 	and	$r12,$r17,$r12
1c00c5d8:	58011980 	beq	$r12,$r0,280(0x118) # 1c00c6f0 <__subdf3+0x8d0>
1c00c5dc:	00114a97 	sub.w	$r23,$r20,$r18
1c00c5e0:	001139ba 	sub.w	$r26,$r13,$r14
1c00c5e4:	0012de91 	sltu	$r17,$r20,$r23
1c00c5e8:	001500f9 	move	$r25,$r7
1c00c5ec:	00114751 	sub.w	$r17,$r26,$r17
1c00c5f0:	53f97fff 	b	-1668(0xffff97c) # 1c00bf6c <__subdf3+0x14c>
1c00c5f4:	02808011 	addi.w	$r17,$r0,32(0x20)
1c00c5f8:	0017bdd0 	srl.w	$r16,$r14,$r15
1c00c5fc:	580011f1 	beq	$r15,$r17,16(0x10) # 1c00c60c <__subdf3+0x7ec>
1c00c600:	00113c0f 	sub.w	$r15,$r0,$r15
1c00c604:	00173dce 	sll.w	$r14,$r14,$r15
1c00c608:	00153a52 	or	$r18,$r18,$r14
1c00c60c:	0012c817 	sltu	$r23,$r0,$r18
1c00c610:	001542f7 	or	$r23,$r23,$r16
1c00c614:	53fbbfff 	b	-1092(0xffffbbc) # 1c00c1d0 <__subdf3+0x3b0>
1c00c618:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c61c:	03bffdad 	ori	$r13,$r13,0xfff
1c00c620:	0040f5d0 	slli.w	$r16,$r14,0x1d
1c00c624:	001491ad 	and	$r13,$r13,$r4
1c00c628:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c62c:	001541b0 	or	$r16,$r13,$r16
1c00c630:	53fd03ff 	b	-768(0xffffd00) # 1c00c330 <__subdf3+0x510>
1c00c634:	0040f5cf 	slli.w	$r15,$r14,0x1d
1c00c638:	143fffed 	lu12i.w	$r13,131071(0x1ffff)
1c00c63c:	5c010200 	bne	$r16,$r0,256(0x100) # 1c00c73c <__subdf3+0x91c>
1c00c640:	03bffdad 	ori	$r13,$r13,0xfff
1c00c644:	001491ad 	and	$r13,$r13,$r4
1c00c648:	00448dcc 	srli.w	$r12,$r14,0x3
1c00c64c:	00153db0 	or	$r16,$r13,$r15
1c00c650:	53fce3ff 	b	-800(0xffffce0) # 1c00c330 <__subdf3+0x510>
1c00c654:	00448ef0 	srli.w	$r16,$r23,0x3
1c00c658:	0040f62d 	slli.w	$r13,$r17,0x1d
1c00c65c:	00448e2c 	srli.w	$r12,$r17,0x3
1c00c660:	0015030f 	move	$r15,$r24
1c00c664:	00153610 	or	$r16,$r16,$r13
1c00c668:	53fc87ff 	b	-892(0xffffc84) # 1c00c2ec <__subdf3+0x4cc>
1c00c66c:	03400000 	andi	$r0,$r0,0x0
1c00c670:	00114a97 	sub.w	$r23,$r20,$r18
1c00c674:	001139ba 	sub.w	$r26,$r13,$r14
1c00c678:	0012de91 	sltu	$r17,$r20,$r23
1c00c67c:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00c680:	00114751 	sub.w	$r17,$r26,$r17
1c00c684:	53f873ff 	b	-1936(0xffff870) # 1c00bef4 <__subdf3+0xd4>
1c00c688:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00c68c:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00c690:	00448dac 	srli.w	$r12,$r13,0x3
1c00c694:	03bffdcd 	ori	$r13,$r14,0xfff
1c00c698:	001499ad 	and	$r13,$r13,$r6
1c00c69c:	00153610 	or	$r16,$r16,$r13
1c00c6a0:	53fc57ff 	b	-940(0xffffc54) # 1c00c2f4 <__subdf3+0x4d4>
1c00c6a4:	00105257 	add.w	$r23,$r18,$r20
1c00c6a8:	001035da 	add.w	$r26,$r14,$r13
1c00c6ac:	0012caf1 	sltu	$r17,$r23,$r18
1c00c6b0:	1401000c 	lu12i.w	$r12,2048(0x800)
1c00c6b4:	00104751 	add.w	$r17,$r26,$r17
1c00c6b8:	0014b22c 	and	$r12,$r17,$r12
1c00c6bc:	5bfb7580 	beq	$r12,$r0,-1164(0x3fb74) # 1c00c230 <__subdf3+0x410>
1c00c6c0:	15feffec 	lu12i.w	$r12,-2049(0xff7ff)
1c00c6c4:	03bffd8c 	ori	$r12,$r12,0xfff
1c00c6c8:	02800418 	addi.w	$r24,$r0,1(0x1)
1c00c6cc:	0014b231 	and	$r17,$r17,$r12
1c00c6d0:	53fb63ff 	b	-1184(0xffffb60) # 1c00c230 <__subdf3+0x410>
1c00c6d4:	143fffee 	lu12i.w	$r14,131071(0x1ffff)
1c00c6d8:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00c6dc:	00448dac 	srli.w	$r12,$r13,0x3
1c00c6e0:	03bffdcd 	ori	$r13,$r14,0xfff
1c00c6e4:	001499ad 	and	$r13,$r13,$r6
1c00c6e8:	00153610 	or	$r16,$r16,$r13
1c00c6ec:	53fc03ff 	b	-1024(0xffffc00) # 1c00c2ec <__subdf3+0x4cc>
1c00c6f0:	001546f0 	or	$r16,$r23,$r17
1c00c6f4:	5ffb3e00 	bne	$r16,$r0,-1220(0x3fb3c) # 1c00c230 <__subdf3+0x410>
1c00c6f8:	0015000c 	move	$r12,$r0
1c00c6fc:	00150019 	move	$r25,$r0
1c00c700:	53fbf7ff 	b	-1036(0xffffbf4) # 1c00c2f4 <__subdf3+0x4d4>
1c00c704:	02808011 	addi.w	$r17,$r0,32(0x20)
1c00c708:	0017bdd0 	srl.w	$r16,$r14,$r15
1c00c70c:	580011f1 	beq	$r15,$r17,16(0x10) # 1c00c71c <__subdf3+0x8fc>
1c00c710:	00113c0f 	sub.w	$r15,$r0,$r15
1c00c714:	00173dce 	sll.w	$r14,$r14,$r15
1c00c718:	00153a52 	or	$r18,$r18,$r14
1c00c71c:	0012c817 	sltu	$r23,$r0,$r18
1c00c720:	001542f7 	or	$r23,$r23,$r16
1c00c724:	53fca7ff 	b	-860(0xffffca4) # 1c00c3c8 <__subdf3+0x5a8>
1c00c728:	14001fec 	lu12i.w	$r12,255(0xff)
1c00c72c:	00150019 	move	$r25,$r0
1c00c730:	02bffc10 	addi.w	$r16,$r0,-1(0xfff)
1c00c734:	03bffd8c 	ori	$r12,$r12,0xfff
1c00c738:	53fc03ff 	b	-1024(0xffffc00) # 1c00c338 <__subdf3+0x518>
1c00c73c:	02bfe00c 	addi.w	$r12,$r0,-8(0xff8)
1c00c740:	03bffdad 	ori	$r13,$r13,0xfff
1c00c744:	0014b1ce 	and	$r14,$r14,$r12
1c00c748:	001491ac 	and	$r12,$r13,$r4
1c00c74c:	00153d8c 	or	$r12,$r12,$r15
1c00c750:	0044f58f 	srli.w	$r15,$r12,0x1d
1c00c754:	0014b58d 	and	$r13,$r12,$r13
1c00c758:	00153dcc 	or	$r12,$r14,$r15
1c00c75c:	0040f590 	slli.w	$r16,$r12,0x1d
1c00c760:	00153610 	or	$r16,$r16,$r13
1c00c764:	00448d8c 	srli.w	$r12,$r12,0x3
1c00c768:	53fbcbff 	b	-1080(0xffffbc8) # 1c00c330 <__subdf3+0x510>
1c00c76c:	02bfe00c 	addi.w	$r12,$r0,-8(0xff8)
1c00c770:	03bffdad 	ori	$r13,$r13,0xfff
1c00c774:	0014b1ce 	and	$r14,$r14,$r12
1c00c778:	001491ac 	and	$r12,$r13,$r4
1c00c77c:	0015418c 	or	$r12,$r12,$r16
1c00c780:	53ffd3ff 	b	-48(0xfffffd0) # 1c00c750 <__subdf3+0x930>
1c00c784:	00150010 	move	$r16,$r0
1c00c788:	029ffc0f 	addi.w	$r15,$r0,2047(0x7ff)
1c00c78c:	0015000c 	move	$r12,$r0
1c00c790:	53f83fff 	b	-1988(0xffff83c) # 1c00bfcc <__subdf3+0x1ac>
1c00c794:	03400000 	andi	$r0,$r0,0x0
1c00c798:	03400000 	andi	$r0,$r0,0x0
1c00c79c:	03400000 	andi	$r0,$r0,0x0

1c00c7a0 <__fixdfsi>:
__fixdfsi():
1c00c7a0:	14001fec 	lu12i.w	$r12,255(0xff)
1c00c7a4:	0044d0ad 	srli.w	$r13,$r5,0x14
1c00c7a8:	03bffd8c 	ori	$r12,$r12,0xfff
1c00c7ac:	028ff80e 	addi.w	$r14,$r0,1022(0x3fe)
1c00c7b0:	035ffdad 	andi	$r13,$r13,0x7ff
1c00c7b4:	0044fcaf 	srli.w	$r15,$r5,0x1f
1c00c7b8:	0014958c 	and	$r12,$r12,$r5
1c00c7bc:	64001dcd 	bge	$r14,$r13,28(0x1c) # 1c00c7d8 <__fixdfsi+0x38>
1c00c7c0:	0290740e 	addi.w	$r14,$r0,1053(0x41d)
1c00c7c4:	64001dcd 	bge	$r14,$r13,28(0x1c) # 1c00c7e0 <__fixdfsi+0x40>
1c00c7c8:	14ffffe4 	lu12i.w	$r4,524287(0x7ffff)
1c00c7cc:	03bffc84 	ori	$r4,$r4,0xfff
1c00c7d0:	001011e4 	add.w	$r4,$r15,$r4
1c00c7d4:	4c000020 	jirl	$r0,$r1,0
1c00c7d8:	00150004 	move	$r4,$r0
1c00c7dc:	4c000020 	jirl	$r0,$r1,0
1c00c7e0:	14002005 	lu12i.w	$r5,256(0x100)
1c00c7e4:	0290cc10 	addi.w	$r16,$r0,1075(0x433)
1c00c7e8:	02904c0e 	addi.w	$r14,$r0,1043(0x413)
1c00c7ec:	0015158c 	or	$r12,$r12,$r5
1c00c7f0:	001135ce 	sub.w	$r14,$r14,$r13
1c00c7f4:	02807c11 	addi.w	$r17,$r0,31(0x1f)
1c00c7f8:	00113610 	sub.w	$r16,$r16,$r13
1c00c7fc:	0017b98e 	srl.w	$r14,$r12,$r14
1c00c800:	60001630 	blt	$r17,$r16,20(0x14) # 1c00c814 <__fixdfsi+0x74>
1c00c804:	02afb5ad 	addi.w	$r13,$r13,-1043(0xbed)
1c00c808:	0017c084 	srl.w	$r4,$r4,$r16
1c00c80c:	0017358c 	sll.w	$r12,$r12,$r13
1c00c810:	0015118e 	or	$r14,$r12,$r4
1c00c814:	00113804 	sub.w	$r4,$r0,$r14
1c00c818:	5fffc5e0 	bne	$r15,$r0,-60(0x3ffc4) # 1c00c7dc <__fixdfsi+0x3c>
1c00c81c:	001501c4 	move	$r4,$r14
1c00c820:	4c000020 	jirl	$r0,$r1,0
1c00c824:	03400000 	andi	$r0,$r0,0x0
1c00c828:	03400000 	andi	$r0,$r0,0x0
1c00c82c:	03400000 	andi	$r0,$r0,0x0

1c00c830 <__floatsidf>:
__floatsidf():
1c00c830:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00c834:	29803061 	st.w	$r1,$r3,12(0xc)
1c00c838:	29802077 	st.w	$r23,$r3,8(0x8)
1c00c83c:	29801078 	st.w	$r24,$r3,4(0x4)
1c00c840:	58008880 	beq	$r4,$r0,136(0x88) # 1c00c8c8 <__floatsidf+0x98>
1c00c844:	0048fc8c 	srai.w	$r12,$r4,0x1f
1c00c848:	00159197 	xor	$r23,$r12,$r4
1c00c84c:	001132f7 	sub.w	$r23,$r23,$r12
1c00c850:	0044fc98 	srli.w	$r24,$r4,0x1f
1c00c854:	001502e4 	move	$r4,$r23
1c00c858:	54055800 	bl	1368(0x558) # 1c00cdb0 <__clzsi2>
1c00c85c:	0290780d 	addi.w	$r13,$r0,1054(0x41e)
1c00c860:	001111ad 	sub.w	$r13,$r13,$r4
1c00c864:	0280280c 	addi.w	$r12,$r0,10(0xa)
1c00c868:	035ffdad 	andi	$r13,$r13,0x7ff
1c00c86c:	6000a584 	blt	$r12,$r4,164(0xa4) # 1c00c910 <__floatsidf+0xe0>
1c00c870:	02802c0c 	addi.w	$r12,$r0,11(0xb)
1c00c874:	0011118c 	sub.w	$r12,$r12,$r4
1c00c878:	14001fef 	lu12i.w	$r15,255(0xff)
1c00c87c:	03bffdef 	ori	$r15,$r15,0xfff
1c00c880:	0017b2ec 	srl.w	$r12,$r23,$r12
1c00c884:	0014bd8c 	and	$r12,$r12,$r15
1c00c888:	14001fef 	lu12i.w	$r15,255(0xff)
1c00c88c:	03bffdef 	ori	$r15,$r15,0xfff
1c00c890:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00c894:	0040d1ad 	slli.w	$r13,$r13,0x14
1c00c898:	0014bd8c 	and	$r12,$r12,$r15
1c00c89c:	0280548e 	addi.w	$r14,$r4,21(0x15)
1c00c8a0:	0040ff18 	slli.w	$r24,$r24,0x1f
1c00c8a4:	0015358c 	or	$r12,$r12,$r13
1c00c8a8:	00173aee 	sll.w	$r14,$r23,$r14
1c00c8ac:	0015618c 	or	$r12,$r12,$r24
1c00c8b0:	28802077 	ld.w	$r23,$r3,8(0x8)
1c00c8b4:	28801078 	ld.w	$r24,$r3,4(0x4)
1c00c8b8:	001501c4 	move	$r4,$r14
1c00c8bc:	00150185 	move	$r5,$r12
1c00c8c0:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00c8c4:	4c000020 	jirl	$r0,$r1,0
1c00c8c8:	14001fef 	lu12i.w	$r15,255(0xff)
1c00c8cc:	0015000d 	move	$r13,$r0
1c00c8d0:	0015000c 	move	$r12,$r0
1c00c8d4:	03bffdef 	ori	$r15,$r15,0xfff
1c00c8d8:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00c8dc:	00150018 	move	$r24,$r0
1c00c8e0:	0040d1ad 	slli.w	$r13,$r13,0x14
1c00c8e4:	0014bd8c 	and	$r12,$r12,$r15
1c00c8e8:	0040ff18 	slli.w	$r24,$r24,0x1f
1c00c8ec:	0015358c 	or	$r12,$r12,$r13
1c00c8f0:	0015618c 	or	$r12,$r12,$r24
1c00c8f4:	0015000e 	move	$r14,$r0
1c00c8f8:	28802077 	ld.w	$r23,$r3,8(0x8)
1c00c8fc:	28801078 	ld.w	$r24,$r3,4(0x4)
1c00c900:	001501c4 	move	$r4,$r14
1c00c904:	00150185 	move	$r5,$r12
1c00c908:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00c90c:	4c000020 	jirl	$r0,$r1,0
1c00c910:	02bfd48c 	addi.w	$r12,$r4,-11(0xff5)
1c00c914:	14001fef 	lu12i.w	$r15,255(0xff)
1c00c918:	001732ec 	sll.w	$r12,$r23,$r12
1c00c91c:	03bffdef 	ori	$r15,$r15,0xfff
1c00c920:	0014bd8c 	and	$r12,$r12,$r15
1c00c924:	14001fef 	lu12i.w	$r15,255(0xff)
1c00c928:	03bffdef 	ori	$r15,$r15,0xfff
1c00c92c:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00c930:	0040d1ad 	slli.w	$r13,$r13,0x14
1c00c934:	0014bd8c 	and	$r12,$r12,$r15
1c00c938:	0040ff18 	slli.w	$r24,$r24,0x1f
1c00c93c:	0015358c 	or	$r12,$r12,$r13
1c00c940:	0015618c 	or	$r12,$r12,$r24
1c00c944:	0015000e 	move	$r14,$r0
1c00c948:	28802077 	ld.w	$r23,$r3,8(0x8)
1c00c94c:	28801078 	ld.w	$r24,$r3,4(0x4)
1c00c950:	001501c4 	move	$r4,$r14
1c00c954:	00150185 	move	$r5,$r12
1c00c958:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00c95c:	4c000020 	jirl	$r0,$r1,0

1c00c960 <__floatunsidf>:
__floatunsidf():
1c00c960:	02bfc063 	addi.w	$r3,$r3,-16(0xff0)
1c00c964:	29802077 	st.w	$r23,$r3,8(0x8)
1c00c968:	29803061 	st.w	$r1,$r3,12(0xc)
1c00c96c:	00150097 	move	$r23,$r4
1c00c970:	0015000d 	move	$r13,$r0
1c00c974:	0015000c 	move	$r12,$r0
1c00c978:	58003c80 	beq	$r4,$r0,60(0x3c) # 1c00c9b4 <__floatunsidf+0x54>
1c00c97c:	54043400 	bl	1076(0x434) # 1c00cdb0 <__clzsi2>
1c00c980:	0290780d 	addi.w	$r13,$r0,1054(0x41e)
1c00c984:	001111ad 	sub.w	$r13,$r13,$r4
1c00c988:	0280280c 	addi.w	$r12,$r0,10(0xa)
1c00c98c:	035ffdad 	andi	$r13,$r13,0x7ff
1c00c990:	60005184 	blt	$r12,$r4,80(0x50) # 1c00c9e0 <__floatunsidf+0x80>
1c00c994:	02802c0e 	addi.w	$r14,$r0,11(0xb)
1c00c998:	14001fef 	lu12i.w	$r15,255(0xff)
1c00c99c:	001111cc 	sub.w	$r12,$r14,$r4
1c00c9a0:	0017b2ec 	srl.w	$r12,$r23,$r12
1c00c9a4:	02805490 	addi.w	$r16,$r4,21(0x15)
1c00c9a8:	03bffdef 	ori	$r15,$r15,0xfff
1c00c9ac:	001742f7 	sll.w	$r23,$r23,$r16
1c00c9b0:	0014bd8c 	and	$r12,$r12,$r15
1c00c9b4:	14001fee 	lu12i.w	$r14,255(0xff)
1c00c9b8:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00c9bc:	03bffdce 	ori	$r14,$r14,0xfff
1c00c9c0:	0040d1ad 	slli.w	$r13,$r13,0x14
1c00c9c4:	0014b98c 	and	$r12,$r12,$r14
1c00c9c8:	0015358c 	or	$r12,$r12,$r13
1c00c9cc:	001502e4 	move	$r4,$r23
1c00c9d0:	00150185 	move	$r5,$r12
1c00c9d4:	28802077 	ld.w	$r23,$r3,8(0x8)
1c00c9d8:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00c9dc:	4c000020 	jirl	$r0,$r1,0
1c00c9e0:	02bfd484 	addi.w	$r4,$r4,-11(0xff5)
1c00c9e4:	14001fee 	lu12i.w	$r14,255(0xff)
1c00c9e8:	001712ec 	sll.w	$r12,$r23,$r4
1c00c9ec:	03bffdce 	ori	$r14,$r14,0xfff
1c00c9f0:	0014b98c 	and	$r12,$r12,$r14
1c00c9f4:	14001fee 	lu12i.w	$r14,255(0xff)
1c00c9f8:	28803061 	ld.w	$r1,$r3,12(0xc)
1c00c9fc:	03bffdce 	ori	$r14,$r14,0xfff
1c00ca00:	0040d1ad 	slli.w	$r13,$r13,0x14
1c00ca04:	0014b98c 	and	$r12,$r12,$r14
1c00ca08:	00150017 	move	$r23,$r0
1c00ca0c:	0015358c 	or	$r12,$r12,$r13
1c00ca10:	001502e4 	move	$r4,$r23
1c00ca14:	00150185 	move	$r5,$r12
1c00ca18:	28802077 	ld.w	$r23,$r3,8(0x8)
1c00ca1c:	02804063 	addi.w	$r3,$r3,16(0x10)
1c00ca20:	4c000020 	jirl	$r0,$r1,0
1c00ca24:	03400000 	andi	$r0,$r0,0x0
1c00ca28:	03400000 	andi	$r0,$r0,0x0
1c00ca2c:	03400000 	andi	$r0,$r0,0x0

1c00ca30 <__trunctfdf2>:
__trunctfdf2():
1c00ca30:	2880308f 	ld.w	$r15,$r4,12(0xc)
1c00ca34:	28800090 	ld.w	$r16,$r4,0
1c00ca38:	2880108d 	ld.w	$r13,$r4,4(0x4)
1c00ca3c:	02bf8063 	addi.w	$r3,$r3,-32(0xfe0)
1c00ca40:	28802094 	ld.w	$r20,$r4,8(0x8)
1c00ca44:	140000f2 	lu12i.w	$r18,7(0x7)
1c00ca48:	2980306f 	st.w	$r15,$r3,12(0xc)
1c00ca4c:	03bffe4e 	ori	$r14,$r18,0xfff
1c00ca50:	0044c1f1 	srli.w	$r17,$r15,0x10
1c00ca54:	2a403073 	ld.hu	$r19,$r3,12(0xc)
1c00ca58:	03bffa44 	ori	$r4,$r18,0xffe
1c00ca5c:	00408e8c 	slli.w	$r12,$r20,0x3
1c00ca60:	0044f5b2 	srli.w	$r18,$r13,0x1d
1c00ca64:	0014ba31 	and	$r17,$r17,$r14
1c00ca68:	00408dad 	slli.w	$r13,$r13,0x3
1c00ca6c:	0044f60e 	srli.w	$r14,$r16,0x1d
1c00ca70:	001539ae 	or	$r14,$r13,$r14
1c00ca74:	00153252 	or	$r18,$r18,$r12
1c00ca78:	00408e06 	slli.w	$r6,$r16,0x3
1c00ca7c:	02800625 	addi.w	$r5,$r17,1(0x1)
1c00ca80:	0044f694 	srli.w	$r20,$r20,0x1d
1c00ca84:	00408e6d 	slli.w	$r13,$r19,0x3
1c00ca88:	29806072 	st.w	$r18,$r3,24(0x18)
1c00ca8c:	2980506e 	st.w	$r14,$r3,20(0x14)
1c00ca90:	29804066 	st.w	$r6,$r3,16(0x10)
1c00ca94:	001490a4 	and	$r4,$r5,$r4
1c00ca98:	0044fdef 	srli.w	$r15,$r15,0x1f
1c00ca9c:	001551b3 	or	$r19,$r13,$r20
1c00caa0:	58005080 	beq	$r4,$r0,80(0x50) # 1c00caf0 <__trunctfdf2+0xc0>
1c00caa4:	15ffff8c 	lu12i.w	$r12,-4(0xffffc)
1c00caa8:	0390018c 	ori	$r12,$r12,0x400
1c00caac:	029ff80d 	addi.w	$r13,$r0,2046(0x7fe)
1c00cab0:	00103231 	add.w	$r17,$r17,$r12
1c00cab4:	6400e1b1 	bge	$r13,$r17,224(0xe0) # 1c00cb94 <__trunctfdf2+0x164>
1c00cab8:	029ffc14 	addi.w	$r20,$r0,2047(0x7ff)
1c00cabc:	0015000c 	move	$r12,$r0
1c00cac0:	00150010 	move	$r16,$r0
1c00cac4:	14001fed 	lu12i.w	$r13,255(0xff)
1c00cac8:	03bffdad 	ori	$r13,$r13,0xfff
1c00cacc:	0040d291 	slli.w	$r17,$r20,0x14
1c00cad0:	0014b58c 	and	$r12,$r12,$r13
1c00cad4:	0040fdef 	slli.w	$r15,$r15,0x1f
1c00cad8:	0015458c 	or	$r12,$r12,$r17
1c00cadc:	00153d8c 	or	$r12,$r12,$r15
1c00cae0:	00150204 	move	$r4,$r16
1c00cae4:	00150185 	move	$r5,$r12
1c00cae8:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00caec:	4c000020 	jirl	$r0,$r1,0
1c00caf0:	001549d0 	or	$r16,$r14,$r18
1c00caf4:	00154e10 	or	$r16,$r16,$r19
1c00caf8:	00151a10 	or	$r16,$r16,$r6
1c00cafc:	5c003620 	bne	$r17,$r0,52(0x34) # 1c00cb30 <__trunctfdf2+0x100>
1c00cb00:	00150014 	move	$r20,$r0
1c00cb04:	0015000c 	move	$r12,$r0
1c00cb08:	0280140e 	addi.w	$r14,$r0,5(0x5)
1c00cb0c:	5bffba00 	beq	$r16,$r0,-72(0x3ffb8) # 1c00cac4 <__trunctfdf2+0x94>
1c00cb10:	00448dd0 	srli.w	$r16,$r14,0x3
1c00cb14:	0040a58d 	slli.w	$r13,$r12,0x9
1c00cb18:	0040f58e 	slli.w	$r14,$r12,0x1d
1c00cb1c:	035ffe34 	andi	$r20,$r17,0x7ff
1c00cb20:	001541d0 	or	$r16,$r14,$r16
1c00cb24:	0044b1ac 	srli.w	$r12,$r13,0xc
1c00cb28:	53ff9fff 	b	-100(0xfffff9c) # 1c00cac4 <__trunctfdf2+0x94>
1c00cb2c:	03400000 	andi	$r0,$r0,0x0
1c00cb30:	5bff8a00 	beq	$r16,$r0,-120(0x3ff88) # 1c00cab8 <__trunctfdf2+0x88>
1c00cb34:	0044f24d 	srli.w	$r13,$r18,0x1c
1c00cb38:	00409273 	slli.w	$r19,$r19,0x4
1c00cb3c:	1400800c 	lu12i.w	$r12,1024(0x400)
1c00cb40:	00154dad 	or	$r13,$r13,$r19
1c00cb44:	001531ad 	or	$r13,$r13,$r12
1c00cb48:	0040f5b0 	slli.w	$r16,$r13,0x1d
1c00cb4c:	00448dac 	srli.w	$r12,$r13,0x3
1c00cb50:	14001fed 	lu12i.w	$r13,255(0xff)
1c00cb54:	0044f1ce 	srli.w	$r14,$r14,0x1c
1c00cb58:	00409252 	slli.w	$r18,$r18,0x4
1c00cb5c:	029ffc14 	addi.w	$r20,$r0,2047(0x7ff)
1c00cb60:	03bffdad 	ori	$r13,$r13,0xfff
1c00cb64:	001549ce 	or	$r14,$r14,$r18
1c00cb68:	0040d291 	slli.w	$r17,$r20,0x14
1c00cb6c:	0014b58c 	and	$r12,$r12,$r13
1c00cb70:	00448dce 	srli.w	$r14,$r14,0x3
1c00cb74:	0040fdef 	slli.w	$r15,$r15,0x1f
1c00cb78:	0015458c 	or	$r12,$r12,$r17
1c00cb7c:	001541d0 	or	$r16,$r14,$r16
1c00cb80:	00153d8c 	or	$r12,$r12,$r15
1c00cb84:	00150204 	move	$r4,$r16
1c00cb88:	00150185 	move	$r5,$r12
1c00cb8c:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00cb90:	4c000020 	jirl	$r0,$r1,0
1c00cb94:	6000ec11 	blt	$r0,$r17,236(0xec) # 1c00cc80 <__trunctfdf2+0x250>
1c00cb98:	02bf300c 	addi.w	$r12,$r0,-52(0xfcc)
1c00cb9c:	60018a2c 	blt	$r17,$r12,392(0x188) # 1c00cd24 <__trunctfdf2+0x2f4>
1c00cba0:	0280f40d 	addi.w	$r13,$r0,61(0x3d)
1c00cba4:	001145b1 	sub.w	$r17,$r13,$r17
1c00cba8:	1400100e 	lu12i.w	$r14,128(0x80)
1c00cbac:	00153a6d 	or	$r13,$r19,$r14
1c00cbb0:	0280406c 	addi.w	$r12,$r3,16(0x10)
1c00cbb4:	00489633 	srai.w	$r19,$r17,0x5
1c00cbb8:	0015018e 	move	$r14,$r12
1c00cbbc:	00408a70 	slli.w	$r16,$r19,0x2
1c00cbc0:	00150014 	move	$r20,$r0
1c00cbc4:	2980706d 	st.w	$r13,$r3,28(0x1c)
1c00cbc8:	00104192 	add.w	$r18,$r12,$r16
1c00cbcc:	028011ce 	addi.w	$r14,$r14,4(0x4)
1c00cbd0:	03407e31 	andi	$r17,$r17,0x1f
1c00cbd4:	00151a94 	or	$r20,$r20,$r6
1c00cbd8:	5800164e 	beq	$r18,$r14,20(0x14) # 1c00cbec <__trunctfdf2+0x1bc>
1c00cbdc:	288001c6 	ld.w	$r6,$r14,0
1c00cbe0:	028011ce 	addi.w	$r14,$r14,4(0x4)
1c00cbe4:	00151a94 	or	$r20,$r20,$r6
1c00cbe8:	5ffff64e 	bne	$r18,$r14,-12(0x3fff4) # 1c00cbdc <__trunctfdf2+0x1ac>
1c00cbec:	02800c0e 	addi.w	$r14,$r0,3(0x3)
1c00cbf0:	00114dce 	sub.w	$r14,$r14,$r19
1c00cbf4:	58015e20 	beq	$r17,$r0,348(0x15c) # 1c00cd50 <__trunctfdf2+0x320>
1c00cbf8:	02808064 	addi.w	$r4,$r3,32(0x20)
1c00cbfc:	00104084 	add.w	$r4,$r4,$r16
1c00cc00:	28bfc084 	ld.w	$r4,$r4,-16(0xff0)
1c00cc04:	02808005 	addi.w	$r5,$r0,32(0x20)
1c00cc08:	001144a5 	sub.w	$r5,$r5,$r17
1c00cc0c:	00171484 	sll.w	$r4,$r4,$r5
1c00cc10:	02800412 	addi.w	$r18,$r0,1(0x1)
1c00cc14:	00151294 	or	$r20,$r20,$r4
1c00cc18:	58004dc0 	beq	$r14,$r0,76(0x4c) # 1c00cc64 <__trunctfdf2+0x234>
1c00cc1c:	02bff006 	addi.w	$r6,$r0,-4(0xffc)
1c00cc20:	001c1a66 	mul.w	$r6,$r19,$r6
1c00cc24:	00104dc4 	add.w	$r4,$r14,$r19
1c00cc28:	00408884 	slli.w	$r4,$r4,0x2
1c00cc2c:	0010418d 	add.w	$r13,$r12,$r16
1c00cc30:	00101184 	add.w	$r4,$r12,$r4
1c00cc34:	288001b0 	ld.w	$r16,$r13,0
1c00cc38:	288011b2 	ld.w	$r18,$r13,4(0x4)
1c00cc3c:	001019a7 	add.w	$r7,$r13,$r6
1c00cc40:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c00cc44:	0017c610 	srl.w	$r16,$r16,$r17
1c00cc48:	00171652 	sll.w	$r18,$r18,$r5
1c00cc4c:	00154a10 	or	$r16,$r16,$r18
1c00cc50:	298000f0 	st.w	$r16,$r7,0
1c00cc54:	5fffe08d 	bne	$r4,$r13,-32(0x3ffe0) # 1c00cc34 <__trunctfdf2+0x204>
1c00cc58:	2880706d 	ld.w	$r13,$r3,28(0x1c)
1c00cc5c:	02801012 	addi.w	$r18,$r0,4(0x4)
1c00cc60:	00114e52 	sub.w	$r18,$r18,$r19
1c00cc64:	004089ce 	slli.w	$r14,$r14,0x2
1c00cc68:	02808070 	addi.w	$r16,$r3,32(0x20)
1c00cc6c:	0017c5ad 	srl.w	$r13,$r13,$r17
1c00cc70:	00103a0e 	add.w	$r14,$r16,$r14
1c00cc74:	29bfc1cd 	st.w	$r13,$r14,-16(0xff0)
1c00cc78:	5000fc00 	b	252(0xfc) # 1c00cd74 <__trunctfdf2+0x344>
1c00cc7c:	03400000 	andi	$r0,$r0,0x0
1c00cc80:	004091d0 	slli.w	$r16,$r14,0x4
1c00cc84:	00409254 	slli.w	$r20,$r18,0x4
1c00cc88:	0044f1ce 	srli.w	$r14,$r14,0x1c
1c00cc8c:	00151a10 	or	$r16,$r16,$r6
1c00cc90:	0044f24c 	srli.w	$r12,$r18,0x1c
1c00cc94:	0040926d 	slli.w	$r13,$r19,0x4
1c00cc98:	001551ce 	or	$r14,$r14,$r20
1c00cc9c:	0012c010 	sltu	$r16,$r0,$r16
1c00cca0:	0015358c 	or	$r12,$r12,$r13
1c00cca4:	00153a0e 	or	$r14,$r16,$r14
1c00cca8:	03401dcd 	andi	$r13,$r14,0x7
1c00ccac:	580011a0 	beq	$r13,$r0,16(0x10) # 1c00ccbc <__trunctfdf2+0x28c>
1c00ccb0:	03403dcd 	andi	$r13,$r14,0xf
1c00ccb4:	02801010 	addi.w	$r16,$r0,4(0x4)
1c00ccb8:	5c0079b0 	bne	$r13,$r16,120(0x78) # 1c00cd30 <__trunctfdf2+0x300>
1c00ccbc:	1401000d 	lu12i.w	$r13,2048(0x800)
1c00ccc0:	0014b58d 	and	$r13,$r12,$r13
1c00ccc4:	5bfe4da0 	beq	$r13,$r0,-436(0x3fe4c) # 1c00cb10 <__trunctfdf2+0xe0>
1c00ccc8:	02800631 	addi.w	$r17,$r17,1(0x1)
1c00cccc:	029ffc0d 	addi.w	$r13,$r0,2047(0x7ff)
1c00ccd0:	5bfdea2d 	beq	$r17,$r13,-536(0x3fde8) # 1c00cab8 <__trunctfdf2+0x88>
1c00ccd4:	15feffed 	lu12i.w	$r13,-2049(0xff7ff)
1c00ccd8:	03bffdad 	ori	$r13,$r13,0xfff
1c00ccdc:	0014b58d 	and	$r13,$r12,$r13
1c00cce0:	00448dd0 	srli.w	$r16,$r14,0x3
1c00cce4:	0040f5ae 	slli.w	$r14,$r13,0x1d
1c00cce8:	0040a5ad 	slli.w	$r13,$r13,0x9
1c00ccec:	0044b1ac 	srli.w	$r12,$r13,0xc
1c00ccf0:	14001fed 	lu12i.w	$r13,255(0xff)
1c00ccf4:	035ffe34 	andi	$r20,$r17,0x7ff
1c00ccf8:	03bffdad 	ori	$r13,$r13,0xfff
1c00ccfc:	0040d291 	slli.w	$r17,$r20,0x14
1c00cd00:	0014b58c 	and	$r12,$r12,$r13
1c00cd04:	0040fdef 	slli.w	$r15,$r15,0x1f
1c00cd08:	0015458c 	or	$r12,$r12,$r17
1c00cd0c:	001541d0 	or	$r16,$r14,$r16
1c00cd10:	00153d8c 	or	$r12,$r12,$r15
1c00cd14:	00150204 	move	$r4,$r16
1c00cd18:	00150185 	move	$r5,$r12
1c00cd1c:	02808063 	addi.w	$r3,$r3,32(0x20)
1c00cd20:	4c000020 	jirl	$r0,$r1,0
1c00cd24:	0015000c 	move	$r12,$r0
1c00cd28:	0280040e 	addi.w	$r14,$r0,1(0x1)
1c00cd2c:	00150011 	move	$r17,$r0
1c00cd30:	027ff1d0 	sltui	$r16,$r14,-4(0xffc)
1c00cd34:	03c00610 	xori	$r16,$r16,0x1
1c00cd38:	1401000d 	lu12i.w	$r13,2048(0x800)
1c00cd3c:	0010418c 	add.w	$r12,$r12,$r16
1c00cd40:	028011ce 	addi.w	$r14,$r14,4(0x4)
1c00cd44:	0014b58d 	and	$r13,$r12,$r13
1c00cd48:	53ff7fff 	b	-132(0xfffff7c) # 1c00ccc4 <__trunctfdf2+0x294>
1c00cd4c:	03400000 	andi	$r0,$r0,0x0
1c00cd50:	0015018d 	move	$r13,$r12
1c00cd54:	001041b2 	add.w	$r18,$r13,$r16
1c00cd58:	28800252 	ld.w	$r18,$r18,0
1c00cd5c:	028011ad 	addi.w	$r13,$r13,4(0x4)
1c00cd60:	02800631 	addi.w	$r17,$r17,1(0x1)
1c00cd64:	29bff1b2 	st.w	$r18,$r13,-4(0xffc)
1c00cd68:	67ffedd1 	bge	$r14,$r17,-20(0x3ffec) # 1c00cd54 <__trunctfdf2+0x324>
1c00cd6c:	02801012 	addi.w	$r18,$r0,4(0x4)
1c00cd70:	00114e52 	sub.w	$r18,$r18,$r19
1c00cd74:	00408a52 	slli.w	$r18,$r18,0x2
1c00cd78:	0280418d 	addi.w	$r13,$r12,16(0x10)
1c00cd7c:	0010498c 	add.w	$r12,$r12,$r18
1c00cd80:	29800180 	st.w	$r0,$r12,0
1c00cd84:	0280118c 	addi.w	$r12,$r12,4(0x4)
1c00cd88:	5ffff9ac 	bne	$r13,$r12,-8(0x3fff8) # 1c00cd80 <__trunctfdf2+0x350>
1c00cd8c:	2880406d 	ld.w	$r13,$r3,16(0x10)
1c00cd90:	2880506c 	ld.w	$r12,$r3,20(0x14)
1c00cd94:	0012d00e 	sltu	$r14,$r0,$r20
1c00cd98:	00150011 	move	$r17,$r0
1c00cd9c:	001535ce 	or	$r14,$r14,$r13
1c00cda0:	53ff0bff 	b	-248(0xfffff08) # 1c00cca8 <__trunctfdf2+0x278>
1c00cda4:	03400000 	andi	$r0,$r0,0x0
1c00cda8:	03400000 	andi	$r0,$r0,0x0
1c00cdac:	03400000 	andi	$r0,$r0,0x0

1c00cdb0 <__clzsi2>:
__clzsi2():
1c00cdb0:	1400020c 	lu12i.w	$r12,16(0x10)
1c00cdb4:	6c004c8c 	bgeu	$r4,$r12,76(0x4c) # 1c00ce00 <__clzsi2+0x50>
1c00cdb8:	0283fc0c 	addi.w	$r12,$r0,255(0xff)
1c00cdbc:	0280800d 	addi.w	$r13,$r0,32(0x20)
1c00cdc0:	68002184 	bltu	$r12,$r4,32(0x20) # 1c00cde0 <__clzsi2+0x30>
1c00cdc4:	1dc7fecc 	pcaddu12i	$r12,-114698(0xe3ff6)
1c00cdc8:	28bab18c 	ld.w	$r12,$r12,-340(0xeac)
1c00cdcc:	0010118c 	add.w	$r12,$r12,$r4
1c00cdd0:	2a000184 	ld.bu	$r4,$r12,0
1c00cdd4:	001111a4 	sub.w	$r4,$r13,$r4
1c00cdd8:	4c000020 	jirl	$r0,$r1,0
1c00cddc:	03400000 	andi	$r0,$r0,0x0
1c00cde0:	0044a084 	srli.w	$r4,$r4,0x8
1c00cde4:	1dc7fecc 	pcaddu12i	$r12,-114698(0xe3ff6)
1c00cde8:	28ba318c 	ld.w	$r12,$r12,-372(0xe8c)
1c00cdec:	0010118c 	add.w	$r12,$r12,$r4
1c00cdf0:	2a000184 	ld.bu	$r4,$r12,0
1c00cdf4:	0280600d 	addi.w	$r13,$r0,24(0x18)
1c00cdf8:	001111a4 	sub.w	$r4,$r13,$r4
1c00cdfc:	4c000020 	jirl	$r0,$r1,0
1c00ce00:	1402000c 	lu12i.w	$r12,4096(0x1000)
1c00ce04:	6800248c 	bltu	$r4,$r12,36(0x24) # 1c00ce28 <__clzsi2+0x78>
1c00ce08:	0044e084 	srli.w	$r4,$r4,0x18
1c00ce0c:	1dc7fecc 	pcaddu12i	$r12,-114698(0xe3ff6)
1c00ce10:	28b9918c 	ld.w	$r12,$r12,-412(0xe64)
1c00ce14:	0010118c 	add.w	$r12,$r12,$r4
1c00ce18:	2a000184 	ld.bu	$r4,$r12,0
1c00ce1c:	0280200d 	addi.w	$r13,$r0,8(0x8)
1c00ce20:	001111a4 	sub.w	$r4,$r13,$r4
1c00ce24:	4c000020 	jirl	$r0,$r1,0
1c00ce28:	0044c084 	srli.w	$r4,$r4,0x10
1c00ce2c:	1dc7fecc 	pcaddu12i	$r12,-114698(0xe3ff6)
1c00ce30:	28b9118c 	ld.w	$r12,$r12,-444(0xe44)
1c00ce34:	0010118c 	add.w	$r12,$r12,$r4
1c00ce38:	2a000184 	ld.bu	$r4,$r12,0
1c00ce3c:	0280400d 	addi.w	$r13,$r0,16(0x10)
1c00ce40:	001111a4 	sub.w	$r4,$r13,$r4
1c00ce44:	4c000020 	jirl	$r0,$r1,0
1c00ce48:	03400000 	andi	$r0,$r0,0x0
1c00ce4c:	03400000 	andi	$r0,$r0,0x0

Disassembly of section .eh_frame:

1c00ce50 <.eh_frame>:
1c00ce50:	00000010 	0x00000010
1c00ce54:	00000000 	0x00000000
1c00ce58:	00527a01 	0x00527a01
1c00ce5c:	01017c01 	fadd.d	$f1,$f0,$f31
1c00ce60:	00030d0b 	0x00030d0b
1c00ce64:	00000028 	0x00000028
1c00ce68:	00000018 	0x00000018
1c00ce6c:	1c0098c0 	pcaddu12i	$r0,1222(0x4c6)
1c00ce70:	0000053c 	0x0000053c
1c00ce74:	100e4400 	addu16i.d	$r0,$r0,913(0x391)
1c00ce78:	0a011403 	0x0a011403
1c00ce7c:	0b48000e 	0x0b48000e
1c00ce80:	0a010403 	0x0a010403
1c00ce84:	0b44000e 	0x0b44000e
1c00ce88:	0a01e003 	0x0a01e003
1c00ce8c:	0b48000e 	0x0b48000e
1c00ce90:	00000028 	0x00000028
1c00ce94:	00000044 	0x00000044
1c00ce98:	1c009e00 	pcaddu12i	$r0,1264(0x4f0)
1c00ce9c:	000004f8 	0x000004f8
1c00cea0:	100e4400 	addu16i.d	$r0,$r0,913(0x391)
1c00cea4:	0a010403 	0x0a010403
1c00cea8:	0b48000e 	0x0b48000e
1c00ceac:	0a014803 	0x0a014803
1c00ceb0:	0b48000e 	0x0b48000e
1c00ceb4:	0a025803 	0x0a025803
1c00ceb8:	0b48000e 	0x0b48000e

Disassembly of section .ex_table_base:

00001000 <_ex_table_base_start>:
	...

Disassembly of section .pmon_vector:

00001500 <_pmon_vector_start>:
	...

Disassembly of section .rodata:

00001a00 <zeroes.4161-0x3d8>:
    1a00:	6174730a 	blt	$r24,$r10,95344(0x17470) # 18e70 <_bss_end+0x161a0>
    1a04:	73206b63 	0x73206b63
    1a08:	74726174 	xvmin.b	$xr20,$xr11,$xr24
    1a0c:	64646120 	bge	$r9,$r0,25696(0x6460) # 7e6c <_bss_end+0x519c>
    1a10:	73736572 	0x73736572
    1a14:	3a736920 	0x3a736920
    1a18:	0a000a20 	0x0a000a20
    1a1c:	63617473 	blt	$r3,$r19,-40588(0x36174) # ffff7b90 <_etext+0xe3fead40>
    1a20:	6e65206b 	bgeu	$r3,$r11,-105184(0x26520) # fffe7f40 <_etext+0xe3fdb0f0>
    1a24:	64612064 	bge	$r3,$r4,24864(0x6120) # 7b44 <_bss_end+0x4e74>
    1a28:	73657264 	vssrani.wu.d	$vr4,$vr19,0x1c
    1a2c:	73692073 	vssrarni.w.d	$vr19,$vr3,0x8
    1a30:	000a203a 	0x000a203a
    1a34:	6165680a 	blt	$r0,$r10,91496(0x16568) # 17f9c <_bss_end+0x152cc>
    1a38:	74732070 	xvmin.w	$xr16,$xr3,$xr8
    1a3c:	20747261 	ll.w	$r1,$r19,29808(0x7470)
    1a40:	72646461 	0x72646461
    1a44:	20737365 	ll.w	$r5,$r27,29552(0x7370)
    1a48:	203a7369 	ll.w	$r9,$r27,14960(0x3a70)
    1a4c:	680a000a 	bltu	$r0,$r10,2560(0xa00) # 244c <impure_data+0x1bc>
    1a50:	20706165 	ll.w	$r5,$r11,28768(0x7060)
    1a54:	20646e65 	ll.w	$r5,$r19,25708(0x646c)
    1a58:	72646461 	0x72646461
    1a5c:	20737365 	ll.w	$r5,$r27,29552(0x7370)
    1a60:	203a7369 	ll.w	$r9,$r27,14960(0x3a70)
    1a64:	620a000a 	blt	$r0,$r10,-128512(0x20a00) # fffe2464 <_etext+0xe3fd5614>
    1a68:	73207373 	0x73207373
    1a6c:	74726174 	xvmin.b	$xr20,$xr11,$xr24
    1a70:	64646120 	bge	$r9,$r0,25696(0x6460) # 7ed0 <_bss_end+0x5200>
    1a74:	73736572 	0x73736572
    1a78:	3a736920 	0x3a736920
    1a7c:	0a000a20 	0x0a000a20
    1a80:	20737362 	ll.w	$r2,$r27,29552(0x7370)
    1a84:	20646e65 	ll.w	$r5,$r19,25708(0x646c)
    1a88:	72646461 	0x72646461
    1a8c:	20737365 	ll.w	$r5,$r27,29552(0x7370)
    1a90:	203a7369 	ll.w	$r9,$r27,14960(0x3a70)
    1a94:	630a000a 	blt	$r0,$r10,-62976(0x30a00) # ffff2494 <_etext+0xe3fe5644>
    1a98:	72206b6c 	0x72206b6c
    1a9c:	20657461 	ll.w	$r1,$r3,25972(0x6574)
    1aa0:	203a7369 	ll.w	$r9,$r27,14960(0x3a70)
    1aa4:	0a0a000a 	0x0a0a000a
    1aa8:	74726155 	xvmin.b	$xr21,$xr10,$xr24
    1aac:	52415520 	b	75645268(0x4824154) # 4825c00 <__stack_start+0x4622f30>
    1ab0:	52505f54 	b	-44937124(0xd52505c) # fd526b0c <_etext+0xe1519cbc>
    1ab4:	20544e49 	ll.w	$r9,$r18,21580(0x544c)
    1ab8:	21216b6f 	sc.w	$r15,$r27,8552(0x2168)
    1abc:	0a000a21 	0x0a000a21
    1ac0:	614d0a00 	blt	$r16,$r0,85256(0x14d08) # 167c8 <_bss_end+0x13af8>
    1ac4:	62206e69 	blt	$r19,$r9,-122772(0x2206c) # fffe3b30 <_etext+0xe3fd6ce0>
    1ac8:	6e696765 	bgeu	$r27,$r5,-104092(0x26964) # fffe842c <_etext+0xe3fdb5dc>
    1acc:	0a2e2e2e 	xvfmadd.d	$xr14,$xr17,$xr11,$xr28
    1ad0:	614d0a00 	blt	$r16,$r0,85256(0x14d08) # 167d8 <_bss_end+0x13b08>
    1ad4:	65206e69 	bge	$r19,$r9,73836(0x1206c) # 13b40 <_bss_end+0x10e70>
    1ad8:	2121646e 	sc.w	$r14,$r3,8548(0x2164)
    1adc:	0a000a21 	0x0a000a21
    1ae0:	6e69614d 	bgeu	$r10,$r13,-104096(0x26960) # fffe8440 <_etext+0xe3fdb5f0>
    1ae4:	74657220 	xvavg.w	$xr0,$xr17,$xr28
    1ae8:	206e7275 	ll.w	$r21,$r19,28272(0x6e70)
    1aec:	756c6176 	0x756c6176
    1af0:	73692065 	vssrarni.w.d	$vr5,$vr3,0x8
    1af4:	000a0020 	0x000a0020
    1af8:	6165520a 	blt	$r16,$r10,91472(0x16550) # 18048 <_bss_end+0x15378>
    1afc:	75206863 	xvpickod.b	$xr3,$xr3,$xr26
    1b00:	7078656e 	0x7078656e
    1b04:	65746365 	bge	$r27,$r5,95328(0x17460) # 18f64 <_bss_end+0x16294>
    1b08:	78652064 	0x78652064
    1b0c:	3d3d000a 	0x3d3d000a
    1b10:	3d3d3d3d 	0x3d3d3d3d
    1b14:	3d3d3d3d 	0x3d3d3d3d
    1b18:	3d3d3d3d 	0x3d3d3d3d
    1b1c:	3d3d3d3d 	0x3d3d3d3d
    1b20:	000a3d3d 	0x000a3d3d
    1b24:	7272450a 	0x7272450a
    1b28:	4520726f 	bnez	$r19,4006000(0x3d2070) # 3d3b98 <__stack_start+0x1d0ec8>
    1b2c:	20206370 	ll.w	$r16,$r27,8288(0x2060)
    1b30:	00207369 	div.w	$r9,$r27,$r28
    1b34:	2073560a 	ll.w	$r10,$r16,29524(0x7354)
    1b38:	20746962 	ll.w	$r2,$r11,29800(0x7468)
    1b3c:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    1b40:	00207369 	div.w	$r9,$r27,$r28
    1b44:	6378450a 	blt	$r8,$r10,-34748(0x37844) # ffff9388 <_etext+0xe3fec538>
    1b48:	2065646f 	ll.w	$r15,$r3,25956(0x6564)
    1b4c:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    1b50:	00207369 	div.w	$r9,$r27,$r28
    1b54:	6461420a 	bge	$r16,$r10,24896(0x6140) # 7c94 <_bss_end+0x4fc4>
    1b58:	64646120 	bge	$r9,$r0,25696(0x6460) # 7fb8 <_bss_end+0x52e8>
    1b5c:	20202072 	ll.w	$r18,$r3,8224(0x2020)
    1b60:	00207369 	div.w	$r9,$r27,$r28
    1b64:	3d3d3d0a 	0x3d3d3d0a
    1b68:	3d3d3d3d 	0x3d3d3d3d
    1b6c:	3d3d3d3d 	0x3d3d3d3d
    1b70:	3d3d3d3d 	0x3d3d3d3d
    1b74:	3d3d3d3d 	0x3d3d3d3d
    1b78:	0a000a3d 	0x0a000a3d
    1b7c:	65736162 	bge	$r11,$r2,95072(0x17360) # 18edc <_bss_end+0x1620c>
    1b80:	61657220 	blt	$r17,$r0,91504(0x16570) # 180f0 <_bss_end+0x15420>
    1b84:	73692064 	vssrarni.w.d	$vr4,$vr3,0x8
    1b88:	746f6e20 	0x746f6e20
    1b8c:	706d6920 	0x706d6920
    1b90:	656d656c 	bge	$r11,$r12,93540(0x16d64) # 188f4 <_bss_end+0x15c24>
    1b94:	6465746e 	bge	$r3,$r14,25972(0x6574) # 8108 <_bss_end+0x5438>
    1b98:	000a2121 	0x000a2121
    1b9c:	7361620a 	vssrani.w.d	$vr10,$vr16,0x18
    1ba0:	706f2065 	0x706f2065
    1ba4:	69206e65 	bltu	$r19,$r5,73836(0x1206c) # 13c10 <_bss_end+0x10f40>
    1ba8:	6f6e2073 	bgeu	$r3,$r19,-37344(0x36e20) # ffff89c8 <_etext+0xe3febb78>
    1bac:	6d692074 	bgeu	$r3,$r20,92448(0x16920) # 184cc <_bss_end+0x157fc>
    1bb0:	6d656c70 	bgeu	$r3,$r16,91500(0x1656c) # 1811c <_bss_end+0x1544c>
    1bb4:	65746e65 	bge	$r19,$r5,95340(0x1746c) # 19020 <_bss_end+0x16350>
    1bb8:	0a212164 	xvfmadd.d	$xr4,$xr11,$xr8,$xr2
    1bbc:	61620a00 	blt	$r16,$r0,90632(0x16208) # 17dc4 <_bss_end+0x150f4>
    1bc0:	63206573 	blt	$r11,$r19,-57244(0x32064) # ffff3c24 <_etext+0xe3fe6dd4>
    1bc4:	65736f6c 	bge	$r27,$r12,95084(0x1736c) # 18f30 <_bss_end+0x16260>
    1bc8:	20736920 	ll.w	$r0,$r9,29544(0x7368)
    1bcc:	20746f6e 	ll.w	$r14,$r27,29804(0x746c)
    1bd0:	6c706d69 	bgeu	$r11,$r9,28780(0x706c) # 8c3c <_bss_end+0x5f6c>
    1bd4:	6e656d65 	bgeu	$r11,$r5,-105108(0x2656c) # fffe8140 <_etext+0xe3fdb2f0>
    1bd8:	21646574 	sc.w	$r20,$r11,25700(0x6464)
    1bdc:	0a000a21 	0x0a000a21
    1be0:	73696854 	vssrarni.w.d	$vr20,$vr2,0x1a
    1be4:	70706120 	vmax.b	$vr0,$vr9,$vr24
    1be8:	6163696c 	blt	$r11,$r12,90984(0x16368) # 17f50 <_bss_end+0x15280>
    1bec:	6e6f6974 	bgeu	$r11,$r20,-102552(0x26f68) # fffe8b54 <_etext+0xe3fdbd04>
    1bf0:	20736920 	ll.w	$r0,$r9,29544(0x7368)
    1bf4:	74697865 	xvavgr.w	$xr5,$xr3,$xr30
    1bf8:	21216465 	sc.w	$r5,$r3,8548(0x2164)
    1bfc:	540a000a 	bl	2624000(0x280a00) # 2825fc <__stack_start+0x7f92c>
    1c00:	20736968 	ll.w	$r8,$r11,29544(0x7368)
    1c04:	6c707061 	bgeu	$r3,$r1,28784(0x7070) # 8c74 <_bss_end+0x5fa4>
    1c08:	74616369 	xvabsd.w	$xr9,$xr27,$xr24
    1c0c:	206e6f69 	ll.w	$r9,$r27,28268(0x6e6c)
    1c10:	65207369 	bge	$r27,$r9,73840(0x12070) # 13c80 <_bss_end+0x10fb0>
    1c14:	65746978 	bge	$r11,$r24,95336(0x17468) # 1907c <_bss_end+0x163ac>
    1c18:	0a212164 	xvfmadd.d	$xr4,$xr11,$xr8,$xr2
    1c1c:	00000000 	0x00000000
    1c20:	6c6c6568 	bgeu	$r11,$r8,27748(0x6c64) # 8884 <_bss_end+0x5bb4>
    1c24:	6f77206f 	bgeu	$r3,$r15,-35040(0x37720) # ffff9344 <_etext+0xe3fec4f4>
    1c28:	21646c72 	sc.w	$r18,$r3,25708(0x646c)
    1c2c:	0000000a 	0x0000000a
    1c30:	00464e49 	0x00464e49
    1c34:	00666e69 	bstrins.w	$r9,$r19,0x6,0x1b
    1c38:	004e414e 	0x004e414e
    1c3c:	006e616e 	bstrins.w	$r14,$r11,0xe,0x18
    1c40:	33323130 	xvstelm.w	$xr16,$r9,-464(0x230),0x4
    1c44:	37363534 	0x37363534
    1c48:	42413938 	beqz	$r9,-1949384(0x624138) # ffe25d80 <_etext+0xe3e18f30>
    1c4c:	46454443 	bnez	$r2,935236(0xe4544) # e6190 <_bss_end+0xe34c0>
    1c50:	00000000 	0x00000000
    1c54:	33323130 	xvstelm.w	$xr16,$r9,-464(0x230),0x4
    1c58:	37363534 	0x37363534
    1c5c:	62613938 	blt	$r9,$r24,-106184(0x26138) # fffe7d94 <_etext+0xe3fdaf44>
    1c60:	66656463 	bge	$r3,$r3,-105116(0x26564) # fffe81c4 <_etext+0xe3fdb374>
    1c64:	00000000 	0x00000000
    1c68:	6c756e28 	bgeu	$r17,$r8,30060(0x756c) # 91d4 <_bss_end+0x6504>
    1c6c:	0000296c 	cto.d	$r12,$r11
    1c70:	00000030 	0x00000030
    1c74:	1c000bf4 	pcaddu12i	$r20,95(0x5f)
    1c78:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c7c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c80:	1c000be8 	pcaddu12i	$r8,95(0x5f)
    1c84:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c88:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c8c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c90:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c94:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c98:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1c9c:	1c000bc4 	pcaddu12i	$r4,94(0x5e)
    1ca0:	1c000bb4 	pcaddu12i	$r20,93(0x5d)
    1ca4:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1ca8:	1c000ba8 	pcaddu12i	$r8,93(0x5d)
    1cac:	1c000b68 	pcaddu12i	$r8,91(0x5b)
    1cb0:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1cb4:	1c000b5c 	pcaddu12i	$r28,90(0x5a)
    1cb8:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cbc:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cc0:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cc4:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cc8:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1ccc:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cd0:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cd4:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cd8:	1c000b0c 	pcaddu12i	$r12,88(0x58)
    1cdc:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1ce0:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1ce4:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1ce8:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1cec:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1cf0:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1cf4:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1cf8:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1cfc:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d00:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d04:	1c001260 	pcaddu12i	$r0,147(0x93)
    1d08:	1c0011a0 	pcaddu12i	$r0,141(0x8d)
    1d0c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d10:	1c0011a0 	pcaddu12i	$r0,141(0x8d)
    1d14:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d18:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d1c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d20:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d24:	1c001194 	pcaddu12i	$r20,140(0x8c)
    1d28:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d2c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d30:	1c001164 	pcaddu12i	$r4,139(0x8b)
    1d34:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d38:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d3c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d40:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d44:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d48:	1c00136c 	pcaddu12i	$r12,155(0x9b)
    1d4c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d50:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d54:	1c001324 	pcaddu12i	$r4,153(0x99)
    1d58:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d5c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d60:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d64:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d68:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d6c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d70:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d74:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d78:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d7c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1d80:	1c000da4 	pcaddu12i	$r4,109(0x6d)
    1d84:	1c000d20 	pcaddu12i	$r0,105(0x69)
    1d88:	1c0011a0 	pcaddu12i	$r0,141(0x8d)
    1d8c:	1c0011a0 	pcaddu12i	$r0,141(0x8d)
    1d90:	1c0011a0 	pcaddu12i	$r0,141(0x8d)
    1d94:	1c0010d0 	pcaddu12i	$r16,134(0x86)
    1d98:	1c000d20 	pcaddu12i	$r0,105(0x69)
    1d9c:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1da0:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1da4:	1c0010c0 	pcaddu12i	$r0,134(0x86)
    1da8:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1dac:	1c001084 	pcaddu12i	$r4,132(0x84)
    1db0:	1c001044 	pcaddu12i	$r4,130(0x82)
    1db4:	1c0010e8 	pcaddu12i	$r8,135(0x87)
    1db8:	1c0010dc 	pcaddu12i	$r28,134(0x86)
    1dbc:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1dc0:	1c000ca8 	pcaddu12i	$r8,101(0x65)
    1dc4:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1dc8:	1c000c68 	pcaddu12i	$r8,99(0x63)
    1dcc:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1dd0:	1c000b3c 	pcaddu12i	$r28,89(0x59)
    1dd4:	1c000c08 	pcaddu12i	$r8,96(0x60)

00001dd8 <zeroes.4161>:
    1dd8:	30303030 	0x30303030
    1ddc:	30303030 	0x30303030
    1de0:	30303030 	0x30303030
    1de4:	30303030 	0x30303030

00001de8 <blanks.4160>:
    1de8:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    1dec:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    1df0:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    1df4:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    1df8:	004e614e 	0x004e614e
    1dfc:	69666e49 	bltu	$r18,$r9,91756(0x1666c) # 18468 <_bss_end+0x15798>
    1e00:	7974696e 	0x7974696e
    1e04:	00000000 	0x00000000
    1e08:	00000030 	0x00000030
    1e0c:	00000043 	0x00000043
    1e10:	00000043 	0x00000043
    1e14:	49534f50 	0x49534f50
    1e18:	00000058 	0x00000058
    1e1c:	00000000 	0x00000000
    1e20:	0000002e 	0x0000002e
    1e24:	00000000 	0x00000000

00001e28 <p05.2538>:
    1e28:	00000005 	0x00000005
    1e2c:	00000019 	0x00000019
    1e30:	0000007d 	0x0000007d
    1e34:	00000000 	0x00000000

00001e38 <__mprec_tinytens>:
    1e38:	97d889bc 	0x97d889bc
    1e3c:	3c9cd2b2 	0x3c9cd2b2
    1e40:	d5a8a733 	0xd5a8a733
    1e44:	3949f623 	0x3949f623
    1e48:	44f4a73d 	bnez	$r25,-723804(0x74f4a4) # fff512ec <_etext+0xe3f4449c>
    1e4c:	32a50ffd 	xvldrepl.b	$xr29,$r31,-1725(0x943)
    1e50:	cf8c979d 	0xcf8c979d
    1e54:	255bba08 	stptr.w	$r8,$r16,23480(0x5bb8)
    1e58:	64ac6f43 	bge	$r26,$r3,44140(0xac6c) # cac4 <_bss_end+0x9df4>
    1e5c:	0ac80628 	0x0ac80628

00001e60 <__mprec_bigtens>:
    1e60:	37e08000 	0x37e08000
    1e64:	4341c379 	beqz	$r27,-1621568(0x6741c0) # ffe76024 <_etext+0xe3e691d4>
    1e68:	b5056e17 	0xb5056e17
    1e6c:	4693b8b5 	bnez	$r5,-2714696(0x5693b8) # ffd6b224 <_etext+0xe3d5e3d4>
    1e70:	e93ff9f5 	0xe93ff9f5
    1e74:	4d384f03 	jirl	$r3,$r24,79948(0x1384c)
    1e78:	f9301d32 	0xf9301d32
    1e7c:	5a827748 	beq	$r26,$r8,-97676(0x28274) # fffea0f0 <_etext+0xe3fdd2a0>
    1e80:	7f73bf3c 	0x7f73bf3c
    1e84:	75154fdd 	0x75154fdd

00001e88 <__mprec_tens>:
    1e88:	00000000 	0x00000000
    1e8c:	3ff00000 	0x3ff00000
    1e90:	00000000 	0x00000000
    1e94:	40240000 	beqz	$r0,9216(0x2400) # 4294 <_bss_end+0x15c4>
    1e98:	00000000 	0x00000000
    1e9c:	40590000 	beqz	$r0,22784(0x5900) # 779c <_bss_end+0x4acc>
    1ea0:	00000000 	0x00000000
    1ea4:	408f4000 	beqz	$r0,36672(0x8f40) # ade4 <_bss_end+0x8114>
    1ea8:	00000000 	0x00000000
    1eac:	40c38800 	beqz	$r0,50056(0xc388) # e234 <_bss_end+0xb564>
    1eb0:	00000000 	0x00000000
    1eb4:	40f86a00 	beqz	$r16,63592(0xf868) # 1171c <_bss_end+0xea4c>
    1eb8:	00000000 	0x00000000
    1ebc:	412e8480 	beqz	$r4,77444(0x12e84) # 14d40 <_bss_end+0x12070>
    1ec0:	00000000 	0x00000000
    1ec4:	416312d0 	beqz	$r22,-4103408(0x416310) # ffc181d4 <_etext+0xe3c0b384>
    1ec8:	00000000 	0x00000000
    1ecc:	4197d784 	beqz	$r28,1152980(0x1197d4) # 11b6a0 <__heap_end+0x189d0>
    1ed0:	00000000 	0x00000000
    1ed4:	41cdcd65 	beqz	$r11,1428940(0x15cdcc) # 15eca0 <__heap_end+0x5bfd0>
    1ed8:	20000000 	ll.w	$r0,$r0,0
    1edc:	4202a05f 	beqz	$r2,-130400(0x7e02a0) # fffe217c <_etext+0xe3fd532c>
    1ee0:	e8000000 	0xe8000000
    1ee4:	42374876 	beqz	$r3,-2476216(0x5a3748) # ffda562c <_etext+0xe3d987dc>
    1ee8:	a2000000 	0xa2000000
    1eec:	426d1a94 	beqz	$r20,-2986728(0x526d18) # ffd28c04 <_etext+0xe3d1bdb4>
    1ef0:	e5400000 	0xe5400000
    1ef4:	42a2309c 	beqz	$r4,-875984(0x72a230) # fff2c124 <_etext+0xe3f1f2d4>
    1ef8:	1e900000 	pcaddu18i	$r0,294912(0x48000)
    1efc:	42d6bcc4 	beqz	$r6,1234620(0x12d6bc) # 12f5b8 <__heap_end+0x2c8e8>
    1f00:	26340000 	ldptr.d	$r0,$r0,13312(0x3400)
    1f04:	430c6bf5 	beqz	$r31,-2683800(0x570c68) # ffd72b6c <_etext+0xe3d65d1c>
    1f08:	37e08000 	0x37e08000
    1f0c:	4341c379 	beqz	$r27,-1621568(0x6741c0) # ffe760cc <_etext+0xe3e6927c>
    1f10:	85d8a000 	0x85d8a000
    1f14:	43763457 	beqz	$r2,-2132428(0x5f7634) # ffdf9548 <_etext+0xe3dec6f8>
    1f18:	674ec800 	bge	$r0,$r0,-45368(0x34ec8) # ffff6de0 <_etext+0xe3fe9f90>
    1f1c:	43abc16d 	beqz	$r11,3648448(0x37abc0) # 37cadc <__stack_start+0x179e0c>
    1f20:	60913d00 	blt	$r8,$r0,37180(0x913c) # b05c <_bss_end+0x838c>
    1f24:	43e158e4 	beqz	$r7,1302872(0x13e158) # 14007c <__heap_end+0x3d3ac>
    1f28:	78b58c40 	0x78b58c40
    1f2c:	4415af1d 	bnez	$r24,-780884(0x7415ac) # fff434d8 <_etext+0xe3f36688>
    1f30:	d6e2ef50 	0xd6e2ef50
    1f34:	444b1ae4 	bnez	$r23,1067800(0x104b18) # 106a4c <__heap_end+0x3d7c>
    1f38:	064dd592 	0x064dd592
    1f3c:	4480f0cf 	bnez	$r6,3965168(0x3c80f0) # 3ca02c <__stack_start+0x1c735c>
    1f40:	c7e14af6 	0xc7e14af6
    1f44:	44b52d02 	bnez	$r8,570668(0x8b52c) # 8d470 <_bss_end+0x8a7a0>
    1f48:	79d99db4 	0x79d99db4
    1f4c:	44ea7843 	bnez	$r2,846456(0xcea78) # d09c4 <_bss_end+0xcdcf4>
    1f50:	33323130 	xvstelm.w	$xr16,$r9,-464(0x230),0x4
    1f54:	37363534 	0x37363534
    1f58:	42413938 	beqz	$r9,-1949384(0x624138) # ffe26090 <_etext+0xe3e19240>
    1f5c:	46454443 	bnez	$r2,935236(0xe4544) # e64a0 <_bss_end+0xe37d0>
    1f60:	00000000 	0x00000000
    1f64:	33323130 	xvstelm.w	$xr16,$r9,-464(0x230),0x4
    1f68:	37363534 	0x37363534
    1f6c:	62613938 	blt	$r9,$r24,-106184(0x26138) # fffe80a4 <_etext+0xe3fdb254>
    1f70:	66656463 	bge	$r3,$r3,-105116(0x26564) # fffe84d4 <_etext+0xe3fdb684>
    1f74:	00000000 	0x00000000
    1f78:	6c756e28 	bgeu	$r17,$r8,30060(0x756c) # 94e4 <_bss_end+0x6814>
    1f7c:	0000296c 	cto.d	$r12,$r11
    1f80:	1c007240 	pcaddu12i	$r0,914(0x392)
    1f84:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1f88:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1f8c:	1c007234 	pcaddu12i	$r20,913(0x391)
    1f90:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1f94:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1f98:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1f9c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1fa0:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1fa4:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1fa8:	1c007210 	pcaddu12i	$r16,912(0x390)
    1fac:	1c007200 	pcaddu12i	$r0,912(0x390)
    1fb0:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1fb4:	1c0071f4 	pcaddu12i	$r20,911(0x38f)
    1fb8:	1c0071b4 	pcaddu12i	$r20,909(0x38d)
    1fbc:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1fc0:	1c0071a8 	pcaddu12i	$r8,909(0x38d)
    1fc4:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fc8:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fcc:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fd0:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fd4:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fd8:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fdc:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fe0:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fe4:	1c007158 	pcaddu12i	$r24,906(0x38a)
    1fe8:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1fec:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1ff0:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1ff4:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1ff8:	1c007188 	pcaddu12i	$r8,908(0x38c)
    1ffc:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2000:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2004:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2008:	1c007188 	pcaddu12i	$r8,908(0x38c)
    200c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2010:	1c007734 	pcaddu12i	$r20,953(0x3b9)
    2014:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2018:	1c007188 	pcaddu12i	$r8,908(0x38c)
    201c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2020:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2024:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2028:	1c007188 	pcaddu12i	$r8,908(0x38c)
    202c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2030:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2034:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2038:	1c007188 	pcaddu12i	$r8,908(0x38c)
    203c:	1c007704 	pcaddu12i	$r4,952(0x3b8)
    2040:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2044:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2048:	1c007188 	pcaddu12i	$r8,908(0x38c)
    204c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2050:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2054:	1c0077f8 	pcaddu12i	$r24,959(0x3bf)
    2058:	1c007188 	pcaddu12i	$r8,908(0x38c)
    205c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2060:	1c00763c 	pcaddu12i	$r28,945(0x3b1)
    2064:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2068:	1c007188 	pcaddu12i	$r8,908(0x38c)
    206c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2070:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2074:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2078:	1c007188 	pcaddu12i	$r8,908(0x38c)
    207c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2080:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2084:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2088:	1c007188 	pcaddu12i	$r8,908(0x38c)
    208c:	1c0073ec 	pcaddu12i	$r12,927(0x39f)
    2090:	1c00737c 	pcaddu12i	$r28,923(0x39b)
    2094:	1c007188 	pcaddu12i	$r8,908(0x38c)
    2098:	1c007188 	pcaddu12i	$r8,908(0x38c)
    209c:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20a0:	1c007370 	pcaddu12i	$r16,923(0x39b)
    20a4:	1c00737c 	pcaddu12i	$r28,923(0x39b)
    20a8:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20ac:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20b0:	1c007360 	pcaddu12i	$r0,923(0x39b)
    20b4:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20b8:	1c007868 	pcaddu12i	$r8,963(0x3c3)
    20bc:	1c007828 	pcaddu12i	$r8,961(0x3c1)
    20c0:	1c007690 	pcaddu12i	$r16,948(0x3b4)
    20c4:	1c007684 	pcaddu12i	$r4,948(0x3b4)
    20c8:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20cc:	1c0072f4 	pcaddu12i	$r20,919(0x397)
    20d0:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20d4:	1c0072b4 	pcaddu12i	$r20,917(0x395)
    20d8:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20dc:	1c007188 	pcaddu12i	$r8,908(0x38c)
    20e0:	1c007254 	pcaddu12i	$r20,914(0x392)

000020e4 <zeroes.4104>:
    20e4:	30303030 	0x30303030
    20e8:	30303030 	0x30303030
    20ec:	30303030 	0x30303030
    20f0:	30303030 	0x30303030

000020f4 <blanks.4103>:
    20f4:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    20f8:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    20fc:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    2100:	20202020 	ll.w	$r0,$r1,8224(0x2020)
    2104:	1c008ea4 	pcaddu12i	$r4,1141(0x475)
    2108:	1c008c50 	pcaddu12i	$r16,1122(0x462)
    210c:	1c008d4c 	pcaddu12i	$r12,1130(0x46a)
    2110:	1c008cac 	pcaddu12i	$r12,1125(0x465)
    2114:	1c008d4c 	pcaddu12i	$r12,1130(0x46a)
    2118:	1c008e6c 	pcaddu12i	$r12,1139(0x473)
    211c:	1c008d4c 	pcaddu12i	$r12,1130(0x46a)
    2120:	1c008cac 	pcaddu12i	$r12,1125(0x465)
    2124:	1c008c50 	pcaddu12i	$r16,1122(0x462)
    2128:	1c008c50 	pcaddu12i	$r16,1122(0x462)
    212c:	1c008e6c 	pcaddu12i	$r12,1139(0x473)
    2130:	1c008cac 	pcaddu12i	$r12,1125(0x465)
    2134:	1c008cbc 	pcaddu12i	$r28,1125(0x465)
    2138:	1c008cbc 	pcaddu12i	$r28,1125(0x465)
    213c:	1c008cbc 	pcaddu12i	$r28,1125(0x465)
    2140:	1c008e84 	pcaddu12i	$r4,1140(0x474)
    2144:	1c009934 	pcaddu12i	$r20,1225(0x4c9)
    2148:	1c009734 	pcaddu12i	$r20,1209(0x4b9)
    214c:	1c009734 	pcaddu12i	$r20,1209(0x4b9)
    2150:	1c009730 	pcaddu12i	$r16,1209(0x4b9)
    2154:	1c009740 	pcaddu12i	$r0,1210(0x4ba)
    2158:	1c009740 	pcaddu12i	$r0,1210(0x4ba)
    215c:	1c0098fc 	pcaddu12i	$r28,1223(0x4c7)
    2160:	1c009730 	pcaddu12i	$r16,1209(0x4b9)
    2164:	1c009740 	pcaddu12i	$r0,1210(0x4ba)
    2168:	1c0098fc 	pcaddu12i	$r28,1223(0x4c7)
    216c:	1c009740 	pcaddu12i	$r0,1210(0x4ba)
    2170:	1c009730 	pcaddu12i	$r16,1209(0x4b9)
    2174:	1c0098f4 	pcaddu12i	$r20,1223(0x4c7)
    2178:	1c0098f4 	pcaddu12i	$r20,1223(0x4c7)
    217c:	1c0098f4 	pcaddu12i	$r20,1223(0x4c7)
    2180:	1c009914 	pcaddu12i	$r20,1224(0x4c8)

00002184 <__clz_tab>:
    2184:	02020100 	slti	$r0,$r8,128(0x80)
    2188:	03030303 	lu52i.d	$r3,$r24,192(0xc0)
    218c:	04040404 	csrrd	$r4,0x101
    2190:	04040404 	csrrd	$r4,0x101
    2194:	05050505 	0x05050505
    2198:	05050505 	0x05050505
    219c:	05050505 	0x05050505
    21a0:	05050505 	0x05050505
    21a4:	06060606 	cacop	0x6,$r16,385(0x181)
    21a8:	06060606 	cacop	0x6,$r16,385(0x181)
    21ac:	06060606 	cacop	0x6,$r16,385(0x181)
    21b0:	06060606 	cacop	0x6,$r16,385(0x181)
    21b4:	06060606 	cacop	0x6,$r16,385(0x181)
    21b8:	06060606 	cacop	0x6,$r16,385(0x181)
    21bc:	06060606 	cacop	0x6,$r16,385(0x181)
    21c0:	06060606 	cacop	0x6,$r16,385(0x181)
    21c4:	07070707 	0x07070707
    21c8:	07070707 	0x07070707
    21cc:	07070707 	0x07070707
    21d0:	07070707 	0x07070707
    21d4:	07070707 	0x07070707
    21d8:	07070707 	0x07070707
    21dc:	07070707 	0x07070707
    21e0:	07070707 	0x07070707
    21e4:	07070707 	0x07070707
    21e8:	07070707 	0x07070707
    21ec:	07070707 	0x07070707
    21f0:	07070707 	0x07070707
    21f4:	07070707 	0x07070707
    21f8:	07070707 	0x07070707
    21fc:	07070707 	0x07070707
    2200:	07070707 	0x07070707
    2204:	08080808 	0x08080808
    2208:	08080808 	0x08080808
    220c:	08080808 	0x08080808
    2210:	08080808 	0x08080808
    2214:	08080808 	0x08080808
    2218:	08080808 	0x08080808
    221c:	08080808 	0x08080808
    2220:	08080808 	0x08080808
    2224:	08080808 	0x08080808
    2228:	08080808 	0x08080808
    222c:	08080808 	0x08080808
    2230:	08080808 	0x08080808
    2234:	08080808 	0x08080808
    2238:	08080808 	0x08080808
    223c:	08080808 	0x08080808
    2240:	08080808 	0x08080808
    2244:	08080808 	0x08080808
    2248:	08080808 	0x08080808
    224c:	08080808 	0x08080808
    2250:	08080808 	0x08080808
    2254:	08080808 	0x08080808
    2258:	08080808 	0x08080808
    225c:	08080808 	0x08080808
    2260:	08080808 	0x08080808
    2264:	08080808 	0x08080808
    2268:	08080808 	0x08080808
    226c:	08080808 	0x08080808
    2270:	08080808 	0x08080808
    2274:	08080808 	0x08080808
    2278:	08080808 	0x08080808
    227c:	08080808 	0x08080808
    2280:	08080808 	0x08080808

Disassembly of section .data:

00002290 <impure_data>:
    2290:	00000000 	0x00000000
    2294:	0000257c 	clz.d	$r28,$r11
    2298:	000025e0 	clz.d	$r0,$r15
    229c:	00002644 	clz.d	$r4,$r18
	...
    22c4:	00001e0c 	ctz.w	$r12,$r16
	...
    2338:	00000001 	0x00000001
    233c:	00000000 	0x00000000
    2340:	abcd330e 	0xabcd330e
    2344:	e66d1234 	0xe66d1234
    2348:	0005deec 	alsl.w	$r12,$r23,$r23,0x4
    234c:	0000000b 	0x0000000b
	...

000026a8 <lc_message_charset>:
    26a8:	49435341 	0x49435341
    26ac:	00000049 	0x00000049
	...

000026c8 <lc_ctype_charset>:
    26c8:	49435341 	0x49435341
    26cc:	00000049 	0x00000049
	...

000026e8 <lconv>:
    26e8:	00001e20 	ctz.w	$r0,$r17
    26ec:	00001e1c 	ctz.w	$r28,$r16
    26f0:	00001e1c 	ctz.w	$r28,$r16
    26f4:	00001e1c 	ctz.w	$r28,$r16
    26f8:	00001e1c 	ctz.w	$r28,$r16
    26fc:	00001e1c 	ctz.w	$r28,$r16
    2700:	00001e1c 	ctz.w	$r28,$r16
    2704:	00001e1c 	ctz.w	$r28,$r16
    2708:	00001e1c 	ctz.w	$r28,$r16
    270c:	00001e1c 	ctz.w	$r28,$r16
    2710:	7f7f7f7f 	0x7f7f7f7f
    2714:	7f7f7f7f 	0x7f7f7f7f
    2718:	7f7f7f7f 	0x7f7f7f7f
    271c:	00007f7f 	0x00007f7f

00002720 <__malloc_av_>:
	...
    2728:	00002720 	clz.d	$r0,$r25
    272c:	00002720 	clz.d	$r0,$r25
    2730:	00002728 	clz.d	$r8,$r25
    2734:	00002728 	clz.d	$r8,$r25
    2738:	00002730 	clz.d	$r16,$r25
    273c:	00002730 	clz.d	$r16,$r25
    2740:	00002738 	clz.d	$r24,$r25
    2744:	00002738 	clz.d	$r24,$r25
    2748:	00002740 	clz.d	$r0,$r26
    274c:	00002740 	clz.d	$r0,$r26
    2750:	00002748 	clz.d	$r8,$r26
    2754:	00002748 	clz.d	$r8,$r26
    2758:	00002750 	clz.d	$r16,$r26
    275c:	00002750 	clz.d	$r16,$r26
    2760:	00002758 	clz.d	$r24,$r26
    2764:	00002758 	clz.d	$r24,$r26
    2768:	00002760 	clz.d	$r0,$r27
    276c:	00002760 	clz.d	$r0,$r27
    2770:	00002768 	clz.d	$r8,$r27
    2774:	00002768 	clz.d	$r8,$r27
    2778:	00002770 	clz.d	$r16,$r27
    277c:	00002770 	clz.d	$r16,$r27
    2780:	00002778 	clz.d	$r24,$r27
    2784:	00002778 	clz.d	$r24,$r27
    2788:	00002780 	clz.d	$r0,$r28
    278c:	00002780 	clz.d	$r0,$r28
    2790:	00002788 	clz.d	$r8,$r28
    2794:	00002788 	clz.d	$r8,$r28
    2798:	00002790 	clz.d	$r16,$r28
    279c:	00002790 	clz.d	$r16,$r28
    27a0:	00002798 	clz.d	$r24,$r28
    27a4:	00002798 	clz.d	$r24,$r28
    27a8:	000027a0 	clz.d	$r0,$r29
    27ac:	000027a0 	clz.d	$r0,$r29
    27b0:	000027a8 	clz.d	$r8,$r29
    27b4:	000027a8 	clz.d	$r8,$r29
    27b8:	000027b0 	clz.d	$r16,$r29
    27bc:	000027b0 	clz.d	$r16,$r29
    27c0:	000027b8 	clz.d	$r24,$r29
    27c4:	000027b8 	clz.d	$r24,$r29
    27c8:	000027c0 	clz.d	$r0,$r30
    27cc:	000027c0 	clz.d	$r0,$r30
    27d0:	000027c8 	clz.d	$r8,$r30
    27d4:	000027c8 	clz.d	$r8,$r30
    27d8:	000027d0 	clz.d	$r16,$r30
    27dc:	000027d0 	clz.d	$r16,$r30
    27e0:	000027d8 	clz.d	$r24,$r30
    27e4:	000027d8 	clz.d	$r24,$r30
    27e8:	000027e0 	clz.d	$r0,$r31
    27ec:	000027e0 	clz.d	$r0,$r31
    27f0:	000027e8 	clz.d	$r8,$r31
    27f4:	000027e8 	clz.d	$r8,$r31
    27f8:	000027f0 	clz.d	$r16,$r31
    27fc:	000027f0 	clz.d	$r16,$r31
    2800:	000027f8 	clz.d	$r24,$r31
    2804:	000027f8 	clz.d	$r24,$r31
    2808:	00002800 	cto.d	$r0,$r0
    280c:	00002800 	cto.d	$r0,$r0
    2810:	00002808 	cto.d	$r8,$r0
    2814:	00002808 	cto.d	$r8,$r0
    2818:	00002810 	cto.d	$r16,$r0
    281c:	00002810 	cto.d	$r16,$r0
    2820:	00002818 	cto.d	$r24,$r0
    2824:	00002818 	cto.d	$r24,$r0
    2828:	00002820 	cto.d	$r0,$r1
    282c:	00002820 	cto.d	$r0,$r1
    2830:	00002828 	cto.d	$r8,$r1
    2834:	00002828 	cto.d	$r8,$r1
    2838:	00002830 	cto.d	$r16,$r1
    283c:	00002830 	cto.d	$r16,$r1
    2840:	00002838 	cto.d	$r24,$r1
    2844:	00002838 	cto.d	$r24,$r1
    2848:	00002840 	cto.d	$r0,$r2
    284c:	00002840 	cto.d	$r0,$r2
    2850:	00002848 	cto.d	$r8,$r2
    2854:	00002848 	cto.d	$r8,$r2
    2858:	00002850 	cto.d	$r16,$r2
    285c:	00002850 	cto.d	$r16,$r2
    2860:	00002858 	cto.d	$r24,$r2
    2864:	00002858 	cto.d	$r24,$r2
    2868:	00002860 	cto.d	$r0,$r3
    286c:	00002860 	cto.d	$r0,$r3
    2870:	00002868 	cto.d	$r8,$r3
    2874:	00002868 	cto.d	$r8,$r3
    2878:	00002870 	cto.d	$r16,$r3
    287c:	00002870 	cto.d	$r16,$r3
    2880:	00002878 	cto.d	$r24,$r3
    2884:	00002878 	cto.d	$r24,$r3
    2888:	00002880 	cto.d	$r0,$r4
    288c:	00002880 	cto.d	$r0,$r4
    2890:	00002888 	cto.d	$r8,$r4
    2894:	00002888 	cto.d	$r8,$r4
    2898:	00002890 	cto.d	$r16,$r4
    289c:	00002890 	cto.d	$r16,$r4
    28a0:	00002898 	cto.d	$r24,$r4
    28a4:	00002898 	cto.d	$r24,$r4
    28a8:	000028a0 	cto.d	$r0,$r5
    28ac:	000028a0 	cto.d	$r0,$r5
    28b0:	000028a8 	cto.d	$r8,$r5
    28b4:	000028a8 	cto.d	$r8,$r5
    28b8:	000028b0 	cto.d	$r16,$r5
    28bc:	000028b0 	cto.d	$r16,$r5
    28c0:	000028b8 	cto.d	$r24,$r5
    28c4:	000028b8 	cto.d	$r24,$r5
    28c8:	000028c0 	cto.d	$r0,$r6
    28cc:	000028c0 	cto.d	$r0,$r6
    28d0:	000028c8 	cto.d	$r8,$r6
    28d4:	000028c8 	cto.d	$r8,$r6
    28d8:	000028d0 	cto.d	$r16,$r6
    28dc:	000028d0 	cto.d	$r16,$r6
    28e0:	000028d8 	cto.d	$r24,$r6
    28e4:	000028d8 	cto.d	$r24,$r6
    28e8:	000028e0 	cto.d	$r0,$r7
    28ec:	000028e0 	cto.d	$r0,$r7
    28f0:	000028e8 	cto.d	$r8,$r7
    28f4:	000028e8 	cto.d	$r8,$r7
    28f8:	000028f0 	cto.d	$r16,$r7
    28fc:	000028f0 	cto.d	$r16,$r7
    2900:	000028f8 	cto.d	$r24,$r7
    2904:	000028f8 	cto.d	$r24,$r7
    2908:	00002900 	cto.d	$r0,$r8
    290c:	00002900 	cto.d	$r0,$r8
    2910:	00002908 	cto.d	$r8,$r8
    2914:	00002908 	cto.d	$r8,$r8
    2918:	00002910 	cto.d	$r16,$r8
    291c:	00002910 	cto.d	$r16,$r8
    2920:	00002918 	cto.d	$r24,$r8
    2924:	00002918 	cto.d	$r24,$r8
    2928:	00002920 	cto.d	$r0,$r9
    292c:	00002920 	cto.d	$r0,$r9
    2930:	00002928 	cto.d	$r8,$r9
    2934:	00002928 	cto.d	$r8,$r9
    2938:	00002930 	cto.d	$r16,$r9
    293c:	00002930 	cto.d	$r16,$r9
    2940:	00002938 	cto.d	$r24,$r9
    2944:	00002938 	cto.d	$r24,$r9
    2948:	00002940 	cto.d	$r0,$r10
    294c:	00002940 	cto.d	$r0,$r10
    2950:	00002948 	cto.d	$r8,$r10
    2954:	00002948 	cto.d	$r8,$r10
    2958:	00002950 	cto.d	$r16,$r10
    295c:	00002950 	cto.d	$r16,$r10
    2960:	00002958 	cto.d	$r24,$r10
    2964:	00002958 	cto.d	$r24,$r10
    2968:	00002960 	cto.d	$r0,$r11
    296c:	00002960 	cto.d	$r0,$r11
    2970:	00002968 	cto.d	$r8,$r11
    2974:	00002968 	cto.d	$r8,$r11
    2978:	00002970 	cto.d	$r16,$r11
    297c:	00002970 	cto.d	$r16,$r11
    2980:	00002978 	cto.d	$r24,$r11
    2984:	00002978 	cto.d	$r24,$r11
    2988:	00002980 	cto.d	$r0,$r12
    298c:	00002980 	cto.d	$r0,$r12
    2990:	00002988 	cto.d	$r8,$r12
    2994:	00002988 	cto.d	$r8,$r12
    2998:	00002990 	cto.d	$r16,$r12
    299c:	00002990 	cto.d	$r16,$r12
    29a0:	00002998 	cto.d	$r24,$r12
    29a4:	00002998 	cto.d	$r24,$r12
    29a8:	000029a0 	cto.d	$r0,$r13
    29ac:	000029a0 	cto.d	$r0,$r13
    29b0:	000029a8 	cto.d	$r8,$r13
    29b4:	000029a8 	cto.d	$r8,$r13
    29b8:	000029b0 	cto.d	$r16,$r13
    29bc:	000029b0 	cto.d	$r16,$r13
    29c0:	000029b8 	cto.d	$r24,$r13
    29c4:	000029b8 	cto.d	$r24,$r13
    29c8:	000029c0 	cto.d	$r0,$r14
    29cc:	000029c0 	cto.d	$r0,$r14
    29d0:	000029c8 	cto.d	$r8,$r14
    29d4:	000029c8 	cto.d	$r8,$r14
    29d8:	000029d0 	cto.d	$r16,$r14
    29dc:	000029d0 	cto.d	$r16,$r14
    29e0:	000029d8 	cto.d	$r24,$r14
    29e4:	000029d8 	cto.d	$r24,$r14
    29e8:	000029e0 	cto.d	$r0,$r15
    29ec:	000029e0 	cto.d	$r0,$r15
    29f0:	000029e8 	cto.d	$r8,$r15
    29f4:	000029e8 	cto.d	$r8,$r15
    29f8:	000029f0 	cto.d	$r16,$r15
    29fc:	000029f0 	cto.d	$r16,$r15
    2a00:	000029f8 	cto.d	$r24,$r15
    2a04:	000029f8 	cto.d	$r24,$r15
    2a08:	00002a00 	cto.d	$r0,$r16
    2a0c:	00002a00 	cto.d	$r0,$r16
    2a10:	00002a08 	cto.d	$r8,$r16
    2a14:	00002a08 	cto.d	$r8,$r16
    2a18:	00002a10 	cto.d	$r16,$r16
    2a1c:	00002a10 	cto.d	$r16,$r16
    2a20:	00002a18 	cto.d	$r24,$r16
    2a24:	00002a18 	cto.d	$r24,$r16
    2a28:	00002a20 	cto.d	$r0,$r17
    2a2c:	00002a20 	cto.d	$r0,$r17
    2a30:	00002a28 	cto.d	$r8,$r17
    2a34:	00002a28 	cto.d	$r8,$r17
    2a38:	00002a30 	cto.d	$r16,$r17
    2a3c:	00002a30 	cto.d	$r16,$r17
    2a40:	00002a38 	cto.d	$r24,$r17
    2a44:	00002a38 	cto.d	$r24,$r17
    2a48:	00002a40 	cto.d	$r0,$r18
    2a4c:	00002a40 	cto.d	$r0,$r18
    2a50:	00002a48 	cto.d	$r8,$r18
    2a54:	00002a48 	cto.d	$r8,$r18
    2a58:	00002a50 	cto.d	$r16,$r18
    2a5c:	00002a50 	cto.d	$r16,$r18
    2a60:	00002a58 	cto.d	$r24,$r18
    2a64:	00002a58 	cto.d	$r24,$r18
    2a68:	00002a60 	cto.d	$r0,$r19
    2a6c:	00002a60 	cto.d	$r0,$r19
    2a70:	00002a68 	cto.d	$r8,$r19
    2a74:	00002a68 	cto.d	$r8,$r19
    2a78:	00002a70 	cto.d	$r16,$r19
    2a7c:	00002a70 	cto.d	$r16,$r19
    2a80:	00002a78 	cto.d	$r24,$r19
    2a84:	00002a78 	cto.d	$r24,$r19
    2a88:	00002a80 	cto.d	$r0,$r20
    2a8c:	00002a80 	cto.d	$r0,$r20
    2a90:	00002a88 	cto.d	$r8,$r20
    2a94:	00002a88 	cto.d	$r8,$r20
    2a98:	00002a90 	cto.d	$r16,$r20
    2a9c:	00002a90 	cto.d	$r16,$r20
    2aa0:	00002a98 	cto.d	$r24,$r20
    2aa4:	00002a98 	cto.d	$r24,$r20
    2aa8:	00002aa0 	cto.d	$r0,$r21
    2aac:	00002aa0 	cto.d	$r0,$r21
    2ab0:	00002aa8 	cto.d	$r8,$r21
    2ab4:	00002aa8 	cto.d	$r8,$r21
    2ab8:	00002ab0 	cto.d	$r16,$r21
    2abc:	00002ab0 	cto.d	$r16,$r21
    2ac0:	00002ab8 	cto.d	$r24,$r21
    2ac4:	00002ab8 	cto.d	$r24,$r21
    2ac8:	00002ac0 	cto.d	$r0,$r22
    2acc:	00002ac0 	cto.d	$r0,$r22
    2ad0:	00002ac8 	cto.d	$r8,$r22
    2ad4:	00002ac8 	cto.d	$r8,$r22
    2ad8:	00002ad0 	cto.d	$r16,$r22
    2adc:	00002ad0 	cto.d	$r16,$r22
    2ae0:	00002ad8 	cto.d	$r24,$r22
    2ae4:	00002ad8 	cto.d	$r24,$r22
    2ae8:	00002ae0 	cto.d	$r0,$r23
    2aec:	00002ae0 	cto.d	$r0,$r23
    2af0:	00002ae8 	cto.d	$r8,$r23
    2af4:	00002ae8 	cto.d	$r8,$r23
    2af8:	00002af0 	cto.d	$r16,$r23
    2afc:	00002af0 	cto.d	$r16,$r23
    2b00:	00002af8 	cto.d	$r24,$r23
    2b04:	00002af8 	cto.d	$r24,$r23
    2b08:	00002b00 	cto.d	$r0,$r24
    2b0c:	00002b00 	cto.d	$r0,$r24
    2b10:	00002b08 	cto.d	$r8,$r24
    2b14:	00002b08 	cto.d	$r8,$r24
    2b18:	00002b10 	cto.d	$r16,$r24
    2b1c:	00002b10 	cto.d	$r16,$r24
    2b20:	00002b18 	cto.d	$r24,$r24
    2b24:	00002b18 	cto.d	$r24,$r24

Disassembly of section .sdata:

00002b28 <_global_impure_ptr-0x48>:
    2b28:	00000000 	0x00000000
    2b2c:	3ff80000 	0x3ff80000
    2b30:	636f4361 	blt	$r27,$r1,-37056(0x36f40) # ffff9a70 <_etext+0xe3fecc20>
    2b34:	3fd287a7 	0x3fd287a7
    2b38:	8b60c8b3 	0x8b60c8b3
    2b3c:	3fc68a28 	0x3fc68a28
    2b40:	509f79fb 	b	132947832(0x7ec9f78) # 7eccab8 <__stack_start+0x7cc9de8>
    2b44:	3fd34413 	0x3fd34413
    2b48:	00000000 	0x00000000
    2b4c:	3ff00000 	0x3ff00000
    2b50:	00000000 	0x00000000
    2b54:	40240000 	beqz	$r0,9216(0x2400) # 4f54 <_bss_end+0x2284>
    2b58:	00000000 	0x00000000
    2b5c:	401c0000 	beqz	$r0,7168(0x1c00) # 475c <_bss_end+0x1a8c>
    2b60:	00000000 	0x00000000
    2b64:	40140000 	beqz	$r0,5120(0x1400) # 3f64 <_bss_end+0x1294>
    2b68:	00000000 	0x00000000
    2b6c:	3fe00000 	0x3fe00000

00002b70 <_global_impure_ptr>:
    2b70:	00002290 	clo.d	$r16,$r20

00002b74 <_impure_ptr>:
    2b74:	00002290 	clo.d	$r16,$r20

00002b78 <__mb_cur_max>:
    2b78:	00000001 	0x00000001

00002b7c <__malloc_sbrk_base>:
    2b7c:	ffffffff 	0xffffffff

00002b80 <__malloc_trim_threshold>:
    2b80:	00020000 	0x00020000
	...
    2b8c:	3ff00000 	0x3ff00000
    2b90:	00000000 	0x00000000
    2b94:	40240000 	beqz	$r0,9216(0x2400) # 4f94 <_bss_end+0x22c4>

00002b98 <__wctomb>:
    2b98:	1c009780 	pcaddu12i	$r0,1212(0x4bc)

Disassembly of section .got:

00002ba0 <_GLOBAL_OFFSET_TABLE_>:
    2ba0:	00000000 	0x00000000
    2ba4:	1c000480 	pcaddu12i	$r0,36(0x24)
    2ba8:	1c000490 	pcaddu12i	$r16,36(0x24)
    2bac:	1c0004a0 	pcaddu12i	$r0,37(0x25)
    2bb0:	1c0004b0 	pcaddu12i	$r16,37(0x25)
    2bb4:	00001a00 	cto.w	$r0,$r16
    2bb8:	00001a1b 	cto.w	$r27,$r16
    2bbc:	00001a34 	cto.w	$r20,$r17
    2bc0:	00001a4e 	cto.w	$r14,$r18
    2bc4:	00001a66 	cto.w	$r6,$r19
    2bc8:	00001a7f 	cto.w	$r31,$r19
    2bcc:	00001a96 	cto.w	$r22,$r20
    2bd0:	00001aa6 	cto.w	$r6,$r21
    2bd4:	00001abf 	cto.w	$r31,$r21
    2bd8:	00001ac1 	cto.w	$r1,$r22
    2bdc:	00001ad1 	cto.w	$r17,$r22
    2be0:	00001adf 	cto.w	$r31,$r22
    2be4:	00001af6 	cto.w	$r22,$r23
    2be8:	00001af8 	cto.w	$r24,$r23
    2bec:	00001b0e 	cto.w	$r14,$r24
    2bf0:	00001b24 	cto.w	$r4,$r25
    2bf4:	00001b34 	cto.w	$r20,$r25
    2bf8:	00001b44 	cto.w	$r4,$r26
    2bfc:	00001b54 	cto.w	$r20,$r26
    2c00:	00001b64 	cto.w	$r4,$r27
    2c04:	00001b7b 	cto.w	$r27,$r27
    2c08:	00001b9c 	cto.w	$r28,$r28
    2c0c:	00001bbd 	cto.w	$r29,$r29
    2c10:	00001bdf 	cto.w	$r31,$r30
    2c14:	00001bfe 	cto.w	$r30,$r31
    2c18:	1c006c0c 	pcaddu12i	$r12,864(0x360)
    2c1c:	00001000 	clo.w	$r0,$r0
    2c20:	00002ccc 	ctz.d	$r12,$r6
    2c24:	1c004400 	pcaddu12i	$r0,544(0x220)
    2c28:	00001e88 	ctz.w	$r8,$r20
    2c2c:	00002c88 	ctz.d	$r8,$r4
    2c30:	00002cc4 	ctz.d	$r4,$r6
    2c34:	1c0082ac 	pcaddu12i	$r12,1045(0x415)
    2c38:	00002cc8 	ctz.d	$r8,$r6
    2c3c:	00002b70 	cto.d	$r16,$r27
    2c40:	00001e60 	ctz.w	$r0,$r19
    2c44:	00002cd0 	ctz.d	$r16,$r6
    2c48:	00202cd0 	div.w	$r16,$r6,$r11
    2c4c:	00001500 	clz.w	$r0,$r8
    2c50:	00002b7c 	cto.d	$r28,$r27
    2c54:	00002c88 	ctz.d	$r8,$r4
    2c58:	1c0003b0 	pcaddu12i	$r16,29(0x1d)
    2c5c:	00102cd0 	add.w	$r16,$r6,$r11
    2c60:	00002720 	clz.d	$r0,$r25
    2c64:	1c006b20 	pcaddu12i	$r0,857(0x359)
    2c68:	1c006c74 	pcaddu12i	$r20,867(0x363)
    2c6c:	00102cd0 	add.w	$r16,$r6,$r11
    2c70:	00002184 	clo.d	$r4,$r12
    2c74:	00002b74 	cto.d	$r20,$r27
    2c78:	00002cd0 	ctz.d	$r16,$r6
    2c7c:	1c006b84 	pcaddu12i	$r4,860(0x35c)
    2c80:	00002b80 	cto.d	$r0,$r28
    2c84:	00002b98 	cto.d	$r24,$r28

Disassembly of section .bss:

00002c88 <__malloc_current_mallinfo>:
	...

00002cb0 <_PathLocale>:
_bss_start():
    2cb0:	00000000 	0x00000000

00002cb4 <__mlocale_changed>:
    2cb4:	00000000 	0x00000000

00002cb8 <__nlocale_changed>:
    2cb8:	00000000 	0x00000000

00002cbc <__malloc_max_total_mem>:
    2cbc:	00000000 	0x00000000

00002cc0 <__malloc_max_sbrked_mem>:
    2cc0:	00000000 	0x00000000

00002cc4 <__malloc_top_pad>:
    2cc4:	00000000 	0x00000000

00002cc8 <heap_ptr>:
/home/chenzeshuai/loongarch32-toolchain/newlib_32-2019.01/libgloss/build/loongarch32/../../loongarch32/syscalls.c:12
    2cc8:	00000000 	0x00000000

00002ccc <errno>:
    2ccc:	00000000 	0x00000000

Disassembly of section .heap:

00002cd0 <__heap_start>:
	...

Disassembly of section .stack:

00102cd0 <__stack_end>:
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	0x3a434347
   4:	6f4c2820 	bgeu	$r1,$r0,-46040(0x34c28) # ffff4c2c <_etext+0xe3fe7ddc>
   8:	41676e6f 	beqz	$r19,4024172(0x3d676c) # 3d6774 <__stack_start+0x1d3aa4>
   c:	20686372 	ll.w	$r18,$r27,26720(0x6860)
  10:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
  14:	6c6f6f74 	bgeu	$r27,$r20,28524(0x6f6c) # 6f80 <_bss_end+0x42b0>
  18:	69616863 	bltu	$r3,$r3,90472(0x16168) # 16180 <_bss_end+0x134b0>
  1c:	414c206e 	beqz	$r3,3755040(0x394c20) # 394c3c <__stack_start+0x191f6c>
  20:	76203233 	0x76203233
  24:	20302e32 	ll.w	$r18,$r17,12332(0x302c)
  28:	32303228 	0x32303228
  2c:	30393033 	0x30393033
  30:	20292933 	ll.w	$r19,$r9,10536(0x2928)
  34:	2e332e38 	0x2e332e38
  38:	43470030 	beqz	$r1,-3979520(0x434700) # ffc34738 <_etext+0xe3c278e8>
  3c:	28203a43 	ld.b	$r3,$r18,-2034(0x80e)
  40:	29554e47 	st.h	$r7,$r18,1363(0x553)
  44:	332e3820 	xvstelm.w	$xr0,$r1,-456(0x238),0x3
  48:	Address 0x0000000000000048 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	0x0000000c
   4:	ffffffff 	0xffffffff
   8:	7c010003 	0x7c010003
   c:	00030c01 	0x00030c01
  10:	0000000c 	0x0000000c
  14:	00000000 	0x00000000
  18:	1c00066c 	pcaddu12i	$r12,51(0x33)
  1c:	00000070 	0x00000070
  20:	00000034 	0x00000034
  24:	00000000 	0x00000000
  28:	1c0006dc 	pcaddu12i	$r28,54(0x36)
  2c:	000000d4 	0x000000d4
  30:	00000404 	0x00000404
  34:	04200e00 	csrxchg	$r0,$r16,0x803
  38:	00000008 	0x00000008
  3c:	0c040296 	0x0c040296
  40:	81000000 	0x81000000
  44:	00b00401 	bstrins.d	$r1,$r0,0x30,0x1
  48:	04c10000 	csrrd	$r0,0x3040
  4c:	00000004 	0x00000004
  50:	000404d6 	alsl.w	$r22,$r6,$r1,0x1
  54:	000e0000 	bytepick.d	$r0,$r0,$r0,0x4
  58:	0000000c 	0x0000000c
  5c:	ffffffff 	0xffffffff
  60:	7c010003 	0x7c010003
  64:	00030c01 	0x00030c01
  68:	00000030 	0x00000030
  6c:	00000058 	0x00000058
  70:	1c0007b0 	pcaddu12i	$r16,61(0x3d)
  74:	00000038 	0x00000038
  78:	00000404 	0x00000404
  7c:	04100e00 	csrxchg	$r0,$r16,0x403
  80:	00000008 	0x00000008
  84:	01810296 	0x01810296
  88:	00002004 	clo.d	$r4,$r0
  8c:	0404c100 	csrxchg	$r0,$r8,0x130
  90:	d6000000 	0xd6000000
  94:	00000404 	0x00000404
  98:	00000e00 	0x00000e00
  9c:	0000000c 	0x0000000c
  a0:	ffffffff 	0xffffffff
  a4:	7c010003 	0x7c010003
  a8:	00030c01 	0x00030c01
  ac:	00000048 	0x00000048
  b0:	0000009c 	0x0000009c
  b4:	1c009814 	pcaddu12i	$r20,1216(0x4c0)
  b8:	0000007c 	0x0000007c
  bc:	00000404 	0x00000404
  c0:	04200e00 	csrxchg	$r0,$r16,0x803
  c4:	00000014 	0x00000014
  c8:	05990498 	0x05990498
  cc:	02960181 	addi.w	$r1,$r12,1408(0x580)
  d0:	48040397 	0x48040397
  d4:	c1000000 	0xc1000000
  d8:	00000404 	0x00000404
  dc:	0804d600 	0x0804d600
  e0:	d7000000 	0xd7000000
  e4:	00000404 	0x00000404
  e8:	0404d800 	csrrd	$r0,0x136
  ec:	d9000000 	0xd9000000
  f0:	00000404 	0x00000404
  f4:	00000e00 	0x00000e00
  f8:	0000000c 	0x0000000c
  fc:	ffffffff 	0xffffffff
 100:	7c010003 	0x7c010003
 104:	00030c01 	0x00030c01
 108:	0000000c 	0x0000000c
 10c:	000000f8 	0x000000f8
 110:	1c009890 	pcaddu12i	$r16,1220(0x4c4)
 114:	00000014 	0x00000014
 118:	0000000c 	0x0000000c
 11c:	ffffffff 	0xffffffff
 120:	7c010003 	0x7c010003
 124:	00030c01 	0x00030c01
 128:	0000000c 	0x0000000c
 12c:	00000118 	0x00000118
 130:	1c0098a4 	pcaddu12i	$r4,1221(0x4c5)
 134:	00000008 	0x00000008
 138:	0000000c 	0x0000000c
 13c:	ffffffff 	0xffffffff
 140:	7c010003 	0x7c010003
 144:	00030c01 	0x00030c01
 148:	0000000c 	0x0000000c
 14c:	00000138 	0x00000138
 150:	1c0098ac 	pcaddu12i	$r12,1221(0x4c5)
 154:	00000008 	0x00000008

Disassembly of section .debug_info:

00000000 <.debug_info>:
       0:	00000e3f 	0x00000e3f
       4:	00000004 	0x00000004
       8:	01040000 	0x01040000
       c:	20554e47 	ll.w	$r7,$r18,21836(0x554c)
      10:	20373143 	ll.w	$r3,$r10,14128(0x3730)
      14:	2e332e38 	0x2e332e38
      18:	6d2d2030 	bgeu	$r1,$r16,77088(0x12d20) # 12d38 <_bss_end+0x10068>
      1c:	68637261 	bltu	$r19,$r1,25456(0x6370) # 638c <_bss_end+0x36bc>
      20:	33616c3d 	xvstelm.h	$xr29,$r1,182(0xb6),0x8
      24:	206d6932 	ll.w	$r18,$r9,28008(0x6d68)
      28:	62616d2d 	blt	$r9,$r13,-106132(0x2616c) # fffe6194 <_etext+0xe3fd9344>
      2c:	6c693d69 	bgeu	$r11,$r9,26940(0x693c) # 6968 <_bss_end+0x3c98>
      30:	20323370 	ll.w	$r16,$r27,12848(0x3230)
      34:	2d20672d 	0x2d20672d
      38:	2d20324f 	0x2d20324f
      3c:	0c00324f 	0x0c00324f
      40:	2e2f2e2e 	0x2e2f2e2e
      44:	6f6c2f2e 	bgeu	$r25,$r14,-37844(0x36c2c) # ffff6c70 <_etext+0xe3fe9e20>
      48:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 167b4 <_bss_end+0x13ae4>
      4c:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
      50:	79732f32 	0x79732f32
      54:	6c616373 	bgeu	$r27,$r19,24928(0x6160) # 61b4 <_bss_end+0x34e4>
      58:	632e736c 	blt	$r27,$r12,-53648(0x32e70) # ffff2ec8 <_etext+0xe3fe6078>
      5c:	6f682f00 	bgeu	$r24,$r0,-38868(0x3682c) # ffff6888 <_etext+0xe3fe9a38>
      60:	632f656d 	blt	$r11,$r13,-53404(0x32f64) # ffff2fc4 <_etext+0xe3fe6174>
      64:	7a6e6568 	0x7a6e6568
      68:	75687365 	0x75687365
      6c:	6c2f6961 	bgeu	$r11,$r1,12136(0x2f68) # 2fd4 <_bss_end+0x304>
      70:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff6edc <_etext+0xe3fea08c>
      74:	68637261 	bltu	$r19,$r1,25456(0x6370) # 63e4 <_bss_end+0x3714>
      78:	742d3233 	0x742d3233
      7c:	636c6f6f 	blt	$r27,$r15,-37780(0x36c6c) # ffff6ce8 <_etext+0xe3fe9e98>
      80:	6e696168 	bgeu	$r11,$r8,-104096(0x26960) # fffe69e0 <_etext+0xe3fd9b90>
      84:	77656e2f 	xvssrani.wu.d	$xr15,$xr17,0x1b
      88:	5f62696c 	bne	$r11,$r12,-40344(0x36268) # ffff62f0 <_etext+0xe3fe94a0>
      8c:	322d3233 	xvldrepl.w	$xr19,$r17,-720(0xd30)
      90:	2e393130 	0x2e393130
      94:	6c2f3130 	bgeu	$r9,$r16,12080(0x2f30) # 2fc4 <_bss_end+0x2f4>
      98:	6c676269 	bgeu	$r19,$r9,26464(0x6760) # 67f8 <_bss_end+0x3b28>
      9c:	2f73736f 	0x2f73736f
      a0:	6c697562 	bgeu	$r11,$r2,26996(0x6974) # 6a14 <_bss_end+0x3d44>
      a4:	6f6c2f64 	bgeu	$r27,$r4,-37844(0x36c2c) # ffff6cd0 <_etext+0xe3fe9e80>
      a8:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16814 <_bss_end+0x13b44>
      ac:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
      b0:	066c0032 	0x066c0032
      b4:	01441c00 	0x01441c00
      b8:	00000000 	0x00000000
      bc:	01020000 	0x01020000
      c0:	67697306 	bge	$r24,$r6,-38544(0x36970) # ffff6a30 <_etext+0xe3fe9be0>
      c4:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
      c8:	72616863 	0x72616863
      cc:	08010200 	0x08010200
      d0:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 1743c <_bss_end+0x1476c>
      d4:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6640 <_bss_end+0x3970>
      d8:	61686320 	blt	$r25,$r0,92256(0x16860) # 16938 <_bss_end+0x13c68>
      dc:	02020072 	slti	$r18,$r3,128(0x80)
      e0:	6f687305 	bgeu	$r24,$r5,-38800(0x36870) # ffff6950 <_etext+0xe3fe9b00>
      e4:	69207472 	bltu	$r3,$r18,73844(0x12074) # 12158 <_bss_end+0xf488>
      e8:	0200746e 	slti	$r14,$r3,29(0x1d)
      ec:	68730702 	bltu	$r24,$r2,29444(0x7304) # 73f0 <_bss_end+0x4720>
      f0:	2074726f 	ll.w	$r15,$r19,29808(0x7470)
      f4:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 17460 <_bss_end+0x14790>
      f8:	64656e67 	bge	$r19,$r7,25964(0x656c) # 6664 <_bss_end+0x3994>
      fc:	746e6920 	0x746e6920
     100:	05040200 	0x05040200
     104:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff6f70 <_etext+0xe3fea120>
     108:	746e6920 	0x746e6920
     10c:	07040200 	0x07040200
     110:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff6f7c <_etext+0xe3fea12c>
     114:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
     118:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 16f7c <_bss_end+0x142ac>
     11c:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe6a3c <_etext+0xe3fd9bec>
     120:	08020074 	0x08020074
     124:	6e6f6c05 	bgeu	$r0,$r5,-102548(0x26f6c) # fffe7090 <_etext+0xe3fda240>
     128:	6f6c2067 	bgeu	$r3,$r7,-37856(0x36c20) # ffff6d48 <_etext+0xe3fe9ef8>
     12c:	6920676e 	bltu	$r27,$r14,73828(0x12064) # 12190 <_bss_end+0xf4c0>
     130:	0200746e 	slti	$r14,$r3,29(0x1d)
     134:	6f6c0708 	bgeu	$r24,$r8,-37884(0x36c04) # ffff6d38 <_etext+0xe3fe9ee8>
     138:	6c20676e 	bgeu	$r27,$r14,8292(0x2064) # 219c <__clz_tab+0x18>
     13c:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
     140:	69736e75 	bltu	$r19,$r21,95084(0x1736c) # 174ac <_bss_end+0x147dc>
     144:	64656e67 	bge	$r19,$r7,25964(0x656c) # 66b0 <_bss_end+0x39e0>
     148:	746e6920 	0x746e6920
     14c:	05040200 	0x05040200
     150:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     154:	75070402 	xvssran.hu.w	$xr2,$xr0,$xr1
     158:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff6ac8 <_etext+0xe3fe9c78>
     15c:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
     160:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     164:	4f4c5f03 	jirl	$r3,$r24,-45988(0x34c5c)
     168:	525f4b43 	b	-49389752(0xd0e5f48) # fd0e60b0 <_etext+0xe10d9260>
     16c:	52554345 	b	-48868032(0xd165540) # fd1656ac <_etext+0xe115885c>
     170:	45564953 	bnez	$r10,-3320248(0x4d5648) # ffcd57b8 <_etext+0xe3cc8968>
     174:	0200545f 	slti	$r31,$r2,21(0x15)
     178:	014d0d30 	0x014d0d30
     17c:	5f030000 	bne	$r0,$r0,-64768(0x30300) # ffff047c <_etext+0xe3fe362c>
     180:	5f66666f 	bne	$r19,$r15,-39324(0x36664) # ffff67e4 <_etext+0xe3fe9994>
     184:	10030074 	addu16i.d	$r20,$r3,192(0xc0)
     188:	0001010e 	0x0001010e
     18c:	665f0300 	bge	$r24,$r0,-106752(0x25f00) # fffe608c <_etext+0xe3fd923c>
     190:	5f736f70 	bne	$r27,$r16,-35988(0x3736c) # ffff74fc <_etext+0xe3fea6ac>
     194:	27030074 	stptr.d	$r20,$r3,768(0x300)
     198:	0001010e 	0x0001010e
     19c:	69770400 	bltu	$r0,$r0,96004(0x17704) # 178a0 <_bss_end+0x14bd0>
     1a0:	745f746e 	0x745f746e
     1a4:	01650400 	0x01650400
     1a8:	00015417 	0x00015417
     1ac:	03040500 	lu52i.d	$r0,$r8,257(0x101)
     1b0:	01d40350 	0x01d40350
     1b4:	5f060000 	bne	$r0,$r0,-64000(0x30600) # ffff07b4 <_etext+0xe3fe3964>
     1b8:	6863775f 	bltu	$r26,$r31,25460(0x6374) # 652c <_bss_end+0x385c>
     1bc:	0c520300 	vfcmp.ceq.s	$vr0,$vr24,$vr0
     1c0:	0000019d 	0x0000019d
     1c4:	775f5f06 	xvsrarni.d.q	$xr6,$xr24,0x57
     1c8:	00626863 	bstrins.w	$r3,$r3,0x2,0x1a
     1cc:	d4135303 	0xd4135303
     1d0:	00000001 	0x00000001
     1d4:	0000cd07 	0x0000cd07
     1d8:	0001e400 	asrtgt.d	$r0,$r25
     1dc:	01540800 	0x01540800
     1e0:	00030000 	0x00030000
     1e4:	4d030809 	jirl	$r9,$r0,66312(0x10308)
     1e8:	00021009 	0x00021009
     1ec:	5f5f0a00 	bne	$r16,$r0,-41208(0x35f08) # ffff60f4 <_etext+0xe3fe92a4>
     1f0:	6e756f63 	bgeu	$r27,$r3,-101012(0x2756c) # fffe775c <_etext+0xe3fda90c>
     1f4:	4f030074 	jirl	$r20,$r3,-64768(0x30300)
     1f8:	00014d07 	0x00014d07
     1fc:	5f0a0000 	bne	$r0,$r0,-62976(0x30a00) # ffff0bfc <_etext+0xe3fe3dac>
     200:	6c61765f 	bgeu	$r18,$r31,24948(0x6174) # 6374 <_bss_end+0x36a4>
     204:	03006575 	lu52i.d	$r21,$r11,25(0x19)
     208:	01ad0554 	0x01ad0554
     20c:	00040000 	alsl.w	$r0,$r0,$r0,0x1
     210:	626d5f03 	blt	$r24,$r3,-103076(0x26d5c) # fffe6f6c <_etext+0xe3fda11c>
     214:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
     218:	00745f65 	bstrins.w	$r5,$r27,0x14,0x17
     21c:	e4035503 	0xe4035503
     220:	03000001 	lu52i.d	$r1,$r0,0
     224:	6f6c665f 	bgeu	$r18,$r31,-37788(0x36c64) # ffff6e88 <_etext+0xe3fea038>
     228:	745f6b63 	0x745f6b63
     22c:	1b590300 	pcalau12i	$r0,-341992(0xac818)
     230:	00000164 	0x00000164
     234:	7303040b 	0x7303040b
     238:	5f657a69 	bne	$r19,$r9,-39560(0x36578) # ffff67b0 <_etext+0xe3fe9960>
     23c:	d8040074 	0xd8040074
     240:	00015417 	0x00015417
     244:	04100200 	csrxchg	$r0,$r16,0x400
     248:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff70b4 <_etext+0xe3fea264>
     24c:	756f6420 	0x756f6420
     250:	00656c62 	bstrins.w	$r2,$r3,0x5,0x1b
     254:	6f6c6303 	bgeu	$r24,$r3,-37792(0x36c60) # ffff6eb4 <_etext+0xe3fea064>
     258:	745f6b63 	0x745f6b63
     25c:	13750500 	addu16i.d	$r0,$r8,-8895(0xdd41)
     260:	0000010d 	0x0000010d
     264:	026a040c 	sltui	$r12,$r0,-1407(0xa81)
     268:	01020000 	0x01020000
     26c:	61686306 	blt	$r24,$r6,92256(0x16860) # 16acc <_bss_end+0x13dfc>
     270:	6a0d0072 	bltu	$r3,$r18,-127744(0x20d00) # fffe0f70 <_etext+0xe3fd4120>
     274:	03000002 	lu52i.d	$r2,$r0,0
     278:	4c555f5f 	jirl	$r31,$r26,21852(0x555c)
     27c:	00676e6f 	bstrins.w	$r15,$r19,0x7,0x1b
     280:	0d191606 	vbitsel.v	$vr6,$vr16,$vr5,$vr18
     284:	0e000001 	0x0e000001
     288:	6769425f 	bge	$r18,$r31,-38592(0x36940) # ffff6bc8 <_etext+0xe3fe9d78>
     28c:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     290:	082d0618 	fmadd.d	$f24,$f16,$f1,$f26
     294:	000002ee 	0x000002ee
     298:	656e5f0a 	bge	$r24,$r10,93788(0x16e5c) # 170f4 <_bss_end+0x14424>
     29c:	06007478 	cacop	0x18,$r3,29(0x1d)
     2a0:	02ee132f 	addi.d	$r15,$r25,-1148(0xb84)
     2a4:	0a000000 	0x0a000000
     2a8:	06006b5f 	cacop	0x1f,$r26,26(0x1a)
     2ac:	014d0730 	0x014d0730
     2b0:	0a040000 	0x0a040000
     2b4:	78616d5f 	0x78616d5f
     2b8:	00736477 	bstrins.w	$r23,$r3,0x13,0x19
     2bc:	4d0b3006 	jirl	$r6,$r0,68400(0x10b30)
     2c0:	08000001 	0x08000001
     2c4:	69735f0a 	bltu	$r24,$r10,95068(0x1735c) # 17620 <_bss_end+0x14950>
     2c8:	06006e67 	cacop	0x7,$r19,27(0x1b)
     2cc:	014d1430 	0x014d1430
     2d0:	0a0c0000 	0x0a0c0000
     2d4:	7364775f 	vssrani.bu.h	$vr31,$vr26,0xd
     2d8:	1b300600 	pcalau12i	$r0,-425936(0x98030)
     2dc:	0000014d 	0x0000014d
     2e0:	785f0a10 	0x785f0a10
     2e4:	0b310600 	0x0b310600
     2e8:	000002f4 	0x000002f4
     2ec:	040c0014 	csrrd	$r20,0x300
     2f0:	00000287 	0x00000287
     2f4:	00027707 	0x00027707
     2f8:	00030400 	0x00030400
     2fc:	01540800 	0x01540800
     300:	00000000 	0x00000000
     304:	745f5f0e 	0x745f5f0e
     308:	0624006d 	cacop	0xd,$r3,-1792(0x900)
     30c:	03bc0835 	ori	$r21,$r1,0xf02
     310:	5f0a0000 	bne	$r0,$r0,-62976(0x30a00) # ffff0d10 <_etext+0xe3fe3ec0>
     314:	5f6d745f 	bne	$r2,$r31,-37516(0x36d74) # ffff7088 <_etext+0xe3fea238>
     318:	00636573 	bstrins.w	$r19,$r11,0x3,0x19
     31c:	4d093706 	jirl	$r6,$r24,67892(0x10934)
     320:	00000001 	0x00000001
     324:	745f5f0a 	0x745f5f0a
     328:	696d5f6d 	bltu	$r27,$r13,93532(0x16d5c) # 17084 <_bss_end+0x143b4>
     32c:	3806006e 	0x3806006e
     330:	00014d09 	0x00014d09
     334:	5f0a0400 	bne	$r0,$r0,-62972(0x30a04) # ffff0d38 <_etext+0xe3fe3ee8>
     338:	5f6d745f 	bne	$r2,$r31,-37516(0x36d74) # ffff70ac <_etext+0xe3fea25c>
     33c:	72756f68 	0x72756f68
     340:	09390600 	0x09390600
     344:	0000014d 	0x0000014d
     348:	5f5f0a08 	bne	$r16,$r8,-41208(0x35f08) # ffff6250 <_etext+0xe3fe9400>
     34c:	6d5f6d74 	bgeu	$r11,$r20,89964(0x15f6c) # 162b8 <_bss_end+0x135e8>
     350:	00796164 	bstrins.w	$r4,$r11,0x19,0x18
     354:	4d093a06 	jirl	$r6,$r16,67896(0x10938)
     358:	0c000001 	0x0c000001
     35c:	745f5f0a 	0x745f5f0a
     360:	6f6d5f6d 	bgeu	$r27,$r13,-37540(0x36d5c) # ffff70bc <_etext+0xe3fea26c>
     364:	3b06006e 	0x3b06006e
     368:	00014d09 	0x00014d09
     36c:	5f0a1000 	bne	$r0,$r0,-62960(0x30a10) # ffff0d7c <_etext+0xe3fe3f2c>
     370:	5f6d745f 	bne	$r2,$r31,-37516(0x36d74) # ffff70e4 <_etext+0xe3fea294>
     374:	72616579 	0x72616579
     378:	093c0600 	0x093c0600
     37c:	0000014d 	0x0000014d
     380:	5f5f0a14 	bne	$r16,$r20,-41208(0x35f08) # ffff6288 <_etext+0xe3fe9438>
     384:	775f6d74 	xvsrarni.d.q	$xr20,$xr11,0x5b
     388:	00796164 	bstrins.w	$r4,$r11,0x19,0x18
     38c:	4d093d06 	jirl	$r6,$r8,67900(0x1093c)
     390:	18000001 	pcaddi	$r1,0
     394:	745f5f0a 	0x745f5f0a
     398:	64795f6d 	bge	$r27,$r13,31068(0x795c) # 7cf4 <_bss_end+0x5024>
     39c:	06007961 	cacop	0x1,$r11,30(0x1e)
     3a0:	014d093e 	0x014d093e
     3a4:	0a1c0000 	xvfmadd.s	$xr0,$xr0,$xr0,$xr24
     3a8:	6d745f5f 	bgeu	$r26,$r31,95324(0x1745c) # 17804 <_bss_end+0x14b34>
     3ac:	6473695f 	bge	$r10,$r31,29544(0x7368) # 7714 <_bss_end+0x4a44>
     3b0:	06007473 	cacop	0x13,$r3,29(0x1d)
     3b4:	014d093f 	0x014d093f
     3b8:	00200000 	div.w	$r0,$r0,$r0
     3bc:	0000000f 	0x0000000f
     3c0:	06010800 	cacop	0x0,$r0,66(0x42)
     3c4:	04160848 	csrxchg	$r8,$r2,0x582
     3c8:	5f0a0000 	bne	$r0,$r0,-62976(0x30a00) # ffff0dc8 <_etext+0xe3fe3f78>
     3cc:	72616e66 	0x72616e66
     3d0:	06007367 	cacop	0x7,$r27,28(0x1c)
     3d4:	04160a49 	csrxchg	$r9,$r18,0x582
     3d8:	0a000000 	0x0a000000
     3dc:	6f73645f 	bgeu	$r2,$r31,-35996(0x37364) # ffff7740 <_etext+0xe3fea8f0>
     3e0:	6e61685f 	bgeu	$r2,$r31,-106136(0x26168) # fffe6548 <_etext+0xe3fd96f8>
     3e4:	00656c64 	bstrins.w	$r4,$r3,0x5,0x1b
     3e8:	16094a06 	lu32i.d	$r6,19024(0x4a50)
     3ec:	80000004 	0x80000004
     3f0:	6e665f10 	bgeu	$r24,$r16,-104868(0x2665c) # fffe6a4c <_etext+0xe3fd9bfc>
     3f4:	65707974 	bge	$r11,$r20,94328(0x17078) # 1746c <_bss_end+0x1479c>
     3f8:	4c060073 	jirl	$r19,$r3,1536(0x600)
     3fc:	0002770a 	0x0002770a
     400:	10010000 	addu16i.d	$r0,$r0,64(0x40)
     404:	5f73695f 	bne	$r10,$r31,-35992(0x37368) # ffff776c <_etext+0xe3fea91c>
     408:	00617863 	bstrins.w	$r3,$r3,0x1,0x1e
     40c:	770a4f06 	0x770a4f06
     410:	04000002 	csrrd	$r2,0x0
     414:	34070001 	0x34070001
     418:	26000002 	ldptr.d	$r2,$r0,0
     41c:	08000004 	0x08000004
     420:	00000154 	0x00000154
     424:	5f11001f 	bne	$r0,$r31,-61184(0x31100) # ffff1524 <_etext+0xe3fe46d4>
     428:	78657461 	0x78657461
     42c:	90007469 	0x90007469
     430:	085b0601 	fmsub.s	$f1,$f16,$f1,$f22
     434:	00000471 	0x00000471
     438:	656e5f0a 	bge	$r24,$r10,93788(0x16e5c) # 17294 <_bss_end+0x145c4>
     43c:	06007478 	cacop	0x18,$r3,29(0x1d)
     440:	0471125c 	csrxchg	$r28,$r18,0x1c44
     444:	0a000000 	0x0a000000
     448:	646e695f 	bge	$r10,$r31,28264(0x6e68) # 72b0 <_bss_end+0x45e0>
     44c:	065d0600 	0x065d0600
     450:	0000014d 	0x0000014d
     454:	665f0a04 	bge	$r16,$r4,-106744(0x25f08) # fffe635c <_etext+0xe3fd950c>
     458:	0600736e 	cacop	0xe,$r27,28(0x1c)
     45c:	0477095f 	csrxchg	$r31,$r10,0x1dc2
     460:	12080000 	addu16i.d	$r0,$r0,-32256(0x8200)
     464:	00000000 	0x00000000
     468:	bc1e6006 	0xbc1e6006
     46c:	88000003 	0x88000003
     470:	26040c00 	ldptr.d	$r0,$r0,1036(0x40c)
     474:	07000004 	0x07000004
     478:	00000487 	0x00000487
     47c:	00000487 	0x00000487
     480:	00015408 	0x00015408
     484:	0c001f00 	0x0c001f00
     488:	00048d04 	alsl.w	$r4,$r8,$r3,0x2
     48c:	5f0e1300 	bne	$r24,$r0,-61936(0x30e10) # ffff129c <_etext+0xe3fe444c>
     490:	7562735f 	0x7562735f
     494:	06080066 	cacop	0x6,$r3,512(0x200)
     498:	04bd0873 	csrxchg	$r19,$r3,0x2f42
     49c:	5f0a0000 	bne	$r0,$r0,-62976(0x30a00) # ffff0e9c <_etext+0xe3fe404c>
     4a0:	65736162 	bge	$r11,$r2,95072(0x17360) # 17800 <_bss_end+0x14b30>
     4a4:	11740600 	addu16i.d	$r0,$r16,23809(0x5d01)
     4a8:	000004bd 	0x000004bd
     4ac:	735f0a00 	vsrarni.d.q	$vr0,$vr16,0x42
     4b0:	00657a69 	bstrins.w	$r9,$r19,0x5,0x1e
     4b4:	4d067506 	jirl	$r6,$r8,67188(0x10674)
     4b8:	04000001 	csrrd	$r1,0x0
     4bc:	cd040c00 	0xcd040c00
     4c0:	0e000000 	0x0e000000
     4c4:	46735f5f 	bnez	$r26,-101540(0x7e735c) # fffe7820 <_etext+0xe3fda9d0>
     4c8:	00454c49 	srli.d	$r9,$r2,0x13
     4cc:	08bd0668 	0x08bd0668
     4d0:	0000063c 	0x0000063c
     4d4:	00705f0a 	bstrins.w	$r10,$r24,0x10,0x17
     4d8:	bd12be06 	0xbd12be06
     4dc:	00000004 	0x00000004
     4e0:	00725f0a 	bstrins.w	$r10,$r24,0x12,0x17
     4e4:	4d07bf06 	jirl	$r6,$r24,67516(0x107bc)
     4e8:	04000001 	csrrd	$r1,0x0
     4ec:	00775f0a 	bstrins.w	$r10,$r24,0x17,0x17
     4f0:	4d07c006 	jirl	$r6,$r0,67520(0x107c0)
     4f4:	08000001 	0x08000001
     4f8:	6c665f0a 	bgeu	$r24,$r10,26204(0x665c) # 6b54 <_bss_end+0x3e84>
     4fc:	00736761 	bstrins.w	$r1,$r27,0x13,0x19
     500:	de09c106 	0xde09c106
     504:	0c000000 	0x0c000000
     508:	69665f0a 	bltu	$r24,$r10,91740(0x1665c) # 16b64 <_bss_end+0x13e94>
     50c:	0600656c 	cacop	0xc,$r11,25(0x19)
     510:	00de09c2 	bstrpick.d	$r2,$r14,0x1e,0x2
     514:	0a0e0000 	0x0a0e0000
     518:	0066625f 	bstrins.w	$r31,$r18,0x6,0x18
     51c:	8e11c306 	0x8e11c306
     520:	10000004 	addu16i.d	$r4,$r0,0
     524:	626c5f0a 	blt	$r24,$r10,-103332(0x26c5c) # fffe7180 <_etext+0xe3fda330>
     528:	7a697366 	0x7a697366
     52c:	c4060065 	0xc4060065
     530:	00014d07 	0x00014d07
     534:	5f0a1800 	bne	$r0,$r0,-62952(0x30a18) # ffff0f4c <_etext+0xe3fe40fc>
     538:	6b6f6f63 	bltu	$r27,$r3,-37012(0x36f6c) # ffff74a4 <_etext+0xe3fea654>
     53c:	06006569 	cacop	0x9,$r11,25(0x19)
     540:	023408cb 	slti	$r11,$r6,-766(0xd02)
     544:	0a1c0000 	xvfmadd.s	$xr0,$xr0,$xr0,$xr24
     548:	6165725f 	blt	$r18,$r31,91504(0x16570) # 16ab8 <_bss_end+0x13de8>
     54c:	cd060064 	0xcd060064
     550:	0008171b 	bytepick.w	$r27,$r24,$r5,0x0
     554:	5f0a2000 	bne	$r0,$r0,-62944(0x30a20) # ffff0f74 <_etext+0xe3fe4124>
     558:	74697277 	xvavgr.w	$xr23,$xr19,$xr28
     55c:	cf060065 	0xcf060065
     560:	0008411b 	bytepick.w	$r27,$r8,$r16,0x0
     564:	5f0a2400 	bne	$r0,$r0,-62940(0x30a24) # ffff0f88 <_etext+0xe3fe4138>
     568:	6b656573 	bltu	$r11,$r19,-39580(0x36564) # ffff6acc <_etext+0xe3fe9c7c>
     56c:	0bd20600 	0x0bd20600
     570:	00000865 	0x00000865
     574:	635f0a28 	blt	$r17,$r8,-41208(0x35f08) # ffff647c <_etext+0xe3fe962c>
     578:	65736f6c 	bge	$r27,$r12,95084(0x1736c) # 178e4 <_bss_end+0x14c14>
     57c:	07d30600 	0x07d30600
     580:	0000087f 	0x0000087f
     584:	755f0a2c 	0x755f0a2c
     588:	d6060062 	0xd6060062
     58c:	00048e11 	alsl.w	$r17,$r16,$r3,0x2
     590:	5f0a3000 	bne	$r0,$r0,-62928(0x30a30) # ffff0fc0 <_etext+0xe3fe4170>
     594:	06007075 	cacop	0x15,$r3,28(0x1c)
     598:	04bd12d7 	csrxchg	$r23,$r22,0x2f44
     59c:	0a380000 	0x0a380000
     5a0:	0072755f 	bstrins.w	$r31,$r10,0x12,0x1d
     5a4:	4d07d806 	jirl	$r6,$r0,67544(0x107d8)
     5a8:	3c000001 	0x3c000001
     5ac:	62755f0a 	blt	$r24,$r10,-101028(0x2755c) # fffe7b08 <_etext+0xe3fdacb8>
     5b0:	06006675 	cacop	0x15,$r19,25(0x19)
     5b4:	088511db 	0x088511db
     5b8:	0a400000 	0x0a400000
     5bc:	75626e5f 	0x75626e5f
     5c0:	dc060066 	0xdc060066
     5c4:	00089511 	bytepick.w	$r17,$r8,$r5,0x1
     5c8:	5f0a4300 	bne	$r24,$r0,-62912(0x30a40) # ffff1008 <_etext+0xe3fe41b8>
     5cc:	0600626c 	cacop	0xc,$r19,24(0x18)
     5d0:	048e11df 	csrxchg	$r31,$r14,0x2384
     5d4:	0a440000 	0x0a440000
     5d8:	6b6c625f 	bltu	$r18,$r31,-37792(0x36c60) # ffff7238 <_etext+0xe3fea3e8>
     5dc:	657a6973 	bge	$r11,$r19,96872(0x17a68) # 18044 <_bss_end+0x15374>
     5e0:	07e20600 	0x07e20600
     5e4:	0000014d 	0x0000014d
     5e8:	6f5f0a4c 	bgeu	$r18,$r12,-41208(0x35f08) # ffff64f0 <_etext+0xe3fe96a0>
     5ec:	65736666 	bge	$r19,$r6,95076(0x17364) # 17950 <_bss_end+0x14c80>
     5f0:	e3060074 	0xe3060074
     5f4:	00017e0a 	0x00017e0a
     5f8:	5f0a5000 	bne	$r0,$r0,-62896(0x30a50) # ffff1048 <_etext+0xe3fe41f8>
     5fc:	61746164 	blt	$r11,$r4,95328(0x17460) # 17a5c <_bss_end+0x14d8c>
     600:	12e60600 	addu16i.d	$r0,$r16,-18047(0xb981)
     604:	0000065a 	0x0000065a
     608:	6c5f0a54 	bgeu	$r18,$r20,24328(0x5f08) # 6510 <_bss_end+0x3840>
     60c:	006b636f 	bstrins.w	$r15,$r27,0xb,0x18
     610:	230cea06 	sc.d	$r6,$r16,3304(0xce8)
     614:	58000002 	beq	$r0,$r2,0 # 614 <__DYNAMIC+0x614>
     618:	626d5f0a 	blt	$r24,$r10,-103076(0x26d5c) # fffe7374 <_etext+0xe3fda524>
     61c:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
     620:	ec060065 	0xec060065
     624:	0002100e 	0x0002100e
     628:	5f0a5c00 	bne	$r0,$r0,-62884(0x30a5c) # ffff1084 <_etext+0xe3fe4234>
     62c:	67616c66 	bge	$r3,$r6,-40596(0x3616c) # ffff6798 <_etext+0xe3fe9948>
     630:	06003273 	cacop	0x13,$r19,12(0xc)
     634:	014d09ed 	0x014d09ed
     638:	00640000 	bstrins.w	$r0,$r0,0x4,0x0
     63c:	00014d14 	0x00014d14
     640:	00065a00 	alsl.wu	$r0,$r16,$r22,0x1
     644:	065a1500 	0x065a1500
     648:	34150000 	0x34150000
     64c:	15000002 	lu12i.w	$r2,-524288(0x80000)
     650:	00000264 	0x00000264
     654:	00014d15 	0x00014d15
     658:	040c0000 	csrrd	$r0,0x300
     65c:	00000660 	0x00000660
     660:	65725f16 	bge	$r24,$r22,94812(0x1725c) # 178bc <_bss_end+0x14bec>
     664:	00746e65 	bstrins.w	$r5,$r19,0x14,0x1b
     668:	4e060428 	jirl	$r8,$r1,-129532(0x20604)
     66c:	08170802 	fmadd.s	$f2,$f0,$f2,$f14
     670:	5f170000 	bne	$r0,$r0,-59648(0x31700) # ffff1d70 <_etext+0xe3fe4f20>
     674:	6e727265 	bgeu	$r19,$r5,-101776(0x27270) # fffe78e4 <_etext+0xe3fdaa94>
     678:	5006006f 	b	29099520(0x1bc0600) # 1bc0c78 <__stack_start+0x19bdfa8>
     67c:	014d0702 	0x014d0702
     680:	17000000 	lu32i.d	$r0,-524288(0x80000)
     684:	6474735f 	bge	$r26,$r31,29808(0x7470) # 7af4 <_bss_end+0x4e24>
     688:	06006e69 	cacop	0x9,$r19,27(0x1b)
     68c:	fd0b0255 	0xfd0b0255
     690:	04000008 	csrrd	$r8,0x0
     694:	74735f17 	xvmin.w	$xr23,$xr24,$xr23
     698:	74756f64 	xvmax.wu	$xr4,$xr27,$xr27
     69c:	02550600 	sltui	$r0,$r16,1345(0x541)
     6a0:	0008fd14 	bytepick.w	$r20,$r8,$r31,0x1
     6a4:	5f170800 	bne	$r0,$r0,-59640(0x31708) # ffff1dac <_etext+0xe3fe4f5c>
     6a8:	65647473 	bge	$r3,$r19,91252(0x16474) # 16b1c <_bss_end+0x13e4c>
     6ac:	06007272 	cacop	0x12,$r19,28(0x1c)
     6b0:	fd1e0255 	0xfd1e0255
     6b4:	0c000008 	0x0c000008
     6b8:	6e695f17 	bgeu	$r24,$r23,-104100(0x2695c) # fffe7014 <_etext+0xe3fda1c4>
     6bc:	57060063 	bl	26150400(0x18f0600) # 18f0cbc <__stack_start+0x16edfec>
     6c0:	014d0802 	0x014d0802
     6c4:	17100000 	lu32i.d	$r0,-491520(0x88000)
     6c8:	656d655f 	bge	$r10,$r31,93540(0x16d64) # 1742c <_bss_end+0x1475c>
     6cc:	6e656772 	bgeu	$r27,$r18,-105116(0x26564) # fffe6c30 <_etext+0xe3fd9de0>
     6d0:	06007963 	cacop	0x3,$r11,30(0x1e)
     6d4:	c1080258 	0xc1080258
     6d8:	1400000b 	lu12i.w	$r11,0
     6dc:	75635f17 	0x75635f17
     6e0:	6e657272 	bgeu	$r19,$r18,-105104(0x26570) # fffe6c50 <_etext+0xe3fd9e00>
     6e4:	61635f74 	blt	$r27,$r20,90972(0x1635c) # 16a40 <_bss_end+0x13d70>
     6e8:	6f676574 	bgeu	$r11,$r20,-39068(0x36764) # ffff6e4c <_etext+0xe3fe9ffc>
     6ec:	06007972 	cacop	0x12,$r11,30(0x1e)
     6f0:	4d07025a 	jirl	$r26,$r18,67328(0x10700)
     6f4:	30000001 	0x30000001
     6f8:	75635f17 	0x75635f17
     6fc:	6e657272 	bgeu	$r19,$r18,-105104(0x26570) # fffe6c6c <_etext+0xe3fd9e1c>
     700:	6f6c5f74 	bgeu	$r27,$r20,-37796(0x36c5c) # ffff735c <_etext+0xe3fea50c>
     704:	656c6163 	bge	$r11,$r3,93280(0x16c60) # 17364 <_bss_end+0x14694>
     708:	025b0600 	sltui	$r0,$r16,1729(0x6c1)
     70c:	00083b10 	bytepick.w	$r16,$r24,$r14,0x0
     710:	5f173400 	bne	$r0,$r0,-59596(0x31734) # ffff1e44 <_etext+0xe3fe4ff4>
     714:	6964735f 	bltu	$r26,$r31,91248(0x16470) # 16b84 <_bss_end+0x13eb4>
     718:	696e6964 	bltu	$r11,$r4,93800(0x16e68) # 17580 <_bss_end+0x148b0>
     71c:	5d060074 	bne	$r3,$r20,67072(0x10600) # 10d1c <_bss_end+0xe04c>
     720:	014d0702 	0x014d0702
     724:	17380000 	lu32i.d	$r0,-409600(0x9c000)
     728:	6c635f5f 	bgeu	$r26,$r31,25436(0x635c) # 6a84 <_bss_end+0x3db4>
     72c:	756e6165 	0x756e6165
     730:	5f060070 	bne	$r3,$r16,-64000(0x30600) # ffff0d30 <_etext+0xe3fe3ee0>
     734:	0bdc0802 	0x0bdc0802
     738:	173c0000 	lu32i.d	$r0,-401408(0x9e000)
     73c:	7365725f 	vssrani.wu.d	$vr31,$vr18,0x1c
     740:	00746c75 	bstrins.w	$r21,$r3,0x14,0x1b
     744:	13026206 	addu16i.d	$r6,$r16,-16232(0xc098)
     748:	000002ee 	0x000002ee
     74c:	725f1740 	0x725f1740
     750:	6c757365 	bgeu	$r27,$r5,30064(0x7570) # 7cc0 <_bss_end+0x4ff0>
     754:	006b5f74 	bstrins.w	$r20,$r27,0xb,0x17
     758:	07026306 	0x07026306
     75c:	0000014d 	0x0000014d
     760:	705f1744 	0x705f1744
     764:	06007335 	cacop	0x15,$r25,28(0x1c)
     768:	ee130264 	0xee130264
     76c:	48000002 	bceqz	$fcc0,524288(0x80000) # 8076c <_bss_end+0x7da9c>
     770:	72665f17 	0x72665f17
     774:	696c6565 	bltu	$r11,$r5,93284(0x16c64) # 173d8 <_bss_end+0x14708>
     778:	06007473 	cacop	0x13,$r3,29(0x1d)
     77c:	e2140265 	0xe2140265
     780:	4c00000b 	jirl	$r11,$r0,0
     784:	76635f17 	0x76635f17
     788:	6e656c74 	bgeu	$r3,$r20,-105108(0x2656c) # fffe6cf4 <_etext+0xe3fd9ea4>
     78c:	02680600 	sltui	$r0,$r16,-1535(0xa01)
     790:	00014d07 	0x00014d07
     794:	5f175000 	bne	$r0,$r0,-59568(0x31750) # ffff1ee4 <_etext+0xe3fe5094>
     798:	62747663 	blt	$r19,$r3,-101260(0x27474) # fffe7c0c <_etext+0xe3fdadbc>
     79c:	06006675 	cacop	0x15,$r19,25(0x19)
     7a0:	64090269 	bge	$r19,$r9,2304(0x900) # 10a0 <_ex_table_base_start+0xa0>
     7a4:	54000002 	bl	524288(0x80000) # 807a4 <_bss_end+0x7dad4>
     7a8:	656e5f17 	bge	$r24,$r23,93788(0x16e5c) # 17604 <_bss_end+0x14934>
     7ac:	8c060077 	0x8c060077
     7b0:	0b950702 	0x0b950702
     7b4:	18580000 	pcaddi	$r0,180224(0x2c000)
     7b8:	6574615f 	bge	$r10,$r31,95328(0x17460) # 17c18 <_bss_end+0x14f48>
     7bc:	00746978 	bstrins.w	$r24,$r11,0x14,0x1a
     7c0:	13029006 	addu16i.d	$r6,$r0,-16220(0xc0a4)
     7c4:	00000471 	0x00000471
     7c8:	5f180148 	bne	$r10,$r8,-59392(0x31800) # ffff1fc8 <_etext+0xe3fe5178>
     7cc:	78657461 	0x78657461
     7d0:	00307469 	0x00307469
     7d4:	12029106 	addu16i.d	$r6,$r8,-32604(0x80a4)
     7d8:	00000426 	0x00000426
     7dc:	5f18014c 	bne	$r10,$r12,-59392(0x31800) # ffff1fdc <_etext+0xe3fe518c>
     7e0:	5f676973 	bne	$r11,$r19,-39064(0x36768) # ffff6f48 <_etext+0xe3fea0f8>
     7e4:	636e7566 	blt	$r11,$r6,-37260(0x36e74) # ffff7658 <_etext+0xe3fea808>
     7e8:	02950600 	addi.w	$r0,$r16,1345(0x541)
     7ec:	000bf30c 	0x000bf30c
     7f0:	1802dc00 	pcaddi	$r0,5856(0x16e0)
     7f4:	67735f5f 	bge	$r26,$r31,-36004(0x3735c) # ffff7b50 <_etext+0xe3fead00>
     7f8:	0065756c 	bstrins.w	$r12,$r11,0x5,0x1d
     7fc:	10029a06 	addu16i.d	$r6,$r16,166(0xa6)
     800:	000008b5 	0x000008b5
     804:	5f1802e0 	bne	$r23,$r0,-59392(0x31800) # ffff2004 <_etext+0xe3fe51b4>
     808:	0066735f 	bstrins.w	$r31,$r26,0x6,0x1c
     80c:	0a029b06 	0x0a029b06
     810:	00000bff 	0x00000bff
     814:	0c0002ec 	0x0c0002ec
     818:	00063c04 	alsl.wu	$r4,$r0,$r15,0x1
     81c:	014d1400 	0x014d1400
     820:	083b0000 	0x083b0000
     824:	5a150000 	beq	$r0,$r0,-125696(0x21500) # fffe1d24 <_etext+0xe3fd4ed4>
     828:	15000006 	lu12i.w	$r6,-524288(0x80000)
     82c:	00000234 	0x00000234
     830:	00083b15 	bytepick.w	$r21,$r24,$r14,0x0
     834:	014d1500 	0x014d1500
     838:	0c000000 	0x0c000000
     83c:	00027204 	0x00027204
     840:	1d040c00 	pcaddu12i	$r0,-516000(0x82060)
     844:	14000008 	lu12i.w	$r8,0
     848:	0000018d 	0x0000018d
     84c:	00000865 	0x00000865
     850:	00065a15 	alsl.wu	$r21,$r16,$r22,0x1
     854:	02341500 	slti	$r0,$r8,-763(0xd05)
     858:	8d150000 	0x8d150000
     85c:	15000001 	lu12i.w	$r1,-524288(0x80000)
     860:	0000014d 	0x0000014d
     864:	47040c00 	bnez	$r0,197644(0x3040c) # 30c70 <_bss_end+0x2dfa0>
     868:	14000008 	lu12i.w	$r8,0
     86c:	0000014d 	0x0000014d
     870:	0000087f 	0x0000087f
     874:	00065a15 	alsl.wu	$r21,$r16,$r22,0x1
     878:	02341500 	slti	$r0,$r8,-763(0xd05)
     87c:	0c000000 	0x0c000000
     880:	00086b04 	bytepick.w	$r4,$r24,$r26,0x0
     884:	00cd0700 	bstrpick.d	$r0,$r24,0xd,0x1
     888:	08950000 	fnmadd.s	$f0,$f0,$f0,$f10
     88c:	54080000 	bl	2048(0x800) # 108c <_ex_table_base_start+0x8c>
     890:	02000001 	slti	$r1,$r0,0
     894:	00cd0700 	bstrpick.d	$r0,$r24,0xd,0x1
     898:	08a50000 	fnmadd.d	$f0,$f0,$f0,$f10
     89c:	54080000 	bl	2048(0x800) # 109c <_ex_table_base_start+0x9c>
     8a0:	00000001 	0x00000001
     8a4:	5f5f0400 	bne	$r0,$r0,-41212(0x35f04) # ffff67a8 <_etext+0xe3fe9958>
     8a8:	454c4946 	bnez	$r10,1657928(0x194c48) # 1954f0 <__heap_end+0x92820>
     8ac:	012a0600 	0x012a0600
     8b0:	0004c31a 	alsl.w	$r26,$r24,$r16,0x2
     8b4:	675f1900 	bge	$r8,$r0,-41192(0x35f18) # ffff67cc <_etext+0xe3fe997c>
     8b8:	0065756c 	bstrins.w	$r12,$r11,0x5,0x1d
     8bc:	012e060c 	0x012e060c
     8c0:	0008f708 	bytepick.w	$r8,$r24,$r29,0x1
     8c4:	6e5f1700 	bgeu	$r24,$r0,-106732(0x25f14) # fffe67d8 <_etext+0xe3fd9988>
     8c8:	00747865 	bstrins.w	$r5,$r3,0x14,0x1e
     8cc:	11013006 	addu16i.d	$r6,$r0,16460(0x404c)
     8d0:	000008f7 	0x000008f7
     8d4:	6e5f1700 	bgeu	$r24,$r0,-106732(0x25f14) # fffe67e8 <_etext+0xe3fd9998>
     8d8:	73626f69 	vssrani.d.q	$vr9,$vr27,0x1b
     8dc:	01310600 	0x01310600
     8e0:	00014d07 	0x00014d07
     8e4:	5f170400 	bne	$r0,$r0,-59644(0x31704) # ffff1fe8 <_etext+0xe3fe5198>
     8e8:	73626f69 	vssrani.d.q	$vr9,$vr27,0x1b
     8ec:	01320600 	0x01320600
     8f0:	0008fd0b 	bytepick.w	$r11,$r8,$r31,0x1
     8f4:	0c000800 	0x0c000800
     8f8:	0008b504 	bytepick.w	$r4,$r8,$r13,0x1
     8fc:	a5040c00 	0xa5040c00
     900:	19000008 	pcaddi	$r8,-524288(0x80000)
     904:	6e61725f 	bgeu	$r18,$r31,-106128(0x26170) # fffe6a74 <_etext+0xe3fd9c24>
     908:	00383464 	0x00383464
     90c:	014a060e 	0x014a060e
     910:	00094508 	bytepick.w	$r8,$r8,$r17,0x2
     914:	735f1700 	vsrarni.d.q	$vr0,$vr24,0x45
     918:	00646565 	bstrins.w	$r5,$r11,0x4,0x19
     91c:	12014b06 	addu16i.d	$r6,$r24,-32686(0x8052)
     920:	00000945 	0x00000945
     924:	6d5f1700 	bgeu	$r24,$r0,89876(0x15f14) # 16838 <_bss_end+0x13b68>
     928:	00746c75 	bstrins.w	$r21,$r3,0x14,0x1b
     92c:	12014c06 	addu16i.d	$r6,$r0,-32685(0x8053)
     930:	00000945 	0x00000945
     934:	615f1706 	blt	$r24,$r6,89876(0x15f14) # 16848 <_bss_end+0x13b78>
     938:	06006464 	cacop	0x4,$r3,25(0x19)
     93c:	eb12014d 	0xeb12014d
     940:	0c000000 	0x0c000000
     944:	00eb0700 	bstrpick.d	$r0,$r24,0x2b,0x1
     948:	09550000 	vfmsub.s	$vr0,$vr0,$vr0,$vr10
     94c:	54080000 	bl	2048(0x800) # 114c <_ex_table_base_start+0x14c>
     950:	02000001 	slti	$r1,$r0,0
     954:	06d01a00 	0x06d01a00
     958:	1607026d 	lu32i.d	$r13,14355(0x3813)
     95c:	1700000b 	lu32i.d	$r11,-524288(0x80000)
     960:	756e755f 	0x756e755f
     964:	5f646573 	bne	$r11,$r19,-39836(0x36464) # ffff6dc8 <_etext+0xe3fe9f78>
     968:	646e6172 	bge	$r11,$r18,28256(0x6e60) # 77c8 <_bss_end+0x4af8>
     96c:	026f0600 	sltui	$r0,$r16,-1087(0xbc1)
     970:	00015418 	0x00015418
     974:	5f170000 	bne	$r0,$r0,-59648(0x31700) # ffff2074 <_etext+0xe3fe5224>
     978:	74727473 	xvmin.b	$xr19,$xr3,$xr29
     97c:	6c5f6b6f 	bgeu	$r27,$r15,24424(0x5f68) # 68e4 <_bss_end+0x3c14>
     980:	00747361 	bstrins.w	$r1,$r27,0x14,0x1c
     984:	12027006 	addu16i.d	$r6,$r0,-32612(0x809c)
     988:	00000264 	0x00000264
     98c:	615f1704 	blt	$r24,$r4,89876(0x15f14) # 168a0 <_bss_end+0x13bd0>
     990:	69746373 	bltu	$r27,$r19,95328(0x17460) # 17df0 <_bss_end+0x15120>
     994:	625f656d 	blt	$r11,$r13,-106652(0x25f64) # fffe68f8 <_etext+0xe3fd9aa8>
     998:	06006675 	cacop	0x15,$r19,25(0x19)
     99c:	16100271 	lu32i.d	$r17,32787(0x8013)
     9a0:	0800000b 	0x0800000b
     9a4:	6f6c5f17 	bgeu	$r24,$r23,-37796(0x36c5c) # ffff7600 <_etext+0xe3fea7b0>
     9a8:	746c6163 	0x746c6163
     9ac:	5f656d69 	bne	$r11,$r9,-39572(0x3656c) # ffff6f18 <_etext+0xe3fea0c8>
     9b0:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
     9b4:	17027206 	lu32i.d	$r6,-519280(0x81390)
     9b8:	00000304 	0x00000304
     9bc:	675f1724 	bge	$r25,$r4,-41196(0x35f14) # ffff68d0 <_etext+0xe3fe9a80>
     9c0:	616d6d61 	blt	$r11,$r1,93548(0x16d6c) # 1772c <_bss_end+0x14a5c>
     9c4:	6769735f 	bge	$r26,$r31,-38544(0x36970) # ffff7334 <_etext+0xe3fea4e4>
     9c8:	6d61676e 	bgeu	$r27,$r14,90468(0x16164) # 16b2c <_bss_end+0x13e5c>
     9cc:	02730600 	sltui	$r0,$r16,-831(0xcc1)
     9d0:	00014d0f 	0x00014d0f
     9d4:	5f174800 	bne	$r0,$r0,-59576(0x31748) # ffff211c <_etext+0xe3fe52cc>
     9d8:	646e6172 	bge	$r11,$r18,28256(0x6e60) # 7838 <_bss_end+0x4b68>
     9dc:	78656e5f 	0x78656e5f
     9e0:	74060074 	xvslt.b	$xr20,$xr3,$xr0
     9e4:	01332c02 	0x01332c02
     9e8:	17500000 	lu32i.d	$r0,-360448(0xa8000)
     9ec:	3834725f 	fldx.d	$f31,$r18,$r28
     9f0:	02750600 	sltui	$r0,$r16,-703(0xd41)
     9f4:	0009031a 	bytepick.w	$r26,$r24,$r0,0x2
     9f8:	5f175800 	bne	$r0,$r0,-59560(0x31758) # ffff2150 <_etext+0xe3fe5300>
     9fc:	656c626d 	bge	$r19,$r13,93280(0x16c60) # 1765c <_bss_end+0x1498c>
     a00:	74735f6e 	xvmin.w	$xr14,$xr27,$xr23
     a04:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
     a08:	16027606 	lu32i.d	$r6,5040(0x13b0)
     a0c:	00000210 	0x00000210
     a10:	6d5f1768 	bgeu	$r27,$r8,89876(0x15f14) # 16924 <_bss_end+0x13c54>
     a14:	776f7462 	xvssrarni.du.q	$xr2,$xr3,0x5d
     a18:	74735f63 	xvmin.w	$xr3,$xr27,$xr23
     a1c:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
     a20:	16027706 	lu32i.d	$r6,5048(0x13b8)
     a24:	00000210 	0x00000210
     a28:	775f1770 	xvsrarni.d.q	$xr16,$xr27,0x45
     a2c:	6d6f7463 	bgeu	$r3,$r3,94068(0x16f74) # 179a0 <_bss_end+0x14cd0>
     a30:	74735f62 	xvmin.w	$xr2,$xr27,$xr23
     a34:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
     a38:	16027806 	lu32i.d	$r6,5056(0x13c0)
     a3c:	00000210 	0x00000210
     a40:	6c5f1778 	bgeu	$r27,$r24,24340(0x5f14) # 6954 <_bss_end+0x3c84>
     a44:	5f613436 	bne	$r1,$r22,-40652(0x36134) # ffff6b78 <_etext+0xe3fe9d28>
     a48:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
     a4c:	10027906 	addu16i.d	$r6,$r8,158(0x9e)
     a50:	00000b26 	0x00000b26
     a54:	735f1780 	vsrarni.d.q	$vr0,$vr28,0x45
     a58:	616e6769 	blt	$r27,$r9,93796(0x16e64) # 178bc <_bss_end+0x14bec>
     a5c:	75625f6c 	0x75625f6c
     a60:	7a060066 	0x7a060066
     a64:	0b361002 	0x0b361002
     a68:	17880000 	lu32i.d	$r0,-245760(0xc4000)
     a6c:	7465675f 	xvavg.w	$xr31,$xr26,$xr25
     a70:	65746164 	bge	$r11,$r4,95328(0x17460) # 17ed0 <_bss_end+0x15200>
     a74:	7272655f 	0x7272655f
     a78:	027b0600 	sltui	$r0,$r16,-319(0xec1)
     a7c:	00014d0f 	0x00014d0f
     a80:	5f17a000 	bne	$r0,$r0,-59488(0x317a0) # ffff2220 <_etext+0xe3fe53d0>
     a84:	6c72626d 	bgeu	$r19,$r13,29280(0x7260) # 7ce4 <_bss_end+0x5014>
     a88:	735f6e65 	vsrarni.d.q	$vr5,$vr19,0x5b
     a8c:	65746174 	bge	$r11,$r20,95328(0x17460) # 17eec <_bss_end+0x1521c>
     a90:	027c0600 	sltui	$r0,$r16,-255(0xf01)
     a94:	00021016 	0x00021016
     a98:	5f17a400 	bne	$r0,$r0,-59484(0x317a4) # ffff223c <_etext+0xe3fe53ec>
     a9c:	7472626d 	xvmin.b	$xr13,$xr19,$xr24
     aa0:	5f63776f 	bne	$r27,$r15,-40076(0x36374) # ffff6e14 <_etext+0xe3fe9fc4>
     aa4:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
     aa8:	7d060065 	0x7d060065
     aac:	02101602 	slti	$r2,$r16,1029(0x405)
     ab0:	17ac0000 	lu32i.d	$r0,-172032(0xd6000)
     ab4:	73626d5f 	vssrani.d.q	$vr31,$vr10,0x1b
     ab8:	776f7472 	xvssrarni.du.q	$xr18,$xr3,0x5d
     abc:	735f7363 	vsrarni.d.q	$vr3,$vr27,0x5c
     ac0:	65746174 	bge	$r11,$r20,95328(0x17460) # 17f20 <_bss_end+0x15250>
     ac4:	027e0600 	sltui	$r0,$r16,-127(0xf81)
     ac8:	00021016 	0x00021016
     acc:	5f17b400 	bne	$r0,$r0,-59468(0x317b4) # ffff2280 <_etext+0xe3fe5430>
     ad0:	74726377 	xvmin.b	$xr23,$xr27,$xr24
     ad4:	5f626d6f 	bne	$r11,$r15,-40340(0x3626c) # ffff6d40 <_etext+0xe3fe9ef0>
     ad8:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
     adc:	7f060065 	0x7f060065
     ae0:	02101602 	slti	$r2,$r16,1029(0x405)
     ae4:	17bc0000 	lu32i.d	$r0,-139264(0xde000)
     ae8:	7363775f 	vssrani.d.q	$vr31,$vr26,0x5d
     aec:	6d6f7472 	bgeu	$r3,$r18,94068(0x16f74) # 17a60 <_bss_end+0x14d90>
     af0:	735f7362 	vsrarni.d.q	$vr2,$vr27,0x5c
     af4:	65746174 	bge	$r11,$r20,95328(0x17460) # 17f54 <_bss_end+0x15284>
     af8:	02800600 	addi.w	$r0,$r16,1(0x1)
     afc:	00021016 	0x00021016
     b00:	5f17c400 	bne	$r0,$r0,-59452(0x317c4) # ffff22c4 <_etext+0xe3fe5474>
     b04:	72655f68 	0x72655f68
     b08:	006f6e72 	bstrins.w	$r18,$r19,0xf,0x1b
     b0c:	08028106 	0x08028106
     b10:	0000014d 	0x0000014d
     b14:	6a0700cc 	bltu	$r6,$r12,-129280(0x20700) # fffe1214 <_etext+0xe3fd43c4>
     b18:	26000002 	ldptr.d	$r2,$r0,0
     b1c:	0800000b 	0x0800000b
     b20:	00000154 	0x00000154
     b24:	6a070019 	bltu	$r0,$r25,-129280(0x20700) # fffe1224 <_etext+0xe3fd43d4>
     b28:	36000002 	0x36000002
     b2c:	0800000b 	0x0800000b
     b30:	00000154 	0x00000154
     b34:	6a070007 	bltu	$r0,$r7,-129280(0x20700) # fffe1234 <_etext+0xe3fd43e4>
     b38:	46000002 	bnez	$r0,655360(0xa0000) # a0b38 <_bss_end+0x9de68>
     b3c:	0800000b 	0x0800000b
     b40:	00000154 	0x00000154
     b44:	f01a0017 	0xf01a0017
     b48:	07028606 	0x07028606
     b4c:	00000b75 	0x00000b75
     b50:	656e5f17 	bge	$r24,$r23,93788(0x16e5c) # 179ac <_bss_end+0x14cdc>
     b54:	00667478 	bstrins.w	$r24,$r3,0x6,0x1d
     b58:	1b028906 	pcalau12i	$r6,-519096(0x81448)
     b5c:	00000b75 	0x00000b75
     b60:	6e5f1700 	bgeu	$r24,$r0,-106732(0x25f14) # fffe6a74 <_etext+0xe3fd9c24>
     b64:	6c6c616d 	bgeu	$r11,$r13,27744(0x6c60) # 77c4 <_bss_end+0x4af4>
     b68:	0600636f 	cacop	0xf,$r27,24(0x18)
     b6c:	8518028a 	0x8518028a
     b70:	7800000b 	0x7800000b
     b74:	04bd0700 	csrxchg	$r0,$r24,0x2f41
     b78:	0b850000 	0x0b850000
     b7c:	54080000 	bl	2048(0x800) # 137c <_ex_table_base_start+0x37c>
     b80:	1d000001 	pcaddu12i	$r1,-524288(0x80000)
     b84:	01540700 	0x01540700
     b88:	0b950000 	0x0b950000
     b8c:	54080000 	bl	2048(0x800) # 138c <_ex_table_base_start+0x38c>
     b90:	1d000001 	pcaddu12i	$r1,-524288(0x80000)
     b94:	06f01b00 	0x06f01b00
     b98:	c103026b 	0xc103026b
     b9c:	1c00000b 	pcaddu12i	$r11,0
     ba0:	6565725f 	bge	$r18,$r31,91504(0x16570) # 17110 <_bss_end+0x14440>
     ba4:	0600746e 	cacop	0xe,$r3,29(0x1d)
     ba8:	550b0282 	bl	-100070656(0xa090b00) # fa0916a8 <_etext+0xde084858>
     bac:	1c000009 	pcaddu12i	$r9,0
     bb0:	756e755f 	0x756e755f
     bb4:	00646573 	bstrins.w	$r19,$r11,0x4,0x19
     bb8:	0b028b06 	0x0b028b06
     bbc:	00000b46 	0x00000b46
     bc0:	026a0700 	sltui	$r0,$r24,-1407(0xa81)
     bc4:	0bd10000 	0x0bd10000
     bc8:	54080000 	bl	2048(0x800) # 13c8 <_ex_table_base_start+0x3c8>
     bcc:	18000001 	pcaddi	$r1,0
     bd0:	0bdc1d00 	0x0bdc1d00
     bd4:	5a150000 	beq	$r0,$r0,-125696(0x21500) # fffe20d4 <_etext+0xe3fd5284>
     bd8:	00000006 	0x00000006
     bdc:	0bd1040c 	0x0bd1040c
     be0:	040c0000 	csrrd	$r0,0x300
     be4:	000002ee 	0x000002ee
     be8:	000bf31d 	0x000bf31d
     bec:	014d1500 	0x014d1500
     bf0:	0c000000 	0x0c000000
     bf4:	000bf904 	0x000bf904
     bf8:	e8040c00 	0xe8040c00
     bfc:	0700000b 	0x0700000b
     c00:	000008a5 	0x000008a5
     c04:	00000c0f 	0x00000c0f
     c08:	00015408 	0x00015408
     c0c:	1e000200 	pcaddu18i	$r0,16(0x10)
     c10:	706d695f 	0x706d695f
     c14:	5f657275 	bne	$r19,$r21,-39568(0x36570) # ffff7184 <_etext+0xe3fea334>
     c18:	00727470 	bstrins.w	$r16,$r3,0x12,0x1d
     c1c:	17031006 	lu32i.d	$r6,-518016(0x81880)
     c20:	0000065a 	0x0000065a
     c24:	6c675f1e 	bgeu	$r24,$r30,26460(0x675c) # 7380 <_bss_end+0x46b0>
     c28:	6c61626f 	bgeu	$r19,$r15,24928(0x6160) # 6d88 <_bss_end+0x40b8>
     c2c:	706d695f 	0x706d695f
     c30:	5f657275 	bne	$r19,$r21,-39568(0x36570) # ffff71a0 <_etext+0xe3fea350>
     c34:	00727470 	bstrins.w	$r16,$r3,0x12,0x1d
     c38:	17031106 	lu32i.d	$r6,-518008(0x81888)
     c3c:	0000065a 	0x0000065a
     c40:	69745f1f 	bltu	$r24,$r31,95324(0x1745c) # 1809c <_bss_end+0x153cc>
     c44:	6f7a656d 	bgeu	$r11,$r13,-34204(0x37a64) # ffff86a8 <_etext+0xe3feb858>
     c48:	0700656e 	0x0700656e
     c4c:	01011690 	fadd.d	$f16,$f20,$f5
     c50:	5f1f0000 	bne	$r0,$r0,-57600(0x31f00) # ffff2b50 <_etext+0xe3fe5d00>
     c54:	6c796164 	bgeu	$r11,$r4,31072(0x7960) # 85b4 <_bss_end+0x58e4>
     c58:	74686769 	xvavgr.b	$xr9,$xr27,$xr25
     c5c:	15910700 	lu12i.w	$r0,-227272(0xc8838)
     c60:	0000014d 	0x0000014d
     c64:	00026407 	0x00026407
     c68:	000c7400 	bytepick.d	$r0,$r0,$r29,0x0
     c6c:	01540800 	0x01540800
     c70:	00010000 	asrtle.d	$r0,$r0
     c74:	7a745f1f 	0x7a745f1f
     c78:	656d616e 	bge	$r11,$r14,93536(0x16d60) # 179d8 <_bss_end+0x14d08>
     c7c:	17920700 	lu32i.d	$r0,-225224(0xc9038)
     c80:	00000c64 	0x00000c64
     c84:	736d740e 	vssrarni.wu.d	$vr14,$vr0,0x1d
     c88:	10081000 	addu16i.d	$r0,$r0,516(0x204)
     c8c:	000ce008 	bytepick.d	$r8,$r0,$r24,0x1
     c90:	6d740a00 	bgeu	$r16,$r0,95240(0x17408) # 18098 <_bss_end+0x153c8>
     c94:	74755f73 	xvmax.wu	$xr19,$xr27,$xr23
     c98:	00656d69 	bstrins.w	$r9,$r11,0x5,0x1b
     c9c:	540a1108 	bl	69208592(0x4200a10) # 42016ac <__stack_start+0x3ffe9dc>
     ca0:	00000002 	0x00000002
     ca4:	736d740a 	vssrarni.wu.d	$vr10,$vr0,0x1d
     ca8:	6974735f 	bltu	$r26,$r31,95344(0x17470) # 18118 <_bss_end+0x15448>
     cac:	0800656d 	0x0800656d
     cb0:	02540a12 	sltui	$r18,$r16,1282(0x502)
     cb4:	0a040000 	0x0a040000
     cb8:	5f736d74 	bne	$r11,$r20,-35988(0x3736c) # ffff8024 <_etext+0xe3feb1d4>
     cbc:	69747563 	bltu	$r11,$r3,95348(0x17474) # 18130 <_bss_end+0x15460>
     cc0:	0800656d 	0x0800656d
     cc4:	02540a13 	sltui	$r19,$r16,1282(0x502)
     cc8:	0a080000 	0x0a080000
     ccc:	5f736d74 	bne	$r11,$r20,-35988(0x3736c) # ffff8038 <_etext+0xe3feb1e8>
     cd0:	69747363 	bltu	$r27,$r3,95344(0x17470) # 18140 <_bss_end+0x15470>
     cd4:	0800656d 	0x0800656d
     cd8:	02540a14 	sltui	$r20,$r16,1282(0x502)
     cdc:	000c0000 	bytepick.d	$r0,$r0,$r0,0x0
     ce0:	00026a07 	0x00026a07
     ce4:	000ceb00 	bytepick.d	$r0,$r24,$r26,0x1
     ce8:	1f002000 	pcaddu18i	$r0,-524032(0x80100)
     cec:	65685f5f 	bge	$r26,$r31,92252(0x1685c) # 17548 <_bss_end+0x14878>
     cf0:	735f7061 	vsrarni.d.q	$vr1,$vr3,0x5c
     cf4:	74726174 	xvmin.b	$xr20,$xr11,$xr24
     cf8:	0d0a0100 	0x0d0a0100
     cfc:	00000ce0 	0x00000ce0
     d00:	685f5f1f 	bltu	$r24,$r31,24412(0x5f5c) # 6c5c <_bss_end+0x3f8c>
     d04:	5f706165 	bne	$r11,$r5,-36768(0x37060) # ffff7d64 <_etext+0xe3feaf14>
     d08:	00646e65 	bstrins.w	$r5,$r19,0x4,0x1b
     d0c:	e00d0b01 	0xe00d0b01
     d10:	2100000c 	sc.w	$r12,$r0,0
     d14:	70616568 	vabsd.w	$vr8,$vr11,$vr25
     d18:	7274705f 	0x7274705f
     d1c:	070c0100 	0x070c0100
     d20:	00000264 	0x00000264
     d24:	2cc80305 	xvst	$xr5,$r24,512(0x200)
     d28:	74220000 	xvaddwod.h.b	$xr0,$xr0,$xr0
     d2c:	73656d69 	vssrani.wu.d	$vr9,$vr11,0x1b
     d30:	015d0100 	0x015d0100
     d34:	00000254 	0x00000254
     d38:	1c0006dc 	pcaddu12i	$r28,54(0x36)
     d3c:	000000d4 	0x000000d4
     d40:	0dce9c01 	0x0dce9c01
     d44:	24230000 	ldptr.w	$r0,$r0,8960(0x2300)
     d48:	00313272 	0x00313272
     d4c:	ce155d01 	0xce155d01
     d50:	0000000d 	0x0000000d
     d54:	24000000 	ldptr.w	$r0,$r0,0
     d58:	5f010061 	bne	$r3,$r1,-65280(0x30100) # ffff0e58 <_etext+0xe3fe4008>
     d5c:	000dd40f 	bytepick.d	$r15,$r0,$r21,0x3
     d60:	68910200 	bltu	$r16,$r0,37120(0x9100) # 9e60 <_bss_end+0x7190>
     d64:	01006224 	0x01006224
     d68:	01540f60 	0x01540f60
     d6c:	91020000 	0x91020000
     d70:	00692564 	bstrins.w	$r4,$r11,0x9,0x9
     d74:	540f6301 	bl	-66842784(0xc040f60) # fc041cd4 <_etext+0xe0034e84>
     d78:	2c000001 	vld	$vr1,$r0,0
     d7c:	25000000 	stptr.w	$r0,$r0,0
     d80:	6301006a 	blt	$r3,$r10,-65280(0x30100) # ffff0e80 <_etext+0xe3fe4030>
     d84:	00015412 	0x00015412
     d88:	00004c00 	bitrev.8b	$r0,$r0
     d8c:	006b2500 	bstrins.w	$r0,$r8,0xb,0x9
     d90:	54156301 	bl	-66841248(0xc041560) # fc0422f0 <_etext+0xe00354a0>
     d94:	96000001 	0x96000001
     d98:	25000000 	stptr.w	$r0,$r0,0
     d9c:	6301006d 	blt	$r3,$r13,-65280(0x30100) # ffff0e9c <_etext+0xe3fe404c>
     da0:	00015418 	0x00015418
     da4:	0000cb00 	0x0000cb00
     da8:	00632500 	bstrins.w	$r0,$r8,0x3,0x9
     dac:	d41b6301 	0xd41b6301
     db0:	ed00000d 	0xed00000d
     db4:	26000000 	ldptr.d	$r0,$r0,0
     db8:	1c000704 	pcaddu12i	$r4,56(0x38)
     dbc:	00000e36 	0x00000e36
     dc0:	02540127 	sltui	$r7,$r9,1280(0x500)
     dc4:	01276891 	0x01276891
     dc8:	64910255 	bge	$r18,$r21,37120(0x9100) # 9ec8 <_bss_end+0x71f8>
     dcc:	040c0000 	csrrd	$r0,0x300
     dd0:	00000c84 	0x00000c84
     dd4:	00015407 	0x00015407
     dd8:	000de400 	bytepick.d	$r0,$r0,$r25,0x3
     ddc:	01540800 	0x01540800
     de0:	00010000 	asrtle.d	$r0,$r0
     de4:	72627322 	0x72627322
     de8:	3a01006b 	0x3a01006b
     dec:	00023401 	0x00023401
     df0:	00066c00 	alsl.wu	$r0,$r0,$r27,0x1
     df4:	0000701c 	0x0000701c
     df8:	369c0100 	0x369c0100
     dfc:	2300000e 	sc.d	$r14,$r0,0
     e00:	7479626e 	0x7479626e
     e04:	01007365 	0x01007365
     e08:	014d0b3a 	0x014d0b3a
     e0c:	01320000 	0x01320000
     e10:	62250000 	blt	$r0,$r0,-121600(0x22500) # fffe3310 <_etext+0xe3fd64c0>
     e14:	00657361 	bstrins.w	$r1,$r27,0x5,0x1c
     e18:	64103c01 	bge	$r0,$r1,4156(0x103c) # 1e54 <__mprec_tinytens+0x1c>
     e1c:	77000002 	0x77000002
     e20:	25000001 	stptr.w	$r1,$r0,0
     e24:	69617661 	bltu	$r19,$r1,90484(0x16174) # 16f98 <_bss_end+0x142c8>
     e28:	4101006c 	beqz	$r3,3211520(0x310100) # 310f28 <__stack_start+0x10e258>
     e2c:	00015410 	0x00015410
     e30:	0001b100 	asrtgt.d	$r8,$r12
     e34:	0e280000 	0x0e280000
     e38:	0e000000 	0x0e000000
     e3c:	01000000 	0x01000000
     e40:	4e000d0e 	jirl	$r14,$r8,-131060(0x2000c)
     e44:	04000001 	csrrd	$r1,0x0
     e48:	00024500 	0x00024500
     e4c:	47010400 	bnez	$r0,196868(0x30104) # 30f50 <_bss_end+0x2e280>
     e50:	4320554e 	beqz	$r10,3874900(0x3b2054) # 3b2ea4 <__stack_start+0x1b01d4>
     e54:	38203731 	ldx.bu	$r17,$r25,$r13
     e58:	302e332e 	vldrepl.w	$vr14,$r25,-464(0xe30)
     e5c:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17b88 <_bss_end+0x14eb8>
     e60:	3d686372 	0x3d686372
     e64:	3233616c 	0x3233616c
     e68:	2d206d69 	0x2d206d69
     e6c:	6962616d 	bltu	$r11,$r13,90720(0x16260) # 170cc <_bss_end+0x143fc>
     e70:	706c693d 	0x706c693d
     e74:	2d203233 	0x2d203233
     e78:	4f2d2067 	jirl	$r7,$r3,-53984(0x32d20)
     e7c:	4f2d2032 	jirl	$r18,$r1,-53984(0x32d20)
     e80:	2e0c0032 	0x2e0c0032
     e84:	2e2e2f2e 	0x2e2e2f2e
     e88:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff7df4 <_etext+0xe3feafa4>
     e8c:	7261676e 	0x7261676e
     e90:	32336863 	0x32336863
     e94:	2f2e2e2f 	0x2f2e2e2f
     e98:	6e697270 	bgeu	$r19,$r16,-104080(0x26970) # fffe7808 <_etext+0xe3fda9b8>
     e9c:	00632e74 	bstrins.w	$r20,$r19,0x3,0xb
     ea0:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 17e08 <_bss_end+0x15138>
     ea4:	68632f65 	bltu	$r27,$r5,25388(0x632c) # 71d0 <_bss_end+0x4500>
     ea8:	657a6e65 	bge	$r19,$r5,96876(0x17a6c) # 18914 <_bss_end+0x15c44>
     eac:	61756873 	blt	$r3,$r19,95592(0x17568) # 18414 <_bss_end+0x15744>
     eb0:	6f6c2f69 	bgeu	$r27,$r9,-37844(0x36c2c) # ffff7adc <_etext+0xe3feac8c>
     eb4:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 17620 <_bss_end+0x14950>
     eb8:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
     ebc:	6f742d32 	bgeu	$r9,$r18,-35796(0x3742c) # ffff82e8 <_etext+0xe3feb498>
     ec0:	68636c6f 	bltu	$r3,$r15,25452(0x636c) # 722c <_bss_end+0x455c>
     ec4:	2f6e6961 	0x2f6e6961
     ec8:	6c77656e 	bgeu	$r11,$r14,30564(0x7764) # 862c <_bss_end+0x595c>
     ecc:	335f6269 	xvstelm.h	$xr9,$r19,-80(0x1b0),0x7
     ed0:	30322d32 	0x30322d32
     ed4:	302e3931 	vldrepl.w	$vr17,$r9,-456(0xe38)
     ed8:	696c2f31 	bltu	$r25,$r17,93228(0x16c2c) # 17b04 <_bss_end+0x14e34>
     edc:	6f6c6762 	bgeu	$r27,$r2,-37788(0x36c64) # ffff7b40 <_etext+0xe3feacf0>
     ee0:	622f7373 	blt	$r27,$r19,-118928(0x22f70) # fffe3e50 <_etext+0xe3fd7000>
     ee4:	646c6975 	bge	$r11,$r21,27752(0x6c68) # 7b4c <_bss_end+0x4e7c>
     ee8:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff7e54 <_etext+0xe3feb004>
     eec:	7261676e 	0x7261676e
     ef0:	32336863 	0x32336863
     ef4:	0007b000 	alsl.wu	$r0,$r0,$r12,0x4
     ef8:	0000381c 	revb.2w	$r28,$r0
     efc:	0004bc00 	alsl.w	$r0,$r0,$r15,0x2
     f00:	00c90200 	bstrpick.d	$r0,$r16,0x9,0x0
     f04:	00c90000 	bstrpick.d	$r0,$r0,0x9,0x0
     f08:	00030000 	0x00030000
     f0c:	63060104 	blt	$r8,$r4,-64000(0x30600) # ffff150c <_etext+0xe3fe46bc>
     f10:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
     f14:	6e655f05 	bgeu	$r24,$r5,-105124(0x2655c) # fffe7470 <_etext+0xe3fda620>
     f18:	1a020064 	pcalau12i	$r4,4099(0x1003)
     f1c:	0000be0d 	0x0000be0d
     f20:	72700600 	0x72700600
     f24:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     f28:	b0011501 	0xb0011501
     f2c:	381c0007 	stx.d	$r7,$r0,$r0
     f30:	01000000 	0x01000000
     f34:	0001309c 	0x0001309c
     f38:	74700700 	xvmax.b	$xr0,$xr24,$xr1
     f3c:	15010072 	lu12i.w	$r18,-522237(0x80803)
     f40:	00013001 	0x00013001
     f44:	0001e700 	asrtgt.d	$r24,$r25
     f48:	07c80800 	0x07c80800
     f4c:	00081c00 	bytepick.w	$r0,$r0,$r7,0x0
     f50:	6f090000 	bgeu	$r0,$r0,-63232(0x30900) # ffff1850 <_etext+0xe3fe4a00>
     f54:	79627475 	0x79627475
     f58:	01006574 	0x01006574
     f5c:	01360519 	0x01360519
     f60:	01250000 	0x01250000
     f64:	000a0000 	0x000a0000
     f68:	0007d00b 	alsl.wu	$r11,$r0,$r20,0x4
     f6c:	00013d1c 	0x00013d1c
     f70:	0c000000 	0x0c000000
     f74:	0000c904 	0x0000c904
     f78:	05040400 	0x05040400
     f7c:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
     f80:	74756f0d 	xvmax.wu	$xr13,$xr24,$xr27
     f84:	65747962 	bge	$r11,$r2,95352(0x17478) # 183fc <_bss_end+0x1572c>
     f88:	74756f00 	xvmax.wu	$xr0,$xr24,$xr27
     f8c:	65747962 	bge	$r11,$r2,95352(0x17478) # 18404 <_bss_end+0x15734>
     f90:	05190100 	0x05190100
     f94:	00017e00 	asrtle.d	$r16,$r31
     f98:	fc000400 	0xfc000400
     f9c:	04000002 	csrrd	$r2,0x0
     fa0:	554e4701 	bl	-66761148(0xc054e44) # fc055de4 <_etext+0xe0048f94>
     fa4:	37314320 	0x37314320
     fa8:	332e3820 	xvstelm.w	$xr0,$r1,-456(0x238),0x3
     fac:	2d20302e 	0x2d20302e
     fb0:	6372616d 	blt	$r11,$r13,-36256(0x37260) # ffff8210 <_etext+0xe3feb3c0>
     fb4:	616c3d68 	blt	$r11,$r8,93244(0x16c3c) # 17bf0 <_bss_end+0x14f20>
     fb8:	6d693233 	bgeu	$r17,$r19,92464(0x16930) # 178e8 <_bss_end+0x14c18>
     fbc:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17ce8 <_bss_end+0x15018>
     fc0:	693d6962 	bltu	$r11,$r2,81256(0x13d68) # 14d28 <_bss_end+0x12058>
     fc4:	3233706c 	0x3233706c
     fc8:	20672d20 	ll.w	$r0,$r9,26412(0x672c)
     fcc:	20324f2d 	ll.w	$r13,$r25,12876(0x324c)
     fd0:	00324f2d 	0x00324f2d
     fd4:	2f2e2e0c 	0x2f2e2e0c
     fd8:	6c2f2e2e 	bgeu	$r17,$r14,12076(0x2f2c) # 3f04 <_bss_end+0x1234>
     fdc:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7e48 <_etext+0xe3feaff8>
     fe0:	68637261 	bltu	$r19,$r1,25456(0x6370) # 7350 <_bss_end+0x4680>
     fe4:	2e2f3233 	0x2e2f3233
     fe8:	72772f2e 	0x72772f2e
     fec:	2e657469 	0x2e657469
     ff0:	682f0063 	bltu	$r3,$r3,12032(0x2f00) # 3ef0 <_bss_end+0x1220>
     ff4:	2f656d6f 	0x2f656d6f
     ff8:	6e656863 	bgeu	$r3,$r3,-105112(0x26568) # fffe7560 <_etext+0xe3fda710>
     ffc:	6873657a 	bltu	$r11,$r26,29540(0x7364) # 8360 <_bss_end+0x5690>
    1000:	2f696175 	0x2f696175
    1004:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7f70 <_etext+0xe3fdb120>
    1008:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff8268 <_etext+0xe3feb418>
    100c:	2d323368 	0x2d323368
    1010:	6c6f6f74 	bgeu	$r27,$r20,28524(0x6f6c) # 7f7c <_bss_end+0x52ac>
    1014:	69616863 	bltu	$r3,$r3,90472(0x16168) # 1717c <_bss_end+0x144ac>
    1018:	656e2f6e 	bge	$r27,$r14,93740(0x16e2c) # 17e44 <_bss_end+0x15174>
    101c:	62696c77 	blt	$r3,$r23,-104084(0x2696c) # fffe7988 <_etext+0xe3fdab38>
    1020:	2d32335f 	0x2d32335f
    1024:	39313032 	0x39313032
    1028:	2f31302e 	0x2f31302e
    102c:	6762696c 	bge	$r11,$r12,-40344(0x36268) # ffff7294 <_etext+0xe3fea444>
    1030:	73736f6c 	0x73736f6c
    1034:	6975622f 	bltu	$r17,$r15,95584(0x17560) # 18594 <_bss_end+0x158c4>
    1038:	6c2f646c 	bgeu	$r3,$r12,12132(0x2f64) # 3f9c <_bss_end+0x12cc>
    103c:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7ea8 <_etext+0xe3feb058>
    1040:	68637261 	bltu	$r19,$r1,25456(0x6370) # 73b0 <_bss_end+0x46e0>
    1044:	14003233 	lu12i.w	$r19,401(0x191)
    1048:	7c1c0098 	0x7c1c0098
    104c:	89000000 	0x89000000
    1050:	02000005 	slti	$r5,$r0,0
    1054:	000000c9 	0x000000c9
    1058:	000000c9 	0x000000c9
    105c:	01040003 	0x01040003
    1060:	61686306 	blt	$r24,$r6,92256(0x16860) # 178c0 <_bss_end+0x14bf0>
    1064:	5f050072 	bne	$r3,$r18,-64256(0x30500) # ffff1564 <_etext+0xe3fe4714>
    1068:	00646e65 	bstrins.w	$r5,$r19,0x4,0x1b
    106c:	be0d1a02 	0xbe0d1a02
    1070:	06000000 	cacop	0x0,$r0,0
    1074:	74697277 	xvavgr.w	$xr23,$xr19,$xr28
    1078:	19010065 	pcaddi	$r5,-522237(0x80803)
    107c:	00016001 	0x00016001
    1080:	00981400 	bstrins.d	$r0,$r0,0x18,0x5
    1084:	00007c1c 	0x00007c1c
    1088:	609c0100 	blt	$r8,$r0,39936(0x9c00) # ac88 <_bss_end+0x7fb8>
    108c:	07000001 	0x07000001
    1090:	01006466 	0x01006466
    1094:	01600119 	0x01600119
    1098:	02050000 	slti	$r0,$r0,320(0x140)
    109c:	62070000 	blt	$r0,$r0,-129280(0x20700) # fffe179c <_etext+0xe3fd494c>
    10a0:	01006675 	0x01006675
    10a4:	01670119 	0x01670119
    10a8:	02260000 	slti	$r0,$r0,-1664(0x980)
    10ac:	6e070000 	bgeu	$r0,$r0,-129280(0x20700) # fffe17ac <_etext+0xe3fd495c>
    10b0:	65747962 	bge	$r11,$r2,95352(0x17478) # 18528 <_bss_end+0x15858>
    10b4:	19010073 	pcaddi	$r19,-522237(0x80803)
    10b8:	00016001 	0x00016001
    10bc:	00024700 	0x00024700
    10c0:	00690800 	bstrins.w	$r0,$r0,0x9,0x2
    10c4:	60071e01 	blt	$r16,$r1,1820(0x71c) # 17e0 <_ex_table_base_end+0x2e0>
    10c8:	70000001 	vseq.b	$vr1,$vr0,$vr0
    10cc:	09000002 	0x09000002
    10d0:	1c00984c 	pcaddu12i	$r12,1218(0x4c2)
    10d4:	0000016d 	0x0000016d
    10d8:	0098600a 	bstrins.d	$r10,$r0,0x18,0x18
    10dc:	00016d1c 	0x00016d1c
    10e0:	00015600 	asrtle.d	$r16,$r21
    10e4:	54010b00 	bl	-67108600(0xc000108) # fc0011ec <_etext+0xdfff439c>
    10e8:	09003d01 	0x09003d01
    10ec:	1c00986c 	pcaddu12i	$r12,1219(0x4c3)
    10f0:	0000016d 	0x0000016d
    10f4:	05040400 	0x05040400
    10f8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
    10fc:	00c9040c 	bstrpick.d	$r12,$r0,0x9,0x1
    1100:	6f0d0000 	bgeu	$r0,$r0,-62208(0x30d00) # ffff1e00 <_etext+0xe3fe4fb0>
    1104:	79627475 	0x79627475
    1108:	6f006574 	bgeu	$r11,$r20,-65436(0x30064) # ffff116c <_etext+0xe3fe431c>
    110c:	79627475 	0x79627475
    1110:	01006574 	0x01006574
    1114:	ab000d11 	0xab000d11
    1118:	0400000e 	csrrd	$r14,0x0
    111c:	0003bc00 	0x0003bc00
    1120:	47010400 	bnez	$r0,196868(0x30104) # 31224 <_bss_end+0x2e554>
    1124:	4320554e 	beqz	$r10,3874900(0x3b2054) # 3b3178 <__stack_start+0x1b04a8>
    1128:	38203731 	ldx.bu	$r17,$r25,$r13
    112c:	302e332e 	vldrepl.w	$vr14,$r25,-464(0xe30)
    1130:	616d2d20 	blt	$r9,$r0,93484(0x16d2c) # 17e5c <_bss_end+0x1518c>
    1134:	3d686372 	0x3d686372
    1138:	3233616c 	0x3233616c
    113c:	2d206d69 	0x2d206d69
    1140:	6962616d 	bltu	$r11,$r13,90720(0x16260) # 173a0 <_bss_end+0x146d0>
    1144:	706c693d 	0x706c693d
    1148:	2d203233 	0x2d203233
    114c:	4f2d2067 	jirl	$r7,$r3,-53984(0x32d20)
    1150:	4f2d2032 	jirl	$r18,$r1,-53984(0x32d20)
    1154:	2e0c0032 	0x2e0c0032
    1158:	2e2e2f2e 	0x2e2e2f2e
    115c:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff80c8 <_etext+0xe3feb278>
    1160:	7261676e 	0x7261676e
    1164:	32336863 	0x32336863
    1168:	2f2e2e2f 	0x2f2e2e2f
    116c:	61747366 	blt	$r27,$r6,95344(0x17470) # 185dc <_bss_end+0x1590c>
    1170:	00632e74 	bstrins.w	$r20,$r19,0x3,0xb
    1174:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 180dc <_bss_end+0x1540c>
    1178:	68632f65 	bltu	$r27,$r5,25388(0x632c) # 74a4 <_bss_end+0x47d4>
    117c:	657a6e65 	bge	$r19,$r5,96876(0x17a6c) # 18be8 <_bss_end+0x15f18>
    1180:	61756873 	blt	$r3,$r19,95592(0x17568) # 186e8 <_bss_end+0x15a18>
    1184:	6f6c2f69 	bgeu	$r27,$r9,-37844(0x36c2c) # ffff7db0 <_etext+0xe3feaf60>
    1188:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 178f4 <_bss_end+0x14c24>
    118c:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
    1190:	6f742d32 	bgeu	$r9,$r18,-35796(0x3742c) # ffff85bc <_etext+0xe3feb76c>
    1194:	68636c6f 	bltu	$r3,$r15,25452(0x636c) # 7500 <_bss_end+0x4830>
    1198:	2f6e6961 	0x2f6e6961
    119c:	6c77656e 	bgeu	$r11,$r14,30564(0x7764) # 8900 <_bss_end+0x5c30>
    11a0:	335f6269 	xvstelm.h	$xr9,$r19,-80(0x1b0),0x7
    11a4:	30322d32 	0x30322d32
    11a8:	302e3931 	vldrepl.w	$vr17,$r9,-456(0xe38)
    11ac:	696c2f31 	bltu	$r25,$r17,93228(0x16c2c) # 17dd8 <_bss_end+0x15108>
    11b0:	6f6c6762 	bgeu	$r27,$r2,-37788(0x36c64) # ffff7e14 <_etext+0xe3feafc4>
    11b4:	622f7373 	blt	$r27,$r19,-118928(0x22f70) # fffe4124 <_etext+0xe3fd72d4>
    11b8:	646c6975 	bge	$r11,$r21,27752(0x6c68) # 7e20 <_bss_end+0x5150>
    11bc:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff8128 <_etext+0xe3feb2d8>
    11c0:	7261676e 	0x7261676e
    11c4:	32336863 	0x32336863
    11c8:	00989000 	bstrins.d	$r0,$r0,0x18,0x24
    11cc:	0000141c 	clz.w	$r28,$r0
    11d0:	00068000 	alsl.wu	$r0,$r0,$r0,0x2
    11d4:	05040200 	0x05040200
    11d8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
    11dc:	75070402 	xvssran.hu.w	$xr2,$xr0,$xr1
    11e0:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff7b50 <_etext+0xe3fead00>
    11e4:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
    11e8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
    11ec:	6c050802 	bgeu	$r0,$r2,1288(0x508) # 16f4 <_ex_table_base_end+0x1f4>
    11f0:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
    11f4:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff8060 <_etext+0xe3feb210>
    11f8:	746e6920 	0x746e6920
    11fc:	04100200 	csrxchg	$r0,$r16,0x400
    1200:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff806c <_etext+0xe3feb21c>
    1204:	756f6420 	0x756f6420
    1208:	00656c62 	bstrins.w	$r2,$r3,0x5,0x1b
    120c:	73060102 	0x73060102
    1210:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 18074 <_bss_end+0x153a4>
    1214:	68632064 	bltu	$r3,$r4,25376(0x6320) # 7534 <_bss_end+0x4864>
    1218:	02007261 	slti	$r1,$r19,28(0x1c)
    121c:	6e750801 	bgeu	$r0,$r1,-101112(0x27508) # fffe8724 <_etext+0xe3fdb8d4>
    1220:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe7988 <_etext+0xe3fdab38>
    1224:	63206465 	blt	$r3,$r5,-57244(0x32064) # ffff3288 <_etext+0xe3fe6438>
    1228:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
    122c:	73050202 	0x73050202
    1230:	74726f68 	xvmin.b	$xr8,$xr27,$xr27
    1234:	746e6920 	0x746e6920
    1238:	07020200 	0x07020200
    123c:	726f6873 	0x726f6873
    1240:	6e752074 	bgeu	$r3,$r20,-101088(0x27520) # fffe8760 <_etext+0xe3fdb910>
    1244:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe79ac <_etext+0xe3fdab5c>
    1248:	69206465 	bltu	$r3,$r5,73828(0x12064) # 132ac <_bss_end+0x105dc>
    124c:	0200746e 	slti	$r14,$r3,29(0x1d)
    1250:	6f6c0504 	bgeu	$r8,$r4,-37884(0x36c04) # ffff7e54 <_etext+0xe3feb004>
    1254:	6920676e 	bltu	$r27,$r14,73828(0x12064) # 132b8 <_bss_end+0x105e8>
    1258:	0200746e 	slti	$r14,$r3,29(0x1d)
    125c:	6f6c0704 	bgeu	$r24,$r4,-37884(0x36c04) # ffff7e60 <_etext+0xe3feb010>
    1260:	7520676e 	xvpickod.b	$xr14,$xr27,$xr25
    1264:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff7bd4 <_etext+0xe3fead84>
    1268:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
    126c:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
    1270:	6c070802 	bgeu	$r0,$r2,1800(0x708) # 1978 <_ex_table_base_end+0x478>
    1274:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
    1278:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff80e4 <_etext+0xe3feb294>
    127c:	736e7520 	vssrarni.du.q	$vr0,$vr9,0x1d
    1280:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 180e4 <_bss_end+0x15414>
    1284:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe7ba4 <_etext+0xe3fdad54>
    1288:	5f030074 	bne	$r3,$r20,-64768(0x30300) # ffff1588 <_etext+0xe3fe4738>
    128c:	4b434f4c 	0x4b434f4c
    1290:	4345525f 	beqz	$r18,-47792(0x7f4550) # ffff57e0 <_etext+0xe3fe8990>
    1294:	49535255 	0x49535255
    1298:	545f4556 	bl	89677636(0x5585f44) # 55871dc <__stack_start+0x538450c>
    129c:	0d300200 	0x0d300200
    12a0:	000000be 	0x000000be
    12a4:	666f5f03 	bge	$r24,$r3,-102564(0x26f5c) # fffe8200 <_etext+0xe3fdb3b0>
    12a8:	00745f66 	bstrins.w	$r6,$r27,0x14,0x17
    12ac:	380e1003 	0x380e1003
    12b0:	03000001 	lu52i.d	$r1,$r0,0
    12b4:	65645f5f 	bge	$r26,$r31,91228(0x1645c) # 17710 <_bss_end+0x14a40>
    12b8:	00745f76 	bstrins.w	$r22,$r27,0x14,0x17
    12bc:	150f1403 	lu12i.w	$r3,-493408(0x878a0)
    12c0:	03000001 	lu52i.d	$r1,$r0,0
    12c4:	69755f5f 	bltu	$r26,$r31,95580(0x1755c) # 18820 <_bss_end+0x15b50>
    12c8:	00745f64 	bstrins.w	$r4,$r27,0x14,0x17
    12cc:	22181803 	ll.d	$r3,$r0,6168(0x1818)
    12d0:	03000001 	lu52i.d	$r1,$r0,0
    12d4:	69675f5f 	bltu	$r26,$r31,91996(0x1675c) # 17a30 <_bss_end+0x14d60>
    12d8:	00745f64 	bstrins.w	$r4,$r27,0x14,0x17
    12dc:	22181b03 	ll.d	$r3,$r24,6168(0x1818)
    12e0:	03000001 	lu52i.d	$r1,$r0,0
    12e4:	6f70665f 	bgeu	$r18,$r31,-36764(0x37064) # ffff8348 <_etext+0xe3feb4f8>
    12e8:	00745f73 	bstrins.w	$r19,$r27,0x14,0x17
    12ec:	380e2703 	0x380e2703
    12f0:	04000001 	csrrd	$r1,0x0
    12f4:	746e6977 	0x746e6977
    12f8:	0400745f 	csrxchg	$r31,$r2,0x1d
    12fc:	c5170165 	0xc5170165
    1300:	05000000 	0x05000000
    1304:	03500304 	andi	$r4,$r24,0x400
    1308:	00000213 	0x00000213
    130c:	775f5f06 	xvsrarni.d.q	$xr6,$xr24,0x57
    1310:	03006863 	lu52i.d	$r3,$r3,26(0x1a)
    1314:	01dc0c52 	0x01dc0c52
    1318:	5f060000 	bne	$r0,$r0,-64000(0x30600) # ffff1918 <_etext+0xe3fe4ac8>
    131c:	6863775f 	bltu	$r26,$r31,25460(0x6374) # 7690 <_bss_end+0x49c0>
    1320:	53030062 	b	25887488(0x18b0300) # 18b1620 <__stack_start+0x16ae950>
    1324:	00021313 	0x00021313
    1328:	04070000 	csrrd	$r0,0x1c0
    132c:	23000001 	sc.d	$r1,$r0,0
    1330:	08000002 	0x08000002
    1334:	000000c5 	0x000000c5
    1338:	08090003 	0x08090003
    133c:	4f094d03 	jirl	$r3,$r8,-63156(0x3094c)
    1340:	0a000002 	0x0a000002
    1344:	6f635f5f 	bgeu	$r26,$r31,-40100(0x3635c) # ffff76a0 <_etext+0xe3fea850>
    1348:	00746e75 	bstrins.w	$r21,$r19,0x14,0x1b
    134c:	be074f03 	0xbe074f03
    1350:	00000000 	0x00000000
    1354:	765f5f0a 	0x765f5f0a
    1358:	65756c61 	bge	$r3,$r1,95596(0x1756c) # 188c4 <_bss_end+0x15bf4>
    135c:	05540300 	0x05540300
    1360:	000001ec 	0x000001ec
    1364:	5f030004 	bne	$r0,$r4,-64768(0x30300) # ffff1664 <_etext+0xe3fe4814>
    1368:	7473626d 	xvmin.w	$xr13,$xr19,$xr24
    136c:	5f657461 	bne	$r3,$r1,-39564(0x36574) # ffff78e0 <_etext+0xe3feaa90>
    1370:	55030074 	bl	30475008(0x1d10300) # 1d11670 <__stack_start+0x1b0e9a0>
    1374:	00022303 	0x00022303
    1378:	665f0300 	bge	$r24,$r0,-106752(0x25f00) # fffe7278 <_etext+0xe3fda428>
    137c:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff76e8 <_etext+0xe3fea898>
    1380:	0300745f 	lu52i.d	$r31,$r2,29(0x1d)
    1384:	01731b59 	0x01731b59
    1388:	040b0000 	csrrd	$r0,0x2c0
    138c:	555f5f03 	bl	-66232484(0xc0d5f5c) # fc0d72e8 <_etext+0xe00ca498>
    1390:	676e6f4c 	bge	$r26,$r12,-37268(0x36e6c) # ffff81fc <_etext+0xe3feb3ac>
    1394:	19160500 	pcaddi	$r0,-479192(0x8b028)
    1398:	00000144 	0x00000144
    139c:	69425f0c 	bltu	$r24,$r12,82524(0x1425c) # 155f8 <_bss_end+0x12928>
    13a0:	746e6967 	0x746e6967
    13a4:	2d051800 	0x2d051800
    13a8:	0002ec08 	0x0002ec08
    13ac:	6e5f0a00 	bgeu	$r16,$r0,-106744(0x25f08) # fffe72b4 <_etext+0xe3fda464>
    13b0:	00747865 	bstrins.w	$r5,$r3,0x14,0x1e
    13b4:	ec132f05 	0xec132f05
    13b8:	00000002 	0x00000002
    13bc:	006b5f0a 	bstrins.w	$r10,$r24,0xb,0x17
    13c0:	be073005 	0xbe073005
    13c4:	04000000 	csrrd	$r0,0x0
    13c8:	616d5f0a 	blt	$r24,$r10,93532(0x16d5c) # 18124 <_bss_end+0x15454>
    13cc:	73647778 	vssrani.bu.h	$vr24,$vr27,0xd
    13d0:	0b300500 	0x0b300500
    13d4:	000000be 	0x000000be
    13d8:	735f0a08 	vsrarni.d.q	$vr8,$vr16,0x42
    13dc:	006e6769 	bstrins.w	$r9,$r27,0xe,0x19
    13e0:	be143005 	0xbe143005
    13e4:	0c000000 	0x0c000000
    13e8:	64775f0a 	bge	$r24,$r10,30556(0x775c) # 8b44 <_bss_end+0x5e74>
    13ec:	30050073 	0x30050073
    13f0:	0000be1b 	0x0000be1b
    13f4:	5f0a1000 	bne	$r0,$r0,-62960(0x30a10) # ffff1e04 <_etext+0xe3fe4fb4>
    13f8:	31050078 	0x31050078
    13fc:	0002f20b 	0x0002f20b
    1400:	0d001400 	fsel	$f0,$f0,$f5,$fcc0
    1404:	00028504 	0x00028504
    1408:	02750700 	sltui	$r0,$r24,-703(0xd41)
    140c:	03020000 	lu52i.d	$r0,$r0,128(0x80)
    1410:	c5080000 	0xc5080000
    1414:	00000000 	0x00000000
    1418:	5f5f0c00 	bne	$r0,$r0,-41204(0x35f0c) # ffff7324 <_etext+0xe3fea4d4>
    141c:	24006d74 	ldptr.w	$r20,$r11,108(0x6c)
    1420:	ba083505 	0xba083505
    1424:	0a000003 	0x0a000003
    1428:	6d745f5f 	bgeu	$r26,$r31,95324(0x1745c) # 18884 <_bss_end+0x15bb4>
    142c:	6365735f 	blt	$r26,$r31,-39568(0x36570) # ffff799c <_etext+0xe3feab4c>
    1430:	09370500 	0x09370500
    1434:	000000be 	0x000000be
    1438:	5f5f0a00 	bne	$r16,$r0,-41208(0x35f08) # ffff7340 <_etext+0xe3fea4f0>
    143c:	6d5f6d74 	bgeu	$r11,$r20,89964(0x15f6c) # 173a8 <_bss_end+0x146d8>
    1440:	05006e69 	0x05006e69
    1444:	00be0938 	bstrins.d	$r24,$r9,0x3e,0x2
    1448:	0a040000 	0x0a040000
    144c:	6d745f5f 	bgeu	$r26,$r31,95324(0x1745c) # 188a8 <_bss_end+0x15bd8>
    1450:	756f685f 	0x756f685f
    1454:	39050072 	0x39050072
    1458:	0000be09 	0x0000be09
    145c:	5f0a0800 	bne	$r0,$r0,-62968(0x30a08) # ffff1e64 <_etext+0xe3fe5014>
    1460:	5f6d745f 	bne	$r2,$r31,-37516(0x36d74) # ffff81d4 <_etext+0xe3feb384>
    1464:	7961646d 	0x7961646d
    1468:	093a0500 	0x093a0500
    146c:	000000be 	0x000000be
    1470:	5f5f0a0c 	bne	$r16,$r12,-41208(0x35f08) # ffff7378 <_etext+0xe3fea528>
    1474:	6d5f6d74 	bgeu	$r11,$r20,89964(0x15f6c) # 173e0 <_bss_end+0x14710>
    1478:	05006e6f 	0x05006e6f
    147c:	00be093b 	bstrins.d	$r27,$r9,0x3e,0x2
    1480:	0a100000 	xvfmadd.s	$xr0,$xr0,$xr0,$xr0
    1484:	6d745f5f 	bgeu	$r26,$r31,95324(0x1745c) # 188e0 <_bss_end+0x15c10>
    1488:	6165795f 	blt	$r10,$r31,91512(0x16578) # 17a00 <_bss_end+0x14d30>
    148c:	3c050072 	0x3c050072
    1490:	0000be09 	0x0000be09
    1494:	5f0a1400 	bne	$r0,$r0,-62956(0x30a14) # ffff1ea8 <_etext+0xe3fe5058>
    1498:	5f6d745f 	bne	$r2,$r31,-37516(0x36d74) # ffff820c <_etext+0xe3feb3bc>
    149c:	79616477 	0x79616477
    14a0:	093d0500 	0x093d0500
    14a4:	000000be 	0x000000be
    14a8:	5f5f0a18 	bne	$r16,$r24,-41208(0x35f08) # ffff73b0 <_etext+0xe3fea560>
    14ac:	795f6d74 	0x795f6d74
    14b0:	00796164 	bstrins.w	$r4,$r11,0x19,0x18
    14b4:	be093e05 	0xbe093e05
    14b8:	1c000000 	pcaddu12i	$r0,0
    14bc:	745f5f0a 	0x745f5f0a
    14c0:	73695f6d 	vssrarni.w.d	$vr13,$vr27,0x17
    14c4:	00747364 	bstrins.w	$r4,$r27,0x14,0x1c
    14c8:	be093f05 	0xbe093f05
    14cc:	20000000 	ll.w	$r0,$r0,0
    14d0:	00180e00 	sra.w	$r0,$r16,$r3
    14d4:	01080000 	0x01080000
    14d8:	14084805 	lu12i.w	$r5,16960(0x4240)
    14dc:	0a000004 	0x0a000004
    14e0:	616e665f 	blt	$r18,$r31,93796(0x16e64) # 18344 <_bss_end+0x15674>
    14e4:	00736772 	bstrins.w	$r18,$r27,0x13,0x19
    14e8:	140a4905 	lu12i.w	$r5,21064(0x5248)
    14ec:	00000004 	0x00000004
    14f0:	73645f0a 	vssrani.bu.h	$vr10,$vr24,0x7
    14f4:	61685f6f 	blt	$r27,$r15,92252(0x1685c) # 17d50 <_bss_end+0x15080>
    14f8:	656c646e 	bge	$r3,$r14,93284(0x16c64) # 1815c <_bss_end+0x1548c>
    14fc:	094a0500 	0x094a0500
    1500:	00000414 	0x00000414
    1504:	665f0f80 	bge	$r28,$r0,-106740(0x25f0c) # fffe7410 <_etext+0xe3fda5c0>
    1508:	7079746e 	0x7079746e
    150c:	05007365 	0x05007365
    1510:	02750a4c 	sltui	$r12,$r18,-702(0xd42)
    1514:	01000000 	0x01000000
    1518:	73695f0f 	vssrarni.w.d	$vr15,$vr24,0x17
    151c:	6178635f 	blt	$r26,$r31,96352(0x17860) # 18d7c <_bss_end+0x160ac>
    1520:	0a4f0500 	0x0a4f0500
    1524:	00000275 	0x00000275
    1528:	07000104 	0x07000104
    152c:	00000273 	0x00000273
    1530:	00000424 	0x00000424
    1534:	0000c508 	0x0000c508
    1538:	10001f00 	addu16i.d	$r0,$r24,7(0x7)
    153c:	6574615f 	bge	$r10,$r31,95328(0x17460) # 1899c <_bss_end+0x15ccc>
    1540:	00746978 	bstrins.w	$r24,$r11,0x14,0x1a
    1544:	5b050190 	beq	$r12,$r16,-64256(0x30500) # ffff1a44 <_etext+0xe3fe4bf4>
    1548:	00046f08 	alsl.w	$r8,$r24,$r27,0x1
    154c:	6e5f0a00 	bgeu	$r16,$r0,-106744(0x25f08) # fffe7454 <_etext+0xe3fda604>
    1550:	00747865 	bstrins.w	$r5,$r3,0x14,0x1e
    1554:	6f125c05 	bgeu	$r0,$r5,-60836(0x3125c) # ffff27b0 <_etext+0xe3fe5960>
    1558:	00000004 	0x00000004
    155c:	6e695f0a 	bgeu	$r24,$r10,-104100(0x2695c) # fffe7eb8 <_etext+0xe3fdb068>
    1560:	5d050064 	bne	$r3,$r4,66816(0x10500) # 11a60 <_bss_end+0xed90>
    1564:	0000be06 	0x0000be06
    1568:	5f0a0400 	bne	$r0,$r0,-62972(0x30a04) # ffff1f6c <_etext+0xe3fe511c>
    156c:	00736e66 	bstrins.w	$r6,$r19,0x13,0x1b
    1570:	75095f05 	xvssrlrn.hu.w	$xr5,$xr24,$xr23
    1574:	08000004 	0x08000004
    1578:	00001811 	cto.w	$r17,$r0
    157c:	1e600500 	pcaddu18i	$r0,196648(0x30028)
    1580:	000003ba 	0x000003ba
    1584:	040d0088 	csrxchg	$r8,$r4,0x340
    1588:	00000424 	0x00000424
    158c:	00048507 	alsl.w	$r7,$r8,$r1,0x2
    1590:	00048500 	alsl.w	$r0,$r8,$r1,0x2
    1594:	00c50800 	bstrpick.d	$r0,$r0,0x5,0x2
    1598:	001f0000 	mulw.d.w	$r0,$r0,$r0
    159c:	048b040d 	csrrd	$r13,0x22c1
    15a0:	0c120000 	fcmp.ceq.s	$fcc0,$f0,$f0
    15a4:	62735f5f 	blt	$r26,$r31,-101540(0x2735c) # fffe8900 <_etext+0xe3fdbab0>
    15a8:	08006675 	0x08006675
    15ac:	bb087305 	0xbb087305
    15b0:	0a000004 	0x0a000004
    15b4:	7361625f 	vssrani.w.d	$vr31,$vr18,0x18
    15b8:	74050065 	xvsle.wu	$xr5,$xr3,$xr0
    15bc:	0004bb11 	alsl.w	$r17,$r24,$r14,0x2
    15c0:	5f0a0000 	bne	$r0,$r0,-62976(0x30a00) # ffff1fc0 <_etext+0xe3fe5170>
    15c4:	657a6973 	bge	$r11,$r19,96872(0x17a68) # 1902c <_bss_end+0x1635c>
    15c8:	06750500 	0x06750500
    15cc:	000000be 	0x000000be
    15d0:	040d0004 	csrrd	$r4,0x340
    15d4:	00000104 	0x00000104
    15d8:	735f5f0c 	vsrarni.d.q	$vr12,$vr24,0x57
    15dc:	454c4946 	bnez	$r10,1657928(0x194c48) # 196224 <__heap_end+0x93554>
    15e0:	bd056800 	0xbd056800
    15e4:	00063a08 	alsl.wu	$r8,$r16,$r14,0x1
    15e8:	705f0a00 	0x705f0a00
    15ec:	12be0500 	addu16i.d	$r0,$r8,-20607(0xaf81)
    15f0:	000004bb 	0x000004bb
    15f4:	725f0a00 	0x725f0a00
    15f8:	07bf0500 	0x07bf0500
    15fc:	000000be 	0x000000be
    1600:	775f0a04 	xvsrarni.d.q	$xr4,$xr16,0x42
    1604:	07c00500 	0x07c00500
    1608:	000000be 	0x000000be
    160c:	665f0a08 	bge	$r16,$r8,-106744(0x25f08) # fffe7514 <_etext+0xe3fda6c4>
    1610:	7367616c 	vssrani.du.q	$vr12,$vr11,0x58
    1614:	09c10500 	0x09c10500
    1618:	00000115 	0x00000115
    161c:	665f0a0c 	bge	$r16,$r12,-106744(0x25f08) # fffe7524 <_etext+0xe3fda6d4>
    1620:	00656c69 	bstrins.w	$r9,$r3,0x5,0x1b
    1624:	1509c205 	lu12i.w	$r5,-504304(0x84e10)
    1628:	0e000001 	0x0e000001
    162c:	66625f0a 	bge	$r24,$r10,-105892(0x2625c) # fffe7888 <_etext+0xe3fdaa38>
    1630:	11c30500 	addu16i.d	$r0,$r8,28865(0x70c1)
    1634:	0000048c 	0x0000048c
    1638:	6c5f0a10 	bgeu	$r16,$r16,24328(0x5f08) # 7540 <_bss_end+0x4870>
    163c:	69736662 	bltu	$r19,$r2,95076(0x17364) # 189a0 <_bss_end+0x15cd0>
    1640:	0500657a 	0x0500657a
    1644:	00be07c4 	bstrins.d	$r4,$r30,0x3e,0x1
    1648:	0a180000 	xvfmadd.s	$xr0,$xr0,$xr0,$xr16
    164c:	6f6f635f 	bgeu	$r26,$r31,-37024(0x36f60) # ffff85ac <_etext+0xe3feb75c>
    1650:	0065696b 	bstrins.w	$r11,$r11,0x5,0x1a
    1654:	7308cb05 	vsllwil.d.w	$vr5,$vr24,0x12
    1658:	1c000002 	pcaddu12i	$r2,0
    165c:	65725f0a 	bge	$r24,$r10,94812(0x1725c) # 188b8 <_bss_end+0x15be8>
    1660:	05006461 	0x05006461
    1664:	08281bcd 	fmadd.d	$f13,$f30,$f6,$f16
    1668:	0a200000 	xvfmadd.d	$xr0,$xr0,$xr0,$xr0
    166c:	6972775f 	bltu	$r26,$r31,94836(0x17274) # 188e0 <_bss_end+0x15c10>
    1670:	05006574 	0x05006574
    1674:	08521bcf 	fmsub.s	$f15,$f30,$f6,$f4
    1678:	0a240000 	xvfmadd.d	$xr0,$xr0,$xr0,$xr8
    167c:	6565735f 	bge	$r26,$r31,91504(0x16570) # 17bec <_bss_end+0x14f1c>
    1680:	d205006b 	0xd205006b
    1684:	0008760b 	bytepick.w	$r11,$r16,$r29,0x0
    1688:	5f0a2800 	bne	$r0,$r0,-62936(0x30a28) # ffff20b0 <_etext+0xe3fe5260>
    168c:	736f6c63 	vssrarni.du.q	$vr3,$vr3,0x5b
    1690:	d3050065 	0xd3050065
    1694:	00089007 	bytepick.w	$r7,$r0,$r4,0x1
    1698:	5f0a2c00 	bne	$r0,$r0,-62932(0x30a2c) # ffff20c4 <_etext+0xe3fe5274>
    169c:	05006275 	0x05006275
    16a0:	048c11d6 	csrxchg	$r22,$r14,0x2304
    16a4:	0a300000 	0x0a300000
    16a8:	0070755f 	bstrins.w	$r31,$r10,0x10,0x1d
    16ac:	bb12d705 	0xbb12d705
    16b0:	38000004 	ldx.b	$r4,$r0,$r0
    16b4:	72755f0a 	0x72755f0a
    16b8:	07d80500 	0x07d80500
    16bc:	000000be 	0x000000be
    16c0:	755f0a3c 	0x755f0a3c
    16c4:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
    16c8:	9611db05 	0x9611db05
    16cc:	40000008 	beqz	$r0,2097152(0x200000) # 2016cc <__heap_end+0xfe9fc>
    16d0:	626e5f0a 	blt	$r24,$r10,-102820(0x26e5c) # fffe852c <_etext+0xe3fdb6dc>
    16d4:	05006675 	0x05006675
    16d8:	08a611dc 	fnmadd.d	$f28,$f14,$f4,$f12
    16dc:	0a430000 	0x0a430000
    16e0:	00626c5f 	bstrins.w	$r31,$r2,0x2,0x1b
    16e4:	8c11df05 	0x8c11df05
    16e8:	44000004 	bnez	$r0,1048576(0x100000) # 1016e8 <_bss_end+0xfea18>
    16ec:	6c625f0a 	bgeu	$r24,$r10,25180(0x625c) # 7948 <_bss_end+0x4c78>
    16f0:	7a69736b 	0x7a69736b
    16f4:	e2050065 	0xe2050065
    16f8:	0000be07 	0x0000be07
    16fc:	5f0a4c00 	bne	$r0,$r0,-62900(0x30a4c) # ffff2148 <_etext+0xe3fe52f8>
    1700:	7366666f 	vssrani.du.q	$vr15,$vr19,0x19
    1704:	05007465 	0x05007465
    1708:	018d0ae3 	0x018d0ae3
    170c:	0a500000 	xvfmsub.s	$xr0,$xr0,$xr0,$xr0
    1710:	7461645f 	xvabsd.w	$xr31,$xr2,$xr25
    1714:	e6050061 	0xe6050061
    1718:	00065812 	alsl.wu	$r18,$r0,$r22,0x1
    171c:	5f0a5400 	bne	$r0,$r0,-62892(0x30a54) # ffff2170 <_etext+0xe3fe5320>
    1720:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff7a8c <_etext+0xe3feac3c>
    1724:	0cea0500 	0x0cea0500
    1728:	00000262 	0x00000262
    172c:	6d5f0a58 	bgeu	$r18,$r24,89864(0x15f08) # 17634 <_bss_end+0x14964>
    1730:	61747362 	blt	$r27,$r2,95344(0x17470) # 18ba0 <_bss_end+0x15ed0>
    1734:	05006574 	0x05006574
    1738:	024f0eec 	sltui	$r12,$r23,963(0x3c3)
    173c:	0a5c0000 	xvfmsub.s	$xr0,$xr0,$xr0,$xr24
    1740:	616c665f 	blt	$r18,$r31,93284(0x16c64) # 183a4 <_bss_end+0x156d4>
    1744:	00327367 	0x00327367
    1748:	be09ed05 	0xbe09ed05
    174c:	64000000 	bge	$r0,$r0,0 # 174c <_ex_table_base_end+0x24c>
    1750:	00be1300 	bstrins.d	$r0,$r24,0x3e,0x4
    1754:	06580000 	0x06580000
    1758:	58140000 	beq	$r0,$r0,5120(0x1400) # 2b58 <__malloc_av_+0x438>
    175c:	14000006 	lu12i.w	$r6,0
    1760:	00000273 	0x00000273
    1764:	00081514 	bytepick.w	$r20,$r8,$r5,0x0
    1768:	00be1400 	bstrins.d	$r0,$r0,0x3e,0x5
    176c:	0d000000 	fsel	$f0,$f0,$f0,$fcc0
    1770:	00065e04 	alsl.wu	$r4,$r16,$r23,0x1
    1774:	725f1500 	0x725f1500
    1778:	746e6565 	0x746e6565
    177c:	05042800 	0x05042800
    1780:	1508024e 	lu12i.w	$r14,-507886(0x84012)
    1784:	16000008 	lu32i.d	$r8,0
    1788:	7272655f 	0x7272655f
    178c:	05006f6e 	0x05006f6e
    1790:	be070250 	0xbe070250
    1794:	00000000 	0x00000000
    1798:	74735f16 	xvmin.w	$xr22,$xr24,$xr23
    179c:	006e6964 	bstrins.w	$r4,$r11,0xe,0x1a
    17a0:	0b025505 	0x0b025505
    17a4:	0000090e 	0x0000090e
    17a8:	735f1604 	vsrarni.d.q	$vr4,$vr16,0x45
    17ac:	756f6474 	0x756f6474
    17b0:	55050074 	bl	30475520(0x1d10500) # 1d11cb0 <__stack_start+0x1b0efe0>
    17b4:	090e1402 	0x090e1402
    17b8:	16080000 	lu32i.d	$r0,16384(0x4000)
    17bc:	6474735f 	bge	$r26,$r31,29808(0x7470) # 8c2c <_bss_end+0x5f5c>
    17c0:	00727265 	bstrins.w	$r5,$r19,0x12,0x1c
    17c4:	1e025505 	pcaddu18i	$r5,4776(0x12a8)
    17c8:	0000090e 	0x0000090e
    17cc:	695f160c 	bltu	$r16,$r12,89876(0x15f14) # 176e0 <_bss_end+0x14a10>
    17d0:	0500636e 	0x0500636e
    17d4:	be080257 	0xbe080257
    17d8:	10000000 	addu16i.d	$r0,$r0,0
    17dc:	6d655f16 	bgeu	$r24,$r22,91484(0x1655c) # 17d38 <_bss_end+0x15068>
    17e0:	65677265 	bge	$r19,$r5,92016(0x16770) # 17f50 <_bss_end+0x15280>
    17e4:	0079636e 	bstrins.w	$r14,$r27,0x19,0x18
    17e8:	08025805 	0x08025805
    17ec:	00000bd2 	0x00000bd2
    17f0:	635f1614 	blt	$r16,$r20,-41196(0x35f14) # ffff7704 <_etext+0xe3fea8b4>
    17f4:	65727275 	bge	$r19,$r21,94832(0x17270) # 18a64 <_bss_end+0x15d94>
    17f8:	635f746e 	blt	$r3,$r14,-41100(0x35f74) # ffff776c <_etext+0xe3fea91c>
    17fc:	67657461 	bge	$r3,$r1,-39564(0x36574) # ffff7d70 <_etext+0xe3feaf20>
    1800:	0079726f 	bstrins.w	$r15,$r19,0x19,0x1c
    1804:	07025a05 	0x07025a05
    1808:	000000be 	0x000000be
    180c:	635f1630 	blt	$r17,$r16,-41196(0x35f14) # ffff7720 <_etext+0xe3fea8d0>
    1810:	65727275 	bge	$r19,$r21,94832(0x17270) # 18a80 <_bss_end+0x15db0>
    1814:	6c5f746e 	bgeu	$r3,$r14,24436(0x5f74) # 7788 <_bss_end+0x4ab8>
    1818:	6c61636f 	bgeu	$r27,$r15,24928(0x6160) # 7978 <_bss_end+0x4ca8>
    181c:	5b050065 	beq	$r3,$r5,-64256(0x30500) # ffff1d1c <_etext+0xe3fe4ecc>
    1820:	084c1002 	0x084c1002
    1824:	16340000 	lu32i.d	$r0,106496(0x1a000)
    1828:	64735f5f 	bge	$r26,$r31,29532(0x735c) # 8b84 <_bss_end+0x5eb4>
    182c:	6e696469 	bgeu	$r3,$r9,-104092(0x26964) # fffe8190 <_etext+0xe3fdb340>
    1830:	05007469 	0x05007469
    1834:	be07025d 	0xbe07025d
    1838:	38000000 	ldx.b	$r0,$r0,$r0
    183c:	635f5f16 	blt	$r24,$r22,-41124(0x35f5c) # ffff7798 <_etext+0xe3fea948>
    1840:	6e61656c 	bgeu	$r11,$r12,-106140(0x26164) # fffe79a4 <_etext+0xe3fdab54>
    1844:	05007075 	0x05007075
    1848:	ed08025f 	0xed08025f
    184c:	3c00000b 	0x3c00000b
    1850:	65725f16 	bge	$r24,$r22,94812(0x1725c) # 18aac <_bss_end+0x15ddc>
    1854:	746c7573 	0x746c7573
    1858:	02620500 	sltui	$r0,$r8,-1919(0x881)
    185c:	0002ec13 	0x0002ec13
    1860:	5f164000 	bne	$r0,$r0,-59840(0x31640) # ffff2ea0 <_etext+0xe3fe6050>
    1864:	75736572 	0x75736572
    1868:	6b5f746c 	bltu	$r3,$r12,-41100(0x35f74) # ffff77dc <_etext+0xe3fea98c>
    186c:	02630500 	sltui	$r0,$r8,-1855(0x8c1)
    1870:	0000be07 	0x0000be07
    1874:	5f164400 	bne	$r0,$r0,-59836(0x31644) # ffff2eb8 <_etext+0xe3fe6068>
    1878:	00733570 	bstrins.w	$r16,$r11,0x13,0xd
    187c:	13026405 	addu16i.d	$r5,$r0,-16231(0xc099)
    1880:	000002ec 	0x000002ec
    1884:	665f1648 	bge	$r18,$r8,-106732(0x25f14) # fffe7798 <_etext+0xe3fda948>
    1888:	6c656572 	bgeu	$r11,$r18,25956(0x6564) # 7dec <_bss_end+0x511c>
    188c:	00747369 	bstrins.w	$r9,$r27,0x14,0x1c
    1890:	14026505 	lu12i.w	$r5,4904(0x1328)
    1894:	00000bf3 	0x00000bf3
    1898:	635f164c 	blt	$r18,$r12,-41196(0x35f14) # ffff77ac <_etext+0xe3fea95c>
    189c:	656c7476 	bge	$r3,$r22,93300(0x16c74) # 18510 <_bss_end+0x15840>
    18a0:	6805006e 	bltu	$r3,$r14,1280(0x500) # 1da0 <_pmon_vector_end+0x3a0>
    18a4:	00be0702 	bstrins.d	$r2,$r24,0x3e,0x1
    18a8:	16500000 	lu32i.d	$r0,163840(0x28000)
    18ac:	7476635f 	xvmin.bu	$xr31,$xr26,$xr24
    18b0:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
    18b4:	09026905 	0x09026905
    18b8:	00000815 	0x00000815
    18bc:	6e5f1654 	bgeu	$r18,$r20,-106732(0x25f14) # fffe77d0 <_etext+0xe3fda980>
    18c0:	05007765 	0x05007765
    18c4:	a607028c 	0xa607028c
    18c8:	5800000b 	beq	$r0,$r11,0 # 18c8 <_ex_table_base_end+0x3c8>
    18cc:	74615f17 	xvabsd.w	$xr23,$xr24,$xr23
    18d0:	74697865 	xvavgr.w	$xr5,$xr3,$xr30
    18d4:	02900500 	addi.w	$r0,$r8,1025(0x401)
    18d8:	00046f13 	alsl.w	$r19,$r24,$r27,0x1
    18dc:	17014800 	lu32i.d	$r0,-521664(0x80a40)
    18e0:	6574615f 	bge	$r10,$r31,95328(0x17460) # 18d40 <_bss_end+0x16070>
    18e4:	30746978 	0x30746978
    18e8:	02910500 	addi.w	$r0,$r8,1089(0x441)
    18ec:	00042412 	alsl.w	$r18,$r0,$r9,0x1
    18f0:	17014c00 	lu32i.d	$r0,-521632(0x80a60)
    18f4:	6769735f 	bge	$r26,$r31,-38544(0x36970) # ffff8264 <_etext+0xe3feb414>
    18f8:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe8e5c <_etext+0xe3fdc00c>
    18fc:	95050063 	0x95050063
    1900:	0c040c02 	0x0c040c02
    1904:	02dc0000 	addi.d	$r0,$r0,1792(0x700)
    1908:	735f5f17 	vsrarni.d.q	$vr23,$vr24,0x57
    190c:	65756c67 	bge	$r3,$r7,95596(0x1756c) # 18e78 <_bss_end+0x161a8>
    1910:	029a0500 	addi.w	$r0,$r8,1665(0x681)
    1914:	0008c610 	bytepick.w	$r16,$r16,$r17,0x1
    1918:	1702e000 	lu32i.d	$r0,-518400(0x81700)
    191c:	66735f5f 	bge	$r26,$r31,-101540(0x2735c) # fffe8c78 <_etext+0xe3fdbe28>
    1920:	029b0500 	addi.w	$r0,$r8,1729(0x6c1)
    1924:	000c100a 	bytepick.d	$r10,$r0,$r4,0x0
    1928:	0002ec00 	0x0002ec00
    192c:	081b040d 	fmadd.s	$f13,$f0,$f1,$f22
    1930:	01020000 	0x01020000
    1934:	61686306 	blt	$r24,$r6,92256(0x16860) # 18194 <_bss_end+0x154c4>
    1938:	1b180072 	pcalau12i	$r18,-475133(0x8c003)
    193c:	0d000008 	fsel	$f8,$f0,$f0,$fcc0
    1940:	00063a04 	alsl.wu	$r4,$r16,$r14,0x1
    1944:	00be1300 	bstrins.d	$r0,$r24,0x3e,0x4
    1948:	084c0000 	0x084c0000
    194c:	58140000 	beq	$r0,$r0,5120(0x1400) # 2d4c <_bss_end+0x7c>
    1950:	14000006 	lu12i.w	$r6,0
    1954:	00000273 	0x00000273
    1958:	00084c14 	bytepick.w	$r20,$r0,$r19,0x0
    195c:	00be1400 	bstrins.d	$r0,$r0,0x3e,0x5
    1960:	0d000000 	fsel	$f0,$f0,$f0,$fcc0
    1964:	00082304 	bytepick.w	$r4,$r24,$r8,0x0
    1968:	2e040d00 	0x2e040d00
    196c:	13000008 	addu16i.d	$r8,$r0,-16384(0xc000)
    1970:	000001cc 	0x000001cc
    1974:	00000876 	0x00000876
    1978:	00065814 	alsl.wu	$r20,$r0,$r22,0x1
    197c:	02731400 	sltui	$r0,$r0,-827(0xcc5)
    1980:	cc140000 	0xcc140000
    1984:	14000001 	lu12i.w	$r1,0
    1988:	000000be 	0x000000be
    198c:	58040d00 	beq	$r8,$r0,1036(0x40c) # 1d98 <_pmon_vector_end+0x398>
    1990:	13000008 	addu16i.d	$r8,$r0,-16384(0xc000)
    1994:	000000be 	0x000000be
    1998:	00000890 	0x00000890
    199c:	00065814 	alsl.wu	$r20,$r0,$r22,0x1
    19a0:	02731400 	sltui	$r0,$r0,-827(0xcc5)
    19a4:	0d000000 	fsel	$f0,$f0,$f0,$fcc0
    19a8:	00087c04 	bytepick.w	$r4,$r0,$r31,0x0
    19ac:	01040700 	0x01040700
    19b0:	08a60000 	fnmadd.d	$f0,$f0,$f0,$f12
    19b4:	c5080000 	0xc5080000
    19b8:	02000000 	slti	$r0,$r0,0
    19bc:	01040700 	0x01040700
    19c0:	08b60000 	0x08b60000
    19c4:	c5080000 	0xc5080000
    19c8:	00000000 	0x00000000
    19cc:	5f5f0400 	bne	$r0,$r0,-41212(0x35f04) # ffff78d0 <_etext+0xe3feaa80>
    19d0:	454c4946 	bnez	$r10,1657928(0x194c48) # 196618 <__heap_end+0x93948>
    19d4:	012a0500 	0x012a0500
    19d8:	0004c11a 	alsl.w	$r26,$r8,$r16,0x2
    19dc:	675f1900 	bge	$r8,$r0,-41192(0x35f18) # ffff78f4 <_etext+0xe3feaaa4>
    19e0:	0065756c 	bstrins.w	$r12,$r11,0x5,0x1d
    19e4:	012e050c 	0x012e050c
    19e8:	00090808 	bytepick.w	$r8,$r0,$r2,0x2
    19ec:	6e5f1600 	bgeu	$r16,$r0,-106732(0x25f14) # fffe7900 <_etext+0xe3fdaab0>
    19f0:	00747865 	bstrins.w	$r5,$r3,0x14,0x1e
    19f4:	11013005 	addu16i.d	$r5,$r0,16460(0x404c)
    19f8:	00000908 	0x00000908
    19fc:	6e5f1600 	bgeu	$r16,$r0,-106732(0x25f14) # fffe7910 <_etext+0xe3fdaac0>
    1a00:	73626f69 	vssrani.d.q	$vr9,$vr27,0x1b
    1a04:	01310500 	0x01310500
    1a08:	0000be07 	0x0000be07
    1a0c:	5f160400 	bne	$r0,$r0,-59900(0x31604) # ffff3010 <_etext+0xe3fe61c0>
    1a10:	73626f69 	vssrani.d.q	$vr9,$vr27,0x1b
    1a14:	01320500 	0x01320500
    1a18:	00090e0b 	bytepick.w	$r11,$r16,$r3,0x2
    1a1c:	0d000800 	fsel	$f0,$f0,$f2,$fcc0
    1a20:	0008c604 	bytepick.w	$r4,$r16,$r17,0x1
    1a24:	b6040d00 	0xb6040d00
    1a28:	19000008 	pcaddi	$r8,-524288(0x80000)
    1a2c:	6e61725f 	bgeu	$r18,$r31,-106128(0x26170) # fffe7b9c <_etext+0xe3fdad4c>
    1a30:	00383464 	0x00383464
    1a34:	014a050e 	0x014a050e
    1a38:	00095608 	bytepick.w	$r8,$r16,$r21,0x2
    1a3c:	735f1600 	vsrarni.d.q	$vr0,$vr16,0x45
    1a40:	00646565 	bstrins.w	$r5,$r11,0x4,0x19
    1a44:	12014b05 	addu16i.d	$r5,$r24,-32686(0x8052)
    1a48:	00000956 	0x00000956
    1a4c:	6d5f1600 	bgeu	$r16,$r0,89876(0x15f14) # 17960 <_bss_end+0x14c90>
    1a50:	00746c75 	bstrins.w	$r21,$r3,0x14,0x1b
    1a54:	12014c05 	addu16i.d	$r5,$r0,-32685(0x8053)
    1a58:	00000956 	0x00000956
    1a5c:	615f1606 	blt	$r16,$r6,89876(0x15f14) # 17970 <_bss_end+0x14ca0>
    1a60:	05006464 	0x05006464
    1a64:	2212014d 	ll.d	$r13,$r10,4608(0x1200)
    1a68:	0c000001 	0x0c000001
    1a6c:	01220700 	0x01220700
    1a70:	09660000 	vfmsub.d	$vr0,$vr0,$vr0,$vr12
    1a74:	c5080000 	0xc5080000
    1a78:	02000000 	slti	$r0,$r0,0
    1a7c:	05d01a00 	0x05d01a00
    1a80:	2707026d 	stptr.d	$r13,$r19,1792(0x700)
    1a84:	1600000b 	lu32i.d	$r11,0
    1a88:	756e755f 	0x756e755f
    1a8c:	5f646573 	bne	$r11,$r19,-39836(0x36464) # ffff7ef0 <_etext+0xe3feb0a0>
    1a90:	646e6172 	bge	$r11,$r18,28256(0x6e60) # 88f0 <_bss_end+0x5c20>
    1a94:	026f0500 	sltui	$r0,$r8,-1087(0xbc1)
    1a98:	0000c518 	0x0000c518
    1a9c:	5f160000 	bne	$r0,$r0,-59904(0x31600) # ffff309c <_etext+0xe3fe624c>
    1aa0:	74727473 	xvmin.b	$xr19,$xr3,$xr29
    1aa4:	6c5f6b6f 	bgeu	$r27,$r15,24424(0x5f68) # 7a0c <_bss_end+0x4d3c>
    1aa8:	00747361 	bstrins.w	$r1,$r27,0x14,0x1c
    1aac:	12027005 	addu16i.d	$r5,$r0,-32612(0x809c)
    1ab0:	00000815 	0x00000815
    1ab4:	615f1604 	blt	$r16,$r4,89876(0x15f14) # 179c8 <_bss_end+0x14cf8>
    1ab8:	69746373 	bltu	$r27,$r19,95328(0x17460) # 18f18 <_bss_end+0x16248>
    1abc:	625f656d 	blt	$r11,$r13,-106652(0x25f64) # fffe7a20 <_etext+0xe3fdabd0>
    1ac0:	05006675 	0x05006675
    1ac4:	27100271 	stptr.d	$r17,$r19,4096(0x1000)
    1ac8:	0800000b 	0x0800000b
    1acc:	6f6c5f16 	bgeu	$r24,$r22,-37796(0x36c5c) # ffff8728 <_etext+0xe3feb8d8>
    1ad0:	746c6163 	0x746c6163
    1ad4:	5f656d69 	bne	$r11,$r9,-39572(0x3656c) # ffff8040 <_etext+0xe3feb1f0>
    1ad8:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
    1adc:	17027205 	lu32i.d	$r5,-519280(0x81390)
    1ae0:	00000302 	0x00000302
    1ae4:	675f1624 	bge	$r17,$r4,-41196(0x35f14) # ffff79f8 <_etext+0xe3feaba8>
    1ae8:	616d6d61 	blt	$r11,$r1,93548(0x16d6c) # 18854 <_bss_end+0x15b84>
    1aec:	6769735f 	bge	$r26,$r31,-38544(0x36970) # ffff845c <_etext+0xe3feb60c>
    1af0:	6d61676e 	bgeu	$r27,$r14,90468(0x16164) # 17c54 <_bss_end+0x14f84>
    1af4:	02730500 	sltui	$r0,$r8,-831(0xcc1)
    1af8:	0000be0f 	0x0000be0f
    1afc:	5f164800 	bne	$r0,$r0,-59832(0x31648) # ffff3144 <_etext+0xe3fe62f4>
    1b00:	646e6172 	bge	$r11,$r18,28256(0x6e60) # 8960 <_bss_end+0x5c90>
    1b04:	78656e5f 	0x78656e5f
    1b08:	74050074 	xvsle.wu	$xr20,$xr3,$xr0
    1b0c:	01592c02 	0x01592c02
    1b10:	16500000 	lu32i.d	$r0,163840(0x28000)
    1b14:	3834725f 	fldx.d	$f31,$r18,$r28
    1b18:	02750500 	sltui	$r0,$r8,-703(0xd41)
    1b1c:	0009141a 	bytepick.w	$r26,$r0,$r5,0x2
    1b20:	5f165800 	bne	$r0,$r0,-59816(0x31658) # ffff3178 <_etext+0xe3fe6328>
    1b24:	656c626d 	bge	$r19,$r13,93280(0x16c60) # 18784 <_bss_end+0x15ab4>
    1b28:	74735f6e 	xvmin.w	$xr14,$xr27,$xr23
    1b2c:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
    1b30:	16027605 	lu32i.d	$r5,5040(0x13b0)
    1b34:	0000024f 	0x0000024f
    1b38:	6d5f1668 	bgeu	$r19,$r8,89876(0x15f14) # 17a4c <_bss_end+0x14d7c>
    1b3c:	776f7462 	xvssrarni.du.q	$xr2,$xr3,0x5d
    1b40:	74735f63 	xvmin.w	$xr3,$xr27,$xr23
    1b44:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
    1b48:	16027705 	lu32i.d	$r5,5048(0x13b8)
    1b4c:	0000024f 	0x0000024f
    1b50:	775f1670 	xvsrarni.d.q	$xr16,$xr19,0x45
    1b54:	6d6f7463 	bgeu	$r3,$r3,94068(0x16f74) # 18ac8 <_bss_end+0x15df8>
    1b58:	74735f62 	xvmin.w	$xr2,$xr27,$xr23
    1b5c:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
    1b60:	16027805 	lu32i.d	$r5,5056(0x13c0)
    1b64:	0000024f 	0x0000024f
    1b68:	6c5f1678 	bgeu	$r19,$r24,24340(0x5f14) # 7a7c <_bss_end+0x4dac>
    1b6c:	5f613436 	bne	$r1,$r22,-40652(0x36134) # ffff7ca0 <_etext+0xe3feae50>
    1b70:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
    1b74:	10027905 	addu16i.d	$r5,$r8,158(0x9e)
    1b78:	00000b37 	0x00000b37
    1b7c:	735f1680 	vsrarni.d.q	$vr0,$vr20,0x45
    1b80:	616e6769 	blt	$r27,$r9,93796(0x16e64) # 189e4 <_bss_end+0x15d14>
    1b84:	75625f6c 	0x75625f6c
    1b88:	7a050066 	0x7a050066
    1b8c:	0b471002 	0x0b471002
    1b90:	16880000 	lu32i.d	$r0,278528(0x44000)
    1b94:	7465675f 	xvavg.w	$xr31,$xr26,$xr25
    1b98:	65746164 	bge	$r11,$r4,95328(0x17460) # 18ff8 <_bss_end+0x16328>
    1b9c:	7272655f 	0x7272655f
    1ba0:	027b0500 	sltui	$r0,$r8,-319(0xec1)
    1ba4:	0000be0f 	0x0000be0f
    1ba8:	5f16a000 	bne	$r0,$r0,-59744(0x316a0) # ffff3248 <_etext+0xe3fe63f8>
    1bac:	6c72626d 	bgeu	$r19,$r13,29280(0x7260) # 8e0c <_bss_end+0x613c>
    1bb0:	735f6e65 	vsrarni.d.q	$vr5,$vr19,0x5b
    1bb4:	65746174 	bge	$r11,$r20,95328(0x17460) # 19014 <_bss_end+0x16344>
    1bb8:	027c0500 	sltui	$r0,$r8,-255(0xf01)
    1bbc:	00024f16 	0x00024f16
    1bc0:	5f16a400 	bne	$r0,$r0,-59740(0x316a4) # ffff3264 <_etext+0xe3fe6414>
    1bc4:	7472626d 	xvmin.b	$xr13,$xr19,$xr24
    1bc8:	5f63776f 	bne	$r27,$r15,-40076(0x36374) # ffff7f3c <_etext+0xe3feb0ec>
    1bcc:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
    1bd0:	7d050065 	0x7d050065
    1bd4:	024f1602 	sltui	$r2,$r16,965(0x3c5)
    1bd8:	16ac0000 	lu32i.d	$r0,352256(0x56000)
    1bdc:	73626d5f 	vssrani.d.q	$vr31,$vr10,0x1b
    1be0:	776f7472 	xvssrarni.du.q	$xr18,$xr3,0x5d
    1be4:	735f7363 	vsrarni.d.q	$vr3,$vr27,0x5c
    1be8:	65746174 	bge	$r11,$r20,95328(0x17460) # 19048 <_bss_end+0x16378>
    1bec:	027e0500 	sltui	$r0,$r8,-127(0xf81)
    1bf0:	00024f16 	0x00024f16
    1bf4:	5f16b400 	bne	$r0,$r0,-59724(0x316b4) # ffff32a8 <_etext+0xe3fe6458>
    1bf8:	74726377 	xvmin.b	$xr23,$xr27,$xr24
    1bfc:	5f626d6f 	bne	$r11,$r15,-40340(0x3626c) # ffff7e68 <_etext+0xe3feb018>
    1c00:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
    1c04:	7f050065 	0x7f050065
    1c08:	024f1602 	sltui	$r2,$r16,965(0x3c5)
    1c0c:	16bc0000 	lu32i.d	$r0,385024(0x5e000)
    1c10:	7363775f 	vssrani.d.q	$vr31,$vr26,0x5d
    1c14:	6d6f7472 	bgeu	$r3,$r18,94068(0x16f74) # 18b88 <_bss_end+0x15eb8>
    1c18:	735f7362 	vsrarni.d.q	$vr2,$vr27,0x5c
    1c1c:	65746174 	bge	$r11,$r20,95328(0x17460) # 1907c <_bss_end+0x163ac>
    1c20:	02800500 	addi.w	$r0,$r8,1(0x1)
    1c24:	00024f16 	0x00024f16
    1c28:	5f16c400 	bne	$r0,$r0,-59708(0x316c4) # ffff32ec <_etext+0xe3fe649c>
    1c2c:	72655f68 	0x72655f68
    1c30:	006f6e72 	bstrins.w	$r18,$r19,0xf,0x1b
    1c34:	08028105 	0x08028105
    1c38:	000000be 	0x000000be
    1c3c:	1b0700cc 	pcalau12i	$r12,-509946(0x83806)
    1c40:	37000008 	0x37000008
    1c44:	0800000b 	0x0800000b
    1c48:	000000c5 	0x000000c5
    1c4c:	1b070019 	pcalau12i	$r25,-509952(0x83800)
    1c50:	47000008 	bnez	$r0,2293760(0x230000) # 231c50 <__stack_start+0x2ef80>
    1c54:	0800000b 	0x0800000b
    1c58:	000000c5 	0x000000c5
    1c5c:	1b070007 	pcalau12i	$r7,-509952(0x83800)
    1c60:	57000008 	bl	2293760(0x230000) # 231c60 <__stack_start+0x2ef90>
    1c64:	0800000b 	0x0800000b
    1c68:	000000c5 	0x000000c5
    1c6c:	f01a0017 	0xf01a0017
    1c70:	07028605 	0x07028605
    1c74:	00000b86 	0x00000b86
    1c78:	656e5f16 	bge	$r24,$r22,93788(0x16e5c) # 18ad4 <_bss_end+0x15e04>
    1c7c:	00667478 	bstrins.w	$r24,$r3,0x6,0x1d
    1c80:	1b028905 	pcalau12i	$r5,-519096(0x81448)
    1c84:	00000b86 	0x00000b86
    1c88:	6e5f1600 	bgeu	$r16,$r0,-106732(0x25f14) # fffe7b9c <_etext+0xe3fdad4c>
    1c8c:	6c6c616d 	bgeu	$r11,$r13,27744(0x6c60) # 88ec <_bss_end+0x5c1c>
    1c90:	0500636f 	0x0500636f
    1c94:	9618028a 	0x9618028a
    1c98:	7800000b 	0x7800000b
    1c9c:	04bb0700 	csrxchg	$r0,$r24,0x2ec1
    1ca0:	0b960000 	0x0b960000
    1ca4:	c5080000 	0xc5080000
    1ca8:	1d000000 	pcaddu12i	$r0,-524288(0x80000)
    1cac:	00c50700 	bstrpick.d	$r0,$r24,0x5,0x1
    1cb0:	0ba60000 	0x0ba60000
    1cb4:	c5080000 	0xc5080000
    1cb8:	1d000000 	pcaddu12i	$r0,-524288(0x80000)
    1cbc:	05f01b00 	0x05f01b00
    1cc0:	d203026b 	0xd203026b
    1cc4:	1c00000b 	pcaddu12i	$r11,0
    1cc8:	6565725f 	bge	$r18,$r31,91504(0x16570) # 18238 <_bss_end+0x15568>
    1ccc:	0500746e 	0x0500746e
    1cd0:	660b0282 	bge	$r20,$r2,-128256(0x20b00) # fffe27d0 <_etext+0xe3fd5980>
    1cd4:	1c000009 	pcaddu12i	$r9,0
    1cd8:	756e755f 	0x756e755f
    1cdc:	00646573 	bstrins.w	$r19,$r11,0x4,0x19
    1ce0:	0b028b05 	0x0b028b05
    1ce4:	00000b57 	0x00000b57
    1ce8:	081b0700 	fmadd.s	$f0,$f24,$f1,$f22
    1cec:	0be20000 	0x0be20000
    1cf0:	c5080000 	0xc5080000
    1cf4:	18000000 	pcaddi	$r0,0
    1cf8:	0bed1d00 	0x0bed1d00
    1cfc:	58140000 	beq	$r0,$r0,5120(0x1400) # 30fc <_bss_end+0x42c>
    1d00:	00000006 	0x00000006
    1d04:	0be2040d 	0x0be2040d
    1d08:	040d0000 	csrrd	$r0,0x340
    1d0c:	000002ec 	0x000002ec
    1d10:	000c041d 	bytepick.d	$r29,$r0,$r1,0x0
    1d14:	00be1400 	bstrins.d	$r0,$r0,0x3e,0x5
    1d18:	0d000000 	fsel	$f0,$f0,$f0,$fcc0
    1d1c:	000c0a04 	bytepick.d	$r4,$r16,$r2,0x0
    1d20:	f9040d00 	0xf9040d00
    1d24:	0700000b 	0x0700000b
    1d28:	000008b6 	0x000008b6
    1d2c:	00000c20 	0x00000c20
    1d30:	0000c508 	0x0000c508
    1d34:	1e000200 	pcaddu18i	$r0,16(0x10)
    1d38:	706d695f 	0x706d695f
    1d3c:	5f657275 	bne	$r19,$r21,-39568(0x36570) # ffff82ac <_etext+0xe3feb45c>
    1d40:	00727470 	bstrins.w	$r16,$r3,0x12,0x1d
    1d44:	17031005 	lu32i.d	$r5,-518016(0x81880)
    1d48:	00000658 	0x00000658
    1d4c:	6c675f1e 	bgeu	$r24,$r30,26460(0x675c) # 84a8 <_bss_end+0x57d8>
    1d50:	6c61626f 	bgeu	$r19,$r15,24928(0x6160) # 7eb0 <_bss_end+0x51e0>
    1d54:	706d695f 	0x706d695f
    1d58:	5f657275 	bne	$r19,$r21,-39568(0x36570) # ffff82c8 <_etext+0xe3feb478>
    1d5c:	00727470 	bstrins.w	$r16,$r3,0x12,0x1d
    1d60:	17031105 	lu32i.d	$r5,-518008(0x81888)
    1d64:	00000658 	0x00000658
    1d68:	6d697403 	bgeu	$r0,$r3,92532(0x16974) # 186dc <_bss_end+0x15a0c>
    1d6c:	00745f65 	bstrins.w	$r5,$r27,0x14,0x17
    1d70:	38127a06 	0x38127a06
    1d74:	03000001 	lu52i.d	$r1,$r0,0
    1d78:	5f6f6e69 	bne	$r19,$r9,-37012(0x36f6c) # ffff8ce4 <_etext+0xe3febe94>
    1d7c:	9b060074 	0x9b060074
    1d80:	00012218 	0x00012218
    1d84:	666f0300 	bge	$r24,$r0,-102656(0x26f00) # fffe8c84 <_etext+0xe3fdbe34>
    1d88:	00745f66 	bstrins.w	$r6,$r27,0x14,0x17
    1d8c:	8d10b806 	0x8d10b806
    1d90:	03000001 	lu52i.d	$r1,$r0,0
    1d94:	5f766564 	bne	$r11,$r4,-35228(0x37664) # ffff93f8 <_etext+0xe3fec5a8>
    1d98:	b9060074 	0xb9060074
    1d9c:	00019c11 	0x00019c11
    1da0:	69750300 	bltu	$r24,$r0,95488(0x17500) # 192a0 <_bss_end+0x165d0>
    1da4:	00745f64 	bstrins.w	$r4,$r27,0x14,0x17
    1da8:	ac11ba06 	0xac11ba06
    1dac:	03000001 	lu52i.d	$r1,$r0,0
    1db0:	5f646967 	bne	$r11,$r7,-39832(0x36468) # ffff8218 <_etext+0xe3feb3c8>
    1db4:	bb060074 	0xbb060074
    1db8:	0001bc11 	0x0001bc11
    1dbc:	6f6d0300 	bgeu	$r24,$r0,-37632(0x36d00) # ffff8abc <_etext+0xe3febc6c>
    1dc0:	745f6564 	0x745f6564
    1dc4:	16d90600 	lu32i.d	$r0,444464(0x6c830)
    1dc8:	000000c5 	0x000000c5
    1dcc:	696c6e03 	bltu	$r16,$r3,93292(0x16c6c) # 18a38 <_bss_end+0x15d68>
    1dd0:	745f6b6e 	0x745f6b6e
    1dd4:	18de0600 	pcaddi	$r0,454704(0x6f030)
    1dd8:	00000122 	0x00000122
    1ddc:	69745f1f 	bltu	$r24,$r31,95324(0x1745c) # 19238 <_bss_end+0x16568>
    1de0:	6f7a656d 	bgeu	$r11,$r13,-34204(0x37a64) # ffff9844 <_etext+0xe3fec9f4>
    1de4:	0700656e 	0x0700656e
    1de8:	01381690 	0x01381690
    1dec:	5f1f0000 	bne	$r0,$r0,-57600(0x31f00) # ffff3cec <_etext+0xe3fe6e9c>
    1df0:	6c796164 	bgeu	$r11,$r4,31072(0x7960) # 9750 <_bss_end+0x6a80>
    1df4:	74686769 	xvavgr.b	$xr9,$xr27,$xr25
    1df8:	15910700 	lu12i.w	$r0,-227272(0xc8838)
    1dfc:	000000be 	0x000000be
    1e00:	00081507 	bytepick.w	$r7,$r8,$r5,0x0
    1e04:	000cf900 	bytepick.d	$r0,$r8,$r30,0x1
    1e08:	00c50800 	bstrpick.d	$r0,$r0,0x5,0x2
    1e0c:	00010000 	asrtle.d	$r0,$r0
    1e10:	7a745f1f 	0x7a745f1f
    1e14:	656d616e 	bge	$r11,$r14,93536(0x16d60) # 18b74 <_bss_end+0x15ea4>
    1e18:	17920700 	lu32i.d	$r0,-225224(0xc9038)
    1e1c:	00000ce9 	0x00000ce9
    1e20:	6174730c 	blt	$r24,$r12,95344(0x17470) # 19290 <_bss_end+0x165c0>
    1e24:	083c0074 	0x083c0074
    1e28:	0e46081a 	0x0e46081a
    1e2c:	730a0000 	0x730a0000
    1e30:	65645f74 	bge	$r27,$r20,91228(0x1645c) # 1828c <_bss_end+0x155bc>
    1e34:	1c080076 	pcaddu12i	$r22,16387(0x4003)
    1e38:	000c7c0a 	bytepick.d	$r10,$r0,$r31,0x0
    1e3c:	730a0000 	0x730a0000
    1e40:	6e695f74 	bgeu	$r27,$r20,-104100(0x2695c) # fffe879c <_etext+0xe3fdb94c>
    1e44:	1d08006f 	pcaddu12i	$r15,-507901(0x84003)
    1e48:	000c600a 	bytepick.d	$r10,$r0,$r24,0x0
    1e4c:	730a0200 	0x730a0200
    1e50:	6f6d5f74 	bgeu	$r27,$r20,-37540(0x36d5c) # ffff8bac <_etext+0xe3febd5c>
    1e54:	08006564 	0x08006564
    1e58:	0ca60a1e 	xvfcmp.cueq.d	$xr30,$xr16,$xr2
    1e5c:	0a040000 	0x0a040000
    1e60:	6e5f7473 	bgeu	$r3,$r19,-106636(0x25f74) # fffe7dd4 <_etext+0xe3fdaf84>
    1e64:	6b6e696c 	bltu	$r11,$r12,-37272(0x36e68) # ffff8ccc <_etext+0xe3febe7c>
    1e68:	0b1f0800 	0x0b1f0800
    1e6c:	00000cb5 	0x00000cb5
    1e70:	74730a08 	xvmin.w	$xr8,$xr16,$xr2
    1e74:	6469755f 	bge	$r10,$r31,26996(0x6974) # 87e8 <_bss_end+0x5b18>
    1e78:	0a200800 	xvfmadd.d	$xr0,$xr0,$xr2,$xr0
    1e7c:	00000c8a 	0x00000c8a
    1e80:	74730a0a 	xvmin.w	$xr10,$xr16,$xr2
    1e84:	6469675f 	bge	$r26,$r31,26980(0x6964) # 87e8 <_bss_end+0x5b18>
    1e88:	0a210800 	xvfmadd.d	$xr0,$xr0,$xr2,$xr2
    1e8c:	00000c98 	0x00000c98
    1e90:	74730a0c 	xvmin.w	$xr12,$xr16,$xr2
    1e94:	6564725f 	bge	$r18,$r31,91248(0x16470) # 18304 <_bss_end+0x15634>
    1e98:	22080076 	ll.d	$r22,$r3,2048(0x800)
    1e9c:	000c7c0a 	bytepick.d	$r10,$r0,$r31,0x0
    1ea0:	730a0e00 	0x730a0e00
    1ea4:	69735f74 	bltu	$r27,$r20,95068(0x1735c) # 19200 <_bss_end+0x16530>
    1ea8:	0800657a 	0x0800657a
    1eac:	0c6e0a23 	0x0c6e0a23
    1eb0:	0a100000 	xvfmadd.s	$xr0,$xr0,$xr0,$xr0
    1eb4:	615f7473 	blt	$r3,$r19,89972(0x15f74) # 17e28 <_bss_end+0x15158>
    1eb8:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 18c20 <_bss_end+0x15f50>
    1ebc:	0a310800 	0x0a310800
    1ec0:	00000c51 	0x00000c51
    1ec4:	74730a14 	xvmin.w	$xr20,$xr16,$xr2
    1ec8:	6170735f 	blt	$r26,$r31,94320(0x17070) # 18f38 <_bss_end+0x16268>
    1ecc:	00316572 	0x00316572
    1ed0:	38093208 	0x38093208
    1ed4:	18000001 	pcaddi	$r1,0
    1ed8:	5f74730a 	bne	$r24,$r10,-35728(0x37470) # ffff9348 <_etext+0xe3fec4f8>
    1edc:	6d69746d 	bgeu	$r3,$r13,92532(0x16974) # 18850 <_bss_end+0x15b80>
    1ee0:	33080065 	0x33080065
    1ee4:	000c510a 	bytepick.d	$r10,$r8,$r20,0x0
    1ee8:	730a1c00 	0x730a1c00
    1eec:	70735f74 	vmin.w	$vr20,$vr27,$vr23
    1ef0:	32657261 	0x32657261
    1ef4:	09340800 	0x09340800
    1ef8:	00000138 	0x00000138
    1efc:	74730a20 	xvmin.w	$xr0,$xr17,$xr2
    1f00:	6974635f 	bltu	$r26,$r31,95328(0x17460) # 19360 <_bss_end+0x16690>
    1f04:	0800656d 	0x0800656d
    1f08:	0c510a35 	vfcmp.clt.s	$vr21,$vr17,$vr2
    1f0c:	0a240000 	xvfmadd.d	$xr0,$xr0,$xr0,$xr8
    1f10:	735f7473 	vsrarni.d.q	$vr19,$vr3,0x5d
    1f14:	65726170 	bge	$r11,$r16,94816(0x17260) # 19174 <_bss_end+0x164a4>
    1f18:	36080033 	0x36080033
    1f1c:	00013809 	0x00013809
    1f20:	730a2800 	0x730a2800
    1f24:	6c625f74 	bgeu	$r27,$r20,25180(0x625c) # 8180 <_bss_end+0x54b0>
    1f28:	7a69736b 	0x7a69736b
    1f2c:	37080065 	0x37080065
    1f30:	00013809 	0x00013809
    1f34:	730a2c00 	0x730a2c00
    1f38:	6c625f74 	bgeu	$r27,$r20,25180(0x625c) # 8194 <_bss_end+0x54c4>
    1f3c:	736b636f 	vssrarni.d.q	$vr15,$vr27,0x58
    1f40:	09380800 	0x09380800
    1f44:	00000138 	0x00000138
    1f48:	74730a30 	xvmin.w	$xr16,$xr17,$xr2
    1f4c:	6170735f 	blt	$r26,$r31,94320(0x17070) # 18fbc <_bss_end+0x162ec>
    1f50:	00346572 	0x00346572
    1f54:	46083908 	bnez	$r8,2230328(0x220838) # 22278c <__stack_start+0x1fabc>
    1f58:	3400000e 	0x3400000e
    1f5c:	01380700 	0x01380700
    1f60:	0e560000 	0x0e560000
    1f64:	c5080000 	0xc5080000
    1f68:	01000000 	0x01000000
    1f6c:	081b0700 	fmadd.s	$f0,$f24,$f1,$f22
    1f70:	0e610000 	0x0e610000
    1f74:	00200000 	div.w	$r0,$r0,$r0
    1f78:	6e655f1f 	bgeu	$r24,$r31,-105124(0x2655c) # fffe84d4 <_etext+0xe3fdb684>
    1f7c:	1a090064 	pcalau12i	$r4,18435(0x4803)
    1f80:	000e560d 	bytepick.d	$r13,$r16,$r21,0x4
    1f84:	73662100 	vssrani.du.q	$vr0,$vr8,0x8
    1f88:	00746174 	bstrins.w	$r20,$r11,0x14,0x18
    1f8c:	be011601 	0xbe011601
    1f90:	90000000 	0x90000000
    1f94:	141c0098 	lu12i.w	$r24,57348(0xe004)
    1f98:	01000000 	0x01000000
    1f9c:	000ea89c 	bytepick.d	$r28,$r4,$r10,0x5
    1fa0:	64662200 	bge	$r16,$r0,26144(0x6620) # 85c0 <_bss_end+0x58f0>
    1fa4:	01160100 	0x01160100
    1fa8:	000000be 	0x000000be
    1fac:	000002ca 	0x000002ca
    1fb0:	66756223 	bge	$r17,$r3,-101024(0x27560) # fffe9510 <_etext+0xe3fdc6c0>
    1fb4:	01160100 	0x01160100
    1fb8:	00000ea8 	0x00000ea8
    1fbc:	0d005501 	fsel	$f1,$f8,$f21,$fcc0
    1fc0:	000d0904 	bytepick.d	$r4,$r8,$r2,0x2
    1fc4:	01100000 	0x01100000
    1fc8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
    1fcc:	000005b3 	0x000005b3
    1fd0:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
    1fd4:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
    1fd8:	2e382037 	0x2e382037
    1fdc:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
    1fe0:	72616d2d 	0x72616d2d
    1fe4:	6c3d6863 	bgeu	$r3,$r3,15720(0x3d68) # 5d4c <_bss_end+0x307c>
    1fe8:	69323361 	bltu	$r27,$r1,78384(0x13230) # 15218 <_bss_end+0x12548>
    1fec:	6d2d206d 	bgeu	$r3,$r13,77088(0x12d20) # 14d0c <_bss_end+0x1203c>
    1ff0:	3d696261 	0x3d696261
    1ff4:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
    1ff8:	672d2032 	bge	$r1,$r18,-53984(0x32d20) # ffff4d18 <_etext+0xe3fe7ec8>
    1ffc:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
    2000:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
    2004:	2e2e0c00 	0x2e2e0c00
    2008:	2f2e2e2f 	0x2f2e2e2f
    200c:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe8f78 <_etext+0xe3fdc128>
    2010:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff9270 <_etext+0xe3fec420>
    2014:	2f323368 	0x2f323368
    2018:	692f2e2e 	bltu	$r17,$r14,77612(0x12f2c) # 14f44 <_bss_end+0x12274>
    201c:	74746173 	xvmax.bu	$xr19,$xr11,$xr24
    2020:	00632e79 	bstrins.w	$r25,$r19,0x3,0xb
    2024:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 18f8c <_bss_end+0x162bc>
    2028:	68632f65 	bltu	$r27,$r5,25388(0x632c) # 8354 <_bss_end+0x5684>
    202c:	657a6e65 	bge	$r19,$r5,96876(0x17a6c) # 19a98 <_bss_end+0x16dc8>
    2030:	61756873 	blt	$r3,$r19,95592(0x17568) # 19598 <_bss_end+0x168c8>
    2034:	6f6c2f69 	bgeu	$r27,$r9,-37844(0x36c2c) # ffff8c60 <_etext+0xe3febe10>
    2038:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 187a4 <_bss_end+0x15ad4>
    203c:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
    2040:	6f742d32 	bgeu	$r9,$r18,-35796(0x3742c) # ffff946c <_etext+0xe3fec61c>
    2044:	68636c6f 	bltu	$r3,$r15,25452(0x636c) # 83b0 <_bss_end+0x56e0>
    2048:	2f6e6961 	0x2f6e6961
    204c:	6c77656e 	bgeu	$r11,$r14,30564(0x7764) # 97b0 <_bss_end+0x6ae0>
    2050:	335f6269 	xvstelm.h	$xr9,$r19,-80(0x1b0),0x7
    2054:	30322d32 	0x30322d32
    2058:	302e3931 	vldrepl.w	$vr17,$r9,-456(0xe38)
    205c:	696c2f31 	bltu	$r25,$r17,93228(0x16c2c) # 18c88 <_bss_end+0x15fb8>
    2060:	6f6c6762 	bgeu	$r27,$r2,-37788(0x36c64) # ffff8cc4 <_etext+0xe3febe74>
    2064:	622f7373 	blt	$r27,$r19,-118928(0x22f70) # fffe4fd4 <_etext+0xe3fd8184>
    2068:	646c6975 	bge	$r11,$r21,27752(0x6c68) # 8cd0 <_bss_end+0x6000>
    206c:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff8fd8 <_etext+0xe3fec188>
    2070:	7261676e 	0x7261676e
    2074:	32336863 	0x32336863
    2078:	0098a400 	bstrins.d	$r0,$r0,0x18,0x29
    207c:	0000081c 	0x0000081c
    2080:	00080300 	bytepick.w	$r0,$r24,$r0,0x0
    2084:	00ca0200 	bstrpick.d	$r0,$r16,0xa,0x0
    2088:	00ca0000 	bstrpick.d	$r0,$r0,0xa,0x0
    208c:	00030000 	0x00030000
    2090:	63060104 	blt	$r8,$r4,-64000(0x30600) # ffff2690 <_etext+0xe3fe5840>
    2094:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
    2098:	6e655f05 	bgeu	$r24,$r5,-105124(0x2655c) # fffe85f4 <_etext+0xe3fdb7a4>
    209c:	1a020064 	pcalau12i	$r4,4099(0x1003)
    20a0:	0000bf0d 	0x0000bf0d
    20a4:	73690600 	vssrarni.w.d	$vr0,$vr16,0x1
    20a8:	79747461 	0x79747461
    20ac:	01170100 	0x01170100
    20b0:	0000010c 	0x0000010c
    20b4:	1c0098a4 	pcaddu12i	$r4,1221(0x4c5)
    20b8:	00000008 	0x00000008
    20bc:	010c9c01 	fmaxa.s	$f1,$f0,$f7
    20c0:	66070000 	bge	$r0,$r0,-129280(0x20700) # fffe27c0 <_etext+0xe3fd5970>
    20c4:	17010064 	lu32i.d	$r4,-522237(0x80803)
    20c8:	00010c01 	0x00010c01
    20cc:	0002eb00 	0x0002eb00
    20d0:	04040000 	csrrd	$r0,0x100
    20d4:	746e6905 	0x746e6905
    20d8:	0cca0000 	0x0cca0000
    20dc:	00040000 	alsl.w	$r0,$r0,$r0,0x1
    20e0:	00000622 	0x00000622
    20e4:	4e470104 	jirl	$r4,$r8,-112896(0x24700)
    20e8:	31432055 	vstelm.h	$vr21,$r2,-112(0x190),0x0
    20ec:	2e382037 	0x2e382037
    20f0:	20302e33 	ll.w	$r19,$r17,12332(0x302c)
    20f4:	72616d2d 	0x72616d2d
    20f8:	6c3d6863 	bgeu	$r3,$r3,15720(0x3d68) # 5e60 <_bss_end+0x3190>
    20fc:	69323361 	bltu	$r27,$r1,78384(0x13230) # 1532c <_bss_end+0x1265c>
    2100:	6d2d206d 	bgeu	$r3,$r13,77088(0x12d20) # 14e20 <_bss_end+0x12150>
    2104:	3d696261 	0x3d696261
    2108:	33706c69 	xvstelm.h	$xr9,$r3,54(0x36),0xc
    210c:	672d2032 	bge	$r1,$r18,-53984(0x32d20) # ffff4e2c <_etext+0xe3fe7fdc>
    2110:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
    2114:	324f2d20 	xvldrepl.h	$xr0,$r9,1942(0x796)
    2118:	2e2e0c00 	0x2e2e0c00
    211c:	2f2e2e2f 	0x2f2e2e2f
    2120:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe908c <_etext+0xe3fdc23c>
    2124:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff9384 <_etext+0xe3fec534>
    2128:	2f323368 	0x2f323368
    212c:	6c2f2e2e 	bgeu	$r17,$r14,12076(0x2f2c) # 5058 <_bss_end+0x2388>
    2130:	6b656573 	bltu	$r11,$r19,-39580(0x36564) # ffff8694 <_etext+0xe3feb844>
    2134:	2f00632e 	0x2f00632e
    2138:	656d6f68 	bge	$r27,$r8,93548(0x16d6c) # 18ea4 <_bss_end+0x161d4>
    213c:	6568632f 	bge	$r25,$r15,92256(0x16860) # 1899c <_bss_end+0x15ccc>
    2140:	73657a6e 	vssrani.wu.d	$vr14,$vr19,0x1e
    2144:	69617568 	bltu	$r11,$r8,90484(0x16174) # 182b8 <_bss_end+0x155e8>
    2148:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff90b4 <_etext+0xe3fec264>
    214c:	7261676e 	0x7261676e
    2150:	32336863 	0x32336863
    2154:	6f6f742d 	bgeu	$r1,$r13,-37004(0x36f74) # ffff90c8 <_etext+0xe3fec278>
    2158:	6168636c 	blt	$r27,$r12,92256(0x16860) # 189b8 <_bss_end+0x15ce8>
    215c:	6e2f6e69 	bgeu	$r19,$r9,-118932(0x22f6c) # fffe50c8 <_etext+0xe3fd8278>
    2160:	696c7765 	bltu	$r27,$r5,93300(0x16c74) # 18dd4 <_bss_end+0x16104>
    2164:	32335f62 	0x32335f62
    2168:	3130322d 	0x3130322d
    216c:	31302e39 	0x31302e39
    2170:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe8adc <_etext+0xe3fdbc8c>
    2174:	736f6c67 	vssrarni.du.q	$vr7,$vr3,0x5b
    2178:	75622f73 	0x75622f73
    217c:	2f646c69 	0x2f646c69
    2180:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe90ec <_etext+0xe3fdc29c>
    2184:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff93e4 <_etext+0xe3fec594>
    2188:	00323368 	0x00323368
    218c:	1c0098ac 	pcaddu12i	$r12,1221(0x4c5)
    2190:	00000008 	0x00000008
    2194:	00000875 	0x00000875
    2198:	73060102 	0x73060102
    219c:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 19000 <_bss_end+0x16330>
    21a0:	68632064 	bltu	$r3,$r4,25376(0x6320) # 84c0 <_bss_end+0x57f0>
    21a4:	02007261 	slti	$r1,$r19,28(0x1c)
    21a8:	6e750801 	bgeu	$r0,$r1,-101112(0x27508) # fffe96b0 <_etext+0xe3fdc860>
    21ac:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe8914 <_etext+0xe3fdbac4>
    21b0:	63206465 	blt	$r3,$r5,-57244(0x32064) # ffff4214 <_etext+0xe3fe73c4>
    21b4:	00726168 	bstrins.w	$r8,$r11,0x12,0x18
    21b8:	73050202 	0x73050202
    21bc:	74726f68 	xvmin.b	$xr8,$xr27,$xr27
    21c0:	746e6920 	0x746e6920
    21c4:	07020200 	0x07020200
    21c8:	726f6873 	0x726f6873
    21cc:	6e752074 	bgeu	$r3,$r20,-101088(0x27520) # fffe96ec <_etext+0xe3fdc89c>
    21d0:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe8938 <_etext+0xe3fdbae8>
    21d4:	69206465 	bltu	$r3,$r5,73828(0x12064) # 14238 <_bss_end+0x11568>
    21d8:	0200746e 	slti	$r14,$r3,29(0x1d)
    21dc:	6f6c0504 	bgeu	$r8,$r4,-37884(0x36c04) # ffff8de0 <_etext+0xe3febf90>
    21e0:	6920676e 	bltu	$r27,$r14,73828(0x12064) # 14244 <_bss_end+0x11574>
    21e4:	0200746e 	slti	$r14,$r3,29(0x1d)
    21e8:	6f6c0704 	bgeu	$r24,$r4,-37884(0x36c04) # ffff8dec <_etext+0xe3febf9c>
    21ec:	7520676e 	xvpickod.b	$xr14,$xr27,$xr25
    21f0:	6769736e 	bge	$r27,$r14,-38544(0x36970) # ffff8b60 <_etext+0xe3febd10>
    21f4:	2064656e 	ll.w	$r14,$r11,25700(0x6464)
    21f8:	00746e69 	bstrins.w	$r9,$r19,0x14,0x1b
    21fc:	6c050802 	bgeu	$r0,$r2,1288(0x508) # 2704 <lconv+0x1c>
    2200:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
    2204:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff9070 <_etext+0xe3fec220>
    2208:	746e6920 	0x746e6920
    220c:	07080200 	0x07080200
    2210:	676e6f6c 	bge	$r27,$r12,-37268(0x36e6c) # ffff907c <_etext+0xe3fec22c>
    2214:	6e6f6c20 	bgeu	$r1,$r0,-102548(0x26f6c) # fffe9180 <_etext+0xe3fdc330>
    2218:	6e752067 	bgeu	$r3,$r7,-101088(0x27520) # fffe9738 <_etext+0xe3fdc8e8>
    221c:	6e676973 	bgeu	$r11,$r19,-104600(0x26768) # fffe8984 <_etext+0xe3fdbb34>
    2220:	69206465 	bltu	$r3,$r5,73828(0x12064) # 14284 <_bss_end+0x115b4>
    2224:	0200746e 	slti	$r14,$r3,29(0x1d)
    2228:	6e690504 	bgeu	$r8,$r4,-104188(0x26904) # fffe8b2c <_etext+0xe3fdbcdc>
    222c:	04020074 	csrxchg	$r20,$r3,0x80
    2230:	736e7507 	vssrarni.du.q	$vr7,$vr8,0x1d
    2234:	656e6769 	bge	$r27,$r9,93796(0x16e64) # 19098 <_bss_end+0x163c8>
    2238:	6e692064 	bgeu	$r3,$r4,-104160(0x26920) # fffe8b58 <_etext+0xe3fdbd08>
    223c:	5f030074 	bne	$r3,$r20,-64768(0x30300) # ffff253c <_etext+0xe3fe56ec>
    2240:	4b434f4c 	0x4b434f4c
    2244:	4345525f 	beqz	$r18,-47792(0x7f4550) # ffff6794 <_etext+0xe3fe9944>
    2248:	49535255 	0x49535255
    224c:	545f4556 	bl	89677636(0x5585f44) # 5588190 <__stack_start+0x53854c0>
    2250:	0d300200 	0x0d300200
    2254:	0000014d 	0x0000014d
    2258:	666f5f03 	bge	$r24,$r3,-102564(0x26f5c) # fffe91b4 <_etext+0xe3fdc364>
    225c:	00745f66 	bstrins.w	$r6,$r27,0x14,0x17
    2260:	010e1003 	0x010e1003
    2264:	03000001 	lu52i.d	$r1,$r0,0
    2268:	6f70665f 	bgeu	$r18,$r31,-36764(0x37064) # ffff92cc <_etext+0xe3fec47c>
    226c:	00745f73 	bstrins.w	$r19,$r27,0x14,0x17
    2270:	010e2703 	0x010e2703
    2274:	04000001 	csrrd	$r1,0x0
    2278:	746e6977 	0x746e6977
    227c:	0400745f 	csrxchg	$r31,$r2,0x1d
    2280:	54170165 	bl	93591296(0x5941700) # 5943980 <__stack_start+0x5740cb0>
    2284:	05000001 	0x05000001
    2288:	03500304 	andi	$r4,$r24,0x400
    228c:	000001d4 	0x000001d4
    2290:	775f5f06 	xvsrarni.d.q	$xr6,$xr24,0x57
    2294:	03006863 	lu52i.d	$r3,$r3,26(0x1a)
    2298:	019d0c52 	0x019d0c52
    229c:	5f060000 	bne	$r0,$r0,-64000(0x30600) # ffff289c <_etext+0xe3fe5a4c>
    22a0:	6863775f 	bltu	$r26,$r31,25460(0x6374) # 8614 <_bss_end+0x5944>
    22a4:	53030062 	b	25887488(0x18b0300) # 18b25a4 <__stack_start+0x16af8d4>
    22a8:	0001d413 	0x0001d413
    22ac:	cd070000 	0xcd070000
    22b0:	e4000000 	0xe4000000
    22b4:	08000001 	0x08000001
    22b8:	00000154 	0x00000154
    22bc:	08090003 	0x08090003
    22c0:	10094d03 	addu16i.d	$r3,$r8,595(0x253)
    22c4:	0a000002 	0x0a000002
    22c8:	6f635f5f 	bgeu	$r26,$r31,-40100(0x3635c) # ffff8624 <_etext+0xe3feb7d4>
    22cc:	00746e75 	bstrins.w	$r21,$r19,0x14,0x1b
    22d0:	4d074f03 	jirl	$r3,$r24,67404(0x1074c)
    22d4:	00000001 	0x00000001
    22d8:	765f5f0a 	0x765f5f0a
    22dc:	65756c61 	bge	$r3,$r1,95596(0x1756c) # 19848 <_bss_end+0x16b78>
    22e0:	05540300 	0x05540300
    22e4:	000001ad 	0x000001ad
    22e8:	5f030004 	bne	$r0,$r4,-64768(0x30300) # ffff25e8 <_etext+0xe3fe5798>
    22ec:	7473626d 	xvmin.w	$xr13,$xr19,$xr24
    22f0:	5f657461 	bne	$r3,$r1,-39564(0x36574) # ffff8864 <_etext+0xe3feba14>
    22f4:	55030074 	bl	30475008(0x1d10300) # 1d125f4 <__stack_start+0x1b0f924>
    22f8:	0001e403 	0x0001e403
    22fc:	665f0300 	bge	$r24,$r0,-106752(0x25f00) # fffe81fc <_etext+0xe3fdb3ac>
    2300:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff866c <_etext+0xe3feb81c>
    2304:	0300745f 	lu52i.d	$r31,$r2,29(0x1d)
    2308:	01641b59 	0x01641b59
    230c:	040b0000 	csrrd	$r0,0x2c0
    2310:	6c041002 	bgeu	$r0,$r2,1040(0x410) # 2720 <__malloc_av_>
    2314:	20676e6f 	ll.w	$r15,$r19,26476(0x676c)
    2318:	62756f64 	blt	$r27,$r4,-101012(0x2756c) # fffe9884 <_etext+0xe3fdca34>
    231c:	0c00656c 	0x0c00656c
    2320:	00024b04 	0x00024b04
    2324:	06010200 	cacop	0x0,$r16,64(0x40)
    2328:	72616863 	0x72616863
    232c:	024b0d00 	sltui	$r0,$r8,707(0x2c3)
    2330:	6f030000 	bgeu	$r0,$r0,-64768(0x30300) # ffff2630 <_etext+0xe3fe57e0>
    2334:	745f6666 	0x745f6666
    2338:	10b80500 	addu16i.d	$r0,$r8,11777(0x2e01)
    233c:	0000017e 	0x0000017e
    2340:	555f5f03 	bl	-66232484(0xc0d5f5c) # fc0d829c <_etext+0xe00cb44c>
    2344:	676e6f4c 	bge	$r26,$r12,-37268(0x36e6c) # ffff91b0 <_etext+0xe3fec360>
    2348:	19160600 	pcaddi	$r0,-479184(0x8b030)
    234c:	0000010d 	0x0000010d
    2350:	69425f0e 	bltu	$r24,$r14,82524(0x1425c) # 165ac <_bss_end+0x138dc>
    2354:	746e6967 	0x746e6967
    2358:	2d061800 	0x2d061800
    235c:	0002dd08 	0x0002dd08
    2360:	6e5f0a00 	bgeu	$r16,$r0,-106744(0x25f08) # fffe8268 <_etext+0xe3fdb418>
    2364:	00747865 	bstrins.w	$r5,$r3,0x14,0x1e
    2368:	dd132f06 	0xdd132f06
    236c:	00000002 	0x00000002
    2370:	006b5f0a 	bstrins.w	$r10,$r24,0xb,0x17
    2374:	4d073006 	jirl	$r6,$r0,67376(0x10730)
    2378:	04000001 	csrrd	$r1,0x0
    237c:	616d5f0a 	blt	$r24,$r10,93532(0x16d5c) # 190d8 <_bss_end+0x16408>
    2380:	73647778 	vssrani.bu.h	$vr24,$vr27,0xd
    2384:	0b300600 	0x0b300600
    2388:	0000014d 	0x0000014d
    238c:	735f0a08 	vsrarni.d.q	$vr8,$vr16,0x42
    2390:	006e6769 	bstrins.w	$r9,$r27,0xe,0x19
    2394:	4d143006 	jirl	$r6,$r0,70704(0x11430)
    2398:	0c000001 	0x0c000001
    239c:	64775f0a 	bge	$r24,$r10,30556(0x775c) # 9af8 <_bss_end+0x6e28>
    23a0:	30060073 	0x30060073
    23a4:	00014d1b 	0x00014d1b
    23a8:	5f0a1000 	bne	$r0,$r0,-62960(0x30a10) # ffff2db8 <_etext+0xe3fe5f68>
    23ac:	31060078 	0x31060078
    23b0:	0002e30b 	0x0002e30b
    23b4:	0c001400 	0x0c001400
    23b8:	00027604 	0x00027604
    23bc:	02660700 	sltui	$r0,$r24,-1663(0x981)
    23c0:	02f30000 	addi.d	$r0,$r0,-832(0xcc0)
    23c4:	54080000 	bl	2048(0x800) # 2bc4 <_GLOBAL_OFFSET_TABLE_+0x24>
    23c8:	00000001 	0x00000001
    23cc:	5f5f0e00 	bne	$r16,$r0,-41204(0x35f0c) # ffff82d8 <_etext+0xe3feb488>
    23d0:	24006d74 	ldptr.w	$r20,$r11,108(0x6c)
    23d4:	ab083506 	0xab083506
    23d8:	0a000003 	0x0a000003
    23dc:	6d745f5f 	bgeu	$r26,$r31,95324(0x1745c) # 19838 <_bss_end+0x16b68>
    23e0:	6365735f 	blt	$r26,$r31,-39568(0x36570) # ffff8950 <_etext+0xe3febb00>
    23e4:	09370600 	0x09370600
    23e8:	0000014d 	0x0000014d
    23ec:	5f5f0a00 	bne	$r16,$r0,-41208(0x35f08) # ffff82f4 <_etext+0xe3feb4a4>
    23f0:	6d5f6d74 	bgeu	$r11,$r20,89964(0x15f6c) # 1835c <_bss_end+0x1568c>
    23f4:	06006e69 	cacop	0x9,$r19,27(0x1b)
    23f8:	014d0938 	0x014d0938
    23fc:	0a040000 	0x0a040000
    2400:	6d745f5f 	bgeu	$r26,$r31,95324(0x1745c) # 1985c <_bss_end+0x16b8c>
    2404:	756f685f 	0x756f685f
    2408:	39060072 	0x39060072
    240c:	00014d09 	0x00014d09
    2410:	5f0a0800 	bne	$r0,$r0,-62968(0x30a08) # ffff2e18 <_etext+0xe3fe5fc8>
    2414:	5f6d745f 	bne	$r2,$r31,-37516(0x36d74) # ffff9188 <_etext+0xe3fec338>
    2418:	7961646d 	0x7961646d
    241c:	093a0600 	0x093a0600
    2420:	0000014d 	0x0000014d
    2424:	5f5f0a0c 	bne	$r16,$r12,-41208(0x35f08) # ffff832c <_etext+0xe3feb4dc>
    2428:	6d5f6d74 	bgeu	$r11,$r20,89964(0x15f6c) # 18394 <_bss_end+0x156c4>
    242c:	06006e6f 	cacop	0xf,$r19,27(0x1b)
    2430:	014d093b 	0x014d093b
    2434:	0a100000 	xvfmadd.s	$xr0,$xr0,$xr0,$xr0
    2438:	6d745f5f 	bgeu	$r26,$r31,95324(0x1745c) # 19894 <_bss_end+0x16bc4>
    243c:	6165795f 	blt	$r10,$r31,91512(0x16578) # 189b4 <_bss_end+0x15ce4>
    2440:	3c060072 	0x3c060072
    2444:	00014d09 	0x00014d09
    2448:	5f0a1400 	bne	$r0,$r0,-62956(0x30a14) # ffff2e5c <_etext+0xe3fe600c>
    244c:	5f6d745f 	bne	$r2,$r31,-37516(0x36d74) # ffff91c0 <_etext+0xe3fec370>
    2450:	79616477 	0x79616477
    2454:	093d0600 	0x093d0600
    2458:	0000014d 	0x0000014d
    245c:	5f5f0a18 	bne	$r16,$r24,-41208(0x35f08) # ffff8364 <_etext+0xe3feb514>
    2460:	795f6d74 	0x795f6d74
    2464:	00796164 	bstrins.w	$r4,$r11,0x19,0x18
    2468:	4d093e06 	jirl	$r6,$r16,67900(0x1093c)
    246c:	1c000001 	pcaddu12i	$r1,0
    2470:	745f5f0a 	0x745f5f0a
    2474:	73695f6d 	vssrarni.w.d	$vr13,$vr27,0x17
    2478:	00747364 	bstrins.w	$r4,$r27,0x14,0x1c
    247c:	4d093f06 	jirl	$r6,$r24,67900(0x1093c)
    2480:	20000001 	ll.w	$r1,$r0,0
    2484:	00260f00 	crcc.w.b.w	$r0,$r24,$r3
    2488:	01080000 	0x01080000
    248c:	05084806 	0x05084806
    2490:	0a000004 	0x0a000004
    2494:	616e665f 	blt	$r18,$r31,93796(0x16e64) # 192f8 <_bss_end+0x16628>
    2498:	00736772 	bstrins.w	$r18,$r27,0x13,0x19
    249c:	050a4906 	0x050a4906
    24a0:	00000004 	0x00000004
    24a4:	73645f0a 	vssrani.bu.h	$vr10,$vr24,0x7
    24a8:	61685f6f 	blt	$r27,$r15,92252(0x1685c) # 18d04 <_bss_end+0x16034>
    24ac:	656c646e 	bge	$r3,$r14,93284(0x16c64) # 19110 <_bss_end+0x16440>
    24b0:	094a0600 	0x094a0600
    24b4:	00000405 	0x00000405
    24b8:	665f1080 	bge	$r4,$r0,-106736(0x25f10) # fffe83c8 <_etext+0xe3fdb578>
    24bc:	7079746e 	0x7079746e
    24c0:	06007365 	cacop	0x5,$r27,28(0x1c)
    24c4:	02660a4c 	sltui	$r12,$r18,-1662(0x982)
    24c8:	01000000 	0x01000000
    24cc:	73695f10 	vssrarni.w.d	$vr16,$vr24,0x17
    24d0:	6178635f 	blt	$r26,$r31,96352(0x17860) # 19d30 <_bss_end+0x17060>
    24d4:	0a4f0600 	0x0a4f0600
    24d8:	00000266 	0x00000266
    24dc:	07000104 	0x07000104
    24e0:	00000234 	0x00000234
    24e4:	00000415 	0x00000415
    24e8:	00015408 	0x00015408
    24ec:	11001f00 	addu16i.d	$r0,$r24,16391(0x4007)
    24f0:	6574615f 	bge	$r10,$r31,95328(0x17460) # 19950 <_bss_end+0x16c80>
    24f4:	00746978 	bstrins.w	$r24,$r11,0x14,0x1a
    24f8:	5b060190 	beq	$r12,$r16,-64000(0x30600) # ffff2af8 <_etext+0xe3fe5ca8>
    24fc:	00046008 	alsl.w	$r8,$r0,$r24,0x1
    2500:	6e5f0a00 	bgeu	$r16,$r0,-106744(0x25f08) # fffe8408 <_etext+0xe3fdb5b8>
    2504:	00747865 	bstrins.w	$r5,$r3,0x14,0x1e
    2508:	60125c06 	blt	$r0,$r6,4700(0x125c) # 3764 <_bss_end+0xa94>
    250c:	00000004 	0x00000004
    2510:	6e695f0a 	bgeu	$r24,$r10,-104100(0x2695c) # fffe8e6c <_etext+0xe3fdc01c>
    2514:	5d060064 	bne	$r3,$r4,67072(0x10600) # 12b14 <_bss_end+0xfe44>
    2518:	00014d06 	0x00014d06
    251c:	5f0a0400 	bne	$r0,$r0,-62972(0x30a04) # ffff2f20 <_etext+0xe3fe60d0>
    2520:	00736e66 	bstrins.w	$r6,$r19,0x13,0x1b
    2524:	66095f06 	bge	$r24,$r6,-128676(0x2095c) # fffe2e80 <_etext+0xe3fd6030>
    2528:	08000004 	0x08000004
    252c:	00002612 	clz.d	$r18,$r16
    2530:	1e600600 	pcaddu18i	$r0,196656(0x30030)
    2534:	000003ab 	0x000003ab
    2538:	040c0088 	csrxchg	$r8,$r4,0x300
    253c:	00000415 	0x00000415
    2540:	00047607 	alsl.w	$r7,$r16,$r29,0x1
    2544:	00047600 	alsl.w	$r0,$r16,$r29,0x1
    2548:	01540800 	0x01540800
    254c:	001f0000 	mulw.d.w	$r0,$r0,$r0
    2550:	047c040c 	csrrd	$r12,0x1f01
    2554:	0e130000 	0x0e130000
    2558:	62735f5f 	blt	$r26,$r31,-101540(0x2735c) # fffe98b4 <_etext+0xe3fdca64>
    255c:	08006675 	0x08006675
    2560:	ac087306 	0xac087306
    2564:	0a000004 	0x0a000004
    2568:	7361625f 	vssrani.w.d	$vr31,$vr18,0x18
    256c:	74060065 	xvslt.b	$xr5,$xr3,$xr0
    2570:	0004ac11 	alsl.w	$r17,$r0,$r11,0x2
    2574:	5f0a0000 	bne	$r0,$r0,-62976(0x30a00) # ffff2f74 <_etext+0xe3fe6124>
    2578:	657a6973 	bge	$r11,$r19,96872(0x17a68) # 19fe0 <_bss_end+0x17310>
    257c:	06750600 	0x06750600
    2580:	0000014d 	0x0000014d
    2584:	040c0004 	csrrd	$r4,0x300
    2588:	000000cd 	0x000000cd
    258c:	735f5f0e 	vsrarni.d.q	$vr14,$vr24,0x57
    2590:	454c4946 	bnez	$r10,1657928(0x194c48) # 1971d8 <__heap_end+0x94508>
    2594:	bd066800 	0xbd066800
    2598:	00062b08 	alsl.wu	$r8,$r24,$r10,0x1
    259c:	705f0a00 	0x705f0a00
    25a0:	12be0600 	addu16i.d	$r0,$r16,-20607(0xaf81)
    25a4:	000004ac 	0x000004ac
    25a8:	725f0a00 	0x725f0a00
    25ac:	07bf0600 	0x07bf0600
    25b0:	0000014d 	0x0000014d
    25b4:	775f0a04 	xvsrarni.d.q	$xr4,$xr16,0x42
    25b8:	07c00600 	0x07c00600
    25bc:	0000014d 	0x0000014d
    25c0:	665f0a08 	bge	$r16,$r8,-106744(0x25f08) # fffe84c8 <_etext+0xe3fdb678>
    25c4:	7367616c 	vssrani.du.q	$vr12,$vr11,0x58
    25c8:	09c10600 	0x09c10600
    25cc:	000000de 	0x000000de
    25d0:	665f0a0c 	bge	$r16,$r12,-106744(0x25f08) # fffe84d8 <_etext+0xe3fdb688>
    25d4:	00656c69 	bstrins.w	$r9,$r3,0x5,0x1b
    25d8:	de09c206 	0xde09c206
    25dc:	0e000000 	0x0e000000
    25e0:	66625f0a 	bge	$r24,$r10,-105892(0x2625c) # fffe883c <_etext+0xe3fdb9ec>
    25e4:	11c30600 	addu16i.d	$r0,$r16,28865(0x70c1)
    25e8:	0000047d 	0x0000047d
    25ec:	6c5f0a10 	bgeu	$r16,$r16,24328(0x5f08) # 84f4 <_bss_end+0x5824>
    25f0:	69736662 	bltu	$r19,$r2,95076(0x17364) # 19954 <_bss_end+0x16c84>
    25f4:	0600657a 	cacop	0x1a,$r11,25(0x19)
    25f8:	014d07c4 	0x014d07c4
    25fc:	0a180000 	xvfmadd.s	$xr0,$xr0,$xr0,$xr16
    2600:	6f6f635f 	bgeu	$r26,$r31,-37024(0x36f60) # ffff9560 <_etext+0xe3fec710>
    2604:	0065696b 	bstrins.w	$r11,$r11,0x5,0x1a
    2608:	3408cb06 	0x3408cb06
    260c:	1c000002 	pcaddu12i	$r2,0
    2610:	65725f0a 	bge	$r24,$r10,94812(0x1725c) # 1986c <_bss_end+0x16b9c>
    2614:	06006461 	cacop	0x1,$r3,25(0x19)
    2618:	08061bcd 	0x08061bcd
    261c:	0a200000 	xvfmadd.d	$xr0,$xr0,$xr0,$xr0
    2620:	6972775f 	bltu	$r26,$r31,94836(0x17274) # 19894 <_bss_end+0x16bc4>
    2624:	06006574 	cacop	0x14,$r11,25(0x19)
    2628:	08351bcf 	0x08351bcf
    262c:	0a240000 	xvfmadd.d	$xr0,$xr0,$xr0,$xr8
    2630:	6565735f 	bge	$r26,$r31,91504(0x16570) # 18ba0 <_bss_end+0x15ed0>
    2634:	d206006b 	0xd206006b
    2638:	0008590b 	bytepick.w	$r11,$r8,$r22,0x0
    263c:	5f0a2800 	bne	$r0,$r0,-62936(0x30a28) # ffff3064 <_etext+0xe3fe6214>
    2640:	736f6c63 	vssrarni.du.q	$vr3,$vr3,0x5b
    2644:	d3060065 	0xd3060065
    2648:	00087307 	bytepick.w	$r7,$r24,$r28,0x0
    264c:	5f0a2c00 	bne	$r0,$r0,-62932(0x30a2c) # ffff3078 <_etext+0xe3fe6228>
    2650:	06006275 	cacop	0x15,$r19,24(0x18)
    2654:	047d11d6 	csrxchg	$r22,$r14,0x1f44
    2658:	0a300000 	0x0a300000
    265c:	0070755f 	bstrins.w	$r31,$r10,0x10,0x1d
    2660:	ac12d706 	0xac12d706
    2664:	38000004 	ldx.b	$r4,$r0,$r0
    2668:	72755f0a 	0x72755f0a
    266c:	07d80600 	0x07d80600
    2670:	0000014d 	0x0000014d
    2674:	755f0a3c 	0x755f0a3c
    2678:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
    267c:	7911db06 	0x7911db06
    2680:	40000008 	beqz	$r0,2097152(0x200000) # 202680 <__heap_end+0xff9b0>
    2684:	626e5f0a 	blt	$r24,$r10,-102820(0x26e5c) # fffe94e0 <_etext+0xe3fdc690>
    2688:	06006675 	cacop	0x15,$r19,25(0x19)
    268c:	088911dc 	0x088911dc
    2690:	0a430000 	0x0a430000
    2694:	00626c5f 	bstrins.w	$r31,$r2,0x2,0x1b
    2698:	7d11df06 	0x7d11df06
    269c:	44000004 	bnez	$r0,1048576(0x100000) # 10269c <_bss_end+0xff9cc>
    26a0:	6c625f0a 	bgeu	$r24,$r10,25180(0x625c) # 88fc <_bss_end+0x5c2c>
    26a4:	7a69736b 	0x7a69736b
    26a8:	e2060065 	0xe2060065
    26ac:	00014d07 	0x00014d07
    26b0:	5f0a4c00 	bne	$r0,$r0,-62900(0x30a4c) # ffff30fc <_etext+0xe3fe62ac>
    26b4:	7366666f 	vssrani.du.q	$vr15,$vr19,0x19
    26b8:	06007465 	cacop	0x5,$r3,29(0x1d)
    26bc:	017e0ae3 	0x017e0ae3
    26c0:	0a500000 	xvfmsub.s	$xr0,$xr0,$xr0,$xr0
    26c4:	7461645f 	xvabsd.w	$xr31,$xr2,$xr25
    26c8:	e6060061 	0xe6060061
    26cc:	00064912 	alsl.wu	$r18,$r8,$r18,0x1
    26d0:	5f0a5400 	bne	$r0,$r0,-62892(0x30a54) # ffff3124 <_etext+0xe3fe62d4>
    26d4:	6b636f6c 	bltu	$r27,$r12,-40084(0x3636c) # ffff8a40 <_etext+0xe3febbf0>
    26d8:	0cea0600 	0x0cea0600
    26dc:	00000223 	0x00000223
    26e0:	6d5f0a58 	bgeu	$r18,$r24,89864(0x15f08) # 185e8 <_bss_end+0x15918>
    26e4:	61747362 	blt	$r27,$r2,95344(0x17470) # 19b54 <_bss_end+0x16e84>
    26e8:	06006574 	cacop	0x14,$r11,25(0x19)
    26ec:	02100eec 	slti	$r12,$r23,1027(0x403)
    26f0:	0a5c0000 	xvfmsub.s	$xr0,$xr0,$xr0,$xr24
    26f4:	616c665f 	blt	$r18,$r31,93284(0x16c64) # 19358 <_bss_end+0x16688>
    26f8:	00327367 	0x00327367
    26fc:	4d09ed06 	jirl	$r6,$r8,68076(0x109ec)
    2700:	64000001 	bge	$r0,$r1,0 # 2700 <lconv+0x18>
    2704:	014d1400 	0x014d1400
    2708:	06490000 	0x06490000
    270c:	49150000 	bceqz	$fcc0,70912(0x11500) # 13c0c <_bss_end+0x10f3c>
    2710:	15000006 	lu12i.w	$r6,-524288(0x80000)
    2714:	00000234 	0x00000234
    2718:	00024515 	0x00024515
    271c:	014d1500 	0x014d1500
    2720:	0c000000 	0x0c000000
    2724:	00064f04 	alsl.wu	$r4,$r24,$r19,0x1
    2728:	725f1600 	0x725f1600
    272c:	746e6565 	0x746e6565
    2730:	06042800 	cacop	0x0,$r0,266(0x10a)
    2734:	0608024e 	cacop	0xe,$r18,512(0x200)
    2738:	17000008 	lu32i.d	$r8,-524288(0x80000)
    273c:	7272655f 	0x7272655f
    2740:	06006f6e 	cacop	0xe,$r27,27(0x1b)
    2744:	4d070250 	jirl	$r16,$r18,67328(0x10700)
    2748:	00000001 	0x00000001
    274c:	74735f17 	xvmin.w	$xr23,$xr24,$xr23
    2750:	006e6964 	bstrins.w	$r4,$r11,0xe,0x1a
    2754:	0b025506 	0x0b025506
    2758:	000008f1 	0x000008f1
    275c:	735f1704 	vsrarni.d.q	$vr4,$vr24,0x45
    2760:	756f6474 	0x756f6474
    2764:	55060074 	bl	30475776(0x1d10600) # 1d12d64 <__stack_start+0x1b10094>
    2768:	08f11402 	0x08f11402
    276c:	17080000 	lu32i.d	$r0,-507904(0x84000)
    2770:	6474735f 	bge	$r26,$r31,29808(0x7470) # 9be0 <_bss_end+0x6f10>
    2774:	00727265 	bstrins.w	$r5,$r19,0x12,0x1c
    2778:	1e025506 	pcaddu18i	$r6,4776(0x12a8)
    277c:	000008f1 	0x000008f1
    2780:	695f170c 	bltu	$r24,$r12,89876(0x15f14) # 18694 <_bss_end+0x159c4>
    2784:	0600636e 	cacop	0xe,$r27,24(0x18)
    2788:	4d080257 	jirl	$r23,$r18,67584(0x10800)
    278c:	10000001 	addu16i.d	$r1,$r0,0
    2790:	6d655f17 	bgeu	$r24,$r23,91484(0x1655c) # 18cec <_bss_end+0x1601c>
    2794:	65677265 	bge	$r19,$r5,92016(0x16770) # 18f04 <_bss_end+0x16234>
    2798:	0079636e 	bstrins.w	$r14,$r27,0x19,0x18
    279c:	08025806 	0x08025806
    27a0:	00000bb5 	0x00000bb5
    27a4:	635f1714 	blt	$r24,$r20,-41196(0x35f14) # ffff86b8 <_etext+0xe3feb868>
    27a8:	65727275 	bge	$r19,$r21,94832(0x17270) # 19a18 <_bss_end+0x16d48>
    27ac:	635f746e 	blt	$r3,$r14,-41100(0x35f74) # ffff8720 <_etext+0xe3feb8d0>
    27b0:	67657461 	bge	$r3,$r1,-39564(0x36574) # ffff8d24 <_etext+0xe3febed4>
    27b4:	0079726f 	bstrins.w	$r15,$r19,0x19,0x1c
    27b8:	07025a06 	0x07025a06
    27bc:	0000014d 	0x0000014d
    27c0:	635f1730 	blt	$r25,$r16,-41196(0x35f14) # ffff86d4 <_etext+0xe3feb884>
    27c4:	65727275 	bge	$r19,$r21,94832(0x17270) # 19a34 <_bss_end+0x16d64>
    27c8:	6c5f746e 	bgeu	$r3,$r14,24436(0x5f74) # 873c <_bss_end+0x5a6c>
    27cc:	6c61636f 	bgeu	$r27,$r15,24928(0x6160) # 892c <_bss_end+0x5c5c>
    27d0:	5b060065 	beq	$r3,$r5,-64000(0x30600) # ffff2dd0 <_etext+0xe3fe5f80>
    27d4:	082a1002 	fmadd.d	$f2,$f0,$f4,$f20
    27d8:	17340000 	lu32i.d	$r0,-417792(0x9a000)
    27dc:	64735f5f 	bge	$r26,$r31,29532(0x735c) # 9b38 <_bss_end+0x6e68>
    27e0:	6e696469 	bgeu	$r3,$r9,-104092(0x26964) # fffe9144 <_etext+0xe3fdc2f4>
    27e4:	06007469 	cacop	0x9,$r3,29(0x1d)
    27e8:	4d07025d 	jirl	$r29,$r18,67328(0x10700)
    27ec:	38000001 	ldx.b	$r1,$r0,$r0
    27f0:	635f5f17 	blt	$r24,$r23,-41124(0x35f5c) # ffff874c <_etext+0xe3feb8fc>
    27f4:	6e61656c 	bgeu	$r11,$r12,-106140(0x26164) # fffe8958 <_etext+0xe3fdbb08>
    27f8:	06007075 	cacop	0x15,$r3,28(0x1c)
    27fc:	d008025f 	0xd008025f
    2800:	3c00000b 	0x3c00000b
    2804:	65725f17 	bge	$r24,$r23,94812(0x1725c) # 19a60 <_bss_end+0x16d90>
    2808:	746c7573 	0x746c7573
    280c:	02620600 	sltui	$r0,$r16,-1919(0x881)
    2810:	0002dd13 	0x0002dd13
    2814:	5f174000 	bne	$r0,$r0,-59584(0x31740) # ffff3f54 <_etext+0xe3fe7104>
    2818:	75736572 	0x75736572
    281c:	6b5f746c 	bltu	$r3,$r12,-41100(0x35f74) # ffff8790 <_etext+0xe3feb940>
    2820:	02630600 	sltui	$r0,$r16,-1855(0x8c1)
    2824:	00014d07 	0x00014d07
    2828:	5f174400 	bne	$r0,$r0,-59580(0x31744) # ffff3f6c <_etext+0xe3fe711c>
    282c:	00733570 	bstrins.w	$r16,$r11,0x13,0xd
    2830:	13026406 	addu16i.d	$r6,$r0,-16231(0xc099)
    2834:	000002dd 	0x000002dd
    2838:	665f1748 	bge	$r26,$r8,-106732(0x25f14) # fffe874c <_etext+0xe3fdb8fc>
    283c:	6c656572 	bgeu	$r11,$r18,25956(0x6564) # 8da0 <_bss_end+0x60d0>
    2840:	00747369 	bstrins.w	$r9,$r27,0x14,0x1c
    2844:	14026506 	lu12i.w	$r6,4904(0x1328)
    2848:	00000bd6 	0x00000bd6
    284c:	635f174c 	blt	$r26,$r12,-41196(0x35f14) # ffff8760 <_etext+0xe3feb910>
    2850:	656c7476 	bge	$r3,$r22,93300(0x16c74) # 194c4 <_bss_end+0x167f4>
    2854:	6806006e 	bltu	$r3,$r14,1536(0x600) # 2e54 <_bss_end+0x184>
    2858:	014d0702 	0x014d0702
    285c:	17500000 	lu32i.d	$r0,-360448(0xa8000)
    2860:	7476635f 	xvmin.bu	$xr31,$xr26,$xr24
    2864:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
    2868:	09026906 	0x09026906
    286c:	00000245 	0x00000245
    2870:	6e5f1754 	bgeu	$r26,$r20,-106732(0x25f14) # fffe8784 <_etext+0xe3fdb934>
    2874:	06007765 	cacop	0x5,$r27,29(0x1d)
    2878:	8907028c 	0x8907028c
    287c:	5800000b 	beq	$r0,$r11,0 # 287c <__malloc_av_+0x15c>
    2880:	74615f18 	xvabsd.w	$xr24,$xr24,$xr23
    2884:	74697865 	xvavgr.w	$xr5,$xr3,$xr30
    2888:	02900600 	addi.w	$r0,$r16,1025(0x401)
    288c:	00046013 	alsl.w	$r19,$r0,$r24,0x1
    2890:	18014800 	pcaddi	$r0,2624(0xa40)
    2894:	6574615f 	bge	$r10,$r31,95328(0x17460) # 19cf4 <_bss_end+0x17024>
    2898:	30746978 	0x30746978
    289c:	02910600 	addi.w	$r0,$r16,1089(0x441)
    28a0:	00041512 	alsl.w	$r18,$r8,$r5,0x1
    28a4:	18014c00 	pcaddi	$r0,2656(0xa60)
    28a8:	6769735f 	bge	$r26,$r31,-38544(0x36970) # ffff9218 <_etext+0xe3fec3c8>
    28ac:	6e75665f 	bgeu	$r18,$r31,-101020(0x27564) # fffe9e10 <_etext+0xe3fdcfc0>
    28b0:	95060063 	0x95060063
    28b4:	0be70c02 	0x0be70c02
    28b8:	02dc0000 	addi.d	$r0,$r0,1792(0x700)
    28bc:	735f5f18 	vsrarni.d.q	$vr24,$vr24,0x57
    28c0:	65756c67 	bge	$r3,$r7,95596(0x1756c) # 19e2c <_bss_end+0x1715c>
    28c4:	029a0600 	addi.w	$r0,$r16,1665(0x681)
    28c8:	0008a910 	bytepick.w	$r16,$r8,$r10,0x1
    28cc:	1802e000 	pcaddi	$r0,5888(0x1700)
    28d0:	66735f5f 	bge	$r26,$r31,-101540(0x2735c) # fffe9c2c <_etext+0xe3fdcddc>
    28d4:	029b0600 	addi.w	$r0,$r16,1729(0x6c1)
    28d8:	000bf30a 	0x000bf30a
    28dc:	0002ec00 	0x0002ec00
    28e0:	062b040c 	cacop	0xc,$r0,-1343(0xac1)
    28e4:	4d140000 	jirl	$r0,$r0,70656(0x11400)
    28e8:	2a000001 	ld.bu	$r1,$r0,0
    28ec:	15000008 	lu12i.w	$r8,-524288(0x80000)
    28f0:	00000649 	0x00000649
    28f4:	00023415 	0x00023415
    28f8:	082a1500 	fmadd.d	$f0,$f8,$f5,$f20
    28fc:	4d150000 	jirl	$r0,$r0,70912(0x11500)
    2900:	00000001 	0x00000001
    2904:	0253040c 	sltui	$r12,$r0,1217(0x4c1)
    2908:	2a0d0000 	ld.bu	$r0,$r0,832(0x340)
    290c:	0c000008 	0x0c000008
    2910:	00080c04 	bytepick.w	$r4,$r0,$r3,0x0
    2914:	018d1400 	0x018d1400
    2918:	08590000 	fmsub.s	$f0,$f0,$f0,$f18
    291c:	49150000 	bceqz	$fcc0,70912(0x11500) # 13e1c <_bss_end+0x1114c>
    2920:	15000006 	lu12i.w	$r6,-524288(0x80000)
    2924:	00000234 	0x00000234
    2928:	00018d15 	0x00018d15
    292c:	014d1500 	0x014d1500
    2930:	0c000000 	0x0c000000
    2934:	00083b04 	bytepick.w	$r4,$r24,$r14,0x0
    2938:	014d1400 	0x014d1400
    293c:	08730000 	0x08730000
    2940:	49150000 	bceqz	$fcc0,70912(0x11500) # 13e40 <_bss_end+0x11170>
    2944:	15000006 	lu12i.w	$r6,-524288(0x80000)
    2948:	00000234 	0x00000234
    294c:	5f040c00 	bne	$r0,$r0,-64500(0x3040c) # ffff2d58 <_etext+0xe3fe5f08>
    2950:	07000008 	0x07000008
    2954:	000000cd 	0x000000cd
    2958:	00000889 	0x00000889
    295c:	00015408 	0x00015408
    2960:	07000200 	0x07000200
    2964:	000000cd 	0x000000cd
    2968:	00000899 	0x00000899
    296c:	00015408 	0x00015408
    2970:	04000000 	csrrd	$r0,0x0
    2974:	49465f5f 	0x49465f5f
    2978:	0600454c 	cacop	0xc,$r10,17(0x11)
    297c:	b21a012a 	0xb21a012a
    2980:	19000004 	pcaddi	$r4,-524288(0x80000)
    2984:	756c675f 	0x756c675f
    2988:	060c0065 	cacop	0x5,$r3,768(0x300)
    298c:	eb08012e 	0xeb08012e
    2990:	17000008 	lu32i.d	$r8,-524288(0x80000)
    2994:	78656e5f 	0x78656e5f
    2998:	30060074 	0x30060074
    299c:	08eb1101 	fnmsub.d	$f1,$f8,$f4,$f22
    29a0:	17000000 	lu32i.d	$r0,-524288(0x80000)
    29a4:	6f696e5f 	bgeu	$r18,$r31,-38548(0x3696c) # ffff9310 <_etext+0xe3fec4c0>
    29a8:	06007362 	cacop	0x2,$r27,28(0x1c)
    29ac:	4d070131 	jirl	$r17,$r9,67328(0x10700)
    29b0:	04000001 	csrrd	$r1,0x0
    29b4:	6f695f17 	bgeu	$r24,$r23,-38564(0x3695c) # ffff9310 <_etext+0xe3fec4c0>
    29b8:	06007362 	cacop	0x2,$r27,28(0x1c)
    29bc:	f10b0132 	0xf10b0132
    29c0:	08000008 	0x08000008
    29c4:	a9040c00 	0xa9040c00
    29c8:	0c000008 	0x0c000008
    29cc:	00089904 	bytepick.w	$r4,$r8,$r6,0x1
    29d0:	725f1900 	0x725f1900
    29d4:	34646e61 	0x34646e61
    29d8:	060e0038 	cacop	0x18,$r1,896(0x380)
    29dc:	3908014a 	0x3908014a
    29e0:	17000009 	lu32i.d	$r9,-524288(0x80000)
    29e4:	6565735f 	bge	$r26,$r31,91504(0x16570) # 18f54 <_bss_end+0x16284>
    29e8:	4b060064 	bceqz	$fcc3,1246720(0x130600) # 132fe8 <__heap_end+0x30318>
    29ec:	09391201 	0x09391201
    29f0:	17000000 	lu32i.d	$r0,-524288(0x80000)
    29f4:	6c756d5f 	bgeu	$r10,$r31,30060(0x756c) # 9f60 <_bss_end+0x7290>
    29f8:	4c060074 	jirl	$r20,$r3,1536(0x600)
    29fc:	09391201 	0x09391201
    2a00:	17060000 	lu32i.d	$r0,-512000(0x83000)
    2a04:	6464615f 	bge	$r10,$r31,25696(0x6460) # 8e64 <_bss_end+0x6194>
    2a08:	014d0600 	0x014d0600
    2a0c:	0000eb12 	0x0000eb12
    2a10:	07000c00 	0x07000c00
    2a14:	000000eb 	0x000000eb
    2a18:	00000949 	0x00000949
    2a1c:	00015408 	0x00015408
    2a20:	1a000200 	pcalau12i	$r0,16(0x10)
    2a24:	026d06d0 	sltui	$r16,$r22,-1215(0xb41)
    2a28:	000b0a07 	0x000b0a07
    2a2c:	755f1700 	0x755f1700
    2a30:	6573756e 	bge	$r11,$r14,95092(0x17374) # 19da4 <_bss_end+0x170d4>
    2a34:	61725f64 	blt	$r27,$r4,94812(0x1725c) # 19c90 <_bss_end+0x16fc0>
    2a38:	0600646e 	cacop	0xe,$r3,25(0x19)
    2a3c:	5418026f 	bl	-105113600(0x9bc1800) # f9bc423c <_etext+0xddbb73ec>
    2a40:	00000001 	0x00000001
    2a44:	74735f17 	xvmin.w	$xr23,$xr24,$xr23
    2a48:	6b6f7472 	bltu	$r3,$r18,-37004(0x36f74) # ffff99bc <_etext+0xe3fecb6c>
    2a4c:	73616c5f 	vssrani.w.d	$vr31,$vr2,0x1b
    2a50:	70060074 	vslt.b	$vr20,$vr3,$vr0
    2a54:	02451202 	sltui	$r2,$r16,324(0x144)
    2a58:	17040000 	lu32i.d	$r0,-516096(0x82000)
    2a5c:	6373615f 	blt	$r10,$r31,-36000(0x37360) # ffff9dbc <_etext+0xe3fecf6c>
    2a60:	656d6974 	bge	$r11,$r20,93544(0x16d68) # 197c8 <_bss_end+0x16af8>
    2a64:	6675625f 	bge	$r18,$r31,-101024(0x27560) # fffe9fc4 <_etext+0xe3fdd174>
    2a68:	02710600 	sltui	$r0,$r16,-959(0xc41)
    2a6c:	000b0a10 	0x000b0a10
    2a70:	5f170800 	bne	$r0,$r0,-59640(0x31708) # ffff4178 <_etext+0xe3fe7328>
    2a74:	61636f6c 	blt	$r27,$r12,90988(0x1636c) # 18de0 <_bss_end+0x16110>
    2a78:	6d69746c 	bgeu	$r3,$r12,92532(0x16974) # 193ec <_bss_end+0x1671c>
    2a7c:	75625f65 	0x75625f65
    2a80:	72060066 	0x72060066
    2a84:	02f31702 	addi.d	$r2,$r24,-827(0xcc5)
    2a88:	17240000 	lu32i.d	$r0,-450560(0x92000)
    2a8c:	6d61675f 	bgeu	$r26,$r31,90468(0x16164) # 18bf0 <_bss_end+0x15f20>
    2a90:	735f616d 	vsrarni.d.q	$vr13,$vr11,0x58
    2a94:	676e6769 	bge	$r27,$r9,-37276(0x36e64) # ffff98f8 <_etext+0xe3fecaa8>
    2a98:	06006d61 	cacop	0x1,$r11,27(0x1b)
    2a9c:	4d0f0273 	jirl	$r19,$r19,69376(0x10f00)
    2aa0:	48000001 	bceqz	$fcc0,262144(0x40000) # 42aa0 <_bss_end+0x3fdd0>
    2aa4:	61725f17 	blt	$r24,$r23,94812(0x1725c) # 19d00 <_bss_end+0x17030>
    2aa8:	6e5f646e 	bgeu	$r3,$r14,-106652(0x25f64) # fffe8a0c <_etext+0xe3fdbbbc>
    2aac:	00747865 	bstrins.w	$r5,$r3,0x14,0x1e
    2ab0:	2c027406 	vld	$vr6,$r0,157(0x9d)
    2ab4:	00000133 	0x00000133
    2ab8:	725f1750 	0x725f1750
    2abc:	06003834 	cacop	0x14,$r1,14(0xe)
    2ac0:	f71a0275 	0xf71a0275
    2ac4:	58000008 	beq	$r0,$r8,0 # 2ac4 <__malloc_av_+0x3a4>
    2ac8:	626d5f17 	blt	$r24,$r23,-103076(0x26d5c) # fffe9824 <_etext+0xe3fdc9d4>
    2acc:	5f6e656c 	bne	$r11,$r12,-37276(0x36e64) # ffff9930 <_etext+0xe3fecae0>
    2ad0:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
    2ad4:	76060065 	0x76060065
    2ad8:	02101602 	slti	$r2,$r16,1029(0x405)
    2adc:	17680000 	lu32i.d	$r0,-311296(0xb4000)
    2ae0:	74626d5f 	xvabsd.bu	$xr31,$xr10,$xr27
    2ae4:	5f63776f 	bne	$r27,$r15,-40076(0x36374) # ffff8e58 <_etext+0xe3fec008>
    2ae8:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
    2aec:	77060065 	0x77060065
    2af0:	02101602 	slti	$r2,$r16,1029(0x405)
    2af4:	17700000 	lu32i.d	$r0,-294912(0xb8000)
    2af8:	7463775f 	xvabsd.wu	$xr31,$xr26,$xr29
    2afc:	5f626d6f 	bne	$r11,$r15,-40340(0x3626c) # ffff8d68 <_etext+0xe3febf18>
    2b00:	74617473 	xvabsd.w	$xr19,$xr3,$xr29
    2b04:	78060065 	0x78060065
    2b08:	02101602 	slti	$r2,$r16,1029(0x405)
    2b0c:	17780000 	lu32i.d	$r0,-278528(0xbc000)
    2b10:	34366c5f 	0x34366c5f
    2b14:	75625f61 	0x75625f61
    2b18:	79060066 	0x79060066
    2b1c:	0b1a1002 	0x0b1a1002
    2b20:	17800000 	lu32i.d	$r0,-262144(0xc0000)
    2b24:	6769735f 	bge	$r26,$r31,-38544(0x36970) # ffff9494 <_etext+0xe3fec644>
    2b28:	5f6c616e 	bne	$r11,$r14,-37792(0x36c60) # ffff9788 <_etext+0xe3fec938>
    2b2c:	00667562 	bstrins.w	$r2,$r11,0x6,0x1d
    2b30:	10027a06 	addu16i.d	$r6,$r16,158(0x9e)
    2b34:	00000b2a 	0x00000b2a
    2b38:	675f1788 	bge	$r28,$r8,-41196(0x35f14) # ffff8a4c <_etext+0xe3febbfc>
    2b3c:	61647465 	blt	$r3,$r5,91252(0x16474) # 18fb0 <_bss_end+0x162e0>
    2b40:	655f6574 	bge	$r11,$r20,89956(0x15f64) # 18aa4 <_bss_end+0x15dd4>
    2b44:	06007272 	cacop	0x12,$r19,28(0x1c)
    2b48:	4d0f027b 	jirl	$r27,$r19,69376(0x10f00)
    2b4c:	a0000001 	0xa0000001
    2b50:	626d5f17 	blt	$r24,$r23,-103076(0x26d5c) # fffe98ac <_etext+0xe3fdca5c>
    2b54:	6e656c72 	bgeu	$r3,$r18,-105108(0x2656c) # fffe90c0 <_etext+0xe3fdc270>
    2b58:	6174735f 	blt	$r26,$r31,95344(0x17470) # 19fc8 <_bss_end+0x172f8>
    2b5c:	06006574 	cacop	0x14,$r11,25(0x19)
    2b60:	1016027c 	addu16i.d	$r28,$r19,1408(0x580)
    2b64:	a4000002 	0xa4000002
    2b68:	626d5f17 	blt	$r24,$r23,-103076(0x26d5c) # fffe98c4 <_etext+0xe3fdca74>
    2b6c:	776f7472 	xvssrarni.du.q	$xr18,$xr3,0x5d
    2b70:	74735f63 	xvmin.w	$xr3,$xr27,$xr23
    2b74:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
    2b78:	16027d06 	lu32i.d	$r6,5096(0x13e8)
    2b7c:	00000210 	0x00000210
    2b80:	6d5f17ac 	bgeu	$r29,$r12,89876(0x15f14) # 18a94 <_bss_end+0x15dc4>
    2b84:	74727362 	xvmin.b	$xr2,$xr27,$xr28
    2b88:	7363776f 	vssrani.d.q	$vr15,$vr27,0x5d
    2b8c:	6174735f 	blt	$r26,$r31,95344(0x17470) # 19ffc <_bss_end+0x1732c>
    2b90:	06006574 	cacop	0x14,$r11,25(0x19)
    2b94:	1016027e 	addu16i.d	$r30,$r19,1408(0x580)
    2b98:	b4000002 	0xb4000002
    2b9c:	63775f17 	blt	$r24,$r23,-34980(0x3775c) # ffffa2f8 <_etext+0xe3fed4a8>
    2ba0:	6d6f7472 	bgeu	$r3,$r18,94068(0x16f74) # 19b14 <_bss_end+0x16e44>
    2ba4:	74735f62 	xvmin.w	$xr2,$xr27,$xr23
    2ba8:	00657461 	bstrins.w	$r1,$r3,0x5,0x1d
    2bac:	16027f06 	lu32i.d	$r6,5112(0x13f8)
    2bb0:	00000210 	0x00000210
    2bb4:	775f17bc 	xvsrarni.d.q	$xr28,$xr29,0x45
    2bb8:	74727363 	xvmin.b	$xr3,$xr27,$xr28
    2bbc:	73626d6f 	vssrani.d.q	$vr15,$vr11,0x1b
    2bc0:	6174735f 	blt	$r26,$r31,95344(0x17470) # 1a030 <_bss_end+0x17360>
    2bc4:	06006574 	cacop	0x14,$r11,25(0x19)
    2bc8:	10160280 	addu16i.d	$r0,$r20,1408(0x580)
    2bcc:	c4000002 	0xc4000002
    2bd0:	5f685f17 	bne	$r24,$r23,-38820(0x3685c) # ffff942c <_etext+0xe3fec5dc>
    2bd4:	6e727265 	bgeu	$r19,$r5,-101776(0x27270) # fffe9e44 <_etext+0xe3fdcff4>
    2bd8:	8106006f 	0x8106006f
    2bdc:	014d0802 	0x014d0802
    2be0:	00cc0000 	bstrpick.d	$r0,$r0,0xc,0x0
    2be4:	00024b07 	0x00024b07
    2be8:	000b1a00 	0x000b1a00
    2bec:	01540800 	0x01540800
    2bf0:	00190000 	srl.d	$r0,$r0,$r0
    2bf4:	00024b07 	0x00024b07
    2bf8:	000b2a00 	0x000b2a00
    2bfc:	01540800 	0x01540800
    2c00:	00070000 	alsl.wu	$r0,$r0,$r0,0x3
    2c04:	00024b07 	0x00024b07
    2c08:	000b3a00 	0x000b3a00
    2c0c:	01540800 	0x01540800
    2c10:	00170000 	sll.w	$r0,$r0,$r0
    2c14:	8606f01a 	0x8606f01a
    2c18:	0b690702 	0x0b690702
    2c1c:	5f170000 	bne	$r0,$r0,-59648(0x31700) # ffff431c <_etext+0xe3fe74cc>
    2c20:	7478656e 	0x7478656e
    2c24:	89060066 	0x89060066
    2c28:	0b691b02 	0x0b691b02
    2c2c:	17000000 	lu32i.d	$r0,-524288(0x80000)
    2c30:	616d6e5f 	blt	$r18,$r31,93548(0x16d6c) # 1999c <_bss_end+0x16ccc>
    2c34:	636f6c6c 	blt	$r3,$r12,-37012(0x36f6c) # ffff9ba0 <_etext+0xe3fecd50>
    2c38:	028a0600 	addi.w	$r0,$r16,641(0x281)
    2c3c:	000b7918 	0x000b7918
    2c40:	07007800 	0x07007800
    2c44:	000004ac 	0x000004ac
    2c48:	00000b79 	0x00000b79
    2c4c:	00015408 	0x00015408
    2c50:	07001d00 	0x07001d00
    2c54:	00000154 	0x00000154
    2c58:	00000b89 	0x00000b89
    2c5c:	00015408 	0x00015408
    2c60:	1b001d00 	pcalau12i	$r0,-524056(0x800e8)
    2c64:	026b06f0 	sltui	$r16,$r23,-1343(0xac1)
    2c68:	000bb503 	0x000bb503
    2c6c:	725f1c00 	0x725f1c00
    2c70:	746e6565 	0x746e6565
    2c74:	02820600 	addi.w	$r0,$r16,129(0x81)
    2c78:	0009490b 	bytepick.w	$r11,$r8,$r18,0x2
    2c7c:	755f1c00 	0x755f1c00
    2c80:	6573756e 	bge	$r11,$r14,95092(0x17374) # 19ff4 <_bss_end+0x17324>
    2c84:	8b060064 	0x8b060064
    2c88:	0b3a0b02 	0x0b3a0b02
    2c8c:	07000000 	0x07000000
    2c90:	0000024b 	0x0000024b
    2c94:	00000bc5 	0x00000bc5
    2c98:	00015408 	0x00015408
    2c9c:	1d001800 	pcaddu12i	$r0,-524096(0x800c0)
    2ca0:	00000bd0 	0x00000bd0
    2ca4:	00064915 	alsl.wu	$r21,$r8,$r18,0x1
    2ca8:	040c0000 	csrrd	$r0,0x300
    2cac:	00000bc5 	0x00000bc5
    2cb0:	02dd040c 	addi.d	$r12,$r0,1857(0x741)
    2cb4:	e71d0000 	0xe71d0000
    2cb8:	1500000b 	lu12i.w	$r11,-524288(0x80000)
    2cbc:	0000014d 	0x0000014d
    2cc0:	ed040c00 	0xed040c00
    2cc4:	0c00000b 	0x0c00000b
    2cc8:	000bdc04 	0x000bdc04
    2ccc:	08990700 	fnmadd.s	$f0,$f24,$f1,$f18
    2cd0:	0c030000 	0x0c030000
    2cd4:	54080000 	bl	2048(0x800) # 34d4 <_bss_end+0x804>
    2cd8:	02000001 	slti	$r1,$r0,0
    2cdc:	695f1e00 	bltu	$r16,$r0,89884(0x15f1c) # 18bf8 <_bss_end+0x15f28>
    2ce0:	7275706d 	0x7275706d
    2ce4:	74705f65 	xvmax.b	$xr5,$xr27,$xr23
    2ce8:	10060072 	addu16i.d	$r18,$r3,384(0x180)
    2cec:	06491703 	0x06491703
    2cf0:	5f1e0000 	bne	$r0,$r0,-57856(0x31e00) # ffff4af0 <_etext+0xe3fe7ca0>
    2cf4:	626f6c67 	blt	$r3,$r7,-102548(0x26f6c) # fffe9c60 <_etext+0xe3fdce10>
    2cf8:	695f6c61 	bltu	$r3,$r1,89964(0x15f6c) # 18c64 <_bss_end+0x15f94>
    2cfc:	7275706d 	0x7275706d
    2d00:	74705f65 	xvmax.b	$xr5,$xr27,$xr23
    2d04:	11060072 	addu16i.d	$r18,$r3,16768(0x4180)
    2d08:	06491703 	0x06491703
    2d0c:	30070000 	0x30070000
    2d10:	3f000008 	0x3f000008
    2d14:	1f00000c 	pcaddu18i	$r12,-524288(0x80000)
    2d18:	0c340d00 	0x0c340d00
    2d1c:	5f200000 	bne	$r0,$r0,-57344(0x32000) # ffff4d1c <_etext+0xe3fe7ecc>
    2d20:	5f737973 	bne	$r11,$r19,-35976(0x37378) # ffffa098 <_etext+0xe3fed248>
    2d24:	6c727265 	bgeu	$r19,$r5,29296(0x7270) # 9f94 <_bss_end+0x72c4>
    2d28:	00747369 	bstrins.w	$r9,$r27,0x14,0x1c
    2d2c:	3f261e07 	0x3f261e07
    2d30:	2000000c 	ll.w	$r12,$r0,0
    2d34:	7379735f 	0x7379735f
    2d38:	72656e5f 	0x72656e5f
    2d3c:	1f070072 	pcaddu18i	$r18,-509949(0x83803)
    2d40:	00014d15 	0x00014d15
    2d44:	024b0700 	sltui	$r0,$r24,705(0x2c1)
    2d48:	0c760000 	0x0c760000
    2d4c:	001f0000 	mulw.d.w	$r0,$r0,$r0
    2d50:	6e655f20 	bgeu	$r25,$r0,-105124(0x2655c) # fffe92ac <_etext+0xe3fdc45c>
    2d54:	1a080064 	pcalau12i	$r4,16387(0x4003)
    2d58:	000c6b0d 	bytepick.d	$r13,$r24,$r26,0x0
    2d5c:	736c2100 	0x736c2100
    2d60:	006b6565 	bstrins.w	$r5,$r11,0xb,0x19
    2d64:	58011701 	beq	$r24,$r1,276(0x114) # 2e78 <_bss_end+0x1a8>
    2d68:	ac000002 	0xac000002
    2d6c:	081c0098 	fmadd.s	$f24,$f4,$f0,$f24
    2d70:	01000000 	0x01000000
    2d74:	6466229c 	bge	$r20,$r28,26144(0x6620) # 9394 <_bss_end+0x66c4>
    2d78:	01170100 	0x01170100
    2d7c:	0000014d 	0x0000014d
    2d80:	0000030c 	0x0000030c
    2d84:	66666f23 	bge	$r25,$r3,-104852(0x2666c) # fffe93f0 <_etext+0xe3fdc5a0>
    2d88:	00746573 	bstrins.w	$r19,$r11,0x14,0x19
    2d8c:	58011701 	beq	$r24,$r1,276(0x114) # 2ea0 <_bss_end+0x1d0>
    2d90:	01000002 	0x01000002
    2d94:	68772355 	bltu	$r26,$r21,30496(0x7720) # a4b4 <_bss_end+0x77e4>
    2d98:	65636e65 	bge	$r19,$r5,90988(0x1636c) # 19104 <_bss_end+0x16434>
    2d9c:	01170100 	0x01170100
    2da0:	0000014d 	0x0000014d
    2da4:	00005601 	bitrev.d	$r1,$r16

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	stptr.w	$r1,$r8,272(0x110)
   4:	030b1308 	lu52i.d	$r8,$r24,708(0x2c4)
   8:	11081b08 	addu16i.d	$r8,$r24,16902(0x4206)
   c:	10061201 	addu16i.d	$r1,$r16,388(0x184)
  10:	02000017 	slti	$r23,$r0,0
  14:	0b0b0024 	0x0b0b0024
  18:	08030b3e 	0x08030b3e
  1c:	16030000 	lu32i.d	$r0,6144(0x1800)
  20:	3a080300 	0x3a080300
  24:	390b3b0b 	0x390b3b0b
  28:	0013490b 	maskeqz	$r11,$r8,$r18
  2c:	00160400 	orn	$r0,$r0,$r1
  30:	0b3a0803 	0x0b3a0803
  34:	0b39053b 	0x0b39053b
  38:	00001349 	clo.w	$r9,$r26
  3c:	0b011705 	0x0b011705
  40:	3b0b3a0b 	0x3b0b3a0b
  44:	010b390b 	fmin.d	$f11,$f8,$f14
  48:	06000013 	cacop	0x13,$r0,0
  4c:	0803000d 	0x0803000d
  50:	0b3b0b3a 	0x0b3b0b3a
  54:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
  58:	01070000 	fdiv.d	$f0,$f0,$f0
  5c:	01134901 	fcopysign.d	$f1,$f8,$f18
  60:	08000013 	0x08000013
  64:	13490021 	addu16i.d	$r1,$r1,-11712(0xd240)
  68:	00000b2f 	0x00000b2f
  6c:	0b011309 	0x0b011309
  70:	3b0b3a0b 	0x3b0b3a0b
  74:	010b390b 	fmin.d	$f11,$f8,$f14
  78:	0a000013 	0x0a000013
  7c:	0803000d 	0x0803000d
  80:	0b3b0b3a 	0x0b3b0b3a
  84:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
  88:	00000b38 	0x00000b38
  8c:	0b000f0b 	0x0b000f0b
  90:	0c00000b 	0x0c00000b
  94:	0b0b000f 	0x0b0b000f
  98:	00001349 	clo.w	$r9,$r26
  9c:	4900260d 	0x4900260d
  a0:	0e000013 	0x0e000013
  a4:	08030113 	0x08030113
  a8:	0b3a0b0b 	0x0b3a0b0b
  ac:	0b390b3b 	0x0b390b3b
  b0:	00001301 	clo.w	$r1,$r24
  b4:	0301130f 	lu52i.d	$r15,$r24,68(0x44)
  b8:	3a050b0e 	0x3a050b0e
  bc:	390b3b0b 	0x390b3b0b
  c0:	0013010b 	maskeqz	$r11,$r8,$r0
  c4:	000d1000 	bytepick.d	$r0,$r0,$r4,0x2
  c8:	0b3a0803 	0x0b3a0803
  cc:	0b390b3b 	0x0b390b3b
  d0:	05381349 	0x05381349
  d4:	13110000 	addu16i.d	$r0,$r0,-15296(0xc440)
  d8:	0b080301 	0x0b080301
  dc:	3b0b3a05 	0x3b0b3a05
  e0:	010b390b 	fmin.d	$f11,$f8,$f14
  e4:	12000013 	addu16i.d	$r19,$r0,-32768(0x8000)
  e8:	0e03000d 	0x0e03000d
  ec:	0b3b0b3a 	0x0b3b0b3a
  f0:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
  f4:	00000b38 	0x00000b38
  f8:	27001513 	stptr.d	$r19,$r8,20(0x14)
  fc:	14000019 	lu12i.w	$r25,0
 100:	19270115 	pcaddi	$r21,-444408(0x93808)
 104:	13011349 	addu16i.d	$r9,$r26,-16316(0xc044)
 108:	05150000 	0x05150000
 10c:	00134900 	maskeqz	$r0,$r8,$r18
 110:	01131600 	fcopysign.d	$f0,$f16,$f5
 114:	050b0803 	0x050b0803
 118:	053b0b3a 	0x053b0b3a
 11c:	13010b39 	addu16i.d	$r25,$r25,-16318(0xc042)
 120:	0d170000 	vbitsel.v	$vr0,$vr0,$vr0,$vr14
 124:	3a080300 	0x3a080300
 128:	39053b0b 	0x39053b0b
 12c:	3813490b 	0x3813490b
 130:	1800000b 	pcaddi	$r11,0
 134:	0803000d 	0x0803000d
 138:	053b0b3a 	0x053b0b3a
 13c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 140:	00000538 	0x00000538
 144:	03011319 	lu52i.d	$r25,$r24,68(0x44)
 148:	3a0b0b08 	0x3a0b0b08
 14c:	39053b0b 	0x39053b0b
 150:	0013010b 	maskeqz	$r11,$r8,$r0
 154:	01131a00 	fcopysign.d	$f0,$f16,$f6
 158:	0b3a0b0b 	0x0b3a0b0b
 15c:	0b39053b 	0x0b39053b
 160:	00001301 	clo.w	$r1,$r24
 164:	0b01171b 	0x0b01171b
 168:	3b0b3a0b 	0x3b0b3a0b
 16c:	010b3905 	fmin.d	$f5,$f8,$f14
 170:	1c000013 	pcaddu12i	$r19,0
 174:	0803000d 	0x0803000d
 178:	053b0b3a 	0x053b0b3a
 17c:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 180:	151d0000 	lu12i.w	$r0,-464896(0x8e800)
 184:	01192701 	fcvt.d.s	$f1,$f24
 188:	1e000013 	pcaddu18i	$r19,0
 18c:	08030034 	0x08030034
 190:	053b0b3a 	0x053b0b3a
 194:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 198:	193c193f 	pcaddi	$r31,-401207(0x9e0c9)
 19c:	341f0000 	0x341f0000
 1a0:	3a080300 	0x3a080300
 1a4:	390b3b0b 	0x390b3b0b
 1a8:	3f13490b 	0x3f13490b
 1ac:	00193c19 	srl.d	$r25,$r0,$r15
 1b0:	00212000 	div.wu	$r0,$r0,$r8
 1b4:	34210000 	0x34210000
 1b8:	3a080300 	0x3a080300
 1bc:	390b3b0b 	0x390b3b0b
 1c0:	3f13490b 	0x3f13490b
 1c4:	00180219 	sra.w	$r25,$r16,$r0
 1c8:	012e2200 	0x012e2200
 1cc:	0803193f 	0x0803193f
 1d0:	0b3b0b3a 	0x0b3b0b3a
 1d4:	19270b39 	pcaddi	$r25,-444327(0x93859)
 1d8:	01111349 	fscaleb.d	$f9,$f26,$f4
 1dc:	18400612 	pcaddi	$r18,131120(0x20030)
 1e0:	01194297 	0x01194297
 1e4:	23000013 	sc.d	$r19,$r0,0
 1e8:	08030005 	0x08030005
 1ec:	0b3b0b3a 	0x0b3b0b3a
 1f0:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 1f4:	00001702 	clz.w	$r2,$r24
 1f8:	03003424 	lu52i.d	$r4,$r1,13(0xd)
 1fc:	3b0b3a08 	0x3b0b3a08
 200:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0d38 <__stack_start+0xce068>
 204:	00180213 	sra.w	$r19,$r16,$r0
 208:	00342500 	0x00342500
 20c:	0b3a0803 	0x0b3a0803
 210:	0b390b3b 	0x0b390b3b
 214:	17021349 	lu32i.d	$r9,-520038(0x8109a)
 218:	89260000 	0x89260000
 21c:	11010182 	addu16i.d	$r2,$r12,16448(0x4040)
 220:	00133101 	maskeqz	$r1,$r8,$r12
 224:	828a2700 	0x828a2700
 228:	18020001 	pcaddi	$r1,4096(0x1000)
 22c:	00184291 	sra.w	$r17,$r20,$r16
 230:	002e2800 	0x002e2800
 234:	193c193f 	pcaddi	$r31,-401207(0x9e0c9)
 238:	0e030e6e 	0x0e030e6e
 23c:	0b3b0b3a 	0x0b3b0b3a
 240:	00000b39 	0x00000b39
 244:	01110100 	fscaleb.d	$f0,$f8,$f0
 248:	0b130825 	0x0b130825
 24c:	081b0803 	fmadd.s	$f3,$f0,$f2,$f22
 250:	06120111 	cacop	0x11,$r8,1152(0x480)
 254:	00001710 	clz.w	$r16,$r24
 258:	49010102 	bcnez	$fcc0,590080(0x90100) # 90358 <_bss_end+0x8d688>
 25c:	00130113 	maskeqz	$r19,$r8,$r0
 260:	00210300 	div.wu	$r0,$r24,$r0
 264:	24040000 	ldptr.w	$r0,$r0,1024(0x400)
 268:	3e0b0b00 	0x3e0b0b00
 26c:	0008030b 	bytepick.w	$r11,$r24,$r0,0x0
 270:	00340500 	0x00340500
 274:	0b3a0803 	0x0b3a0803
 278:	0b390b3b 	0x0b390b3b
 27c:	193f1349 	pcaddi	$r9,-395110(0x9f89a)
 280:	0000193c 	cto.w	$r28,$r9
 284:	3f012e06 	0x3f012e06
 288:	3a080319 	0x3a080319
 28c:	390b3b0b 	0x390b3b0b
 290:	1119270b 	addu16i.d	$r11,$r24,17993(0x4649)
 294:	40061201 	beqz	$r16,263696(0x40610) # 408a4 <_bss_end+0x3dbd4>
 298:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 29c:	00001301 	clo.w	$r1,$r24
 2a0:	03000507 	lu52i.d	$r7,$r8,1(0x1)
 2a4:	3b0b3a08 	0x3b0b3a08
 2a8:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0de0 <__stack_start+0xce110>
 2ac:	00170213 	sll.w	$r19,$r16,$r0
 2b0:	010b0800 	fmin.d	$f0,$f0,$f2
 2b4:	06120111 	cacop	0x11,$r8,1152(0x480)
 2b8:	2e090000 	0x2e090000
 2bc:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 2c0:	3b0b3a08 	0x3b0b3a08
 2c4:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0dfc <__stack_start+0xce12c>
 2c8:	01193c13 	0x01193c13
 2cc:	0a000013 	0x0a000013
 2d0:	00000018 	0x00000018
 2d4:	0182890b 	0x0182890b
 2d8:	31011100 	0x31011100
 2dc:	0c000013 	0x0c000013
 2e0:	0b0b000f 	0x0b0b000f
 2e4:	00001349 	clo.w	$r9,$r26
 2e8:	3f002e0d 	0x3f002e0d
 2ec:	6e193c19 	bgeu	$r0,$r25,-124612(0x2193c) # fffe1c28 <_etext+0xe3fd4dd8>
 2f0:	3a080308 	0x3a080308
 2f4:	390b3b0b 	0x390b3b0b
 2f8:	0000000b 	0x0000000b
 2fc:	25011101 	stptr.w	$r1,$r8,272(0x110)
 300:	030b1308 	lu52i.d	$r8,$r24,708(0x2c4)
 304:	11081b08 	addu16i.d	$r8,$r24,16902(0x4206)
 308:	10061201 	addu16i.d	$r1,$r16,388(0x184)
 30c:	02000017 	slti	$r23,$r0,0
 310:	13490101 	addu16i.d	$r1,$r8,-11712(0xd240)
 314:	00001301 	clo.w	$r1,$r24
 318:	00002103 	clo.d	$r3,$r8
 31c:	00240400 	crc.w.b.w	$r0,$r0,$r1
 320:	0b3e0b0b 	0x0b3e0b0b
 324:	00000803 	0x00000803
 328:	03003405 	lu52i.d	$r5,$r0,13(0xd)
 32c:	3b0b3a08 	0x3b0b3a08
 330:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0e68 <__stack_start+0xce198>
 334:	3c193f13 	0x3c193f13
 338:	06000019 	cacop	0x19,$r0,0
 33c:	193f012e 	pcaddi	$r14,-395255(0x9f809)
 340:	0b3a0803 	0x0b3a0803
 344:	0b390b3b 	0x0b390b3b
 348:	13491927 	addu16i.d	$r7,$r9,-11706(0xd246)
 34c:	06120111 	cacop	0x11,$r8,1152(0x480)
 350:	42971840 	beqz	$r2,169752(0x29718) # 29a68 <_bss_end+0x26d98>
 354:	00130119 	maskeqz	$r25,$r8,$r0
 358:	00050700 	alsl.w	$r0,$r24,$r1,0x3
 35c:	0b3a0803 	0x0b3a0803
 360:	0b390b3b 	0x0b390b3b
 364:	17021349 	lu32i.d	$r9,-520038(0x8109a)
 368:	34080000 	0x34080000
 36c:	3a080300 	0x3a080300
 370:	390b3b0b 	0x390b3b0b
 374:	0213490b 	slti	$r11,$r8,1234(0x4d2)
 378:	09000017 	0x09000017
 37c:	00018289 	0x00018289
 380:	13310111 	addu16i.d	$r17,$r8,-13248(0xcc40)
 384:	890a0000 	0x890a0000
 388:	11010182 	addu16i.d	$r2,$r12,16448(0x4040)
 38c:	01133101 	fcopysign.d	$f1,$f8,$f12
 390:	0b000013 	0x0b000013
 394:	0001828a 	0x0001828a
 398:	42911802 	beqz	$r0,692504(0xa9118) # a94b0 <_bss_end+0xa67e0>
 39c:	0c000018 	0x0c000018
 3a0:	0b0b000f 	0x0b0b000f
 3a4:	00001349 	clo.w	$r9,$r26
 3a8:	3f002e0d 	0x3f002e0d
 3ac:	6e193c19 	bgeu	$r0,$r25,-124612(0x2193c) # fffe1ce8 <_etext+0xe3fd4e98>
 3b0:	3a080308 	0x3a080308
 3b4:	390b3b0b 	0x390b3b0b
 3b8:	0000000b 	0x0000000b
 3bc:	25011101 	stptr.w	$r1,$r8,272(0x110)
 3c0:	030b1308 	lu52i.d	$r8,$r24,708(0x2c4)
 3c4:	11081b08 	addu16i.d	$r8,$r24,16902(0x4206)
 3c8:	10061201 	addu16i.d	$r1,$r16,388(0x184)
 3cc:	02000017 	slti	$r23,$r0,0
 3d0:	0b0b0024 	0x0b0b0024
 3d4:	08030b3e 	0x08030b3e
 3d8:	16030000 	lu32i.d	$r0,6144(0x1800)
 3dc:	3a080300 	0x3a080300
 3e0:	390b3b0b 	0x390b3b0b
 3e4:	0013490b 	maskeqz	$r11,$r8,$r18
 3e8:	00160400 	orn	$r0,$r0,$r1
 3ec:	0b3a0803 	0x0b3a0803
 3f0:	0b39053b 	0x0b39053b
 3f4:	00001349 	clo.w	$r9,$r26
 3f8:	0b011705 	0x0b011705
 3fc:	3b0b3a0b 	0x3b0b3a0b
 400:	010b390b 	fmin.d	$f11,$f8,$f14
 404:	06000013 	cacop	0x13,$r0,0
 408:	0803000d 	0x0803000d
 40c:	0b3b0b3a 	0x0b3b0b3a
 410:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 414:	01070000 	fdiv.d	$f0,$f0,$f0
 418:	01134901 	fcopysign.d	$f1,$f8,$f18
 41c:	08000013 	0x08000013
 420:	13490021 	addu16i.d	$r1,$r1,-11712(0xd240)
 424:	00000b2f 	0x00000b2f
 428:	0b011309 	0x0b011309
 42c:	3b0b3a0b 	0x3b0b3a0b
 430:	010b390b 	fmin.d	$f11,$f8,$f14
 434:	0a000013 	0x0a000013
 438:	0803000d 	0x0803000d
 43c:	0b3b0b3a 	0x0b3b0b3a
 440:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 444:	00000b38 	0x00000b38
 448:	0b000f0b 	0x0b000f0b
 44c:	0c00000b 	0x0c00000b
 450:	08030113 	0x08030113
 454:	0b3a0b0b 	0x0b3a0b0b
 458:	0b390b3b 	0x0b390b3b
 45c:	00001301 	clo.w	$r1,$r24
 460:	0b000f0d 	0x0b000f0d
 464:	0013490b 	maskeqz	$r11,$r8,$r18
 468:	01130e00 	fcopysign.d	$f0,$f16,$f3
 46c:	050b0e03 	0x050b0e03
 470:	0b3b0b3a 	0x0b3b0b3a
 474:	13010b39 	addu16i.d	$r25,$r25,-16318(0xc042)
 478:	0d0f0000 	0x0d0f0000
 47c:	3a080300 	0x3a080300
 480:	390b3b0b 	0x390b3b0b
 484:	3813490b 	0x3813490b
 488:	10000005 	addu16i.d	$r5,$r0,0
 48c:	08030113 	0x08030113
 490:	0b3a050b 	0x0b3a050b
 494:	0b390b3b 	0x0b390b3b
 498:	00001301 	clo.w	$r1,$r24
 49c:	03000d11 	lu52i.d	$r17,$r8,3(0x3)
 4a0:	3b0b3a0e 	0x3b0b3a0e
 4a4:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d0fdc <__stack_start+0xce30c>
 4a8:	000b3813 	0x000b3813
 4ac:	00151200 	or	$r0,$r16,$r4
 4b0:	00001927 	cto.w	$r7,$r9
 4b4:	27011513 	stptr.d	$r19,$r8,276(0x114)
 4b8:	01134919 	fcopysign.d	$f25,$f8,$f18
 4bc:	14000013 	lu12i.w	$r19,0
 4c0:	13490005 	addu16i.d	$r5,$r0,-11712(0xd240)
 4c4:	13150000 	addu16i.d	$r0,$r0,-15040(0xc540)
 4c8:	0b080301 	0x0b080301
 4cc:	3b0b3a05 	0x3b0b3a05
 4d0:	010b3905 	fmin.d	$f5,$f8,$f14
 4d4:	16000013 	lu32i.d	$r19,0
 4d8:	0803000d 	0x0803000d
 4dc:	053b0b3a 	0x053b0b3a
 4e0:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 4e4:	00000b38 	0x00000b38
 4e8:	03000d17 	lu52i.d	$r23,$r8,3(0x3)
 4ec:	3b0b3a08 	0x3b0b3a08
 4f0:	490b3905 	bcnez	$fcc0,1379128(0x150b38) # 151028 <__heap_end+0x4e358>
 4f4:	00053813 	alsl.w	$r19,$r0,$r14,0x3
 4f8:	00261800 	crcc.w.b.w	$r0,$r0,$r6
 4fc:	00001349 	clo.w	$r9,$r26
 500:	03011319 	lu52i.d	$r25,$r24,68(0x44)
 504:	3a0b0b08 	0x3a0b0b08
 508:	39053b0b 	0x39053b0b
 50c:	0013010b 	maskeqz	$r11,$r8,$r0
 510:	01131a00 	fcopysign.d	$f0,$f16,$f6
 514:	0b3a0b0b 	0x0b3a0b0b
 518:	0b39053b 	0x0b39053b
 51c:	00001301 	clo.w	$r1,$r24
 520:	0b01171b 	0x0b01171b
 524:	3b0b3a0b 	0x3b0b3a0b
 528:	010b3905 	fmin.d	$f5,$f8,$f14
 52c:	1c000013 	pcaddu12i	$r19,0
 530:	0803000d 	0x0803000d
 534:	053b0b3a 	0x053b0b3a
 538:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 53c:	151d0000 	lu12i.w	$r0,-464896(0x8e800)
 540:	01192701 	fcvt.d.s	$f1,$f24
 544:	1e000013 	pcaddu18i	$r19,0
 548:	08030034 	0x08030034
 54c:	053b0b3a 	0x053b0b3a
 550:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 554:	193c193f 	pcaddi	$r31,-401207(0x9e0c9)
 558:	341f0000 	0x341f0000
 55c:	3a080300 	0x3a080300
 560:	390b3b0b 	0x390b3b0b
 564:	3f13490b 	0x3f13490b
 568:	00193c19 	srl.d	$r25,$r0,$r15
 56c:	00212000 	div.wu	$r0,$r0,$r8
 570:	2e210000 	0x2e210000
 574:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 578:	3b0b3a08 	0x3b0b3a08
 57c:	270b390b 	stptr.d	$r11,$r8,2872(0xb38)
 580:	11134919 	addu16i.d	$r25,$r8,17618(0x44d2)
 584:	40061201 	beqz	$r16,263696(0x40610) # 40b94 <_bss_end+0x3dec4>
 588:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 58c:	00001301 	clo.w	$r1,$r24
 590:	03000522 	lu52i.d	$r2,$r9,1(0x1)
 594:	3b0b3a08 	0x3b0b3a08
 598:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d10d0 <__stack_start+0xce400>
 59c:	00170213 	sll.w	$r19,$r16,$r0
 5a0:	00052300 	alsl.w	$r0,$r24,$r8,0x3
 5a4:	0b3a0803 	0x0b3a0803
 5a8:	0b390b3b 	0x0b390b3b
 5ac:	18021349 	pcaddi	$r9,4250(0x109a)
 5b0:	01000000 	0x01000000
 5b4:	08250111 	fmadd.d	$f17,$f8,$f0,$f10
 5b8:	08030b13 	0x08030b13
 5bc:	0111081b 	fscaleb.d	$f27,$f0,$f2
 5c0:	17100612 	lu32i.d	$r18,-491472(0x88030)
 5c4:	01020000 	0x01020000
 5c8:	01134901 	fcopysign.d	$f1,$f8,$f18
 5cc:	03000013 	lu52i.d	$r19,$r0,0
 5d0:	00000021 	0x00000021
 5d4:	0b002404 	0x0b002404
 5d8:	030b3e0b 	lu52i.d	$r11,$r16,719(0x2cf)
 5dc:	05000008 	0x05000008
 5e0:	08030034 	0x08030034
 5e4:	0b3b0b3a 	0x0b3b0b3a
 5e8:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 5ec:	193c193f 	pcaddi	$r31,-401207(0x9e0c9)
 5f0:	2e060000 	0x2e060000
 5f4:	03193f01 	lu52i.d	$r1,$r24,1615(0x64f)
 5f8:	3b0b3a08 	0x3b0b3a08
 5fc:	270b390b 	stptr.d	$r11,$r8,2872(0xb38)
 600:	11134919 	addu16i.d	$r25,$r8,17618(0x44d2)
 604:	40061201 	beqz	$r16,263696(0x40610) # 40c14 <_bss_end+0x3df44>
 608:	19429718 	pcaddi	$r24,-387912(0xa14b8)
 60c:	00001301 	clo.w	$r1,$r24
 610:	03000507 	lu52i.d	$r7,$r8,1(0x1)
 614:	3b0b3a08 	0x3b0b3a08
 618:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1150 <__stack_start+0xce480>
 61c:	00170213 	sll.w	$r19,$r16,$r0
 620:	11010000 	addu16i.d	$r0,$r0,16448(0x4040)
 624:	13082501 	addu16i.d	$r1,$r8,-15863(0xc209)
 628:	1b08030b 	pcalau12i	$r11,-507880(0x84018)
 62c:	12011108 	addu16i.d	$r8,$r8,-32700(0x8044)
 630:	00171006 	sll.w	$r6,$r0,$r4
 634:	00240200 	crc.w.b.w	$r0,$r16,$r0
 638:	0b3e0b0b 	0x0b3e0b0b
 63c:	00000803 	0x00000803
 640:	03001603 	lu52i.d	$r3,$r16,5(0x5)
 644:	3b0b3a08 	0x3b0b3a08
 648:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1180 <__stack_start+0xce4b0>
 64c:	04000013 	csrrd	$r19,0x0
 650:	08030016 	0x08030016
 654:	053b0b3a 	0x053b0b3a
 658:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 65c:	17050000 	lu32i.d	$r0,-514048(0x82800)
 660:	3a0b0b01 	0x3a0b0b01
 664:	390b3b0b 	0x390b3b0b
 668:	0013010b 	maskeqz	$r11,$r8,$r0
 66c:	000d0600 	bytepick.d	$r0,$r16,$r1,0x2
 670:	0b3a0803 	0x0b3a0803
 674:	0b390b3b 	0x0b390b3b
 678:	00001349 	clo.w	$r9,$r26
 67c:	49010107 	bcnez	$fcc0,1900800(0x1d0100) # 1d077c <__heap_end+0xcdaac>
 680:	00130113 	maskeqz	$r19,$r8,$r0
 684:	00210800 	div.wu	$r0,$r0,$r2
 688:	0b2f1349 	0x0b2f1349
 68c:	13090000 	addu16i.d	$r0,$r0,-15808(0xc240)
 690:	3a0b0b01 	0x3a0b0b01
 694:	390b3b0b 	0x390b3b0b
 698:	0013010b 	maskeqz	$r11,$r8,$r0
 69c:	000d0a00 	bytepick.d	$r0,$r16,$r2,0x2
 6a0:	0b3a0803 	0x0b3a0803
 6a4:	0b390b3b 	0x0b390b3b
 6a8:	0b381349 	0x0b381349
 6ac:	0f0b0000 	0x0f0b0000
 6b0:	000b0b00 	0x000b0b00
 6b4:	000f0c00 	bytepick.d	$r0,$r0,$r3,0x6
 6b8:	13490b0b 	addu16i.d	$r11,$r24,-11710(0xd242)
 6bc:	260d0000 	ldptr.d	$r0,$r0,3328(0xd00)
 6c0:	00134900 	maskeqz	$r0,$r8,$r18
 6c4:	01130e00 	fcopysign.d	$f0,$f16,$f3
 6c8:	0b0b0803 	0x0b0b0803
 6cc:	0b3b0b3a 	0x0b3b0b3a
 6d0:	13010b39 	addu16i.d	$r25,$r25,-16318(0xc042)
 6d4:	130f0000 	addu16i.d	$r0,$r0,-15424(0xc3c0)
 6d8:	0b0e0301 	0x0b0e0301
 6dc:	3b0b3a05 	0x3b0b3a05
 6e0:	010b390b 	fmin.d	$f11,$f8,$f14
 6e4:	10000013 	addu16i.d	$r19,$r0,0
 6e8:	0803000d 	0x0803000d
 6ec:	0b3b0b3a 	0x0b3b0b3a
 6f0:	13490b39 	addu16i.d	$r25,$r25,-11710(0xd242)
 6f4:	00000538 	0x00000538
 6f8:	03011311 	lu52i.d	$r17,$r24,68(0x44)
 6fc:	3a050b08 	0x3a050b08
 700:	390b3b0b 	0x390b3b0b
 704:	0013010b 	maskeqz	$r11,$r8,$r0
 708:	000d1200 	bytepick.d	$r0,$r16,$r4,0x2
 70c:	0b3a0e03 	0x0b3a0e03
 710:	0b390b3b 	0x0b390b3b
 714:	0b381349 	0x0b381349
 718:	15130000 	lu12i.w	$r0,-485376(0x89800)
 71c:	00192700 	srl.d	$r0,$r24,$r9
 720:	01151400 	0x01151400
 724:	13491927 	addu16i.d	$r7,$r9,-11706(0xd246)
 728:	00001301 	clo.w	$r1,$r24
 72c:	49000515 	bcnez	$fcc0,-2818044(0x550004) # ffd50730 <_etext+0xe3d438e0>
 730:	16000013 	lu32i.d	$r19,0
 734:	08030113 	0x08030113
 738:	0b3a050b 	0x0b3a050b
 73c:	0b39053b 	0x0b39053b
 740:	00001301 	clo.w	$r1,$r24
 744:	03000d17 	lu52i.d	$r23,$r8,3(0x3)
 748:	3b0b3a08 	0x3b0b3a08
 74c:	490b3905 	bcnez	$fcc0,1379128(0x150b38) # 151284 <__heap_end+0x4e5b4>
 750:	000b3813 	0x000b3813
 754:	000d1800 	bytepick.d	$r0,$r0,$r6,0x2
 758:	0b3a0803 	0x0b3a0803
 75c:	0b39053b 	0x0b39053b
 760:	05381349 	0x05381349
 764:	13190000 	addu16i.d	$r0,$r0,-14784(0xc640)
 768:	0b080301 	0x0b080301
 76c:	3b0b3a0b 	0x3b0b3a0b
 770:	010b3905 	fmin.d	$f5,$f8,$f14
 774:	1a000013 	pcalau12i	$r19,0
 778:	0b0b0113 	0x0b0b0113
 77c:	053b0b3a 	0x053b0b3a
 780:	13010b39 	addu16i.d	$r25,$r25,-16318(0xc042)
 784:	171b0000 	lu32i.d	$r0,-468992(0x8d800)
 788:	3a0b0b01 	0x3a0b0b01
 78c:	39053b0b 	0x39053b0b
 790:	0013010b 	maskeqz	$r11,$r8,$r0
 794:	000d1c00 	bytepick.d	$r0,$r0,$r7,0x2
 798:	0b3a0803 	0x0b3a0803
 79c:	0b39053b 	0x0b39053b
 7a0:	00001349 	clo.w	$r9,$r26
 7a4:	2701151d 	stptr.d	$r29,$r8,276(0x114)
 7a8:	00130119 	maskeqz	$r25,$r8,$r0
 7ac:	00341e00 	0x00341e00
 7b0:	0b3a0803 	0x0b3a0803
 7b4:	0b39053b 	0x0b39053b
 7b8:	193f1349 	pcaddi	$r9,-395110(0x9f89a)
 7bc:	0000193c 	cto.w	$r28,$r9
 7c0:	0000211f 	clo.d	$r31,$r8
 7c4:	00342000 	0x00342000
 7c8:	0b3a0803 	0x0b3a0803
 7cc:	0b390b3b 	0x0b390b3b
 7d0:	193f1349 	pcaddi	$r9,-395110(0x9f89a)
 7d4:	0000193c 	cto.w	$r28,$r9
 7d8:	3f012e21 	0x3f012e21
 7dc:	3a080319 	0x3a080319
 7e0:	390b3b0b 	0x390b3b0b
 7e4:	4919270b 	0x4919270b
 7e8:	12011113 	addu16i.d	$r19,$r8,-32700(0x8044)
 7ec:	97184006 	0x97184006
 7f0:	00001942 	cto.w	$r2,$r10
 7f4:	03000522 	lu52i.d	$r2,$r9,1(0x1)
 7f8:	3b0b3a08 	0x3b0b3a08
 7fc:	490b390b 	bcnez	$fcc0,2951992(0x2d0b38) # 2d1334 <__stack_start+0xce664>
 800:	00170213 	sll.w	$r19,$r16,$r0
 804:	00052300 	alsl.w	$r0,$r24,$r8,0x3
 808:	0b3a0803 	0x0b3a0803
 80c:	0b390b3b 	0x0b390b3b
 810:	18021349 	pcaddi	$r9,4250(0x109a)
 814:	Address 0x0000000000000814 is out of bounds.


Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000070 	0x00000070
   4:	00000084 	0x00000084
   8:	84540001 	0x84540001
   c:	3c000000 	0x3c000000
  10:	01000001 	0x01000001
  14:	013c6600 	0x013c6600
  18:	01440000 	0x01440000
  1c:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  20:	9f5401f3 	0x9f5401f3
	...
  2c:	00000098 	0x00000098
  30:	000000b0 	0x000000b0
  34:	9f320002 	0x9f320002
  38:	00000120 	0x00000120
  3c:	00000144 	0x00000144
  40:	9f300002 	0x9f300002
	...
  4c:	00000098 	0x00000098
  50:	000000b0 	0x000000b0
  54:	9f300002 	0x9f300002
  58:	000000d0 	0x000000d0
  5c:	000000e8 	0x000000e8
  60:	007a0008 	bstrins.w	$r8,$r0,0x1a,0x0
  64:	ff082d30 	0xff082d30
  68:	00e89f1a 	bstrpick.d	$r26,$r24,0x28,0x27
  6c:	00f80000 	bstrpick.d	$r0,$r0,0x38,0x0
  70:	00080000 	bytepick.w	$r0,$r0,$r0,0x0
  74:	2d300079 	0x2d300079
  78:	9f1aff08 	0x9f1aff08
  7c:	000000f8 	0x000000f8
  80:	00000144 	0x00000144
  84:	007a0008 	bstrins.w	$r8,$r0,0x1a,0x0
  88:	ff082d30 	0xff082d30
  8c:	00009f1a 	0x00009f1a
  90:	00000000 	0x00000000
  94:	00980000 	bstrins.d	$r0,$r0,0x18,0x0
  98:	00b00000 	bstrins.d	$r0,$r0,0x30,0x0
  9c:	00020000 	0x00020000
  a0:	00b09f30 	bstrins.d	$r16,$r25,0x30,0x27
  a4:	00f40000 	bstrpick.d	$r0,$r0,0x34,0x0
  a8:	00010000 	asrtle.d	$r0,$r0
  ac:	0000f459 	0x0000f459
  b0:	0000fc00 	0x0000fc00
  b4:	58000100 	beq	$r8,$r0,0 # b4 <__DYNAMIC+0xb4>
  b8:	000000fc 	0x000000fc
  bc:	00000144 	0x00000144
  c0:	00590001 	0x00590001
  c4:	00000000 	0x00000000
  c8:	b0000000 	0xb0000000
  cc:	d0000000 	0xd0000000
  d0:	05000000 	0x05000000
  d4:	244b4000 	ldptr.w	$r0,$r0,19264(0x4b40)
  d8:	00d09f1f 	bstrpick.d	$r31,$r24,0x10,0x27
  dc:	01440000 	0x01440000
  e0:	00010000 	asrtle.d	$r0,$r0
  e4:	00000056 	0x00000056
  e8:	00000000 	0x00000000
  ec:	00009800 	0x00009800
  f0:	0000b000 	0x0000b000
  f4:	30000600 	0x30000600
  f8:	9304939f 	0x9304939f
  fc:	0000d004 	0x0000d004
 100:	0000d400 	0x0000d400
 104:	54000500 	bl	67108868(0x4000004) # 4000108 <__stack_start+0x3dfd438>
 108:	04930493 	csrxchg	$r19,$r4,0x24c1
 10c:	00000108 	0x00000108
 110:	00000114 	0x00000114
 114:	93540005 	0x93540005
 118:	14049304 	lu12i.w	$r4,9368(0x2498)
 11c:	20000001 	ll.w	$r1,$r0,0
 120:	05000001 	0x05000001
 124:	04935400 	csrrd	$r0,0x24d5
 128:	00000493 	0x00000493
	...
 134:	00480000 	0x00480000
 138:	00010000 	asrtle.d	$r0,$r0
 13c:	00004854 	bitrev.4b	$r20,$r2
 140:	00004c00 	bitrev.8b	$r0,$r0
 144:	f3000400 	0xf3000400
 148:	4c9f5401 	jirl	$r1,$r0,40788(0x9f54)
 14c:	54000000 	bl	0 # 14c <__DYNAMIC+0x14c>
 150:	01000000 	0x01000000
 154:	00545400 	0x00545400
 158:	00580000 	0x00580000
 15c:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 160:	9f5401f3 	0x9f5401f3
 164:	00000058 	0x00000058
 168:	00000070 	0x00000070
 16c:	00540001 	0x00540001
 170:	00000000 	0x00000000
 174:	2c000000 	vld	$vr0,$r0,0
 178:	44000000 	bnez	$r0,0 # 178 <__DYNAMIC+0x178>
 17c:	01000000 	0x01000000
 180:	00445500 	0x00445500
 184:	004c0000 	0x004c0000
 188:	00030000 	0x00030000
 18c:	4c9fff09 	jirl	$r9,$r24,40956(0x9ffc)
 190:	58000000 	beq	$r0,$r0,0 # 190 <__DYNAMIC+0x190>
 194:	01000000 	0x01000000
 198:	005c5500 	0x005c5500
 19c:	00640000 	bstrins.w	$r0,$r0,0x4,0x0
 1a0:	00050000 	alsl.w	$r0,$r0,$r0,0x3
 1a4:	002cc803 	alsl.d	$r3,$r0,$r18,0x2
	...
 1b0:	00001800 	cto.w	$r0,$r0
 1b4:	00002c00 	ctz.d	$r0,$r0
 1b8:	30000200 	0x30000200
 1bc:	00002c9f 	ctz.d	$r31,$r4
 1c0:	00005800 	ext.w.h	$r0,$r0
 1c4:	56000100 	bl	67239936(0x4020000) # 40201c4 <__stack_start+0x3e1d4f4>
 1c8:	00000058 	0x00000058
 1cc:	0000005c 	0x0000005c
 1d0:	9f300002 	0x9f300002
 1d4:	0000005c 	0x0000005c
 1d8:	00000064 	0x00000064
 1dc:	00560001 	0x00560001
	...
 1e8:	14000000 	lu12i.w	$r0,0
 1ec:	01000000 	0x01000000
 1f0:	00145400 	nor	$r0,$r0,$r21
 1f4:	00300000 	0x00300000
 1f8:	00010000 	asrtle.d	$r0,$r0
 1fc:	00000066 	0x00000066
	...
 208:	00003000 	revb.2h	$r0,$r0
 20c:	54000100 	bl	67108864(0x4000000) # 400020c <__stack_start+0x3dfd53c>
 210:	00000030 	0x00000030
 214:	0000007c 	0x0000007c
 218:	01f30004 	0x01f30004
 21c:	00009f54 	0x00009f54
	...
 228:	00300000 	0x00300000
 22c:	00010000 	asrtle.d	$r0,$r0
 230:	00003055 	revb.2h	$r21,$r2
 234:	00007c00 	0x00007c00
 238:	f3000400 	0xf3000400
 23c:	009f5501 	bstrins.d	$r1,$r8,0x1f,0x15
	...
 248:	30000000 	0x30000000
 24c:	01000000 	0x01000000
 250:	00305600 	0x00305600
 254:	00740000 	bstrins.w	$r0,$r0,0x14,0x0
 258:	00010000 	asrtle.d	$r0,$r0
 25c:	00007469 	0x00007469
 260:	00007c00 	0x00007c00
 264:	54000100 	bl	67108864(0x4000000) # 4000264 <__stack_start+0x3dfd594>
	...
 274:	00000030 	0x00000030
 278:	9f300002 	0x9f300002
 27c:	00000030 	0x00000030
 280:	00000034 	0x00000034
 284:	00860007 	bstrins.d	$r7,$r0,0x6,0x0
 288:	1c5501f3 	pcaddu12i	$r19,174095(0x2a80f)
 28c:	0000349f 	revb.4h	$r31,$r4
 290:	00003800 	revb.2w	$r0,$r0
 294:	f3000800 	0xf3000800
 298:	86205501 	0x86205501
 29c:	3c9f2200 	0x3c9f2200
 2a0:	54000000 	bl	0 # 2a0 <__DYNAMIC+0x2a0>
 2a4:	07000000 	0x07000000
 2a8:	f3008600 	0xf3008600
 2ac:	9f1c5501 	0x9f1c5501
 2b0:	00000054 	0x00000054
 2b4:	00000058 	0x00000058
 2b8:	01f30008 	0x01f30008
 2bc:	00862055 	bstrins.d	$r21,$r2,0x6,0x8
 2c0:	00009f22 	0x00009f22
	...
 2cc:	00100000 	add.w	$r0,$r0,$r0
 2d0:	00010000 	asrtle.d	$r0,$r0
 2d4:	00001054 	clo.w	$r20,$r2
 2d8:	00001400 	clz.w	$r0,$r0
 2dc:	f3000400 	0xf3000400
 2e0:	009f5401 	bstrins.d	$r1,$r0,0x1f,0x15
	...
 2ec:	04000000 	csrrd	$r0,0x0
 2f0:	01000000 	0x01000000
 2f4:	00045400 	alsl.w	$r0,$r0,$r21,0x1
 2f8:	00080000 	bytepick.w	$r0,$r0,$r0,0x0
 2fc:	00040000 	alsl.w	$r0,$r0,$r0,0x1
 300:	9f5401f3 	0x9f5401f3
	...
 310:	00000004 	0x00000004
 314:	04540001 	csrrd	$r1,0x1500
 318:	08000000 	0x08000000
 31c:	04000000 	csrrd	$r0,0x0
 320:	5401f300 	bl	-67108368(0xc0001f0) # fc000510 <_etext+0xdfff36c0>
 324:	0000009f 	0x0000009f
 328:	00000000 	0x00000000
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	0x0000001c
   4:	00000002 	0x00000002
   8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
   c:	00000000 	0x00000000
  10:	1c00066c 	pcaddu12i	$r12,51(0x33)
  14:	00000144 	0x00000144
	...
  20:	0000001c 	0x0000001c
  24:	0e430002 	0x0e430002
  28:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  2c:	00000000 	0x00000000
  30:	1c0007b0 	pcaddu12i	$r16,61(0x3d)
  34:	00000038 	0x00000038
	...
  40:	0000001c 	0x0000001c
  44:	0f950002 	0x0f950002
  48:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  4c:	00000000 	0x00000000
  50:	1c009814 	pcaddu12i	$r20,1216(0x4c0)
  54:	0000007c 	0x0000007c
	...
  60:	0000001c 	0x0000001c
  64:	11170002 	addu16i.d	$r2,$r0,17856(0x45c0)
  68:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  6c:	00000000 	0x00000000
  70:	1c009890 	pcaddu12i	$r16,1220(0x4c4)
  74:	00000014 	0x00000014
	...
  80:	0000001c 	0x0000001c
  84:	1fc60002 	pcaddu18i	$r2,-118784(0xe3000)
  88:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  8c:	00000000 	0x00000000
  90:	1c0098a4 	pcaddu12i	$r4,1221(0x4c5)
  94:	00000008 	0x00000008
	...
  a0:	0000001c 	0x0000001c
  a4:	20da0002 	ll.w	$r2,$r0,-9728(0xda00)
  a8:	00040000 	alsl.w	$r0,$r0,$r0,0x1
  ac:	00000000 	0x00000000
  b0:	1c0098ac 	pcaddu12i	$r12,1221(0x4c5)
  b4:	00000008 	0x00000008
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	000004b8 	0x000004b8
   4:	011b0004 	0x011b0004
   8:	01010000 	fadd.d	$f0,$f0,$f0
   c:	0df2f601 	0x0df2f601
  10:	01010100 	fadd.d	$f0,$f8,$f0
  14:	00000001 	0x00000001
  18:	01000001 	0x01000001
  1c:	2e2f2e2e 	0x2e2f2e2e
  20:	2e2e2f2e 	0x2e2e2f2e
  24:	77656e2f 	xvssrani.wu.d	$xr15,$xr17,0x1b
  28:	2f62696c 	0x2f62696c
  2c:	6362696c 	blt	$r11,$r12,-40344(0x36268) # ffff6294 <_etext+0xe3fe9444>
  30:	636e692f 	blt	$r9,$r15,-37272(0x36e68) # ffff6e98 <_etext+0xe3fea048>
  34:	6564756c 	bge	$r11,$r12,91252(0x16474) # 164a8 <_bss_end+0x137d8>
  38:	2f2e2e00 	0x2f2e2e00
  3c:	2e2f2e2e 	0x2e2f2e2e
  40:	656e2f2e 	bge	$r25,$r14,93740(0x16e2c) # 16e6c <_bss_end+0x1419c>
  44:	62696c77 	blt	$r3,$r23,-104084(0x2696c) # fffe69b0 <_etext+0xe3fd9b60>
  48:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe69b4 <_etext+0xe3fd9b64>
  4c:	6e692f63 	bgeu	$r27,$r3,-104148(0x2692c) # fffe6978 <_etext+0xe3fd9b28>
  50:	64756c63 	bge	$r3,$r3,30060(0x756c) # 75bc <_bss_end+0x48ec>
  54:	79732f65 	0x79732f65
  58:	2e2e0073 	0x2e2e0073
  5c:	2f2e2e2f 	0x2f2e2e2f
  60:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe6fcc <_etext+0xe3fda17c>
  64:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff72c4 <_etext+0xe3fea474>
  68:	00323368 	0x00323368
  6c:	6d6f682f 	bgeu	$r1,$r15,94056(0x16f68) # 16fd4 <_bss_end+0x14304>
  70:	68632f65 	bltu	$r27,$r5,25388(0x632c) # 639c <_bss_end+0x36cc>
  74:	657a6e65 	bge	$r19,$r5,96876(0x17a6c) # 17ae0 <_bss_end+0x14e10>
  78:	61756873 	blt	$r3,$r19,95592(0x17568) # 175e0 <_bss_end+0x14910>
  7c:	6e692f69 	bgeu	$r27,$r9,-104148(0x2692c) # fffe69a8 <_etext+0xe3fd9b58>
  80:	6c617473 	bgeu	$r3,$r19,24948(0x6174) # 61f4 <_bss_end+0x3524>
  84:	696c2f6c 	bltu	$r27,$r12,93228(0x16c2c) # 16cb0 <_bss_end+0x13fe0>
  88:	63672f62 	blt	$r27,$r2,-39124(0x3672c) # ffff67b4 <_etext+0xe3fe9964>
  8c:	6f6c2f63 	bgeu	$r27,$r3,-37844(0x36c2c) # ffff6cb8 <_etext+0xe3fe9e68>
  90:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 167fc <_bss_end+0x13b2c>
  94:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
  98:	6e752d32 	bgeu	$r9,$r18,-101076(0x2752c) # fffe75c4 <_etext+0xe3fda774>
  9c:	776f6e6b 	xvssrarni.du.q	$xr11,$xr19,0x5b
  a0:	6c652d6e 	bgeu	$r11,$r14,25900(0x652c) # 65cc <_bss_end+0x38fc>
  a4:	2e382f66 	0x2e382f66
  a8:	2f302e33 	0x2f302e33
  ac:	6c636e69 	bgeu	$r19,$r9,25452(0x636c) # 6418 <_bss_end+0x3748>
  b0:	00656475 	bstrins.w	$r21,$r3,0x5,0x19
  b4:	73797300 	0x73797300
  b8:	6c6c6163 	bgeu	$r11,$r3,27744(0x6c60) # 6d18 <_bss_end+0x4048>
  bc:	00632e73 	bstrins.w	$r19,$r19,0x3,0xb
  c0:	73000003 	0x73000003
  c4:	6c2f7379 	bgeu	$r27,$r25,12144(0x2f70) # 3034 <_bss_end+0x364>
  c8:	2e6b636f 	0x2e6b636f
  cc:	00010068 	0x00010068
  d0:	73797300 	0x73797300
  d4:	79745f2f 	0x79745f2f
  d8:	2e736570 	0x2e736570
  dc:	00010068 	0x00010068
  e0:	64747300 	bge	$r24,$r0,29808(0x7470) # 7550 <_bss_end+0x4880>
  e4:	2e666564 	0x2e666564
  e8:	00040068 	alsl.w	$r8,$r3,$r0,0x1
  ec:	73797300 	0x73797300
  f0:	7079742f 	0x7079742f
  f4:	682e7365 	bltu	$r27,$r5,11888(0x2e70) # 2f64 <_bss_end+0x294>
  f8:	00000100 	0x00000100
  fc:	2f737973 	0x2f737973
 100:	6e656572 	bgeu	$r11,$r18,-105116(0x26564) # fffe6664 <_etext+0xe3fd9814>
 104:	00682e74 	bstrins.w	$r20,$r19,0x8,0xb
 108:	74000001 	xvseq.b	$xr1,$xr0,$xr0
 10c:	2e656d69 	0x2e656d69
 110:	00010068 	0x00010068
 114:	73797300 	0x73797300
 118:	6d69742f 	bgeu	$r1,$r15,92532(0x16974) # 16a8c <_bss_end+0x13dbc>
 11c:	682e7365 	bltu	$r27,$r5,11888(0x2e70) # 2f8c <_bss_end+0x2bc>
 120:	00000100 	0x00000100
 124:	02050000 	slti	$r0,$r0,320(0x140)
 128:	1c00066c 	pcaddu12i	$r12,51(0x33)
 12c:	00010551 	0x00010551
 130:	066c0205 	0x066c0205
 134:	05181c00 	0x05181c00
 138:	02050003 	slti	$r3,$r0,320(0x140)
 13c:	1c00066c 	pcaddu12i	$r12,51(0x33)
 140:	00030519 	0x00030519
 144:	066c0205 	0x066c0205
 148:	01061c00 	0x01061c00
 14c:	05000705 	0x05000705
 150:	00068002 	alsl.wu	$r2,$r0,$r0,0x2
 154:	0605011c 	cacop	0x1c,$r8,320(0x140)
 158:	84020500 	0x84020500
 15c:	061c0006 	cacop	0x6,$r0,1792(0x700)
 160:	0003051a 	0x0003051a
 164:	06840205 	0x06840205
 168:	051b1c00 	0x051b1c00
 16c:	02050003 	slti	$r3,$r0,320(0x140)
 170:	1c000684 	pcaddu12i	$r4,52(0x34)
 174:	0003051e 	0x0003051e
 178:	06840205 	0x06840205
 17c:	03061c00 	lu52i.d	$r0,$r0,391(0x187)
 180:	10050175 	addu16i.d	$r21,$r11,320(0x140)
 184:	88020500 	0x88020500
 188:	221c0006 	ll.d	$r6,$r0,7168(0x1c00)
 18c:	05000605 	0x05000605
 190:	00068c02 	alsl.wu	$r2,$r0,$r3,0x2
 194:	0402001c 	csrrd	$r28,0x80
 198:	49050101 	bcnez	$fcc0,328960(0x50500) # 50698 <_bss_end+0x4d9c8>
 19c:	94020500 	0x94020500
 1a0:	011c0006 	0x011c0006
 1a4:	05003205 	0x05003205
 1a8:	00069802 	alsl.wu	$r2,$r0,$r6,0x2
 1ac:	0402001c 	csrrd	$r28,0x80
 1b0:	051c0600 	0x051c0600
 1b4:	02050003 	slti	$r3,$r0,320(0x140)
 1b8:	1c000698 	pcaddu12i	$r24,52(0x34)
 1bc:	06050106 	cacop	0x6,$r8,320(0x140)
 1c0:	9c020500 	0x9c020500
 1c4:	001c0006 	mul.w	$r6,$r0,$r0
 1c8:	01010402 	fadd.d	$f2,$f0,$f1
 1cc:	05002e05 	0x05002e05
 1d0:	0006a002 	alsl.wu	$r2,$r0,$r8,0x2
 1d4:	1805011c 	pcaddi	$r28,10248(0x2808)
 1d8:	ac020500 	0xac020500
 1dc:	001c0006 	mul.w	$r6,$r0,$r0
 1e0:	18000402 	pcaddi	$r2,32(0x20)
 1e4:	05000905 	0x05000905
 1e8:	0006b002 	alsl.wu	$r2,$r0,$r12,0x2
 1ec:	051b061c 	0x051b061c
 1f0:	02050003 	slti	$r3,$r0,320(0x140)
 1f4:	1c0006b0 	pcaddu12i	$r16,53(0x35)
 1f8:	01051806 	fmul.d	$f6,$f0,$f6
 1fc:	b8020500 	0xb8020500
 200:	061c0006 	cacop	0x6,$r0,1792(0x700)
 204:	00040514 	alsl.w	$r20,$r8,$r1,0x1
 208:	06b80205 	0x06b80205
 20c:	01061c00 	0x01061c00
 210:	05000d05 	0x05000d05
 214:	0006bc02 	alsl.wu	$r2,$r0,$r15,0x2
 218:	01051a1c 	fmul.d	$f28,$f16,$f6
 21c:	c4020500 	0xc4020500
 220:	061c0006 	cacop	0x6,$r0,1792(0x700)
 224:	0005050d 	alsl.w	$r13,$r8,$r1,0x3
 228:	06c40205 	0x06c40205
 22c:	01061c00 	0x01061c00
 230:	05000b05 	0x05000b05
 234:	0006c802 	alsl.wu	$r2,$r0,$r18,0x2
 238:	0518061c 	0x0518061c
 23c:	02050005 	slti	$r5,$r0,320(0x140)
 240:	1c0006c8 	pcaddu12i	$r8,54(0x36)
 244:	0a050106 	0x0a050106
 248:	d0020500 	0xd0020500
 24c:	061c0006 	cacop	0x6,$r0,1792(0x700)
 250:	05017103 	0x05017103
 254:	02050004 	slti	$r4,$r0,320(0x140)
 258:	1c0006d0 	pcaddu12i	$r16,54(0x36)
 25c:	0d050106 	0x0d050106
 260:	dc020500 	0xdc020500
 264:	061c0006 	cacop	0x6,$r0,1792(0x700)
 268:	00010536 	0x00010536
 26c:	06dc0205 	0x06dc0205
 270:	05181c00 	0x05181c00
 274:	02050002 	slti	$r2,$r0,320(0x140)
 278:	1c0006dc 	pcaddu12i	$r28,54(0x36)
 27c:	01051606 	fmul.d	$f6,$f16,$f5
 280:	e4020500 	0xe4020500
 284:	1a1c0006 	pcalau12i	$r6,57344(0xe000)
 288:	05000205 	0x05000205
 28c:	0006e802 	alsl.wu	$r2,$r0,$r26,0x2
 290:	0105141c 	fmul.d	$f28,$f0,$f5
 294:	ec020500 	0xec020500
 298:	1a1c0006 	pcalau12i	$r6,57344(0xe000)
 29c:	05000205 	0x05000205
 2a0:	0006f002 	alsl.wu	$r2,$r0,$r28,0x2
 2a4:	0105141c 	fmul.d	$f28,$f0,$f5
 2a8:	f4020500 	0xf4020500
 2ac:	181c0006 	pcaddi	$r6,57344(0xe000)
 2b0:	05000f05 	0x05000f05
 2b4:	0006fc02 	alsl.wu	$r2,$r0,$r31,0x2
 2b8:	0518061c 	0x0518061c
 2bc:	02050002 	slti	$r2,$r0,320(0x140)
 2c0:	1c0006fc 	pcaddu12i	$r28,55(0x37)
 2c4:	0f050106 	0x0f050106
 2c8:	00020500 	0x00020500
 2cc:	061c0007 	cacop	0x7,$r0,1792(0x700)
 2d0:	00020518 	0x00020518
 2d4:	07040205 	0x07040205
 2d8:	05191c00 	0x05191c00
 2dc:	02050002 	slti	$r2,$r0,320(0x140)
 2e0:	1c000704 	pcaddu12i	$r4,56(0x38)
 2e4:	00050519 	alsl.w	$r25,$r8,$r1,0x3
 2e8:	07040205 	0x07040205
 2ec:	22061c00 	ll.d	$r0,$r0,1564(0x61c)
 2f0:	05001d05 	0x05001d05
 2f4:	00070c02 	alsl.wu	$r2,$r0,$r3,0x3
 2f8:	0173031c 	0x0173031c
 2fc:	05001b05 	0x05001b05
 300:	00071002 	alsl.wu	$r2,$r0,$r4,0x3
 304:	1605191c 	lu32i.d	$r28,10440(0x28c8)
 308:	14020500 	lu12i.w	$r0,4136(0x1028)
 30c:	011c0007 	0x011c0007
 310:	05000b05 	0x05000b05
 314:	00071802 	alsl.wu	$r2,$r0,$r6,0x3
 318:	1f05011c 	pcaddu18i	$r28,-514040(0x82808)
 31c:	1c020500 	pcaddu12i	$r0,4136(0x1028)
 320:	1e1c0007 	pcaddu18i	$r7,57344(0xe000)
 324:	05001905 	0x05001905
 328:	00073402 	alsl.wu	$r2,$r0,$r13,0x3
 32c:	0b05121c 	0x0b05121c
 330:	3c020500 	0x3c020500
 334:	001c0007 	mul.w	$r7,$r0,$r0
 338:	06020402 	cacop	0x2,$r0,129(0x81)
 33c:	00110524 	sub.w	$r4,$r9,$r1
 340:	073c0205 	0x073c0205
 344:	13061c00 	addu16i.d	$r0,$r0,-15993(0xc187)
 348:	05001205 	0x05001205
 34c:	00074002 	alsl.wu	$r2,$r0,$r16,0x3
 350:	0518061c 	0x0518061c
 354:	0205000d 	slti	$r13,$r0,320(0x140)
 358:	1c000740 	pcaddu12i	$r0,58(0x3a)
 35c:	00120519 	slt	$r25,$r8,$r1
 360:	07400205 	0x07400205
 364:	01061c00 	0x01061c00
 368:	05001505 	0x05001505
 36c:	00074402 	alsl.wu	$r2,$r0,$r17,0x3
 370:	0402001c 	csrrd	$r28,0x80
 374:	13051800 	addu16i.d	$r0,$r0,-16058(0xc146)
 378:	4c020500 	jirl	$r0,$r8,516(0x204)
 37c:	031c0007 	lu52i.d	$r7,$r0,1792(0x700)
 380:	14050174 	lu12i.w	$r20,10251(0x280b)
 384:	50020500 	b	67109380(0x4000204) # 4000588 <__stack_start+0x3dfd8b8>
 388:	011c0007 	0x011c0007
 38c:	05000905 	0x05000905
 390:	00075402 	alsl.wu	$r2,$r0,$r21,0x3
 394:	0519061c 	0x0519061c
 398:	0205000d 	slti	$r13,$r0,320(0x140)
 39c:	1c000754 	pcaddu12i	$r20,58(0x3a)
 3a0:	16051906 	lu32i.d	$r6,10440(0x28c8)
 3a4:	58020500 	beq	$r8,$r0,516(0x204) # 5a8 <__DYNAMIC+0x5a8>
 3a8:	161c0007 	lu32i.d	$r7,57344(0xe000)
 3ac:	05000f05 	0x05000f05
 3b0:	00075c02 	alsl.wu	$r2,$r0,$r23,0x3
 3b4:	1405161c 	lu12i.w	$r28,10416(0x28b0)
 3b8:	60020500 	blt	$r8,$r0,516(0x204) # 5bc <__DYNAMIC+0x5bc>
 3bc:	061c0007 	cacop	0x7,$r0,1792(0x700)
 3c0:	000d0518 	bytepick.d	$r24,$r8,$r1,0x2
 3c4:	07600205 	0x07600205
 3c8:	05181c00 	0x05181c00
 3cc:	0205000d 	slti	$r13,$r0,320(0x140)
 3d0:	1c000760 	pcaddu12i	$r0,59(0x3b)
 3d4:	20050106 	ll.w	$r6,$r8,1280(0x500)
 3d8:	64020500 	bge	$r8,$r0,516(0x204) # 5dc <__DYNAMIC+0x5dc>
 3dc:	011c0007 	0x011c0007
 3e0:	05000f05 	0x05000f05
 3e4:	00076802 	alsl.wu	$r2,$r0,$r26,0x3
 3e8:	0518061c 	0x0518061c
 3ec:	0205000d 	slti	$r13,$r0,320(0x140)
 3f0:	1c000768 	pcaddu12i	$r8,59(0x3b)
 3f4:	000d0518 	bytepick.d	$r24,$r8,$r1,0x2
 3f8:	07680205 	0x07680205
 3fc:	05181c00 	0x05181c00
 400:	0205000d 	slti	$r13,$r0,320(0x140)
 404:	1c000768 	pcaddu12i	$r8,59(0x3b)
 408:	18051806 	pcaddi	$r6,10432(0x28c0)
 40c:	70020500 	vsle.b	$vr0,$vr8,$vr1
 410:	161c0007 	lu32i.d	$r7,57344(0xe000)
 414:	05001205 	0x05001205
 418:	00077402 	alsl.wu	$r2,$r0,$r29,0x3
 41c:	0518061c 	0x0518061c
 420:	0205000d 	slti	$r13,$r0,320(0x140)
 424:	1c000774 	pcaddu12i	$r20,59(0x3b)
 428:	18050106 	pcaddi	$r6,10248(0x2808)
 42c:	7c020500 	0x7c020500
 430:	011c0007 	0x011c0007
 434:	05001205 	0x05001205
 438:	00078002 	alsl.wu	$r2,$r0,$r0,0x4
 43c:	0518061c 	0x0518061c
 440:	0205000d 	slti	$r13,$r0,320(0x140)
 444:	1c000780 	pcaddu12i	$r0,60(0x3c)
 448:	00110518 	sub.w	$r24,$r8,$r1
 44c:	07800205 	0x07800205
 450:	01061c00 	0x01061c00
 454:	05001305 	0x05001305
 458:	00078402 	alsl.wu	$r2,$r0,$r1,0x4
 45c:	14050d1c 	lu12i.w	$r28,10344(0x2868)
 460:	88020500 	0x88020500
 464:	011c0007 	0x011c0007
 468:	05000905 	0x05000905
 46c:	00078c02 	alsl.wu	$r2,$r0,$r3,0x4
 470:	0402001c 	csrrd	$r28,0x80
 474:	1f051402 	pcaddu18i	$r2,-513888(0x828a0)
 478:	90020500 	0x90020500
 47c:	011c0007 	0x011c0007
 480:	05000505 	0x05000505
 484:	00079c02 	alsl.wu	$r2,$r0,$r7,0x4
 488:	0402001c 	csrrd	$r28,0x80
 48c:	052a0600 	0x052a0600
 490:	02050002 	slti	$r2,$r0,320(0x140)
 494:	1c00079c 	pcaddu12i	$r28,60(0x3c)
 498:	10050106 	addu16i.d	$r6,$r8,320(0x140)
 49c:	a0020500 	0xa0020500
 4a0:	061c0007 	cacop	0x7,$r0,1792(0x700)
 4a4:	00020518 	0x00020518
 4a8:	07a00205 	0x07a00205
 4ac:	18061c00 	pcaddi	$r0,12512(0x30e0)
 4b0:	05000105 	0x05000105
 4b4:	0007b002 	alsl.wu	$r2,$r0,$r12,0x4
 4b8:	0101001c 	fadd.d	$f28,$f0,$f0
 4bc:	000000c9 	0x000000c9
 4c0:	003e0004 	0x003e0004
 4c4:	01010000 	fadd.d	$f0,$f0,$f0
 4c8:	0df2f601 	0x0df2f601
 4cc:	01010100 	fadd.d	$f0,$f8,$f0
 4d0:	00000001 	0x00000001
 4d4:	01000001 	0x01000001
 4d8:	2e2f2e2e 	0x2e2f2e2e
 4dc:	6f6c2f2e 	bgeu	$r25,$r14,-37844(0x36c2c) # ffff7108 <_etext+0xe3fea2b8>
 4e0:	61676e6f 	blt	$r19,$r15,92012(0x1676c) # 16c4c <_bss_end+0x13f7c>
 4e4:	33686372 	xvstelm.h	$xr18,$r27,48(0x30),0xa
 4e8:	2e2e2f32 	0x2e2e2f32
 4ec:	72700000 	0x72700000
 4f0:	2e746e69 	0x2e746e69
 4f4:	00010063 	0x00010063
 4f8:	756c6700 	0x756c6700
 4fc:	00682e65 	bstrins.w	$r5,$r19,0x8,0xb
 500:	00000001 	0x00000001
 504:	b0020500 	0xb0020500
 508:	2d1c0007 	0x2d1c0007
 50c:	05000105 	0x05000105
 510:	0007b002 	alsl.wu	$r2,$r0,$r12,0x4
 514:	0305181c 	lu52i.d	$r28,$r0,326(0x146)
 518:	b0020500 	0xb0020500
 51c:	061c0007 	cacop	0x7,$r0,1792(0x700)
 520:	00010516 	0x00010516
 524:	07bc0205 	0x07bc0205
 528:	05011c00 	0x05011c00
 52c:	02050001 	slti	$r1,$r0,320(0x140)
 530:	1c0007c0 	pcaddu12i	$r0,62(0x3e)
 534:	000a0518 	0x000a0518
 538:	07c40205 	0x07c40205
 53c:	05011c00 	0x05011c00
 540:	02050009 	slti	$r9,$r0,320(0x140)
 544:	1c0007c8 	pcaddu12i	$r8,62(0x3e)
 548:	05051806 	0x05051806
 54c:	c8020500 	0xc8020500
 550:	061c0007 	cacop	0x7,$r0,1792(0x700)
 554:	00120501 	slt	$r1,$r8,$r1
 558:	07cc0205 	0x07cc0205
 55c:	05011c00 	0x05011c00
 560:	02050005 	slti	$r5,$r0,320(0x140)
 564:	1c0007d0 	pcaddu12i	$r16,62(0x3e)
 568:	000a0516 	0x000a0516
 56c:	07d40205 	0x07d40205
 570:	05011c00 	0x05011c00
 574:	02050009 	slti	$r9,$r0,320(0x140)
 578:	1c0007d8 	pcaddu12i	$r24,62(0x3e)
 57c:	0001051a 	0x0001051a
 580:	07e80205 	0x07e80205
 584:	01001c00 	0x01001c00
 588:	0000f301 	0x0000f301
 58c:	3e000400 	0x3e000400
 590:	01000000 	0x01000000
 594:	f2f60101 	0xf2f60101
 598:	0101000d 	fadd.d	$f13,$f0,$f0
 59c:	00000101 	0x00000101
 5a0:	00000100 	0x00000100
 5a4:	2f2e2e01 	0x2f2e2e01
 5a8:	6c2f2e2e 	bgeu	$r17,$r14,12076(0x2f2c) # 34d4 <_bss_end+0x804>
 5ac:	676e6f6f 	bge	$r27,$r15,-37268(0x36e6c) # ffff7418 <_etext+0xe3fea5c8>
 5b0:	68637261 	bltu	$r19,$r1,25456(0x6370) # 6920 <_bss_end+0x3c50>
 5b4:	2e2f3233 	0x2e2f3233
 5b8:	7700002e 	0x7700002e
 5bc:	65746972 	bge	$r11,$r18,95336(0x17468) # 17a24 <_bss_end+0x14d54>
 5c0:	0100632e 	0x0100632e
 5c4:	6c670000 	bgeu	$r0,$r0,26368(0x6700) # 6cc4 <_bss_end+0x3ff4>
 5c8:	682e6575 	bltu	$r11,$r21,11876(0x2e64) # 342c <_bss_end+0x75c>
 5cc:	00000100 	0x00000100
 5d0:	02050000 	slti	$r0,$r0,320(0x140)
 5d4:	1c009814 	pcaddu12i	$r20,1216(0x4c0)
 5d8:	00010533 	0x00010533
 5dc:	98140205 	0x98140205
 5e0:	05181c00 	0x05181c00
 5e4:	02050003 	slti	$r3,$r0,320(0x140)
 5e8:	1c009814 	pcaddu12i	$r20,1216(0x4c0)
 5ec:	00030519 	0x00030519
 5f0:	98140205 	0x98140205
 5f4:	14061c00 	lu12i.w	$r0,12512(0x30e0)
 5f8:	05000105 	0x05000105
 5fc:	00982c02 	bstrins.d	$r2,$r0,0x18,0xb
 600:	0105011c 	fmul.d	$f28,$f8,$f0
 604:	34020500 	0x34020500
 608:	1a1c0098 	pcalau12i	$r24,57348(0xe004)
 60c:	05000305 	0x05000305
 610:	00984402 	bstrins.d	$r2,$r0,0x18,0x11
 614:	0402001c 	csrrd	$r28,0x80
 618:	051b0602 	0x051b0602
 61c:	02050005 	slti	$r5,$r0,320(0x140)
 620:	1c00984c 	pcaddu12i	$r12,1218(0x4c2)
 624:	03051306 	lu52i.d	$r6,$r24,324(0x144)
 628:	50020500 	b	67109380(0x4000204) # 400082c <__stack_start+0x3dfdb5c>
 62c:	001c0098 	mul.w	$r24,$r4,$r0
 630:	06000402 	cacop	0x2,$r0,1(0x1)
 634:	00050518 	alsl.w	$r24,$r8,$r1,0x3
 638:	98500205 	0x98500205
 63c:	01061c00 	0x01061c00
 640:	05000905 	0x05000905
 644:	00985402 	bstrins.d	$r2,$r0,0x18,0x15
 648:	0805011c 	0x0805011c
 64c:	58020500 	beq	$r8,$r0,516(0x204) # 850 <__DYNAMIC+0x850>
 650:	061c0098 	cacop	0x18,$r4,1792(0x700)
 654:	00070518 	alsl.wu	$r24,$r8,$r1,0x3
 658:	98640205 	0x98640205
 65c:	05191c00 	0x05191c00
 660:	02050005 	slti	$r5,$r0,320(0x140)
 664:	1c00986c 	pcaddu12i	$r12,1219(0x4c3)
 668:	03051306 	lu52i.d	$r6,$r24,324(0x144)
 66c:	70020500 	vsle.b	$vr0,$vr8,$vr1
 670:	1e1c0098 	pcaddu18i	$r24,57348(0xe004)
 674:	05000105 	0x05000105
 678:	00989002 	bstrins.d	$r2,$r0,0x18,0x24
 67c:	0101001c 	fadd.d	$f28,$f0,$f0
 680:	0000017f 	0x0000017f
 684:	01240004 	0x01240004
 688:	01010000 	fadd.d	$f0,$f0,$f0
 68c:	0df2f601 	0x0df2f601
 690:	01010100 	fadd.d	$f0,$f8,$f0
 694:	00000001 	0x00000001
 698:	01000001 	0x01000001
 69c:	2e2f2e2e 	0x2e2f2e2e
 6a0:	2e2e2f2e 	0x2e2e2f2e
 6a4:	77656e2f 	xvssrani.wu.d	$xr15,$xr17,0x1b
 6a8:	2f62696c 	0x2f62696c
 6ac:	6362696c 	blt	$r11,$r12,-40344(0x36268) # ffff6914 <_etext+0xe3fe9ac4>
 6b0:	636e692f 	blt	$r9,$r15,-37272(0x36e68) # ffff7518 <_etext+0xe3fea6c8>
 6b4:	6564756c 	bge	$r11,$r12,91252(0x16474) # 16b28 <_bss_end+0x13e58>
 6b8:	2f2e2e00 	0x2f2e2e00
 6bc:	2e2f2e2e 	0x2e2f2e2e
 6c0:	656e2f2e 	bge	$r25,$r14,93740(0x16e2c) # 174ec <_bss_end+0x1481c>
 6c4:	62696c77 	blt	$r3,$r23,-104084(0x2696c) # fffe7030 <_etext+0xe3fda1e0>
 6c8:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe7034 <_etext+0xe3fda1e4>
 6cc:	6e692f63 	bgeu	$r27,$r3,-104148(0x2692c) # fffe6ff8 <_etext+0xe3fda1a8>
 6d0:	64756c63 	bge	$r3,$r3,30060(0x756c) # 7c3c <_bss_end+0x4f6c>
 6d4:	79732f65 	0x79732f65
 6d8:	2e2e0073 	0x2e2e0073
 6dc:	2f2e2e2f 	0x2f2e2e2f
 6e0:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe764c <_etext+0xe3fda7fc>
 6e4:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7944 <_etext+0xe3feaaf4>
 6e8:	2f323368 	0x2f323368
 6ec:	2f002e2e 	0x2f002e2e
 6f0:	656d6f68 	bge	$r27,$r8,93548(0x16d6c) # 1745c <_bss_end+0x1478c>
 6f4:	6568632f 	bge	$r25,$r15,92256(0x16860) # 16f54 <_bss_end+0x14284>
 6f8:	73657a6e 	vssrani.wu.d	$vr14,$vr19,0x1e
 6fc:	69617568 	bltu	$r11,$r8,90484(0x16174) # 16870 <_bss_end+0x13ba0>
 700:	736e692f 	vssrarni.du.q	$vr15,$vr9,0x1a
 704:	6c6c6174 	bgeu	$r11,$r20,27744(0x6c60) # 7364 <_bss_end+0x4694>
 708:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe7074 <_etext+0xe3fda224>
 70c:	6363672f 	blt	$r25,$r15,-40092(0x36364) # ffff6a70 <_etext+0xe3fe9c20>
 710:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff767c <_etext+0xe3fea82c>
 714:	7261676e 	0x7261676e
 718:	32336863 	0x32336863
 71c:	6b6e752d 	bltu	$r9,$r13,-37260(0x36e74) # ffff7590 <_etext+0xe3fea740>
 720:	6e776f6e 	bgeu	$r27,$r14,-100500(0x2776c) # fffe7e8c <_etext+0xe3fdb03c>
 724:	666c652d 	bge	$r9,$r13,-103324(0x26c64) # fffe7388 <_etext+0xe3fda538>
 728:	332e382f 	xvstelm.w	$xr15,$r1,-456(0x238),0x3
 72c:	692f302e 	bltu	$r1,$r14,77616(0x12f30) # 1365c <_bss_end+0x1098c>
 730:	756c636e 	0x756c636e
 734:	00006564 	rdtimeh.w	$r4,$r11
 738:	61747366 	blt	$r27,$r6,95344(0x17470) # 17ba8 <_bss_end+0x14ed8>
 73c:	00632e74 	bstrins.w	$r20,$r19,0x3,0xb
 740:	73000003 	0x73000003
 744:	6c2f7379 	bgeu	$r27,$r25,12144(0x2f70) # 36b4 <_bss_end+0x9e4>
 748:	2e6b636f 	0x2e6b636f
 74c:	00010068 	0x00010068
 750:	73797300 	0x73797300
 754:	79745f2f 	0x79745f2f
 758:	2e736570 	0x2e736570
 75c:	00010068 	0x00010068
 760:	64747300 	bge	$r24,$r0,29808(0x7470) # 7bd0 <_bss_end+0x4f00>
 764:	2e666564 	0x2e666564
 768:	00040068 	alsl.w	$r8,$r3,$r0,0x1
 76c:	73797300 	0x73797300
 770:	6565722f 	bge	$r17,$r15,91504(0x16570) # 16ce0 <_bss_end+0x14010>
 774:	682e746e 	bltu	$r3,$r14,11892(0x2e74) # 35e8 <_bss_end+0x918>
 778:	00000100 	0x00000100
 77c:	2f737973 	0x2f737973
 780:	65707974 	bge	$r11,$r20,94328(0x17078) # 177f8 <_bss_end+0x14b28>
 784:	00682e73 	bstrins.w	$r19,$r19,0x8,0xb
 788:	74000001 	xvseq.b	$xr1,$xr0,$xr0
 78c:	2e656d69 	0x2e656d69
 790:	00010068 	0x00010068
 794:	73797300 	0x73797300
 798:	6174732f 	blt	$r25,$r15,95344(0x17470) # 17c08 <_bss_end+0x14f38>
 79c:	00682e74 	bstrins.w	$r20,$r19,0x8,0xb
 7a0:	67000001 	bge	$r0,$r1,-65536(0x30000) # ffff07a0 <_etext+0xe3fe3950>
 7a4:	2e65756c 	0x2e65756c
 7a8:	00030068 	0x00030068
 7ac:	05000000 	0x05000000
 7b0:	00989002 	bstrins.d	$r2,$r0,0x18,0x24
 7b4:	01052f1c 	fmul.d	$f28,$f24,$f11
 7b8:	90020500 	0x90020500
 7bc:	181c0098 	pcaddi	$r24,57348(0xe004)
 7c0:	05000305 	0x05000305
 7c4:	00989002 	bstrins.d	$r2,$r0,0x18,0x24
 7c8:	0501061c 	0x0501061c
 7cc:	02050010 	slti	$r16,$r0,320(0x140)
 7d0:	1c009898 	pcaddu12i	$r24,1220(0x4c4)
 7d4:	03051806 	lu52i.d	$r6,$r0,326(0x146)
 7d8:	98020500 	0x98020500
 7dc:	061c0098 	cacop	0x18,$r4,1792(0x700)
 7e0:	00130501 	maskeqz	$r1,$r8,$r1
 7e4:	989c0205 	0x989c0205
 7e8:	19061c00 	pcaddi	$r0,-511776(0x830e0)
 7ec:	05000305 	0x05000305
 7f0:	00989c02 	bstrins.d	$r2,$r0,0x18,0x27
 7f4:	0518061c 	0x0518061c
 7f8:	02050001 	slti	$r1,$r0,320(0x140)
 7fc:	1c0098a4 	pcaddu12i	$r4,1221(0x4c5)
 800:	6e010100 	bgeu	$r8,$r0,-130816(0x20100) # fffe0900 <_etext+0xe3fd3ab0>
 804:	04000000 	csrrd	$r0,0x0
 808:	00003f00 	revb.d	$r0,$r24
 80c:	01010100 	fadd.d	$f0,$f8,$f0
 810:	000df2f6 	bytepick.d	$r22,$r23,$r28,0x3
 814:	01010101 	fadd.d	$f1,$f8,$f0
 818:	01000000 	0x01000000
 81c:	2e010000 	0x2e010000
 820:	2e2e2f2e 	0x2e2e2f2e
 824:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff7790 <_etext+0xe3fea940>
 828:	7261676e 	0x7261676e
 82c:	32336863 	0x32336863
 830:	002e2e2f 	0x002e2e2f
 834:	61736900 	blt	$r8,$r0,95080(0x17368) # 17b9c <_bss_end+0x14ecc>
 838:	2e797474 	0x2e797474
 83c:	00010063 	0x00010063
 840:	756c6700 	0x756c6700
 844:	00682e65 	bstrins.w	$r5,$r19,0x8,0xb
 848:	00000001 	0x00000001
 84c:	a4020500 	0xa4020500
 850:	2f1c0098 	0x2f1c0098
 854:	05000105 	0x05000105
 858:	0098a402 	bstrins.d	$r2,$r0,0x18,0x29
 85c:	0305181c 	lu52i.d	$r28,$r0,326(0x146)
 860:	a4020500 	0xa4020500
 864:	061c0098 	cacop	0x18,$r4,1792(0x700)
 868:	00010518 	0x00010518
 86c:	98ac0205 	0x98ac0205
 870:	01001c00 	0x01001c00
 874:	00011901 	0x00011901
 878:	ea000400 	0xea000400
 87c:	01000000 	0x01000000
 880:	f2f60101 	0xf2f60101
 884:	0101000d 	fadd.d	$f13,$f0,$f0
 888:	00000101 	0x00000101
 88c:	00000100 	0x00000100
 890:	2f2e2e01 	0x2f2e2e01
 894:	2e2f2e2e 	0x2e2f2e2e
 898:	656e2f2e 	bge	$r25,$r14,93740(0x16e2c) # 176c4 <_bss_end+0x149f4>
 89c:	62696c77 	blt	$r3,$r23,-104084(0x2696c) # fffe7208 <_etext+0xe3fda3b8>
 8a0:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe720c <_etext+0xe3fda3bc>
 8a4:	6e692f63 	bgeu	$r27,$r3,-104148(0x2692c) # fffe71d0 <_etext+0xe3fda380>
 8a8:	64756c63 	bge	$r3,$r3,30060(0x756c) # 7e14 <_bss_end+0x5144>
 8ac:	79732f65 	0x79732f65
 8b0:	2e2e0073 	0x2e2e0073
 8b4:	2f2e2e2f 	0x2f2e2e2f
 8b8:	6e6f6f6c 	bgeu	$r27,$r12,-102548(0x26f6c) # fffe7824 <_etext+0xe3fda9d4>
 8bc:	63726167 	blt	$r11,$r7,-36256(0x37260) # ffff7b1c <_etext+0xe3feaccc>
 8c0:	2f323368 	0x2f323368
 8c4:	2f002e2e 	0x2f002e2e
 8c8:	656d6f68 	bge	$r27,$r8,93548(0x16d6c) # 17634 <_bss_end+0x14964>
 8cc:	6568632f 	bge	$r25,$r15,92256(0x16860) # 1712c <_bss_end+0x1445c>
 8d0:	73657a6e 	vssrani.wu.d	$vr14,$vr19,0x1e
 8d4:	69617568 	bltu	$r11,$r8,90484(0x16174) # 16a48 <_bss_end+0x13d78>
 8d8:	736e692f 	vssrarni.du.q	$vr15,$vr9,0x1a
 8dc:	6c6c6174 	bgeu	$r11,$r20,27744(0x6c60) # 753c <_bss_end+0x486c>
 8e0:	62696c2f 	blt	$r1,$r15,-104084(0x2696c) # fffe724c <_etext+0xe3fda3fc>
 8e4:	6363672f 	blt	$r25,$r15,-40092(0x36364) # ffff6c48 <_etext+0xe3fe9df8>
 8e8:	6f6f6c2f 	bgeu	$r1,$r15,-37012(0x36f6c) # ffff7854 <_etext+0xe3feaa04>
 8ec:	7261676e 	0x7261676e
 8f0:	32336863 	0x32336863
 8f4:	6b6e752d 	bltu	$r9,$r13,-37260(0x36e74) # ffff7768 <_etext+0xe3fea918>
 8f8:	6e776f6e 	bgeu	$r27,$r14,-100500(0x2776c) # fffe8064 <_etext+0xe3fdb214>
 8fc:	666c652d 	bge	$r9,$r13,-103324(0x26c64) # fffe7560 <_etext+0xe3fda710>
 900:	332e382f 	xvstelm.w	$xr15,$r1,-456(0x238),0x3
 904:	692f302e 	bltu	$r1,$r14,77616(0x12f30) # 13834 <_bss_end+0x10b64>
 908:	756c636e 	0x756c636e
 90c:	00006564 	rdtimeh.w	$r4,$r11
 910:	6565736c 	bge	$r27,$r12,91504(0x16570) # 16e80 <_bss_end+0x141b0>
 914:	00632e6b 	bstrins.w	$r11,$r19,0x3,0xb
 918:	6c000002 	bgeu	$r0,$r2,0 # 918 <__DYNAMIC+0x918>
 91c:	2e6b636f 	0x2e6b636f
 920:	00010068 	0x00010068
 924:	79745f00 	0x79745f00
 928:	2e736570 	0x2e736570
 92c:	00010068 	0x00010068
 930:	64747300 	bge	$r24,$r0,29808(0x7470) # 7da0 <_bss_end+0x50d0>
 934:	2e666564 	0x2e666564
 938:	00030068 	0x00030068
 93c:	70797400 	0x70797400
 940:	682e7365 	bltu	$r27,$r5,11888(0x2e70) # 37b0 <_bss_end+0xae0>
 944:	00000100 	0x00000100
 948:	6e656572 	bgeu	$r11,$r18,-105116(0x26564) # fffe6eac <_etext+0xe3fda05c>
 94c:	00682e74 	bstrins.w	$r20,$r19,0x8,0xb
 950:	65000001 	bge	$r0,$r1,65536(0x10000) # 10950 <_bss_end+0xdc80>
 954:	6f6e7272 	bgeu	$r19,$r18,-37264(0x36e70) # ffff77c4 <_etext+0xe3fea974>
 958:	0100682e 	0x0100682e
 95c:	6c670000 	bgeu	$r0,$r0,26368(0x6700) # 705c <_bss_end+0x438c>
 960:	682e6575 	bltu	$r11,$r21,11876(0x2e64) # 37c4 <_bss_end+0xaf4>
 964:	00000200 	0x00000200
 968:	02050000 	slti	$r0,$r0,320(0x140)
 96c:	1c0098ac 	pcaddu12i	$r12,1221(0x4c5)
 970:	00010531 	0x00010531
 974:	98ac0205 	0x98ac0205
 978:	05191c00 	0x05191c00
 97c:	02050003 	slti	$r3,$r0,320(0x140)
 980:	1c0098ac 	pcaddu12i	$r12,1221(0x4c5)
 984:	01051806 	fmul.d	$f6,$f0,$f6
 988:	b4020500 	0xb4020500
 98c:	001c0098 	mul.w	$r24,$r4,$r0
 990:	Address 0x0000000000000990 is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	5f6e6f5f 	bne	$r26,$r31,-37268(0x36e6c) # ffff6e6c <_etext+0xe3fea01c>
   4:	74697865 	xvavgr.w	$xr5,$xr3,$xr30
   8:	6772615f 	bge	$r10,$r31,-36256(0x37260) # ffff7268 <_etext+0xe3fea418>
   c:	69740073 	bltu	$r3,$r19,95232(0x17400) # 1740c <_bss_end+0x1473c>
  10:	5f73656d 	bne	$r11,$r13,-35996(0x37364) # ffff7374 <_etext+0xe3fea524>
  14:	006c6176 	bstrins.w	$r22,$r11,0xc,0x18
  18:	5f6e6f5f 	bne	$r26,$r31,-37268(0x36e6c) # ffff6e84 <_etext+0xe3fea034>
  1c:	74697865 	xvavgr.w	$xr5,$xr3,$xr30
  20:	6772615f 	bge	$r10,$r31,-36256(0x37260) # ffff7280 <_etext+0xe3fea430>
  24:	6f5f0073 	bgeu	$r3,$r19,-41216(0x35f00) # ffff5f24 <_etext+0xe3fe90d4>
  28:	78655f6e 	0x78655f6e
  2c:	615f7469 	blt	$r3,$r9,89972(0x15f74) # 15fa0 <_bss_end+0x132d0>
  30:	00736772 	bstrins.w	$r18,$r27,0x13,0x19
