#include<stdio.h>
#include<Windows.h>
#include<tchar.h>
int _tmain(int argc,TCHAR *argv[])
{
	printf("hello welcome");

	printf("%s", *argv[1]);

	printf("%s", *argv[0]);
	/*LPTSTR WINAPI han1 = GetCommandLine();
	//HANDLE han1 = (unsigned long)*argv[0];
	//tprintf(_T("argv[0] %lu\n"), (unsigned long)*argv[0]); 
	printf("second handle:%ld\n", han1);
	char buffer[20];
	strcpy_s(buffer, 19, "hello");
	WriteFile(han1, buffer, sizeof(buffer) + 1, NULL, NULL0*/
	getchar();
}