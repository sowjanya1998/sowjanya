#include<iostream>
#include<string>
using namespace std;
class string1
{
	char str[20];
	char *sptr = str;
	int len;
public:
	string1()
	{
		strcpy_s(str,sizeof(str), "hello");
		len = strlen("hello");
	}
	string1( const char st[])
	{
		strcpy_s(str,sizeof(str), st);
		len = strlen(st);
	}
	string1(string1 &s)
	{
		strcpy_s(str,sizeof(str), s.str);
		len = s.len;
	}
	~string1()
	{
		cout << "des" << endl;
	}
	void  operator+ (string1 s)
	{

		strcat_s(str,sizeof(str), s.str);
		len = strlen(str) + strlen(s.str);
	}
	char &  operator[](int x)
	{
		return str[x];
	}
	void operator=(string1 s)
	{
		cout << "in fun" << endl;
		strcpy_s(str,sizeof(str), s.str);
		//sptr=(char*)malloc
		len = strlen(s.str);
	}
	void display()
	{
		cout << sptr << endl;
	}
	friend ostream& operator<<(ostream& cout,string1 s);
	void operator=(char s[])
	{
		strcpy_s(str,sizeof(str), s);
	}
};
ostream& operator<<(ostream& cout,string1 s)
{
	cout << s.str<< endl;
	return (cout);
}
int main()
{
	string1 s1, s2("welcome"), s3[3], s4, s5("hi");
	cout << "exe" << endl;
	s1.display();
	s2.display();
	s1 + s2;
	cout << "add" << endl;
	s1.display();
	 s3[0].display();
	cout << "ind" << endl;
	cout << s3[0];
	s3[1].display();
	cout << "change it to p" << endl;
	s3[1] = "p";
	cout<< s3[1] << endl;
	cout<< s3[1] << endl;
	cout << s3[2] << endl;
	cout << "ass" << endl;
	s3[2] = s3[1];
	s3[2].display();
	s4.display();
	s5.display();
	cout << "ass" << endl;
	s4 = s5;
	s4.display();
	getchar();
}

    
