#include <stdio.h>
#include <stdlib.h>

unsigned int
f1 (int diff)
{
	return ((unsigned int) (diff < 0 ? -diff : diff));
}

unsigned int
f2 (unsigned int diff)
{
	return ((unsigned int) ((signed int) diff < 0 ? -diff : diff));
}

unsigned long long
f3 (long long diff)
{
	return ((unsigned long long) (diff < 0 ? -diff : diff));
}

unsigned long long
f4 (unsigned long long diff)
{
	return ((unsigned long long) ((signed long long) diff < 0 ? -diff : diff));
}

int main ()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if ((int) f2 (-i) != i) {
			printf("f2(%d) -> %u\n", -i, f2(-i));
			abort ();
		}
	}
	exit (0);
}
