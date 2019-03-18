#include<stdio.h>
#include<Windows.h>
void main(int argc,char* argv[])
{
	int check1 = 0,check2=0;
	STARTUPINFO sui1;
	STARTUPINFO sui2;

	PROCESS_INFORMATION pi1;
	PROCESS_INFORMATION pi2;
	ZeroMemory(&sui1, sizeof(sui1));
	ZeroMemory(&pi1, sizeof(pi1));
	sui1.cb = sizeof(sui1);
	ZeroMemory(&sui2, sizeof(sui2));
	ZeroMemory(&pi2, sizeof(pi2));
	sui2.cb = sizeof(sui2);
	HANDLE han1,han2;
	check1 = CreateProcess(TEXT("C://Windows/notepad.exe"), NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL,NULL , &sui1, &pi1);
	if (check1 == 0)
	{
		printf("process1 not created:%d\n",GetLastError());
		exit(0);
	}
	else
	{

		printf("process created");
		printf("%ld\n", pi1.hProcess);
		han1 = pi1.hProcess;
		printf("%ld\n", pi1.hThread);
	}
	check2 = CreateProcessA((LPSTR)argv[1],  NULL,NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL,NULL, &sui2, &pi2);
	if(check2==0)
	{ 
		printf("process2 not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		printf("process created");
		printf("%ld\n", pi2.hProcess);
		han2 = pi2.hProcess;
		printf("%ld\n", pi2.hThread);
	}
	CloseHandle(han1);
	CloseHandle(han2);

}