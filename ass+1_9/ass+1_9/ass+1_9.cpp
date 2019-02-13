#include<iostream>
using namespace std;
class swaping
{
	int x;
	int y;
public:
	swaping()//member variables
	{
		x = 5;
		y = 6;
	}
	void swap1(int a, int b)//swap by vlue
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	void swap2(int &a, int &b)//swap by refernce
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	void swap()
	{
		x = x + y;
		y = x - y;
		x = x - y;
		cout << x << "\t" << y;
	}
};
int main()
{
	swaping s,s2;
	int i, a = 3, b = 5;
	cout << a << " \t" << b << endl;
	scanf_s("%d", &i);
	getchar();
	switch (i)
	{
	case 1:s.swap1(a, b);
		cout << a << "\t" << b << endl;
		break;
	case 2: s.swap2(a, b);
		cout << a << "\t" << b << endl;
		break;
	}
	
	s2.swap();
	getchar();

}