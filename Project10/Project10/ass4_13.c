#include<stdio.h>
void main()
{
	char *str, *str1;
	printf("Enter input\n");
	str = (char*)malloc(sizeof(char));						//input variable

	str1= (char*)malloc(sizeof(char));						//output variable

	int size = 2, j = 0, size1 = 2;
	char ch;
	while ((ch = getc(stdin)) != '\n')						//reading input dynamically
	{
		str = realloc(str, sizeof(char)*size);
		str[j++] = ch;
		size++;

	}
	str[j] = '\0';
	int p = 0, i, flag = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		
		if (str[i] == '-')
		{
			i++;
			if (i >= 2)						
			{
									if (str[i - 2] > str[i])		//if second char is small than first char
									{
										flag = 1;
										break;
									}
									if ((str[i - 2] >= 65) && (str[i - 2] <= 90))			//if second char is not capital as first char
									{
										if ((!(str[i] >= 65)) || (!(str[i] <= 90)))
										{
											flag = 1;
											break;
										}
									}

									if ((str[i - 2] >= 97) && (str[i - 2] <= 122))		//if second char is not small letter as first char
									{
										if ((!(str[i] >= 97)) || (!(str[i] <= 122)))
										{
											flag = 1;
											break;
										}
									}
									if (str[i - 2] >= 48 && str[i - 2] <= 57)		//if second char is not a number as first char
									{
										if ((!(str[i] >= 48)) || (!(str[i] <= 57)))
										{
											flag = 1;
											break;
										}
									}
									if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))
									{
								
										for (j = str[i - 2] + 1; j != str[i]; j++)			//correct case
										{
											str1=realloc(str1, sizeof(char)*size1);
											str1[p++] = j;
											size1++;
										}
										str1=realloc(str1, sizeof(char)*size1);
										str1[p++] = str[i];
										size1++;
									}
			}
			else
			{
			flag = 1;
			break;
			}
		}

		else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122) || (str[i] >= 48 && str[i] <= 57))	//original data
		{
			str1=realloc(str1, sizeof(char)*size1);
			str1[p++] = str[i];
			size1++;
		}
			

		else
		{																	//incorrect in data
			flag = 1;
			break;
		}
	}
	str1[p] = '\0';
	if (flag != 1)						//flag is not zero then data ientered is correct
		printf("%s", str1);
	else
		printf("invalid input\n");
	getchar();
}