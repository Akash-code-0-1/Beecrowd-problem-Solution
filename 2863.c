#include <stdio.h>
int main ()
{
	int c;
	float n, m;
	while (scanf("%d", &c) != EOF)
	{
		m = 100.0f;
		for (int i = 0; i < c; ++i)
		{
			scanf("%f", &n);
			if (n < m)
				m = n;
		}

		printf("%.2f\n", m);
	}
}