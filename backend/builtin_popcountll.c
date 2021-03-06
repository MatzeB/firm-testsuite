#include <assert.h>

static int __attribute__((noinline)) popcountll(unsigned long long x)
{
	return __builtin_popcountll(x);
}

int main(void)
{
#define ASSERTPOPCOUNTLL(val, result) \
	assert(__builtin_popcountll(val) == result); \
	assert(popcountll(val) == result);

	ASSERTPOPCOUNTLL(0x0000000000000000ULL, 0);
	ASSERTPOPCOUNTLL(0x0000000000000001ULL, 1);
	ASSERTPOPCOUNTLL(0x0000000000003000ULL, 2);
	ASSERTPOPCOUNTLL(0x0000000000000031ULL, 3);
	ASSERTPOPCOUNTLL(0x0000000000002222ULL, 4);
	ASSERTPOPCOUNTLL(0x0000000000001055ULL, 5);
	ASSERTPOPCOUNTLL(0x0000000000006116ULL, 6);
	ASSERTPOPCOUNTLL(0x0000000000007107ULL, 7);
	ASSERTPOPCOUNTLL(0x0000000000008778ULL, 8);
	ASSERTPOPCOUNTLL(0x0000000000007999ULL, 9);
	ASSERTPOPCOUNTLL(0x000000000000FFA0ULL, 10);
	ASSERTPOPCOUNTLL(0x0000000000007FCCULL, 11);
	ASSERTPOPCOUNTLL(0x000000000000CFFCULL, 12);
	ASSERTPOPCOUNTLL(0x0000000000007CFFULL, 13);
	ASSERTPOPCOUNTLL(0x0000000000007FFEULL, 14);
	ASSERTPOPCOUNTLL(0x000000000000F7FFULL, 15);
	ASSERTPOPCOUNTLL(0x000000000000FFFFULL, 16);
	ASSERTPOPCOUNTLL(0x00000000FFFF0001ULL, 17);
	ASSERTPOPCOUNTLL(0x00000000FFFF3000ULL, 18);
	ASSERTPOPCOUNTLL(0x00000000FFFF0031ULL, 19);
	ASSERTPOPCOUNTLL(0x00000000FFFF2222ULL, 20);
	ASSERTPOPCOUNTLL(0x00000000FFFF1055ULL, 21);
	ASSERTPOPCOUNTLL(0x00000000FFFF6116ULL, 22);
	ASSERTPOPCOUNTLL(0x00000000FFFF7107ULL, 23);
	ASSERTPOPCOUNTLL(0x00000000FFFF8778ULL, 24);
	ASSERTPOPCOUNTLL(0x000000007999FFFFULL, 25);
	ASSERTPOPCOUNTLL(0x00000000FFA0FFFFULL, 26);
	ASSERTPOPCOUNTLL(0x000000007FCCFFFFULL, 27);
	ASSERTPOPCOUNTLL(0x00000000CFFCFFFFULL, 28);
	ASSERTPOPCOUNTLL(0x000000007CFFFFFFULL, 29);
	ASSERTPOPCOUNTLL(0x000000007FFEFFFFULL, 30);
	ASSERTPOPCOUNTLL(0x00000000F7FFFFFFULL, 31);
	ASSERTPOPCOUNTLL(0x00000000FFFFFFFFULL, 32);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF0001ULL, 33);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF3000ULL, 34);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF0031ULL, 35);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF2222ULL, 36);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF1055ULL, 37);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF6116ULL, 38);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF7107ULL, 39);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF8778ULL, 40);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF7999ULL, 41);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFFFFA0ULL, 42);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF7FCCULL, 43);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFFCFFCULL, 44);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF7CFFULL, 45);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFF7FFEULL, 46);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFFF7FFULL, 47);
	ASSERTPOPCOUNTLL(0xFFFF0000FFFFFFFFULL, 48);
	ASSERTPOPCOUNTLL(0xFFFFFFFF0001FFFFULL, 49);
	ASSERTPOPCOUNTLL(0xFFFFFFFF3000FFFFULL, 50);
	ASSERTPOPCOUNTLL(0xFFFFFFFF0031FFFFULL, 51);
	ASSERTPOPCOUNTLL(0xFFFFFFFF2222FFFFULL, 52);
	ASSERTPOPCOUNTLL(0xFFFFFFFF1055FFFFULL, 53);
	ASSERTPOPCOUNTLL(0xFFFFFFFF6116FFFFULL, 54);
	ASSERTPOPCOUNTLL(0xFFFFFFFF7107FFFFULL, 55);
	ASSERTPOPCOUNTLL(0xFFFFFFFF8778FFFFULL, 56);
	ASSERTPOPCOUNTLL(0xFFFF7999FFFFFFFFULL, 57);
	ASSERTPOPCOUNTLL(0xFFFFFFA0FFFFFFFFULL, 58);
	ASSERTPOPCOUNTLL(0xFFFF7FCCFFFFFFFFULL, 59);
	ASSERTPOPCOUNTLL(0xFFFFCFFCFFFFFFFFULL, 60);
	ASSERTPOPCOUNTLL(0xFFFF7CFFFFFFFFFFULL, 61);
	ASSERTPOPCOUNTLL(0xFFFF7FFEFFFFFFFFULL, 62);
	ASSERTPOPCOUNTLL(0xFFFFF7FFFFFFFFFFULL, 63);
	ASSERTPOPCOUNTLL(0xFFFFFFFFFFFFFFFFULL, 64);
	ASSERTPOPCOUNTLL((unsigned long long)-1, sizeof(unsigned long long)*8);
	return 0;
}
