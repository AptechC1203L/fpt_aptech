#include "../common.h"

int factorial(int number)
{
 int i, _number=number;
 for (i=1; i < number; i ++) _number *=i;
 return _number;
}

int main(int argc, char ** argv) 
{
if (argc != 2) panic ("Usage: factorial <number>\n");
printf("%d", factorial(atoi(argv[1])));
return 0;
}
