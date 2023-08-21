#include <stdio.h>
int main ()
{
	unsigned long a, b;

	while (1)
	{
		scanf("%lu %lu", &b, &a);

		if (b == 0 && a == 0)
			break;

		printf("%lu\n", a * b);
	}
}