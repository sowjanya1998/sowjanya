#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
DWORD WINAPI print(char *str)
{
	printf("In thread fun\n");
	printf("message by thread:%s", str);
}
void main()
{
	char *str, ch;
	LPWORD *Id=NULL;
	HANDLE han1;
	int i = 2, j = 0;
	str = (char*)malloc(sizeof(char));
	printf("enter message to print\n");
	while ((ch = getchar(stdin)) != '\n')
	{
		realloc(str, sizeof(char)*i);
		str[j++] = ch;
		i++;
	}
	str[j] = '\0';
	
	han1=CreateThread(NULL, 0, print, str, 0, &Id);
	if (han1== NULL)
	{
		printf("thread is not created:%d\n",GetLastError());
		exit(0);
	}
	else
		printf("thread created\n");
	getchar();
}
