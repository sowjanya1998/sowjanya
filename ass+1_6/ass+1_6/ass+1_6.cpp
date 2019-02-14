#include<iostream>
using namespace std;
class point
{
	int x;
	int y;
public:
	point(int a,int b)
	{
		x = a;
		y = b;
	}
	friend void distance(point, point);
};
void distance(point p1, point p2)
{
	int d1, d2, dis;
	d1 = pow((p2.x - p1.x), 2);
	d2 = pow((p2.y - p1.y), 2);
	dis = sqrt(d1 + d2);
	cout << dis << endl;
	getchar();
}
int main()
{
	point p1(1, 2), p2(2, 2);
	distance(p1, p2);
	getchar();
}