#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i = 0, acum = 2772;

	srand(time(NULL));
	i = 32 + rand() % (126 - 32);

	while (acum != 0)
	{
		printf("%c", i);
		acum = acum - i;
		i = 32 + rand() % (126 - 32);

		if (acum < 126 && acum > 32)
			i = acum;
	} return (0);
}
