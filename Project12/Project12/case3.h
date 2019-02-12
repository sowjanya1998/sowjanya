#include<stdio.h>
#include<string.h>
void task3()
{
	FILE *fp,*fp1;
	fopen_s(&fp, "file7.txt", "r");
	fopen_s(&fp1, "file30.txt", "w");
	if (fp == NULL)				//file1 checking
		printf("file1 not opening");
	if (fp1 == NULL)			//file2 checking
		printf("FILE2 NOT OPENING");
	char str[20], str1[20], ch;
	int i, n, flag=0, j;
	gets_s(str, sizeof(str));
	n = strlen(str);
	getchar();
	for (i = 0; i < n; i++)
	{
		str1[i] = str[n - i - 1];
	}
	i = 0;
	long n1 = n;

	while (!feof(fp))
	{
		ch = fgetc(fp);
		//fputc(ch, fp1);
		while (ch == str[i])
		{
			//ag = 0;

			if (i == n - 1)
			{
				//printf("2");
				ch = fgetc(fp);
				if (ch == '\0' || ch == ' ' || ch == '\n' || feof(fp) == 1)
				{
					flag = 1;
					//printf("1:%d", flag);
					break;
				}
				else
				{
					fseek(fp, -(n + 1), SEEK_CUR);
					for (j = 0; j <= n; j++)
					{
						ch = fgetc(fp);
						fputc(ch, fp1);
					}
					i = -1;
				}

			}
			//printf("7");
			ch = fgetc(fp);
			//fputc(ch, fp);
			i++;
		}
		//n1++;
		fputc(ch, fp1);
		if (flag == 1)
		{
			j = 0;
			//fseek(fp, -n1, SEEK_CUR);
			
			while (j < n)
			{
				//ch = fgetc(fp);
				fputc(str1[j],fp1);
				//ch = fgetc(fp);
				//printf("%c", str1[j]);
				j++;
			}
			break;
		}
		//ch = fgetc(fp);
		//fputc(ch, fp1);
		
	}
	while (!feof(fp))
	{
		ch = fgetc(fp);
		fputc(ch, fp1);
	}
	//fputc("c", fp1);
}
