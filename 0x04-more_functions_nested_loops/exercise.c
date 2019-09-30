#include <stdio.h>

void main(void)
{
        int i;
        int f;
        int m;

        int c = 0;

        while(c <= 10)
        {
                for (i = 0; i <= 14; i++)
                {
                        f = i;
                        if (i > 9)
                        {	
				m = i / 10;
                                f = i % 10;
				putchar(m + '0');
                        }
                        putchar(f + '0');
			
			
                }
		c++;
		putchar('\n');
        }
}
