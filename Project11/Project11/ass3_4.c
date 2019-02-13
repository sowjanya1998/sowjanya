#include<stdio.h>
#include<string.h>
int hextodec(char x1[], int n)
{
	int i, dec = 0, base = 1;
	printf("n:%d", n);
	for (i = n-1; i >=0; i--)
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
	printf("\n dec:%d", dec);
	return dec;
}
/*int dectobin(int x3)
{
	int k = 0,ar1[20],i,ar2[20],k1,*a3;
	while (x3 >0)
	{
		ar1[k++] = x3 % 2;
		x3 = x3 / 2;
	}
	k--;
	k1 = k % 4;
	k1 = 3- k1;
	
	for (i = 0; i < k1; i++)
	{
		ar1[++k] = 0;
	}
	for (i = 0; i <= k; i++)
	{
		ar2[i] = ar1[k - i ];
		printf("\n bin: %d", ar2[i]);
	}
	
	return(comp(ar2),k);
	//return(bintodec(ar2));
}
int comp(int ar4[],int k)
{
	int i;
	//k = sizeof(ar) / sizeof(ar[0]);
	for (i = 0; i < k; i++)
	{
		if (ar4[i] == 0)
			ar4[i] = 1;
		else if(ar4[i]==1)
			ar4[i] = 0;
	}
	//return ar;
	return(bintodec(ar4,k));
}
int bintodec(int ar[],int k)
{
	int i, dec = 0, base = 1;
	//k = sizeof(ar) / sizeof(ar[0]);
	printf("\nk:%d\n",k);
	for (i = 0; i < 5; i++)
		printf("\n%d", ar[i]);
	for (i = k; i >=0; i--)
	{

		dec = dec + ar[i] * base;
		base = base * 2;
	}
	return dec;
}*/
void main()
{
	int x3, n, x2, n1, x4;
	char x1[20];
	gets_s(x1,sizeof(x1));
	getchar();
	n = strlen(x1);
	printf("n:%d", n);
	x2 = hextodec(x1, n);
	x2 = ~x2;
	//x3 = dectobin(x2);
	//n1 = sizeof(x3) / sizeof(x3[0]);
	//x4 = bintodec(x3);
	printf("dec1:\n%d\n", x2);
	printf("%x", x2);
	getchar();
}