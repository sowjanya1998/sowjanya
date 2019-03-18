#include<stdio.h>
void main()
{
	int count = 0;
	FILE *fp;
	fopen_s(&fp, "9.txt", "r");
	while (!feof(fp))
	{
		printf("%c", fgetc(fp));
		count++;
	}
	//printf("%d\n", count);
	printf("\n%d\n", ftell(fp));
	fseek(fp, -count, SEEK_CUR);
	while (!feof(fp))
	{
		printf("%c", fgetc(fp));
	}
	getchar();
}