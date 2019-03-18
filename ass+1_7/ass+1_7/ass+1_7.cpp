#include<iostream>
using namespace std;
class matrix;
class multiplication
{
	int **p;
public:
	multiplication(matrix q1,matrix q2)
	{
		int i;
		p = new int*[q1.m];
		for (i = 0; i < q1.m; i++)
			p[i] = new int[q2.n];
	}
	void mul(matrix s1, matrix s2)
	{
		//multiplication(s1, s2);
		int i, j, k, c = 0;
		if (s1.n == s2.m)
		{
			for (i = 0; i < s1.m; i++)
			{
				for (j = 0; j < s1.n; j++)
				{
					c = 0;
					for (k = 0; k < s2.n; k++)
					{
						c = c + s1.ip[i][j] * s2.ip[j][k];
					}
					//p[i][k] = c;
					p[i][j] = c;
				}
			}
		}
		display(s1,s2);
	}
void 	display(matrix m1,matrix m2)
	{
	int i, j;
		for (i = 0; i < m1.m; i++)
		{
			for (j = 0; j < m2.n; j++)
			{
				cout << p[i][j] << "\t";
			}
			cout << endl;
		}
	}
};
class matrix
{
	int m, n, **ip;
public:
	matrix(int x,int y)
	{
		int i;
		m = x;
		n = y;
		ip = new int*[m];
		for (i = 0; i < m; i++)
			ip[i] = new int[n];
	}
	~matrix()
	{
		int i;
		for (i = 0; i < n; i++)
			delete ip[i];
		delete[] ip;
	}
	void set_data()
	{
		int i, j;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				ip[i][j] = 2;
			}
		}
	}
	//friend void multiplication::mul(matrix, matrix);
	friend class multiplication;
	
};

	
int main()
{
	matrix a1(3, 2), a2(3, 1);
	a1.set_data();
	a2.set_data();
	multiplication m(a1, a2);
	m.mul(a1,a2);

	getchar();
}