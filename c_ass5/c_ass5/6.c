#include<stdio.h>
void main()
{
	FILE *fp;
	fopen_s(&fp, "6.txt", "r");
	while (!feof(fp))
	{
		printf("%c", fgetc(fp));
	}
	getchar();
}