#include "../common.h"

int square(int number)
{
return number * number;
}

int main(int argc, char **argv)
{
	int number;
	if (argc != 2) panic("Usage: square <number>\n");
	number = atoi(argv[1]); 
	printf("%d^2 = %d\n", number, square(number));
	return 0;
}
