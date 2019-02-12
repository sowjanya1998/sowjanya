#include<stdio.h>
#include "case1.h"
#include "case3.h"
#include "case4.h"
#include "case5.h"
void main()
{
	int n;
	printf("1. count no of alpha,digit,space,special characters \t 2.remove comments \t 3. rotation of word 4.\t repalce tabs with '\t\n");
	scanf_s("%d", &n);
	getchar();
	switch (n)
	{
	             case 1: task1();
		                 break;
	             case 2:task2();
		                break;
	             case 3:task3();
		                break;
	             case 4:task4();
		                break;



	}
	getchar();
}