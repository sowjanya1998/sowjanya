#include<iostream>
using namespace std;
class complex
{
	int real;
	int img;
public:
	complex()
	{
		real = 0;
		img = 0;
	}
	complex(int x)
	{
		real = x;
		img = x;
	}
	complex(complex &s)
	{
		real = s.real;
		img = s.img;

	}
	void print()
	{
		cout << real << " " << img << endl;
	}
	void operator=(complex s)
	{
		real = s.real;
		img = s.img;
	}
	void operator()(complex s)
	{
		real = s.real;
		img = s.img;
	}
};
int main()
{
	complex c1(2), c2(5);
	complex c3(c2);
	c3.print();
	complex c4, c5;
		c4 = c3;
		c4.print();
		c5(c1);
	c5.print();
	getchar();
}
