#include<stdio.h>
#include<Windows.h>
void main(int argc,char* argv)
{
	int check1 = 1;
	STARTUPINFO  sui1;
	PROCESS_INFORMATION pi1;
	ZeroMemory(&sui1, sizeof(sui1));
	ZeroMemory(&pi1, sizeof(pi1));
	sui1.cb = sizeof(sui1);
	BOOL cph;
	cph = CreateProcess(TEXT("C:/Users/HP/source/repos/NewRepo/sowjanya/win/Debug/11a.exe"), NULL , NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sui1, &pi1);
	if (cph==0)
	{
		printf("process1 not created:%d\n", GetLastError());
		//
		exit(0);
	}
	else
	{
		printf("process created\n");
		char *buffer;
		buffer = (char*)malloc(sizeof(char) * 20);
		buffer = "hello hi";
		DWORD nbw;
		HANDLE hfile = (LPTSTR)argv[1];
		WriteFile(hfile, buffer, strlen(buffer) + 1, &nbw, NULL);
	}
	
}