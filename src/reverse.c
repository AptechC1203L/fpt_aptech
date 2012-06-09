#include <string.h>
#include "common.h"

int main(int argc, char **argv)
{
    char *result;
    int i, len;

    if (argc != 2) panic("Usage: reverse <string>\n");
    len = strlen(argv[1]);
    result = calloc(len+1,1);

    for (i=0; i < len; i++) {
        result[len-i-1] = argv[1][i];
    }
    printf("The reversed string is: %s\n", result);
    return 0;
}
