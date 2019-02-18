#include<iostream>
using namespace std;
struct st_stack
{
	int top;
	int size;
	int *s;
};
class stack
{
	struct st_stack st;
public:
	stack()
	{
		st.top = -1;
		st.size = 0;
		st.s = NULL;
	}
	stack(int n)
	{
		st.top = -1;
		st.size = n;
		st.s = new int[st.size];
	}
	void setsize(int n)
	{
		st.size = n;
		st.s = new int[st.size];
	}
	bool isFull()
	{
		return(st.top == st.size - 1);
	}
	bool isEmpty()
	{
		return(st.top == -1);
	}
	void push(int ele)
	{
		if (!isFull())
		{
			st.s[++st.top] = ele;
		}
		else
			cout << "stack overflow" << endl;
	}
	int pop()
	{
		int x = -999;
		if (!isEmpty())
		{
			x = st.s[st.top--];
		}
		else
			cout << "underflow" << endl;
		return x;
	}
	void display()
	{
		int i;
		for (i = 0; i <= st.top; i++)
			cout << st.s[i] << " ";
		cout << endl;
	}

};
int main()
{
	int i, x;
	stack s1(5), s2;
	s2.setsize(3);
	cout << "stack 1  elemsnts adding" << endl;
	s1.push(1);
	s1.display();
	s1.push(2); 
	s1.display();
	x=s1.pop();
	s1.display();
	cout<<"poping"<<endl;
	x=s1.pop();
	s1.display();

	x=s1.pop();
	s1.display();
	cout << "s2" << endl;
	for (i = 0; i < 4; i++)
	{
		s2.push(i);
		s2.display();

	}
	s2.display();
	getchar();
}