#include<stdio.h>
int main()
{
	int sum, i, j, res, a[10];
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &sum);
	getchar();
	for (i = 0; i < 6; i++)
	{
		res = 0;
		for (j = i; j < 6; j++)
		{
			res += a[j];
			if (res == sum)
				printf("%d and %d", i, j);
			else if (res > sum)
				break;
		}
	}
	printf("helloz");
	getchar();
}