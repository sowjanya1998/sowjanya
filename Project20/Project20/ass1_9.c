#include<stdio.h>
int main()
{
	int rows, i, j, k, l;
	scanf_s("%d", &rows);
	for (i = 1; i <= rows; i++)
	{
		for (j = rows; j > i; j--)
			printf(" ");
		for (k = i; k >= 1; k--)
			printf("%d", k);
		for (l = 2; l <= i; l++)
			printf("%d", l);

		printf("\n");
	}
	getch();
	return 0;
}