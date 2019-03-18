//not correct
#include<stdio.h>
#include<Windows.h>
void main(int argc, char* argv[])
{
	int check1 = 0, check2 = 0;
	
	}
	check2 = CreateProcessA((LPSTR)argv[1], NULL, NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &sui2, &pi2);
	if (check2 == 0)
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
	//CloseHandle(han1);
	//CloseHandle(han2);

}