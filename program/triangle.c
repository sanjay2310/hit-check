#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int sum;
	printf("enter angle \n");
	scanf("%d%d%d",&a,&b,&c);
	sum = a+b+c;
	if (sum==180)
		printf("it is posible to make triangle\n");
		else
			printf("it is not posible to make trianle\n");
			return 0;
}
