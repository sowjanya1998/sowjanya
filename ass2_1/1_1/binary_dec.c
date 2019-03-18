/*binary to decimal*/
#include <stdio.h>
void binary_dec(long int num)
{
	int rem = 0, decimal_val = 0, base = 1;

	while (num > 0)
	{
		rem = num % 10;
		decimal_val = decimal_val + rem * base;
		num = num / 10;
		base = base * 2;
	}
	printf("Equivalent decimal value: %d\n", decimal_val);
	getchar();
}
void decimal_binary()
{
	int num;

	scanf_s("%d", &num);
	int remainder, binary = 0, base = 1;
	while (num > 0)
	{
		remainder = num % 2;
		binary = binary + remainder * base;
		num = num / 2;
		base = base * 10;
	}
	printf("Equivalent binary value: %d\n", binary);
	getchar();
}


int main()
{
	int ch;
	long int binaryval, decimalval = 0, i = 1, remainder;
	printf("1.binary to decimal 2. decimal to binary\n");
	scanf_s("%d", &ch);
	getchar();
	switch (ch)
	{
	case 1:printf("enter binary number\n");
		scanf_s("%ld", &binaryval);
		binary_dec(binaryval);
		break;
	case 2:printf("enter decimal value\n");

		decimal_binary();
		break;


	}
	getchar();

}