#include <stdio.h>
#include <vga.h>

extern uint32_t mul(uint32_t a, uint32_t b);

void main() {
	vga_pallete_test();

	log(0x48, "FYI: the weird rainbow in the background is a vga pallete test\n");
	printf("Hello, World\n");
	printf("%x * %x = %x\n", 8, 5, mul(8, 5));
	log(0x4F, "kernel log:\n  Hello, World from log!\n  main function is at: %x\n", &main);

	while (1);
}
