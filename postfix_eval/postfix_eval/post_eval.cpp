#include<iostream>
#include<ctype.h>
using namespace std;
#include"stack.h"

	void evaluate(char str[],stack st)
	{
		int n, i, y, x = 1;
		float num = 0.0, a, b, res;
			char ch;
		n = strlen(str);
		for (i = 0; i < n; i++)
		{
			ch = str[i];
			if (isdigit(ch))
			{
				while (i<n && isdigit(str[i])) 
				{
					y = str[i] - 48;
					num = num * x + y;
					x = x * 10;
					i++;
				}
				if (str[i] == '.')
				{
					x = 10;
					i++;
					while (i<n && isdigit(str[i]))
					{
						y = str[i] - 48;
						num = num + ((float)y / x);
						x = x * 10;
						i++;
					}
				}
				printf("%d", num);
				st.push(num);
				num = 0;
				x = 1;
				//i++;
			}
			else
			{
				a = st.pop();
				b = st.pop();
				switch (str[i])
				{
				case'+':res = b + a;
					break;
				case'-':res = b - a;
					break;
				case'*':res = b * a;
					break;
				case'/':res = b / a;
				}

				st.push(res);
			}
		}
		cout << st.pop();
		getchar();

	}

int main()
{
	char str[200];
	cin >> str;
	stack st(10);
	
	evaluate(str,st);
	getchar();
}