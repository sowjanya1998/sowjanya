#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp, *fp1;
	fopen_s(&fp, "test.txt", "r");
	fopen_s(&fp1, "abcd.txt", "w");

	if (fp == NULL)				//file1 checking
		printf("file1 not opening");
	if (fp1 == NULL)			//file2 checking
		printf("FILE2 NOT OPENING");

	char temp[20], a[20], b[20], ch, c = ' ';
	int i, n, flag = 0, j;
	n = strlen(a);
	printf("enter string\n");
	gets(a);
	for (i = 0; i < n; i++)
	{
		printf("%c", a[i]);
	}
	for (i = 0; i < n; i++)
	{
		b[i] = a[n - i - 1];
		printf("%c", b[i]);
	}

	while ((fscanf_s(fp, "%s", temp)) != EOF)
	{

		if (strcmp(temp, a) == 0)
		{
			fputs(b, fp1);
			fputc(c, fp1);
		}
		else
		{
			fputs(temp, fp1);
			fputc(c, fp1);
		}
	
		fgets(ch, sizeof(ch), fp);
		

	}
	return 0;
}