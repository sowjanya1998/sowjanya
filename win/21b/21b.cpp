#include<iostream>
#include<windows.h>
#include"C:/Users/HP/source/repos/NewRepo/sowjanya/win/21_3/21_3.h"
using namespace std;
void main()
{
	int a, b, res;
	char ch;
	cout << "1.add" << "2.sub" << "3.mul" << "4.div" << endl;
	cin >> ch;
	cout << "enter two integers";
	cin >> a >> b;
	
	switch (ch)
	{
	case '1':res = add(a, b);
		break;
	case '2':res = sub(a, b);
		break;
	case'3':res = mul(a, b);
		break;
	case'4':res = divide(a, b);
		break;

	}
	cout << "res:" << res << endl;
	getchar();

}