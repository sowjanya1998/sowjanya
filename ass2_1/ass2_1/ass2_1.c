/*hexadecimal to binary and vice verse*/
#include <stdio.h>
void binary_hexa(int binaryval)
{
	int remainder, hexadecimalval = 0, i = 1;
	while (binaryval != 0)
	{
		remainder = binaryval % 10;
		hexadecimalval = hexadecimalval + remainder * i;
		i = i * 2;
		binaryval = binaryval / 10;
	}
	printf("%d", hexadecimalval);
	printf("Equivalent hexadecimal value: %lX\n", hexadecimalval);
	getchar();
}
void hexadecimal_binary()
{
	long int i = 0, size = 2, j = 0;
	char *hexdec, ch;
	//printf("Enter hexadecimal number\n");
	hexdec = (char*)malloc(sizeof(char));
	while ((ch = getc(stdin)) != '\n')
	{
		hexdec=realloc(hexdec, sizeof(char)*size);
		hexdec[j++] = ch;
		size++;
	}
	hexdec[j] = '\0';
	printf("Equivalent binary value:");
	while (hexdec[i]) {

		switch (hexdec[i]) {
		case '0':
			printf("0000");
			break;
		case '1':
			printf("0001");
			break;
		case '2':
			printf("0010");
			break;
		case '3':
			printf("0011");
			break;
		case '4':
			printf("0100");
			break;
		case '5':
			printf("0101");
			break;
		case '6':
			printf("0110");
			break;
		case '7':
			printf("0111");
			break;
		case '8':
			printf("1000");
			break;
		case '9':
			printf("1001");
			break;
		case 'A':
		case 'a':
			printf("1010");
			break;
		case 'B':
		case 'b':
			printf("1011");
			break;
		case 'C':
		case 'c':
			printf("1100");
			break;
		case 'D':
		case 'd':
			printf("1101");
			break;
		case 'E':
		case 'e':
			printf("1110");
			break;
		case 'F':
		case 'f':
			printf("1111");
			break;
		default:
			printf("\nInvalid hexadecimal digit %c",
				hexdec[i]);
		}
		i++;
	}
	getchar();
}


	int main()
	{
		int ch;
		long int binaryval, hexadecimalval = 0, i = 1, remainder;
		printf("1.binary to hexadecimal 2. hexdecimal to binary\n");
		scanf_s("%d", &ch);
		getchar();
		switch (ch)
		{
		case 1:printf("enter binary number\n");
			scanf_s("%ld", &binaryval);
			binary_hexa(binaryval);
			break;
		case 2:printf("enter hexadecimal value\n");
		
			hexadecimal_binary();
			break;

			
		}
		getchar();
	
}