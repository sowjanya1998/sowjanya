#include<stdio.h>
#include<math.h>
int main()
{
	int n, m, s = 0, x, i = 0;
	printf("enter a non-negative number");
	scanf_s("%d", &n);
	m = n;
	if (n > 0)
	{
		while (n > 0)
		{
			x = n % 10;
			s = s * 10 + x;
			i++;
			n = n / 10;
		}
		if (s == m)
			printf("palindrome %d", s);
		else
			printf("%d not an palindrome", m);
	}
	getch();
	return 0;
}