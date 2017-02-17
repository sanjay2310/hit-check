#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("to enter temperaturs\n");
	scanf("%d",&a);
        b = (a-32)*5/9;
	printf("the celsius = %f\n",b);
	float e;
	e = (a*9/5)+32;
	printf("the fahrenheit = %f\n",e);
	return 0;
}



