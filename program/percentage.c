#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	float f;
	printf("enter marks of english\n");
	scanf("%d",&a);
	 printf("enter marks of hindi\n");
	  scanf("%d",&b);
	  printf("enter marks of maths\n");
	  scanf("%d",&c);
	     printf("enter marks of sst\n");
	     scanf("%d",&d);
	     printf("enter marks of science\n");
	     scanf("%d",&e);
	     f = (a+b+c+d+e)*100/500;
	     printf("total percentage = %f\n",f);
	     return 0;
}


