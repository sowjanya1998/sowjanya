//implement string functions
#include <stdio.h>
#include<stdlib.h>

int strlen(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
void reverse()
{
	char *source, *destination;
	char ch;
	int n, j = 0, i=2;
		printf("enter string to be reversed\n");
		source = (char*)malloc(sizeof(char));
		while ((ch = getchar()) != '\n')
		{
			if (isdigit(ch))
			{
				printf("Invalid input");
				return;
			}
			source = realloc(source, sizeof(char)*i);
			source[j++] = ch;
			i++;

		}
		source[j] = '\0';
	
		destination = (char*)malloc(sizeof(char) * j);

		n = j;
		j = 0;
			for (i = n - 1; i >= 0; i--)
			{
				*(destination + j) = *(source + i);
				j++;
			}
			*(destination+j) = '\0';
printf(" string after reverse operation:%s\n", destination);
if (errno != 0)
printf("The error msg is :%s", strerror(errno));
}
void string_copy()
{
	int  i = 2, j = 0;
	char ch;
	char *source1, *destination1;
	printf("enter string to be copied\n");
		source1 = (char*)malloc(sizeof(char));
		while ((ch = getchar()) != '\n')
		{
			if (isdigit(ch))
			{
				printf("Invalid input");
				return;
			}
			source1=realloc(source1, sizeof(char)*i);
			source1[j++] = ch;
			i++;

		}
		source1[j] = '\0';

		destination1 = (char*)malloc(sizeof(char) * j);

			for (i = 0; i < j; i++)
			{
				*(destination1 + i) = *(source1 + i);

				}
			*(destination1 + j) = '\0';

		printf("string copied to destination is:");
		printf("%s\n", destination1);
		if (errno != 0)
			printf("The error msg is :%s", strerror(errno));
		
}
void string_concat()
{
	int n, n1, i = 2, j = 0;
	char ch;
	char *source, *destination;
	printf("enter string 1\n");
		source = (char*)malloc(sizeof(char));
		while ((ch = getchar()) != '\n')
		{
			if (isdigit(ch))
			{
				printf("Invalid input");
				return;
			}
			source = realloc(source, sizeof(char)*i);
			source[j++] = ch;
			i++;

		}
		source[j] = '\0';

	n = j;
	i = 2;
	j = 0;
	printf("enter string 2\n");
	destination= (char*)malloc(sizeof(char));
		while ((ch = getchar()) != '\n')
		{
			if (isdigit(ch))
			{
				printf("Invalid input");
				return;
			}
			destination = realloc(destination, sizeof(char)*i);
			destination[j++] = ch;
			i++;

		}
		destination[j] = '\0';

	n1 = j;
	j = 0;
		for (i = n; i < n + n1; i++)
		{
			*(source + i) = *(destination + j);
				j++;
		}
		*(source+i) = '\0';
	printf("string after concat operation:%s\n", source);
	if (errno != 0)
		printf("The error msg is :%s", strerror(errno));

}
void string_compare()
{
	int n, n1, i = 2, j = 0;
	char ch;
	char *source, *destination, *string1, *string2;
	printf("enter string1\n");
		source = (char*)malloc(sizeof(char));
		while ((ch = getchar()) != '\n')
		{
			if (isdigit(ch))
			{
				printf("Invalid input");
				return;
			}
			source = realloc(source, sizeof(char)*i);
			source[j++] = ch;
			i++;

		}
		source[j] = '\0';

	string1 = source;
	n = strlen(source);
	i = 2;
	j = 0;
	printf("enter string2\n");
		destination = (char*)malloc(sizeof(char));
		while ((ch = getchar()) != '\n')
		{
			if (isdigit(ch))
			{
				printf("Invalid input");
				return;
			}
			destination = realloc(destination, sizeof(char)*i);
			destination[j++] = ch;
			i++;

		}
		destination[j] = '\0';

	n1 = j - 1;
	string2 = destination;
		while (*source == *destination)
		{
			if (*source == '\0' || *destination == '\0')
				break;

			source++;
			destination++;
		}
		
	printf("After string comparision\n");
	if (*source == '\0' && *destination == '\0')
		printf("%s and %s  strings are same:0\n",string1,string2);
	else if (*source >*destination )
		printf("%s is bigger than %s:1\n",string1,string2);
	else
		printf("%s is smaller than %s:-1\n", string1, string2);
	if (errno != 0)
		printf("The error msg is :%s", strerror(errno));



}

int main()
{
	char ch;
	printf("STRING FUNCTIONS IMPLEMENTATION\n");
	while (1)
	{
		printf("1.STRING REVERSE 2.STRING COPY 3.STRING CONCAT 4.STRING COMPARE 5.TERIMINATE PROG\n");
		scanf_s("%c", &ch);
		getchar();
		switch (ch)
		{
		case'1':printf("REVERSE OF A GIVEN STRING\n");
			reverse();
			break;
		case '2':printf("STRING COPY\n");
			string_copy();
			break;
		case'3':printf("STRING CONCAT\n");
			string_concat();
			break;
		case'4':printf("STRING COMPARE\n");
			string_compare();
			break;
		case'5':exit(0);

		}
	}
}
