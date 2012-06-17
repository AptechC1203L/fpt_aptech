#include "../../common.h"

int sum_array(int array[], int len) {
	int sum=0;
	while (len>0) { 
		sum += array[len-1]; 
		len--;
	}
	return sum;
	}

int main(int argc, char **argv) {
	int *array;
	int len, i;
	if (argc == 1) { //interactive
		printf("How many elements are there?");
		scanf("%d", &len);
		array = malloc(sizeof(int) * len);
		printf("Now please input the array:");
		for (i=0; i< len; i++) scanf("%d", &array[i]);

	} else {
		len = argc -1;
		array = malloc(sizeof(int) * len);
		for (i=0; i < len; i++) array[i] = atoi(argv[i+1]);
		} 
	printf("The sum of the array's elements is: %d\n", sum_array(array, len));
	return 0;
	}
