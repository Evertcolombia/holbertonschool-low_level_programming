#include <stdio.h>

int main ()
{
	int num, mul3 = 0, mul5 = 0, total;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0)
			mul3 = mul3 + num;
		if (num % 5 == 0)
			mul5 = mul5 + num;
		mul3 = mul3, mul5 = mul5;
	}
	total = mul3 + mul5;
	printf("%d", total), putchar(10);
	return (0);
}
