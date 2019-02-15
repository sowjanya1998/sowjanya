#include<stdio.h>
struct date
{
	int d;
	int m;
	int y;

}d1, d2;
int getdays(int j, int i)
{
	int ar[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isleap(i))
	{
		if (j == 2)
			return ar[j] + 1;
		else return ar[j];
	}
	else return ar[j];
}
int isleap(int i)
{
	if (i % 400==0)
	{
		if (i % 4 == 0 && i % 100 != 0) {
			return 1;
		                                }
		else return 0;
	}
	else return 0;
}
void main()
{
	//struct date d1, d2;
	scanf_s("%d %d %d %d %d %d", &d1.d, &d1.m, &d1.y, &d2.d, &d2.m, &d2.y);
	getchar();
	int i, j, days = 0;
	if (d1.m==d2.m && d1.y==d2.y)
		days = d2.d -  d1.d;
	else
	{
		for (i = d1.y; i < d2.y; i++)
		{
			if (i == d1.y)

				j = d1.m;
			else
				j = 1;

			for (; j <= 12; j++)
			{
				//if (j == d1.m && i == d1.y && j == d2.m && i == d2.y)
				//days = d2.d = d1.d;
				if (j == d1.m && i == d1.y)
					days += getdays(j, i) - d1.m;
				else
					days += getdays(j, i);
			}

		}
		for (j = 1; j <= d2.m; j++)
		{
			if (j == d2.m)
				days += d2.d;
			else
				days += getdays(j, d2.y);
		}
	}
	printf("%d", days);
	getchar();
	
}