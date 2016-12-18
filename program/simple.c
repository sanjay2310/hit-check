#include<stdio.h>
int main()
{
	int p;
	int r;
	int t;
	int si;
	int am;
	printf("enter principal\n");
	scanf("%d",&p);
        printf("enter rate\n");
        scanf("%d",&r);
        printf("enter time\n");
        scanf("%d",&t);
	si = p*r*t/100;
	printf("simple interest is = %d\n",si);
	am = p+si;
	printf("the amount = %d\n",am);
	return 0;

	
}

