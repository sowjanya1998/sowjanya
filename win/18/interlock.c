#include<stdio.h>
#include<Windows.h>

long int g;

DWORD WINAPI print1(int x)
{
	
	InterlockedExchangeAdd(&g, 1);
		
	ExitThread(2);
}
DWORD WINAPI print2(int x)
{
	
	InterlockedExchangeAdd(&g, 1);
	ExitThread(2);
	
}
void main()
{
	HANDLE han1, han2;
	LPWORD Id1, Id2;
	int i = 0;
	//g = (int)malloc(sizeof(int));
	//*g = 0;
	while (1)
	{
		i++;
		han1 = CreateThread(NULL, 0, print1, 0, 0, &Id1);
		if (han1 == NULL)
		{
			printf("thread1 is not created:%d\n", GetLastError());
			//exit(0);
		}
		else
			printf("thread1 created\n");
		han2 = CreateThread(NULL, 0, print2, 0, 0, &Id2);
		if (han2 == NULL)
		{
			printf("thread2 is not created:%d\n", GetLastError());
			//exit(0);
		}
		else
			printf("thread2 created\n");
		HANDLE han[2];
		han[0] = han1;
		han[1] = han2;
		WaitForMultipleObjects(2, han, TRUE, INFINITE);
		if (g == 2)
		{
			printf("consisent%d\n", g);
			
		}
		else
		{
			printf("Inconsistent%d\n", g);
			break;

		}
	}
}