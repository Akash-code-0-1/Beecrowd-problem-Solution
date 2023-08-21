#include <stdio.h>
int main()
{	
	int a, b, c;	
	scanf("%i %i %i", &a, &b, &c);
	if (a <= b && a <= c && b <= c)
  {
		printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", a, b, c, a, b, c);
	}else if(a <= b && a <= c && c < b)
  {
		printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", a, c, b, a, b, c);
	}else if(b <= a && b <= c && a <= c)
  {
		printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", b, a, c, a, b, c);	
	}else if(b <= a && b <= c && c < a)
  {
		printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", b, c, a, a, b, c);	
	}else if(c <= a && c <= b && a <= b)
  {
		printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", c, a, b, a, b, c);	
	}else if(c <= a && c <= b && b < a)
  {
		printf("%i\n%i\n%i\n\n%i\n%i\n%i\n", c, b, a, a, b, c);	
	}
	return 0;
}