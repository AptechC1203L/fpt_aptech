

#include "../common.h"

int factorial(int number)
{
 int i, _number=number;
 for (i=1; i < number; i ++) _number *=i;
 return _number;
}

int re_factorial(int number)
{
if (number == 1) return 1;
else return number * re_factorial(number-1);
}

int main(int argc, char ** argv) 
{
if (argc != 2) panic ("Usage: factorial <number>\n");
printf("%d", re_factorial(atoi(argv[1])));
return 0;
}
