#include<stdio.h>

void task2()
{
	FILE *fp, *fp2;
	char ch;
	fopen_s(&fp, "file20.txt", "r");
	fopen_s(&fp2, "file32.txt", "w");
	while (!feof(fp))
	{
		ch = fgetc(fp);
		//printf("%c", ch);
		if (ch == '/')
		{
			ch = fgetc(fp);
			//printf("%c", ch);
			if (ch == '*')
			{
				ch = fgetc(fp);
				while (ch != '*')
					ch = fgetc(fp);
				ch = fgetc(fp);
				//printf("%c", ch);
			}
			//ch=fgetc(fp);
			else if (ch == '/')
			{
				ch = fgetc(fp);
				//printf("%c", ch);
				while (ch != '\n')
					ch = fgetc(fp);

			}

		}
		//printf("%c", ch);
		//fputc(ch,fp2);
		else
			fputc(ch, fp2);
	}
	getchar();
}
