#include<iostream>
using namespace std;
#include"stack.h";
int getprec(char ch)
{
	switch (ch)
	{
	case '+':return 2;
	case '-':return 2;
	case '/':return 3;
	case '*':return 3;
	case')':return 1;
	case '(':return 1;
	case'[':return 1;
	case'{':return 1;
	case'}':return 1;
	case']':return 1;
	}
}
void post(char str[], int n, stack st)
{
	int i, x, y, j = 0;
	char ch;
	char out[20];
	for (i = 0; i < n; i++)
	{
		switch (str[i])
		{
		case '+':
		case '-':
		case '*':
		case '/':x = getprec(str[i]);
			while ((!st.isEmpty()) && (y = getprec(st.peek())) && (y >= x))

				out[j++] = st.pop();
			st.push(str[i]);
			break;
		case '(':
		case'{':
		case'[':
			st.push(str[i]);
			break;
		case ')':while (!st.isEmpty() && (ch = st.peek()) != '(')
			out[j++] = st.pop();
			st.pop();
			break;
		case '}':while (!st.isEmpty() && (ch = st.peek()) != '{')
			out[j++] = st.pop();
			st.pop();
			break;
		case ']':while (!st.isEmpty() && (ch = st.peek()) != '[')
			out[j++] = st.pop();
			st.pop();
			break;

		default: out[j++] = str[i];
		}

	}
	while (!st.isEmpty())
		out[j++] = st.pop();
	out[j] = '\0';
	cout << out << endl;
	//return out;
}
void pre(char str[], int n, stack st)
{
	char str1[20], *out, out1[20], ch;
	int i, j = 0, n1, x, y, n2, f;
	for (i = n - 1; i >= 0; i--)
	{
		f = 0;

		if (str[i] == '(') {
			f = 1;
			str1[j++] = ')';
		}
		if (str[i] == ')') {
			f = 1;
			str1[j++] = '(';
		}
		if (str[i] == '{') {
			f = 1;
			str1[j++] = '}';
		}
		if (str[i] == '}') {
			f = 1;
			str1[j++] = '{';
		}
		if (str[i] == '[') {
			f = 1;
			str1[j++] = ']';
		}
		if (str[i] == ']') {
			f = 1;
			str1[j++] = '[';
		}
		if (f != 1)
			str1[j++] = str[i];

	}
	str1[j] = '\0';
	//cout << str1<<"\n";
	out = new char[20];
	n1 = strlen(str1);
	j = 0;
	for (i = 0; i < n1; i++)
	{
		switch (str1[i])
		{
		case '+':
		case '-':
		case '*':
		case '/':x = getprec(str1[i]);
			while ((!st.isEmpty()) && (y = getprec(st.peek())) && (y > x))

				out[j++] = st.pop();
			st.push(str1[i]);
			break;
		case '(':
		case'{':
		case'[':
			st.push(str1[i]);
			break;
		case ')':while (!st.isEmpty() && (ch = st.peek()) != '(')
			out[j++] = st.pop();
			st.pop();
			break;
		case '}':while (!st.isEmpty() && (ch = st.peek()) != '{')
			out[j++] = st.pop();
			st.pop();
			break;
		case ']':while (!st.isEmpty() && (ch = st.peek()) != '[')
			out[j++] = st.pop();
			st.pop();
			break;


		default: out[j++] = str1[i];
		}

	}
	while (!st.isEmpty())
		out[j++] = st.pop();
	out[j] = '\0';
	n2 = strlen(out);
	j = 0;
	for (i = n2 - 1; i >= 0; i--)
		out1[j++] = out[i];
	out1[j] = '\0';
	cout << out1 << endl;
}
int main()
{
	stack st(10);
	char str[20], ch, *out;
	//out = new char[20];
	int n, i, x, y;
	cout << "enter infix:" << endl;
	cin >> str;
	getchar();
	n = strlen(str);
	cout << "post" << endl;
	post(str, n, st);
	cout << "pre" << endl;

	pre(str, n, st);

	getchar();
}
