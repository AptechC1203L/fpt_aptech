#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

#define prompt(...) fprintf(stderr, __VA_ARGS__);

#define panic(...) { prompt(__VA_ARGS__); exit(-1); }

#define flush() while (getchar() != '\n');

#define _pause() {prompt("Press ENTER to continue."); getchar();}

#ifdef __WIN32__
#define clrscr() system("cls")
#endif

#ifdef __unix__
#define clrscr() system("clear")
#endif


#endif
