#include "../../common.h"

int square(int number)
{
return number * number;
}

int main()
{
printf ("%d^2 = %d\n", 4, square(4));
printf ("%d^2 = %d\n", 6, square(6));
printf ("%d^2 = %d\n", 8, square(8));
printf ("%d^2 = %d\n", 10, square(10));
printf ("%d^2 = %d\n", 15, square(15));
printf ("%d^2 = %d\n", 20, square(20));
return 0;
}

