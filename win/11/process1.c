#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
void main()
{
	HANDLE hfile;
	printf("file PROCESS CREATION\n");
	LPSTR filename = "text1.txt";
	SECURITY_ATTRIBUTES sa1;
	sa1.bInheritHandle = TRUE;
	sa1.lpSecurityDescriptor = NULL;
	sa1.nLength = sizeof(sa1);

	hfile = CreateFileA(filename, GENERIC_READ|GENERIC_WRITE, FILE_SHARE_READ|FILE_SHARE_WRITE, &sa1, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hfile)
	{
		_tprintf(_T(" file not created\n"));
		exit(0);
	}
	else
	{
		_tprintf(_T("file created\n"));
		printf("handle:%ld", hfile);
	}
	int check1 = 1;
	STARTUPINFO  sui1;
	PROCESS_INFORMATION pi1;
	ZeroMemory(&sui1, sizeof(sui1));
	ZeroMemory(&pi1, sizeof(pi1));
	sui1.cb = sizeof(sui1);
	BOOL cph;
	LPSTR LP = TEXT("helloWorld");
	cph = CreateProcessW(TEXT("C:/Users/HP/source/repos/NewRepo/sowjanya/win/Debug/11c.exe"),LP,NULL, NULL, TRUE,CREATE_NEW_CONSOLE, NULL, NULL, &sui1, &pi1);

	if (cph == 0)
	{
		printf("process1 not created:%d\n", GetLastError());
		//
		exit(0);
	}
	else
	{
		printf("process created\n");
	}
	CloseHandle(hfile);
		/*HANDLE han1 = (HANDLE)hfile;
		char buffer[20];
		strcpy_s(buffer, 19, "hello");
		WriteFile(han1, buffer, sizeof(buffer) + 1, NULL, NULL);*/
}