#include<iostream>
using namespace std;
class arth
{
	int var;
public:
	arth(int x)
	{
		var = x;
	}
	inline int addition()
	{
		return (var + 7);
	}
	inline int operator-(int x)
	{
		return (var - x);
	}
	 int div(int x)
	{
		 return (var / x);
	}
	 inline int division(int x)
	 {
		 return(div(x));
	 }

};
inline int mul(int x, int y)
{
	return(x*y);
}
int main()
{
	int ch, res;
	arth a1(7), a2(9), a3(10);
	scanf_s("%d", &ch);
	getchar();
	switch (ch)
	{
	case 1:
		res = a1.addition();
		break;
	case 2:
		res = a2 - 7;
		break;
	case 3:
		res = a3.division(10);
		break;
	case 4:
		res = mul(3, 4);
		break;
	default:exit(0);
	}
	cout << res;
	getchar();
}

