#include<stdio.h>
#include<Windows.h>

DWORD WINAPI print()
{
	int i;
	for (i = 1; i <= 1000; i++)
		printf("%d\t", i);

}
void main()
{
	char *str, ch;
	LPWORD *Id = NULL;
	HANDLE han1;
	han1 = CreateThread(NULL, 0, print, NULL, CREATE_SUSPENDED, Id);
	if (han1 == NULL)
	{
		printf("thread is not created:%d\n", GetLastError());
		exit(0);
	}
	else
	{
		printf("thread created\n");
		Sleep(5000);
		ResumeThread(han1);
		getchar();
	}
}