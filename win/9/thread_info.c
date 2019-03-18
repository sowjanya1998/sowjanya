#include<stdio.h>
#include<Windows.h>
int main()
{
	int check1 = 0;
	STARTUPINFO sui11;
	PROCESS_INFORMATION pi11;
	printf("process and thread info\n");
	check1 = CreateProcess(TEXT("C://Windows/notepad.exe"), NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sui11, &pi11);
	if (check1 == 0)
	{
		printf("process1 not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		
		DWORD PID = GetCurrentProcessId();
		DWORD TID = GetCurrentThreadId();
		DWORD PD = GetProcessId(pi11.hProcess);
		DWORD TD = GetThreadId(pi11.hThread);
		DWORD L = GetProcessIdOfThread(pi11.hThread);
		printf("currentprocessid:%ld\n", PID);
		printf("currentthreadid:%ld\n", TID);
		printf("processid:%ld\n", PD);
		printf("threadid:%ld\n", TD);
		printf("processidofthread:%ld\n", L);

		
	}
}