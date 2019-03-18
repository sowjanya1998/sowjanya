#include<Windows.h>
#include<stdio.h>
#include"21_3.h"

int add(int a, int b)
{
	return (a + b);
}
int sub(int a, int b)
{
	return (a - b);
}
int mul(int a, int b)
{
	return (a * b);
}
int divide(int a, int b)
{
	return (a / b);
}
BOOL APIENTRY Dllmain(HANDLE hand, DWORD msg, LPVOID res)
{
	switch (msg)
	{
	case DLL_PROCESS_ATTACH:
		printf("dll process attached\n");
		break;

	case DLL_THREAD_ATTACH:
		printf("dll thread attached");
		break;
	case DLL_THREAD_DETACH:
		printf("dll thread detached");
		break;
	case DLL_PROCESS_DETACH:
		printf("dll process detached");
		break;
	}
	return TRUE;
}