#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
#include<stdlib.h>
#define MAX 100
void main()
{
	HANDLE hfile;
	char *buffer;
	//LPCSTR filename = "C:/Users/HP/source/repos/NewRepo/sowjanya/win/read/text.txt";
	LPCSTR filename = "text.txt";
	hfile = CreateFile(filename, GENERIC_READ, 0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
		printf("file not opened/n");
	else
	{
		buffer = (char*)malloc(sizeof(char)*MAX);
		ZeroMemory(buffer, MAX);
		int check;
		check = ReadFile(hfile, buffer, MAX, NULL, NULL);
		if (check == 0)
			printf("read not done");
		else
		{
			printf("BUFF");
			printf("%S", buffer);
		}
	}
	//close(hfile);
}

