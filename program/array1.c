#include <stdio.h>

int main(){
	int arr[10] = {1, 2}; //array of integer, size 10 (0.....9) 
	int j;
	for(j = 0; j < 10; j++) {
		printf("%d\t", arr[j]);
	}
	printf("\n");

	return 0;
}
