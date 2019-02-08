#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int n, i, j, p;
	gets_s(str, sizeof(str));
	n = strlen(str);

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			printf("%c", str[j]);
		}
		for (p = 0; p < i; p++)
			printf("%c", str[p]);
		printf("\n");
	}
	getchar();
}
	