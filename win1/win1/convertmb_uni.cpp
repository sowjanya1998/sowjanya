#include<Windows.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class covert
{
	char m1 = 'a';
	wchar_t u1 = L'b';
	CHAR m2 = 'A';
	WCHAR u2 = L'B';

	
	char *m3 = (char*)malloc(sizeof(char) * 20);
	wchar_t u3[20] =L"abc";
public:
	void size()
	{
		cout << "m1 size:" << sizeof(m1) << endl;
		wcout << "u1 size:" << sizeof(u1) << endl;
		cout << "m1 size:" << sizeof(m2) << endl;
		cout << "m1 size:" << sizeof(u2) << endl;
		cout << "m3 size:" << sizeof(m3) << endl;
		cout << "u3 size:" << sizeof(u3) << endl;

	}
	void multi_uni()
		int req = MultiByteToWideChar(CP_UTF8,0,m3,strlen(m3)+1,NULL,0);
		if (req == 0);
	}

	
};