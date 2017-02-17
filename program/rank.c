#include<stdio.h>
int main()
{
	int i=4;
	double d=4.0;
	char s[] = "hackerRank ";
	int a;
	double b;
	char c[100];
	a = i+12;
	printf("%d\n",a);
	b = d+4.0;
	printf("%f\n",b);
	scanf("%[^\n]",c);
        printf("%s%s\n",s,c);
	return 0;

}
        


