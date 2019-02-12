

#include<stdio.h>
int main()
{
	int n, s = 0, x;
	scanf_s("%d", &n);
	while (n > 0)
	{
		x = n % 10;
		s = s + x;
		n = n / 10;
	}
	printf("%d", s);
	getch();
	return 0;
}