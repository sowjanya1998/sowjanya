#include<stdio.h>
#include<string.h>
int hextodec(char x1[], int n)
{
	int i, dec = 0, base = 1;
	printf("n:%d", n);
	for (i = n - 1; i >= 0; i--)
	{
		if (x1[i] >= '0' && x1[i] <= '9')
		{
			dec = dec + (x1[i] - 48)*base;
			base = base * 16;
		}
		else
		{
			dec = dec + (x1[i] - 55)*base;
			base = base * 16;
		}
	}
	//printf("\n dec:%d", dec);
	return dec;
}

void main()
{

	int x3, n, x2, n1, x4, ch,x5;
	char x1[20];
	scanf_s("%d", &ch);
	gets_s(x1, sizeof(x1));
	getchar();
	getchar();
	n = strlen(x1);

	
	//printf("%d", x2);
	switch (ch)
	{
	case 1:
		x2 = hextodec(x1, n);
		x3 = ~x2;

		printf("%x", x3);
		getchar();
		break;
	case 2:
		x5 = hextodec(x1, n);
		x4 = x5 & 9;
		printf("%d", x4);
		getchar();
		break;
	}
	getchar();
}