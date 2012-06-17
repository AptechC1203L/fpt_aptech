/*
 * 01_occurences.c
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
 * Display the number of times a specified character occurs in a string.
 */
 
#include <string.h>
#include <malloc.h>
#include "common.h"

int count_occur(char *string, char chr) {
	int count = 0;
	
	// Search in the string and then the returned substrings until nothing is left
	while ((string = strchr(string, (int) chr)) != NULL) {
		count++;
		string++; // Skip the found character
		}
	return count;
	}

int main()
{
	char *string, chr;
	int i;
	string = malloc(4096);
	for (i=0; i<5; i++)
	{
		printf("Please enter a string:");
		scanf("%s", string);
		flush();
		printf("And a character to look for:");
		chr = (char) getchar();
		printf("There are %d occurrence(s) of '%c' in that string.\n", count_occur(string, chr), chr);
		}
	_pause();
	return 0;
	}
