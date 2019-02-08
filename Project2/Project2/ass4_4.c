#include<stdio.h>
int replace(char *str1)
{
	int n = 0;
	while(*str1++!='\0')
	{ 
		if (*str1 == ' ') {
			n++;
			*str1 = '-';
		}
	
	}
	//printf("%s", str1);
	return n;
}
void main()
{
	int n;
	char *str;
	str = (char*)malloc(10 * sizeof(char));
	gets(str);
	n = replace(str);
	printf("%s", str);
	printf("%d", n);
	getchar();
}