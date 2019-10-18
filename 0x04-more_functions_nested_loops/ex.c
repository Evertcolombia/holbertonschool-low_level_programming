#include <stdio.h>

void main()
{
    int count, c, n = 2;


    for (count = 0; count < n; count++)
    {
        for (c = 0; c  < n; c++)
        {   
		if (count > c)
			putchar(32);
		if (count == c )
	            	putchar(92);
        }
	putchar(10);
    }
}
