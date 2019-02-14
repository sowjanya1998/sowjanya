#include<iostream>
using namespace std;
class complex
{
	int real, img;
public:

	complex()
	{
		real = 0;
		img = 0;
	}
	complex(int a)
	{
		real = a;
		img = a;

	}
	complex(int a, int b)
	{
		real = a;
		img = b;
	}
	void display()
	{
		cout << real << "+i" << img << endl;
	}
	friend complex add(complex &a, complex &b);
	friend complex mul(complex &a, complex &b);

}; 
complex add(complex &a, complex &b)
{
	complex c3;
	c3.real = a.real + b.real;
	c3.img = a.img + b.img;
	return c3;

}
complex mul(complex &a, complex &b)
{
	complex c3;
	c3.real = (a.real*b.real) - (a.img*b.img);
	c3.img = (a.real*b.img) + (a.img*b.real);
	return c3;
}

int main()
{
	complex c1(4), c2(4,5), c3;
	c3=add(c1, c2);
	c3.display();
	c3 = mul(c1, c2);
	c3.display();
	getchar();
}
