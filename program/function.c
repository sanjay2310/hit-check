#include<stdio.h>
void adder(int a,int b)
{
	printf("%d\n",a+b);
 
}
int main()
{
	int a;
 	int b;
	scanf("%d%d",&a,&b);
           adder(a,b);
	
	 return 0;
}
