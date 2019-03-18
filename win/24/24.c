#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
LPWORD  WINAPI print1()
{
	Sleep(1000);
}
LPWORD WINAPI print2()
{
	Sleep(1000);
}
LPWORD WINAPI print3()
{
	Sleep(2000);
}
void reason(DWORD dw)
{
	switch (dw)
	{
	case WAIT_TIMEOUT: printf("timeout\n");
		break;
	case WAIT_OBJECT_0:
		printf("terminated\n");
		break;
	}
}
void main()
{
	DWORD dw1, dw2, dw3;
	LPWORD *Id = NULL;
	HANDLE han1, han2, han3;
	han1 = CreateThread(NULL, 0, print1, NULL, 0, Id);
	if (han1 == NULL)
	{
		printf("thread is not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		printf("thread created\n");
		printf("a.	 timeout interval INFINITE \n");
		dw1=WaitForSingleObject(han1, INFINITE);
		reason(dw1);
	}
	han2 = CreateThread(NULL, 0, print2, NULL, 0, Id);
	if (han2 == NULL)
	{
		printf("thread is not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		printf("thread created\n");
		printf("timeout interval 1000\n");
		dw2 = WaitForSingleObject(han2, 1000);
		reason(dw2);
	}
	han3 = CreateThread(NULL, 0, print3, NULL, 0, Id);
	if (han3 == NULL)
	{
		printf("thread is not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		printf("thread created\n");
		printf("timeout interval 1000 with Sleep(2000) inside thread\n");
		dw3 = WaitForSingleObject(han3, 1000);
		reason(dw3);
	}
	getchar();
}