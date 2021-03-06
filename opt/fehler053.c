#include <stdio.h>

struct bitfield {
	unsigned int code : 8;
	unsigned int bit1 : 1;
	unsigned int bit2 : 1;
	unsigned int bit3 : 1;
} bf = {7, 1, 0, 1 };

int main()
{
	bf.code = 0xffffffff;
	printf("Res: %u (should be 255)\n", bf.code);
	printf("R2: %u %u %u (should be 1 0 1)\n", bf.bit1, bf.bit2, bf.bit3);
	bf.code += 1;
	printf("Res: %u (should be 0)\n", bf.code);
	return 0;
}
