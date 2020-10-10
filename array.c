#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

	srand(time(NULL));
	int arr[10];
	int arr2[10];
	int i;

	for (i=0; i < 10; i++) {
		arr[i] = rand();
		// printf("%d\n", arr[i]);
	}	

	arr[9]=0;

	printf("First Array: \n");
	for (i=0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}		

	//Step 6
	int*a1 = &arr;
	int*a2 = &arr2;	

	printf("\n");
	printf("Second Array: \n");	

	for (i = 0; i < sizeof(arr) - sizeof(int) ; i+=4) {	
		a1++;
		
	}

	for (i = 0; i < sizeof(arr); i+=4) {
		*a2=*(a1);
		a1--;
		a2++;
	}
		
	a2=&arr2;

	for (i=0; i < sizeof(arr2); i+=4) {
		printf("%u\n", *a2);
		a2++;
	}	

	return 0;
}