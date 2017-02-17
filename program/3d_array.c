#include <stdio.h>

int main()
{
	int arr[5];  //array of size 5
	int i; //for loop
	for(i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("%d\n", arr[0]); // 1st value here array of int data type so i am using %d for int in printf
	printf("%d\n", arr[1]); //2nd value
	printf("%d\n", arr[2]); //3rd value
	printf("%d\n", arr[3]); //4th value
	printf("%d\n", arr[4]); //5th value

	return 0;
}

