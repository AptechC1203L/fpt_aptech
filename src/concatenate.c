#include <stdio.h>
#include <string.h>
#include "common.h"

int main(int argc, char **argv)
{
    char *result;
    if (argc != 3) {
        panic("Usage: concatenate <string1> <string2>\n");
    }

    result = (char *) calloc(strlen(argv[1] + strlen(argv[2])+1),1); //One last byte for \0

    if (strcpy(result, argv[1]) == NULL)
    {
        panic("Cannot copy!");
    }

    if (strcpy(result+ strlen(argv[1]), argv[2]) == NULL)
    {
        panic("Cannot copy!");
    }
    printf("The resulting string is: %s\n", result);
    return 0;
}
