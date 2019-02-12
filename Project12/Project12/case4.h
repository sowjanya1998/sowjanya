#pragma once
#include<stdio.h>
#include<string.h>
void task4() {
	FILE *fp1, *fp2;
	char ch, str[10];
	fopen_s(&fp1, "file4.txt", "r");
	fopen_s(&fp2, "file31.txt", "w");
	strcpy_s(str,sizeof(str),"\\t");
	while (!feof(fp1))
	{
		ch = fgetc(fp1);
		//printf("%c", ch);
		if (ch == '\t') {
			fputs(str, fp2);
		}
		else
			fputc(ch, fp2);
	}
	
}
