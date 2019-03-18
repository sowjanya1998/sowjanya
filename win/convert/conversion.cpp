#include<Windows.h>
#include<iostream>
#include<stdlib.h>
#include<tchar.h>
using namespace std;
class covert
{
	char m1 = 'a';
	wchar_t u1 = L'b';
	CHAR m2 = 'A';
	WCHAR u2 = L'B';


	char *m3;

	WCHAR u3[20] = TEXT("ABC");
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

		int req = 0, i = 2, j = 0;
		char ch;
		m3 = (char*)malloc(sizeof(char) );
		//strcpy_s(m3, 19, "hello");
		cout << "enter multiByte data" << endl;
		while ((ch = getc(stdin)) != '\n')
		{
			realloc(m3, sizeof(char)*i++);
			m3[j++] = ch;
		}
		m3[j] = '\0';
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
			//cout << "unicode: " << u4 << endl;//ascii value
			//wprintf("%ws", u4);
			cout << "unicode" << endl;
			printf("%S", u4);
		}
	}
	void uni_mutli()
	{
		int check, i = 2, j = 0;
		char ch;
		/*u3 = (wchar_t*)malloc(sizeof(wchar_t));
		cout<<"enter unicode"<<endl;
		while (ch = getc(stdin) != '\n')
		{
			realloc(u3, sizeof(wchar_t)*i++);
			u3[j++] = ch;
		}
		u3[j] = '\0';*/
		check = IsTextUnicode(u3, 20, NULL);
		if (check == 1)
		{
			int req = 0;
			cout << "Entered text is unicode data";
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
		else
			printf("not unicode");
	}


};
int main()
{
	covert c1;
	c1.size();
	c1.multi_uni();
	c1.uni_mutli();
	getchar();
}


