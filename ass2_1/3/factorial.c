#include <stdio.h>
int main()
{
	int n, i;
	unsigned long  factorial = 1;

	printf("Enter an integer: ");
	scanf_s("%d", &n);
	getchar();

	if (n < 0)
		printf("Error! Factorial of a negative number doesn't exist.");

	else
	{
		for (i = 1; i <= n; ++i)
		{
			factorial *= i;             
		}
		printf("Factorial of %d = %lu", n, factorial);
	}
	getchar();
	return 0;
}