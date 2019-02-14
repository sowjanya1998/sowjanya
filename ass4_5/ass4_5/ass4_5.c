#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	int ch, i, n;
	scanf_s("%d", &ch);
	getchar();
	char str[10];
	switch (ch)
	{
	case 0:
		//scanf_s("%s", str);
		gets_s(str, sizeof(str));
		getchar();
		n = strlen(str);
		for (i = 0; i < n; i++)
		{
			str[i] = toupper(str[i]);
		}
		printf("%s", str);
		getchar();
		break;
	case 1:
		//scanf_s("%s", str);
		gets_s(str, sizeof(str));
		getchar();
		n = strlen(str);
		for (i = 0; i < n; i++)
			str[i] = tolower(str[i]);
		printf("%s", str);
		getchar();
		break;
	}
	getchar();
}