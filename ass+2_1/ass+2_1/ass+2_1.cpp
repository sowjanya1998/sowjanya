#include<iostream>
using namespace std;
class polar
{
	int radius;
	int angle;
	static int x;
public:
	static int y;
	polar()
	{
		radius = 0;
		angle = 0;
	}
	polar(int r, int a)
	{
		radius=r;
		angle = a;
		x++;
		cout << "object" << x << "created" << endl;
	}
	~polar()
	{

		cout << "destructor" << x-- << "deelted" << endl;
	}
	static void count()
	{
		cout << "in static fun" << endl;
		cout << "no of objects created:" << x << y<<endl;
	}
	void count1()
	{
		cout << "in normal fun" << endl;
		cout << "no of ojects created:" << x << endl;
	}
};
int polar::x;
int polar::y;
int main()
{
	polar p1, p2(2, 3), p3;
	cout << polar::y << endl;
	cout << p1.y << endl;
	cout << p2.y << endl;
	p1.count1();
	polar::count();
	p3.count();
	getchar();
}


