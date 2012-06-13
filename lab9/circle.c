#include "../common.h"

#define PI 3.14

float perimeter(float r)
{
  return 2*r*PI;
}


float area(float r)
{ return PI*r*r;
}

int main(int argc, char **argv)
{
  if(argc != 2) panic("Usage: circle <radius>");	
  float r = atof(argv[1]);
  printf("Perimeter = %f\n\
	Area = %f\n", perimeter(r), area(r));\
  return 0;
}
