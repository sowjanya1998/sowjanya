#include<iostream>
using namespace std;
//class eval;
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
friend	void evaluate(char str[], stack st);

}; 
