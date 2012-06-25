/*
 * common.h
 * 
 * Copyright 2012 Ngô Trung <ndtrung4419@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
 
/*
 * Common macros for cross-platform stuffs
 */

#ifndef COMMON_H
#define COMMON_H

#include <stdio.h>
#include <stdlib.h>

#define prompt(...) fprintf(stderr, __VA_ARGS__);

#define panic(...) { prompt(__VA_ARGS__); exit(-1); }

// "fflush(stdin)" is non-standard and has undefined behaviors
// See here http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1052863818&id=1043284351
#define flush() while (getchar() != '\n');

#define _pause() {prompt("Press ENTER to continue."); flush();getchar();}

#ifdef __WIN32__
#define clrscr() system("cls")
#endif

#ifdef __unix__
#define clrscr() system("clear")
#endif


#endif
