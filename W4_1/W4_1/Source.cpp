#include<stdio.h>

int main()
{
	int i,j,a;
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (j = i; j <= a; j++)
		{
			if (j==i || j==a || i==1)
			{
				printf("* ");
			}
			else  printf("  ");
		}
		printf("\n");
	}
	return 0;
}