#include<stdio.h>
#include<stdlib.h>
void main()
{
	char *str[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		str[i] = (char*)malloc(sizeof(char));
	}
	for (i = 0; i < 10; i++)
		gets(str[i]);
		//scanf_s("%s", str[i], sizeof(str[i]));
	for (i = 0; i < 10; i++)
	{
		printf("%s\n", str[i]);//str[i] is used to printstring
	}
	getchar();
}
