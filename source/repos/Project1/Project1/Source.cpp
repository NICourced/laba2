#include <stdlib.h>
#include <stdio.h>
int main()
{
	printf("Enter 3 nums\n");
	int x, y, z;
	scanf_s("%d %d %d", &x, &y, &z);
	if (x >= y)
	{
		if (y >= z)
		{
			printf("%d %d", x, z);
		}
		else
		{
			if (z >= x)
			{
				printf("%d %d", z, y);
			}
			else
			{
				printf("%d %d", x, y);
			}
		}
	}
	else
	{
		if (z >= y)
		{
			printf("%d %d", z, x);
		}
		else
		{
			if (z >= x)
			{
				printf("%d %d", y, x);
			}
			else
			{
				printf("%d %d", y, z);
			}
		}
	}
	getchar();
	return 0;
}