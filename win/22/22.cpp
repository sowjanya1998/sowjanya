#include<iostream>
#include<ctype.h>
using namespace std;
#include<windows.h>
#include"C:/Users/HP/source/repos/NewRepo/sowjanya/win/21_3/21_3.h"
void main()
{
	char ch;
	int res, a, b;
	typedef int (*MYPROC)(int, int);
	MYPROC ADD, SUB, MUL, DIV;
	HMODULE han1;
	han1=LoadLibraryExA("C:/Users/HP/source/repos/NewRepo/sowjanya/win/Debug/21_3.dll", NULL, NULL);
	
	ADD = (MYPROC)GetProcAddress(han1, (LPCSTR)"add");
	SUB = (MYPROC)GetProcAddress(han1, (LPCSTR)"sub");
	MUL = (MYPROC)GetProcAddress(han1, (LPCSTR)"mul");
	DIV = (MYPROC)GetProcAddress(han1, (LPCSTR)"divide");
	cout << "1.add" << "2.sub" << "3.mul" << "4.div" << endl;
	cin >> ch;
	cout << "enter two integers";
	//cin >> a >> b;
	scanf_s("%d%d", &a, &b);
	if (!isalpha(a) && !isalpha(b))
	{
		switch (ch)
		{
		case '1':cout << "addition" << endl;
			res = ADD(a, b);
			break;
		case '2':cout << "subtraction" << endl;
			res = SUB(a, b);
			break;
		case'3':cout << "mutiplication" << endl;
			res = MUL(a, b);
			break;
		case'4':cout << "division" << endl;
			res = DIV(a, b);
			break;

		}

		cout << res << endl;
	}
}