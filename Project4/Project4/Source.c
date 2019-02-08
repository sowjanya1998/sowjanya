#include<stdio.h>
#include<string.h>
void sort(char str1[20][20],int n)
{
	int i,j;
	char temp[20];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i-1;j++)
		{
			if (strcmp(str1[j],str1[j+1]) > 0)
			{
				strcpy_s(temp,19, str1[j]);
				strcpy_s(str1[j],19, str1[j+1]);
				strcpy_s(str1[j+1],19, temp);
			}
		}
	}
	
	for(i=0;i<n;i++)
		printf(" %s\n",str1[i]);
}
int main()
{
	char str[20][20];
	int n,i;
	scanf_s("%d", &n,10);
	for (i = 0; i < n; i++)
	{
		//scanf_s("%s",20, str[i]);
		
		scanf_s("%s", str[i], 5);
		//printf("%d", i);
	}
	getchar();
	
	sort(str, n);
	getchar();
}