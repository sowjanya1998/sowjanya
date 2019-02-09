/*#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	//scanf_s("%s", str, sizeof(str));
	gets(str);
	char *pointer=NULL;
	char *token=NULL;
	pointer = strtok_s(str,'-',&token);
	while (pointer != NULL)
	{
		printf("%s", pointer);
		pointer = strtok_s(NULL,'-',&token);
	}
	getchar();
}*/
#include <string.h>
#include <stdio.h>

char string1[] =
"A string\tof ,,tokens\nand some  more tokens";
char string2[] =
"Another string\n\tparsed at the same time.";
char seps[] = " ,\t\n";
char *token1 = NULL;
char *token2 = NULL;
char *next_token1 = NULL;
char *next_token2 = NULL;

int main(void)
{
	printf("Tokens:\n");

	// Establish string and get the first token:
	token1 = strtok_s(string1, seps, &next_token1);
	token2 = strtok_s(string2, seps, &next_token2);

	// While there are tokens in "string1" or "string2"
	while ((token1 != NULL) || (token2 != NULL))
	{
		// Get next token:
		if (token1 != NULL)
		{
			printf(" %s\n", token1);
			token1 = strtok_s(NULL, seps, &next_token1);
		}
		if (token2 != NULL)
		{
			printf("        %s\n", token2);
			token2 = strtok_s(NULL, seps, &next_token2);
		}
	}
	getchar();
}