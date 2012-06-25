#include "../../common.h"

int is_prime(int number) {
	int i;
	for (i=2; i <= (number / 2); i++) if (!(number%i)) return 0;
	return 1;
	}

int main()
{
	int i;
	printf("Prime numbers from 1-100:\n");
	for(i=1; i<=100; i++) {
		if (is_prime(i)) printf("%d ", i);
		}
	return 0;
	}
