#include<stdio.h>
#include<Windows.h>
void main()
{
	char m1 = 'a';
	wchar_t u1 = L'b';
	CHAR m2 = 'A';
	WCHAR u2 = L'B';


	char *m3;

	wchar_t *u3;
	printf("size of varaiables\n");
	printf("char size:%d\n", sizeof(m1));
	printf("size of wchar:%d\n", sizeof(u1));
	printf("multibyte to unibyte\n");
	int req = 0, i = 2, j = 0;
	char ch;
	m3 = (char*)malloc(sizeof(char));
	printf("enter multibyte data\n");
	while ((ch = getchar(stdin)) != '\n')
	{
		realloc(m3, sizeof(char)*i++);
		m3[j++] = ch;
	}
	m3[j] = '\0';
	req = MultiByteToWideChar(CP_UTF8, 0, m3, strlen(m3) + 1, NULL, 0);
	if (req == 0)
	{
		printf("function failed");
	}
	else
	{
		wchar_t *u4;
		u4 = (wchar_t*)malloc(sizeof(wchar_t)*req);

		req = MultiByteToWideChar(CP_UTF8, 0, m3, strlen(m3) + 1, u4, req);
		printf("multibyte:%s\n", m3);
		//cout << "unicode: " << u4 << endl;//ascii value
		//wprintf("%ws", u4);
		printf("unicode\n");
		printf("%S", u4);
	}
	printf("unicode to multibyte\n");
	int check; i = 2, j = 0;
	 
	u3 = (wchar_t*)malloc(sizeof(wchar_t));
	printf("enter unicode\n");
	while (ch = getchar(stdin) != '\n')
	{
		realloc(u3, sizeof(wchar_t)*i++);
		u3[j++] =ch;
	}
	u3[j] = '\0';
	check = IsTextUnicode(u3, 20, NULL);
	if (check == 1)
	{
		int req = 0;
		printf("entered text is unicode data\n");
		req = WideCharToMultiByte(CP_UTF8, 0, u3, -1, NULL, 0, NULL, NULL);
		if (req == 0)
		{
			printf("function failed\n");
		}
		else
		{
			CHAR *m4;
			m4 = (char*)malloc(sizeof(char)*req);
			req = WideCharToMultiByte(CP_UTF8, 0, u3, -1, m4, req, NULL, NULL);
			printf("unicode:%S\n", u3);
			printf("multicode:%s\n", m4);
		}
	}
	else
		printf("not unicode data");
}