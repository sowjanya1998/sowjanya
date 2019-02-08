#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void reverse(char *str1,int i,int j)
{
	char temp;
	if (i > j)
		return;
	//strcpy(temp, *str1[i]);
		//strcpy(*str1[i], *str1[j]);
	//strcpy(*str1[j], temp);
	temp = *(str1 + i);
	*(str1+i)= *(str1+j);
	*(str1 + j) = temp;
	reverse(str1, i+1, j-1);
}
int main()
{
	char *str;
	int n;
	str = (char*)malloc(20 * sizeof(char));
	//scanf_s("%s", str);
	gets_s(str,20);
	n = strlen(str);
	reverse(str,0,n-1);
	printf("%s", str);
	getchar();
}