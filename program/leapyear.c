#include<stdio.h>
int main()
{
	int a;
	printf("enter the year \n");
	scanf("%d",&a);
	if (a%4==0)
		printf("thats leap year\n");
		else 
			printf("thats not a leap year\n");
			return 0;
}
