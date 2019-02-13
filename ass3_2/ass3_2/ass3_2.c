#include<stdio.h>
void main()
{
	int a[20], b[20], k,
		n, i, j = 0;
	printf("enter n");
	scanf_s("%d", &n);
	k = n - 1;
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	getchar();
	for (i = 0; i < n; i++)
	{
		if (a[i] < 0) {
			b[j] = a[i];
			j++;
		}
		else
			b[k--] = a[i];
	}
	for (i = 0; i < n; i++)
		printf("%d ", b[i]);
	getchar();
}
