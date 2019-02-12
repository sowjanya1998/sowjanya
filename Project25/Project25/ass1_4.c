#include<stdio.h>
int main()
{
	int n, m, s = 0, x;
	scanf_s("%d", &n);
	m = n;
	while (n > 0)
	{
		x = n % 10;
		s = s + x * x*x;
		n = n / 10;
	}
	if (s == m)
		printf("armstrong %d", s);
	else
		printf("%d not an amstrong", m);
	getch();
	return 0;
}