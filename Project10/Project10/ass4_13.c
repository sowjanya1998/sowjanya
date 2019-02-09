#include<stdio.h>
void main()
{
	char str[20], j, str1[20];
	gets_s(str, sizeof(str));
	int p = -1, i;
	for (i = 0; str[i] != '\0'; i++)
	{
		p++;
		if (str[i] == '-')
		{
			i++;
			for (j = str[i - 2]+1; j !=str[i] ; j++)
			{
				str1[p++] = j;
			}
		}
		str1[p] = str[i];
	}
	str1[++p] = '\0';
	printf("%s", str1);
	getchar();
}