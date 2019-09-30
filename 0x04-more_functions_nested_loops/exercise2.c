#include <stdio.h>

void main(int n)
{
	int a, b;
	
	b = n / 10;
	a = b % 10;
	
	putchar(a + '0');
	main(98);
	
}
