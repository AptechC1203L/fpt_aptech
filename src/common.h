#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

#define panic(...) { fprintf(stderr, __VA_ARGS__); exit(-1); }

#define flush() while (getchar() != '\n');


#endif
