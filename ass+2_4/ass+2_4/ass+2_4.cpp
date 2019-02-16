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
	complex(int x, int y)
	{
		real = x;
		img = y;
	}
	/*complex(complex &c)
	{
		real = c.real;
		img = c.img;
	}*/
	void display()
	{
		cout << real << " " << img<<endl;
	}
	complex operator+(complex c)
	{
		complex temp;
		temp.real = real + c.real;
		temp.img = img + c.img;
		return temp;

	}
	complex operator-(complex c)
	{
		complex temp;
		temp.real = real + c.real;
		temp.img = img + c.img;
		return temp;
	}
	complex operator-()
	{
		complex temp;
		temp.real = -1 * real;
		temp.img = -1 * img;
		return temp;
	}
	void operator++()
	{
		real = ++real;
		//c.img = ++c.img;

	}
	complex operator++(int x)
	{
		complex temp;
		temp.real = real;
		temp.img = img;
		real = real + 1;
		img = img + 1;
		return temp;
	}
	complex operator=(complex c)
	{
		cout << "in fun" << endl;
		complex temp;
		temp.real = c.real;
		temp.img = c.img;
		return temp;
	}
	//complex operator()()
	complex* operator->()
	{
		return (this);
	}
	void print()
	{
		cout << real << " " << img;
	}
	int& operator[](int x)
	{
		if (x == 1)
			return real;
		else 
			return
			img;
	}
	complex operator,(complex c)
	{
		return c;
	}
};
int main()
{
	complex c1(2, 3), c2(2), c3, c4, c5(3, 4), c6(3, 2), c7(1, 3), c8, c9, c10, c11(1, 2);
	c3 = c1+c2;
	c1.display();
	c2.display();
	cout << "addition:" << endl;
	c3.display();
	c1.display();
	c2.display();
	cout << "subtraction" << endl;
	c4 = c1 - c2;
	c4.display();
	c5.display();
	cout << "- operation" << endl;
	c5 = -c5;
	c5.display();
	c6.display();
	cout << "pre incrememnt" << endl;
	++c6;
	c6.display();
	c7.display();
	cout << "postincrement" << endl;
	c8 = c7++;
	c8.display();
	c7.display();
	c8.display();
	cout << "asign" << endl;
	c9 = c8;
	c9.display();
	c3.display();
	cout << ",ope" << endl;
	c10 = (c1, c2, c3);
	c10.display();
	cout << "->op" << endl;
	c10->print();
	c11.display();
	cout << "real value" << endl;
	cout << c11[1];
	cout << "img value" << endl;
	cout << c11[2];
	getchar();
}