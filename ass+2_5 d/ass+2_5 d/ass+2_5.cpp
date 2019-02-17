#include<iostream>
#include<string>
using namespace std;
class string1
{
	
	char *sptr;
	const char *sp;
	int len;
public:
	string1()
	{
		int i;
		char str[10];
		cout << "enter" << endl;
		gets_s(str, sizeof(str));
		
		len = strlen(str);
		sptr = new char[len+1];
		for (i = 0; i < len; i++)
			sptr[i] = str[i];
		sptr[len] = '\0';
	}
	string1(const char st[])
	{
		int i;
		len = strlen(st);
		sptr = new char[len+1];
		//strcpy_s(sptr, sizeof(st), st);
		for (i = 0; i < len; i++)
			sptr[i] = st[i];
		sptr[len] = '\0';
	}
	string1(string1 &s)
	{
		int i;
		len = s.len;
		sptr = new char[len+1];
		for (i = 0; i < len; i++)
			sptr[i] = s.sptr[i];
		sptr[i] = '\0';
	}
	~string1()
	{
		cout << "des" << endl;
	}
	void  operator+ (string1 s)
	{
		int i, j = 0;
		for (i = len; i < len+s.len; i++)
		{
			sptr[i] = s[j++];
		}
		sptr[i] = '\0';
		len = strlen(sptr) + strlen(s.sptr);
	}
	char &  operator[](int x)
	{
		return sptr[x];
	}
	void operator=(string1 s)
	{
		cout << "in fun" << endl;
		strcpy_s(sptr, sizeof(sptr), s.sptr);
		//sptr=(char*)malloc
		len = strlen(s.sptr);
		sptr[len] = '\0';
	}
	void display()
	{
		cout << sptr << endl;
	}
	friend ostream& operator<<(ostream& cout, string1 s);
	void operator=(char s[])
	{
		strcpy_s(sptr, sizeof(sptr), s);
		sptr[len] = '\0';
	}
};
ostream& operator<<(ostream& cout, string1 s)
{
	cout << s.sptr << endl;
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
	cout << s3[1] << endl;
	cout << s3[1] << endl;
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


