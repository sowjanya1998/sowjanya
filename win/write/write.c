#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100
void main()
{
	HANDLE hfile;
	char *buffer = NULL;
	LPCSTR filename = "text.txt";
	/*hfile = CreateFile(filename, NULL, FILE_SHARE_WRITE, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
	{
		_tprintf(_T(" file not created"));
		exit(0);
	}
	else
		_tprintf(_T("file created"));

	close(hfile);
	return 0;*/

	DWORD nbw;
	hfile = CreateFileA(filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
	{
		_tprintf(_T(" file not created"));
		exit(0);
	}
	buffer = (char*)malloc(sizeof(char)*20);
	//ZeroMemory(buffer, MAX);
	char ch;
	int i = 2, j = 0;
	printf("enter in\n");
	while (ch = getchar(stdin) != '\n')
	{
		
		realloc(buffer, sizeof(char)*i);
		buffer[j] = ch;
		i++;
		//printf("%c", buffer[j]);
		_tprintf(_T("%s", buffer[j]));
		j++;
	}
	buffer[j] = '\0';
	//strcpy_s(buffer,strlen(buffer), "hello hi");
	printf("%s",buffer);
	int check1 = WriteFile(hfile, buffer, strlen(buffer)+1, &nbw, NULL);
	if (check1 == 0)
	{
		_tprintf(_T("cannot write"));
		//	printf("%s", GetLastError());
			//DWORD DW=GetLostError();
			//printf("%d", GetLostError());
		exit(0);
	}
}
/*
#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
#define MAX 256
int main()
{
	HANDLE hFile;
	CHAR *buffer = NULL, ch;
	int i = 2, j = 0;
	LPCSTR filename = "sample1.txt";
	hFile = CreateFileA(filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("file you specified doesnot exist in current directory \n error code is %d"), GetLastError());
	}
	else
	{
		_tprintf(_T("file opened %S \n"), filename);
	}
	DWORD dwNwr;
	buffer = (CHAR *)malloc(sizeof(CHAR)*MAX);
	printf("enter the text to be entered within 256 characters\n");
	while ((ch = getc(stdin)) != '\n')
	{
		realloc(buffer, sizeof(CHAR)*i);
		buffer[j] = ch;
		i++;
		j++;
	}
	buffer[j] = '\0';
	//for(i=0;i<j;i++)
	printf("%s", buffer);
	BOOL ret = WriteFile(hFile, buffer, strlen(buffer) + 1, &dwNwr, NULL);
	printf("%d", ret);
	getchar();
	return 0;
}
*/