#include<stdio.h>
void main()
{
	int n, count = 0, rem;
	scanf_s("%d", &n);
	getchar();
	while (n > 0)
	{
		rem = n % 2;
		if (rem == 1)
			count++;
		n = n / 2;
	}
	printf("%d", count);
	getchar();
}