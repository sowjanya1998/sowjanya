#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void task1()
{
	FILE *fp;
	 fopen_s(&fp,"file1.txt", "r");
	
	int alpha = 0, digit = 0, space = 0, sp_char = 0;
	char ch;
	while (!feof(fp) )
	{
		ch = fgetc(fp);
			if ((ch>='A'&& ch<='Z')|| (ch>='a' && ch<='z'))		//calculate no of alphabets
				alpha++;
			else if (isdigit(ch))								//calculate no of digits
				digit++;
			else if (ch == ' ')									//calculate no of spaces
				space++;
			else if((ch>=2 && ch<=47) || (ch>=58 && ch<=64) || (ch>=90 && ch<=96) || (ch>=123 && ch<=127))									//calculate no of special characters
				sp_char++;
	}
	//alpha = alpha - digit;
	//printf("%c %c", 1,0);
	printf("alphabets:%d\t digits:%d\t space:%d\tspecial characters:%d", alpha, digit, space, sp_char);
	getchar();
	
}
