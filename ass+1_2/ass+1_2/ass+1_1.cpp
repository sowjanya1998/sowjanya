#include<iostream>
using namespace std;
class time
{
	int hours;
	int minutes;
	int seconds;
public:
	time(int h,int m,int s)
	{
		hours = h;
		minutes = m;
		seconds = s;

	}
	time()
	{
		hours = 1;
		minutes = 1;
		seconds = 1;
	}
	void display()
	{
		//printf("time:%d:%d:%d", hours, minutes, seconds);
		//cout << "time:" << hours << ":" << minutes << ":" << seconds;
		cout << "time:";
		(hours <= 10) ? (cout << "0" << hours) : (cout << hours);
		cout<< ":";
		(minutes <= 10) ? (cout << "0" << minutes) : (cout << minutes);
		cout << ":";
		(seconds <= 10) ? (cout << "0" << seconds) : (cout << seconds);
	}
	void	add(time t1, time t2)
	{
		hours = t1.hours+t2.hours;
		minutes = t1.minutes + t2.minutes;
		seconds = t1.seconds + t2.seconds;
		while (hours >= 24 || minutes >= 60 || seconds >= 60) 
		{
			if (hours >= 24)
				hours = hours - 24;
			if (minutes >= 60)
			{
				minutes = minutes - 60;
				hours = hours + 1;
			}
			if (seconds >= 60)
			{
				seconds = seconds - 60;
				minutes = minutes + 1;
			}
		}

	}
};
int main()
{
	time t1(22, 59, 59),t2,t3;
	t3.add(t1, t2);
	t3.display();
	getchar();
	return 0;

}