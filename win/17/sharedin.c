#include<stdio.h>
#include<Windows.h>
HANDLE han[2];
	int g = 0;
	DWORD WINAPI print1(LPVOID lp)
	{
		g++;
	}
	DWORD WINAPI print2(LPVOID lp)
	{
		g++;
	}
	void main()
	{
		HANDLE han1, han2;
		LPWORD Id1, Id2;
		int i = 0;
		while (1)
		{
			i++;
			g = 0;
			han1 = CreateThread(NULL, 0, print1, NULL, 0, &Id1);
			if (han1 == NULL)
			{
				printf("thread1 is not created:%d\n", GetLastError());
				exit(0);
			}
			else
				printf("thread1 created\n");
			han2 = CreateThread(NULL, 0, print2, NULL, 0, &Id2);
			if (han2 == NULL)
			{
				printf("thread2 is not created:%d\n", GetLastError());
				exit(0);
			}
			else
				printf("thread2 created\n");
			
			
			han[0] = han1;
			han[1] = han2;
			WaitForMultipleObjects(2, han, TRUE, INFINITE);
			if (g == 1)
			{
				printf("Inconsisent%d\n",g);
				break;
			}
			else
			{
				printf("consistent%d\n",g);
			

			}
		}
}