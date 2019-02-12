#include<stdio.h>
int main()
{
	int i, n, b;
	scanf_s("%d %d", &n, &b);
	function_rotate(n, b);
	getch();
	return 0;
}
int function_rotate(int n, int b)
{
	int i, r, j, a[100], m, p, last, count = 0;
	m = n;
	while (n > 0)
	{
		r = n % 10;
		count++;
		n = n / 10;
	}
	i = 0, p = count;
	if (count > i)
	{
		while (m > 0)
		{
			r = m % 10;
			count--;
			a[count] = r;
			m = m / 10;
		}
	}

	for (i = 1; i <= b; i++)
	{
		last = a[p - 1];
		for (j = p - 1; j > 0; j--)
		{
			a[j] = a[j - 1];
		}
		a[0] = last;
	}
	for (i = 0; i < p; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}