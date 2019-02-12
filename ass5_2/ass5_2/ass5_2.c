#include<stdio.h>
struct student
{
	int id;
	char name;
}__attribute_(packed);// not wasting bits in memeory but ouput being same
union student1
{
	int id;
	char name[20];
}u1;
void main()
{
	struct student s1;
	printf("structure size:%d", sizeof(s1));
	printf("union size:%d", sizeof(u1));
	getchar();
}