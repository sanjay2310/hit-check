#include <stdio.h>

int main()
{
	
	int arr[5]; //here arr is a varibale that can store upto 5 int varibale,  called an array of size of 5
	// in array position start from 0, so it means |0|1|2|3|4|
	// so here i am inserting valuses to positions 
	// arr[0] = 1
	// arr[1] = 2
	// arr[2] = 3
	// arr[3] = 4
	// arr[4] = 5
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 5;

	//printing array values
	
	printf("%d\n", arr[0]); // 1st value here array of int data type so i am using %d for int in printf
	printf("%d\n", arr[1]); //2nd value
	printf("%d\n", arr[2]); //3rd value
	printf("%d\n", arr[3]); //4th value
	printf("%d\n", arr[4]); //5th value

	return 0;
}
