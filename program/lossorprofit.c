#include<stdio.h>
int main()
{
	int cp;
	int sp;
	printf("enter cost prize\n");
	scanf("%d",&cp);
	printf("enter selling prize \n");
	scanf("%d",&sp);
	if(sp>cp)
		printf("it is profit\n");
		else if(sp<cp)
			printf("it is loss\n");
			return 0;
}
		
