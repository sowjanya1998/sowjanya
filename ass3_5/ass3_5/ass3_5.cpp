#include<stdio.h>
void main()
{
int 	x[8] = { 10,20,30,40,50,60,70,80 };
printf("%p\n", x);
printf("%p\n", (x + 2));
printf("%d\n", *x);

printf("%d\n", (*x + 2));
printf("%d\n", *(x + 2));
getchar();
}