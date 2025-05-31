#include "Entry.h"

#define ARM9_Overlay_47_File47_Init_Address 0x020824a0

#define DISPCNT_A_ADDR  0x04000000U
#define IME_A7_OFFSET   0x208U
#define VCOUNT_OFFSET   0x6U

#define DISPCNT_A (*(volatile u32 *)(DISPCNT_A_ADDR))
#define IME_A7 (*(volatile u32 *)(DISPCNT_A_ADDR + IME_A7_OFFSET))
#define VCOUNT (*(volatile u16 *)(DISPCNT_A_ADDR + VCOUNT_OFFSET))

extern u32 func_02000ab0();
extern void func_02000954(u32 arg1, u32 arg2, u32 arg3);
extern void func_02000970(void* arg);
extern u32 func_02000a1c();
extern u32 func_02057030();
extern u32 func_02000b98();
extern void func_02058734();

extern u32 data_02066a20;

u32 data_02000930 = 0x27e0000;
void* data_02000934 = 0x800;
void* data_02000938 = 0x5000000;
void* data_0200093c = 0x7000000;
void* data_02000940 = 0x02000ba0; // BuildInfo
u32 data_02000944 = 0x27fff9c;
u32 data_02000948 = 0x1ff8000;
void* data_0200094c = 0x02000808; // main
void* data_02000950 = 0xffff0000;

static inline void clean_date_cache_line(u32 r0, u32 r1) {
	asm volatile (
		"mcr p15, #0, %0, c7, c10, #0x4\n"
		"mcr p15, #0, %1, c7, c5, #0x1\n"
		"mcr p15, #0, %1, c7, c14, #0x1\n"
		:
		: "r" (r0), "r" (r1)
		: "memory"
	);
}

void Entry(void) {
	IME_A7 = DISPCNT_A_ADDR;

	while (VCOUNT != 0) {
		// spin until start of VBlank
	}
	func_02000ab0();

	asm {
		mov		r0, #0x13
		msr 	cpsr_c, r0		// I don't think CPSR cannot be modified with C
	}

	asm {
		ldr     r0, =data_02000930
		add     r0, r0, #0x3fc0
		mov     sp, r0
		mov     r0, #0x12
		msr     cpsr_c, r0
	}

	// Same with stack pointer? Maybe this is something the compiler just automatically generates
	// but I don't know what it does so I'll just chuck the ASM in there and translate what I can

	asm {
		ldr 	r0, =data_02000930
		add 	r0, r0, #0x3fc0
		sub 	r0, r0, #0x40
		sub 	sp, r0, #0x4
		tst 	sp, #0x4
		beq     LAB_02000850
		b       LAB_02000854
	LAB_02000850:
		sub     sp, sp, #0x4
	LAB_02000854:
		ldr     r1, =data_02000934
		sub     r1, r0, r1
		mov     r0, #0x1f
		msr     cpsr_fsxc, r0		// Oh yeah and another CPSR modification
		sub     sp, r1, #0x4
	}

	// Okay now back to C :)

	func_02000954(0, &data_02000930, 0x4000);
	func_02000954(0, &data_02000938, 0x400);
	func_02000954(0x200, &data_0200093c, 0x400);

	u32 *base_ptr = &data_02066a20;	// stores to r0
	u32 start_addr = *(u32 *)((u8 *)base_ptr + 0xC); // stores to r1
	u32 end_addr = *(u32 *)((u8 *)base_ptr + 0x10); // stores to r2
	u32 saved_start = start_addr; // stores to r3
	u32 zero_val = 0; // stores to r0

	for (u32 addr = start_addr; addr < end_addr; addr += 4) {
		*(u32 *)addr = zero_val;
	}

	u32 aligned_start = saved_start & ~0x1F; // stores to r1
	for (u32 addr = aligned_start; addr < end_addr; addr += 0x20) {
		clean_data_cache_line(zero_val, addr);
	}

	data_02000944 = zero_val;
	u32 **ptr = (u32 **)(data_02000930 + 0x3FFC + 0x30);
	*ptr = &data_02000948;

	func_02057030();
	func_02000b98();
	func_02058734();

	// Now back to ASM!

	asm (
		ldr		r1, =data_0200094c
		ldr     lr, =data_02000950
		tst     sp, #0x4
		bne     LAB_02000928

		b       LAB_0200092c

	LAB_02000928:
		sub     sp, sp, #0x4

	LAB_0200092c:
		bx      r1
	);
} 