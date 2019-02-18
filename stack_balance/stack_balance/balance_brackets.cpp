#include<iostream>
using namespace std;
class stack
{
	int top;
	int size;
	char *s;
public:
	stack()
	{
		top = -1;
		size = 0;
		s = NULL;

	}
	stack(int n)
	{
		top = -1;
		size = n;
		s = new char[n];
	}
	void push(char ele)
	{
		s[++top] = ele;
		//cout << "element pushed is " << s[top] << endl;
	}
	char pop()
	{
		top--;
		return(s[top]);
	}
	char peek()
	{
		return(s[top]);
	}
	bool isEmpty()
	{
		return(top == -1);

	}
};
int main()
{
	char str[20];
	int n, si, i, flag = 0;
	char ch;
	cin >> si;
	stack s1(si);
	cin >> str;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		switch (str[i])
		{
		case '{':
		case '[':
		case '(':  s1.push(str[i]);
			break;
		case ')':
		case'}':
		case ']': if (!s1.isEmpty())
		{
			ch = s1.peek();
			if ((ch == '(' && str[i] == ')') || (ch =='{' && str[i] == '}') || (str[i] == '[' && str[i] == ']'))
				s1.pop();
			else
				flag = 1;
		}
				  else 
			flag = 1;
			break;
		default:;
		}

		if (flag == 1)
			break;


		
	}
	if (flag == 0 && s1.isEmpty())
		cout << "balanaced";
	else
		cout << "not balanced";

	getchar();
	getchar();

}