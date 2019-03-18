#include<Windows.h>
#include<stdio.h>
#include<tchar.h>
#include<stdlib.h>
#define MAX 10
int main()
{
	HANDLE hfile;
	char buffer[MAX] = { 0 };
	LPCSTR filename = "text.txt";
	hfile = CreateFile(filename, NULL, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
	{
		_tprintf(_T(" file not created"));
		exit(0);
	}
	else
	{
		DWORD nbw;
		hfile = CreateFile(filename, GENERIC_WRITE, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
		strcpy(buffer, "hello hi");
		int check1=WriteFile(filename, buffer, MAX, &nbw, NULL);
		if (check1 == 0)
		{
			_tprintf(_t("cannot write"));
			exit(0);
		}
		

	}

}