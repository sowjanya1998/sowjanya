#include<iostream>
using namespace std;
//istream& operator>>(istream& cin,student);
//ostream& operator<<(ostream& cout,student);
//class student;
class student
{
	int rollno;
	char name[20];
	int marks[3];
	int totalmarks;
	char grade;
public:
	friend istream& operator>>(istream& cin, student &s);
	friend ostream& operator<<(ostream& cout, student);
	friend void generate_res(student s[], const int n);
};
istream& operator>>(istream& cin, student &s)
{
	int i;
	cin >> s.rollno;
	cin >> s.name;
	for (i = 0; i < 3; i++)
	{
		cin >> s.marks[i];
	}
	//cin >> s.totalmarks;
	//cin >> s.grade;
	return (cin);
}
ostream& operator<<(ostream& cout,student s)
{

	cout << s.rollno << " " << s.name << " " << s.marks[0] << " " << s.marks[1] << " " << s.marks[2] << " " << s.totalmarks << " " << s.grade << endl;
	getchar();
	return(cout);
}

void generate_res(student s[], const int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		s[i].totalmarks = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
		if (s[i].totalmarks > 90)
			s[i].grade = 'A';
		else if (s[i].totalmarks > 60)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';
	}
}


	
int main()
{
	const int n=3;
	int i;
	//scanf_s("%d", &n);
	student s1[n];
	for (i = 0; i < n; i++)
		cin>>s1[i];
	generate_res(s1, n);
	for (i = 0; i < n; i++)
	{
		cout << s1[i];
	}
	getchar();

}