#include<stdio.h>
#include<string.h>
struct data
{
	char country[20];
	char capital[20];
};
void main()
{
	int  flag = 0;
	char ch;
	char cap1[20], coun1[20];
	FILE *fp;
	fopen_s(&fp, "10.txt", "w");
	if (fp == 0)
		printf("file not opened\n");
	else
		printf("file opened\n");

	struct data d[5], s;
	strcpy_s(d[0].country,19, "australia");
	strcpy_s(d[0].capital, 19, "Canberra");
	printf("%s", d[0].capital);
	strcpy_s(d[1].country, 20, "Japan");
	strcpy_s(d[1].capital, 20, "Tokyo");
	strcpy_s(d[2].country, 20, "India");
	strcpy_s(d[2].capital, 20, "New Delhi");
	strcpy_s(d[3].country, 20, "U.S");
	strcpy_s(d[3].capital, 20, "Washington D.C"); 
	strcpy_s(d[4].country, 20, "Malaysia");
	strcpy_s(d[4].capital, 20, "Kulala Lumpur");
	fwrite(&d, sizeof(struct data), 5, fp);
	if (fwrite != 0)
		printf("successfully write to file\n");
	else
		printf("not success write\n");
	fclose(fp);
	FILE *fp1;
	fopen_s(&fp1, "10.txt", "r");
	if (fp1 == 0)
		printf("file not opened\n");
	else
		printf("file opened\n");
printf("1.Determine the capital of a specified country 2.Determine the country whose capital is specified 3.Terminate the programme");
	scanf_s("%c", &ch);
	
	switch (ch)
	{
	case '1':printf("Enter the country\n");
		
		gets_s(coun1,19);
		getchar();
		printf("hell%s\n", coun1);
		while (fread(&s, sizeof(struct data), 1, fp1))
		{
			printf("%s\n", s.country);
			getchar();
			if (strcmp(s.country, coun1) == 0)
			{
				printf("%s\n", s.capital);
				//getchar();
				flag = 1;
				break;
			}
		}
		if (flag != 1)
			printf("not found\n");
		getchar();
		break;

		
	case '2':printf("Enter the capital\n");
		
		printf("enter input");
		gets(coun1);
		getchar();
		while (fread(&s, sizeof(struct data), 1, fp1))
		{
			printf("%s", s.capital);
			if (strcmp(s.capital, coun1) == 0)
			{
				printf("%s\n", s.country);
				getchar();
				flag = 1;
				break;
			}
			getchar();
		}
		if (flag != 1)
			printf("not found\n");
		getchar();
		break;
	case '3':exit(0);

	}

	getchar();
}