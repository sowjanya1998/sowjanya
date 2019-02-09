#include<stdio.h>
#include<string.h>
void any(char str1[],char str2[])
{
	int k = 0,i,j,n1,n2;
	char str3[20][20], str4[20][20];
	for (i = 0; str1[i] != '\0'; i++)
	{
		j = 0;
		while (str1[i]!='\0' && str1[i] != ' ')
		{
			
			str3[k][j++] = str1[i];
			i++;
		}
		k++;
		if (str1[i] == '\0')
			break;
	}
	n1 = k-1;
	k = 0;
	for (i = 0; str2[i] != '\0'; i++)
	{
		j = 0;
		while (str2[i]!='\0' && str2[i] != ' ')
		{
			//j = 0;
			str4[k][j++] = str2[i];
			i++;
		}
		printf("%s", str4[k]);
		k++;
		if (str2[i] == '\0')
			break;
	}
	n2 = k-1;
	/*for (i = 0; i < n1; i++)
	{
		printf("%s", str3[i]);
		for (j = 0; j < n2; j++)
		{
			//if (strcmp(str3[i], str4[j]) == 0)
				//printf("%d\n", i);
			printf("%s", str4[j]);
		}
	}*/
	//printf("%s", str4[0]);


}
void main()
{
	char str1[20], str2[20];
	gets_s(str1, sizeof(str1));
	gets_s(str2, sizeof(str2));
	any(str1, str2);
	getchar();
}