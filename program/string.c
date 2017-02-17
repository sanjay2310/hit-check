#include<stdio.h>
#include<string.h>
 int main()
{
	char str[]="hello wordld!";
	printf("%s\n",str);
	printf("the size of string  :%lu\n", sizeof(str));
	/*strlen operator*/
	char str1[]="i will a programmer and CEo of Microsoft";
	printf("%s\n",str1);
	printf("the size =%lu\n",strlen(str1));
	return 0;
}



