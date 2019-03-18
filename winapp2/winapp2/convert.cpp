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


	char *m3;

	wchar_t *u3;
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
	{

		int req = 0;
		m3 = (char*)malloc(sizeof(char) * 20);
		strcpy_s(m3, 19, "hello");
		req = MultiByteToWideChar(CP_UTF8, 0, m3, strlen(m3) + 1, NULL, 0);
		if (req == 0)
		{
			cout << "failed:";
			cout << GetLastError() << endl;
		}
		else
		{
			wchar_t *u4;
			u4 = new wchar_t[req];

			req = MultiByteToWideChar(CP_UTF8, 0, m3, strlen(m3) + 1, u4, req);
			cout << "mutliBye: " << m3 << endl;
			cout << "unicode: " << u4 << endl;
		}
	}
	/*void uni_mutli()
	{
		int check;
		u3 = (wchar_t*)malloc(sizeof(wchar_t) * 20);

		check = IsTextUnicode(u3, strlen(u3) + 1, NULL);
		if (check == 1)
		{
			int req = 0;

			req = WideCharToMultiByte(CP_UTF8, 0, u3, -1, NULL, 0, NULL, NULL);
			if (req == 0)
			{
				cout << "failed:";
				cout << GetLastError() << endl;
			}
			else
			{
				CHAR *m4;
				m4 = new char[req];
				req = WideCharToMultiByte(CP_UTF8, 0, u3, -1, m4, req, NULL, NULL);
				cout << "unicode: " << u3 << endl;
				cout << "multiByte: " << m4 << endl;
			}
		}
	}*/


};
int main()
{
	covert c1;
	c1.size();
	//c1.multi_uni();
	getchar();
}


