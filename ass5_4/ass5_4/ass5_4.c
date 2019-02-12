#include<stdio.h>
struct s
{
	int d:2;
}s1;
void main()
{
	//scanf_s("%d", s1.d);
	s1.d = 16;//based on output it is little endian because it is stored from lsb
	printf("%d", s1.d);
	getchar();
}