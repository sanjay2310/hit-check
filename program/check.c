#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character :\n");
	scanf("%c",&ch);
	if ((ch>=65)&&(ch<=90))
		printf("it is upper case letter\n");
		else if((ch>=97)&&(ch<=122))
			printf("it s lower case letter\n");
		else if((ch>=48)&&(ch<=57))
			printf("it a digit\n");
			return 0;

			
}
