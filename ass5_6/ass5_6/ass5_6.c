#include<stdio.h>
void main()
{
	FILE *fp;
	char ch;
	fopen_s(&fp, "input5.txt", "r");
	while (!feof(fp))
	{
		ch = fgetc(fp);
		fputc(ch, fp);
	}
	getchar();
}