#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
void main()
{
	HANDLE hfile;
	printf("PARENT PROCESS CREATION\n");
	LPSTR filename = "text1.txt";
	SECURITY_ATTRIBUTES sa1;
	sa1.bInheritHandle = TRUE;
	sa1.lpSecurityDescriptor = NULL;
	sa1.nLength = sizeof(sa1);

	hfile = CreateFileA(filename, NULL, FILE_SHARE_READ,&sa1,OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
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
	printf("child process creation\n");
	int check1 = 1;
	STARTUPINFO  sui1;
	PROCESS_INFORMATION pi1;
	ZeroMemory(&sui1, sizeof(sui1));
	ZeroMemory(&pi1, sizeof(pi1));
	sui1.cb = sizeof(sui1);
	HANDLE cph;
	cph= CreateProcess(TEXT("C://Windows/notepad.exe"), NULL, NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sui1, &pi1);
	if (check1 == 0)
	{
		printf("process1 not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		printf("process created\n");

	/*	printf("handle:%ld", pi1.hProcess);
		printf("handle:%ld", pi1.hThread);
		printf("handle:%ld", pi1.dwProcessId);
		printf("handle:%ld", pi1.dwThreadId);
	*/	printf("handle:%ld",cph);
	}

	
}