#include "../../common.h"

double sum(double a, double b)
{
return a+b;
}

int main(int argc, char **argv)
{
if(argc != 3) panic ("Usage: sum <number_a> <number_b>\n");

printf("%f", sum(atof(argv[1]), atof(argv[2])));
return 0;
}
