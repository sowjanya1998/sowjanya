#include<stdio.h>
int main()
{
	char text[80];
	int i, letters = 0, digits = 0, space = 0, tabs = 0, sp = 0;
	scanf_s("%[^\n]s", text);
	for (i = 0; text[i] != '\0'; i++)
	{
		if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90))
			letters++;
		else if (text[i] >= 48 && text[i] <= 57)
			digits++;
		else if (text[i] == ' ')
			space++;
		else if (text[i] == '\t')
			tabs++;
		else if ((text[i] >= 32 && text[i] <= 47) || (text[i] >= 123 && text[i] <= 127) || (text[i] >= 91 && text[i] <= 96) || (text[i] >= 58 && text[i] <= 64))
			sp++;
	}
	printf("%d letters", letters);
	printf("%d digits", digits);
	printf("%d space", space);
	printf("%d tabs", tabs);
	printf("%d specialcharacters", sp);
	return 0;
}