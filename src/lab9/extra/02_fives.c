#include "../../common.h"

int is_divisible_by_5(int num)
{
return num%5?0:1;
}

int main ()
{
int i;
for (i=0; i < 101;i++)
{
if (is_divisible_by_5(i)) printf("%d ", i);
}
printf("\n");
return 0;
}
