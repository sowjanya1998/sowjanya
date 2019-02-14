#include<iostream>
using namespace std;
class distance2;
class result;
class distance1
{
	int meters;
	int centimeters;
public:
	distance1()
	{
		meters = 5;
		centimeters = 7;
	}
	//friend void result::function(distance1, distance2);
	friend class result;
};
class distance2
{
	int feet;
	int inch;
public:
	distance2()
	{
		feet = 2;
		inch = 3;
	}
	//friend void result::function(distance1, distance2);
	friend class result;

};
class result
{
	int x;
public:
	result(int y)
	{
		x = y;
	}
	void function(distance1 &d1,distance2 d2)
	{
		
		int ch;
		scanf_s("%d", &ch);
		switch (ch)
		{
		case 1:
			//distance1 d3;
			d1.meters = x * 1000;
			d1.centimeters = x * 1000000;
			cout << d1.meters << " " << d1.centimeters << endl;
			getchar();
			break;
		case 2:
			d2.feet = x * 3280;
			d2.inch = x * 3937;
			cout << d2.feet << " " << d2.inch << endl;
			getchar();
			break;
		}
	}
};
int main()
{
	distance1 d11;
	distance2 d22;
	result r1(1);
	r1.function(d11, d22);
	getchar();
}