#include<iostream>
using namespace std;
class task
{
	int m;
public:
	task()
	{
		cout << "default constructor" << endl;
	}
	task(int x)
	{
		cout << "one parameter" << endl;

	}
	~task()
	{
		cout << "in destrcutor" << endl;
	}
	void fun1(task &t)
	{
		cout << "in fun1" << endl;
		task t1(3);
		t.m = 0;

	}
	void fun2(task t2)
	{
		cout << "in fun2" << endl;
		task &t4 = t2;
		t4.m = 5;
		cout << m << " " << t2.m;
		getchar();
	}
};
int main()
{
	task t1, t2(3);
	t1.fun1(t2);
	t2.fun2(t1);
	getchar();
}