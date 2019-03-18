#include<stdio.h>
#include<Windows.h>
LPWORD WINAPI print()
{
	printf("in callback fun\n");
}
void main()
{
	int check1 = 0;
	printf("c1:%ld\n", GetCurrentProcess());
	check1=SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS);
	if (check1 == 1)
		printf("priority success\n");
	else
		printf("not set priority:%ld \n",GetLastError());
	HANDLE han1;
	han1 = CreateThread(NULL, 0, print, NULL, THREAD_PRIORITY_LOWEST, &han1);
	if(han1!=NULL)
		printf("thread success\n");
	else
	printf("thread fail\n");
	getchar();
}