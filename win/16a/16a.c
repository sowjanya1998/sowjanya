#include<stdio.h>
#include<Windows.h>
void main()
{
	int check1 = 1;
	STARTUPINFO  sui1;
	PROCESS_INFORMATION pi1;
	ZeroMemory(&sui1, sizeof(sui1));
	ZeroMemory(&pi1, sizeof(pi1));
	sui1.cb = sizeof(sui1);
	BOOL cph;
	cph = CreateProcessA("C:/Users/HP/source/repos/NewRepo/sowjanya/win/Debug/16b.exe", NULL, NULL, NULL, FALSE, HIGH_PRIORITY_CLASS, NULL, NULL, &sui1, &pi1);
	if (cph == 1)
		printf("process created\n");
	else
		printf("not created:%ld\n",GetLastError());
	printf("h2%ld\n", GetCurrentProcess());
	getchar();
}