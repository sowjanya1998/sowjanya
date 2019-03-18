#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
DWORD WINAPI print2(LPVOID lp)
{
	int i;
	printf("secondary thread");
	for (i = 0; i < 5; i++)
		printf("%d\t", i);
	
}
DWORD WINAPI print1(LPVOID lp)
{
	printf("primary thread \n");
	HANDLE han2;
	han2 = CreateThread(NULL, 0, print2, NULL, 0, &han2);
	WaitForSingleObject(han2, INFINITE);
	TerminateThread(han2, NULL);
	LPWORD lpw;
	GetExitCodeThread(han2, &lpw);
	if (lpw != STILL_ACTIVE)
		printf("thread terminated\n");
	printf("back to primary thread\n");
	printf("hello world\n");
	

	printf("hello");
}
void main()
{
	LPWORD *Id;
	HANDLE han1;

	//printf("main thread:%ld\n ",GetCurrentThreadId());
	han1 = CreateThread(NULL, 0, print1, NULL, 0, &Id);//thread_query_info is used for reading exit code of handle and processid of thread
	if (han1 == NULL && Id == NULL)
	{
		printf("thread is not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		//DWORD dw1;
		printf("thread created:%ld\n", Id);
		WaitForSingleObject(han1, INFINITE);
		TerminateThread(han1, NULL);
		LPWORD lpw;
		GetExitCodeThread(han1, &lpw);
		if (lpw != STILL_ACTIVE)
			printf("thread terminated\n");
		printf("welcome to main\n");
		CloseHandle(han1);
	}
	getchar();
}