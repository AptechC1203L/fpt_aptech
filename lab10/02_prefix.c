/*
 * 02_prefix.c
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
 * The program accepts 5 names and a prefix, inserts the prefix at the 
 * beginning of each name in the array then displays the modified names. 
 */
 
#include "common.h"
#include <string.h>
#include <malloc.h>

#define NAME_NUMBERS 2

int main() {
	char *names[NAME_NUMBERS];
	char *prefix, *tmp;
	int i;
	for(i=0; i<NAME_NUMBERS; i++) names[i] = malloc(4096);
	prefix = malloc(4096); // 4096 = page size -> best performance
	tmp = malloc(4096);
	
	printf("Please enter %d names:", NAME_NUMBERS);
	for(i=0; i<NAME_NUMBERS; i++) scanf("%s", names[i]);
	printf("And a prefix:");
	scanf("%s", prefix);
	
	for(i=0; i<NAME_NUMBERS; i++) { 
		// Check if the resulting string is too big. Should never happens.
		if (strlen(prefix) + strlen(names[i]) > 4097)
			names[i] = realloc(names[i], strlen(prefix) + strlen(names[i]) + 1);
		tmp = strcpy(tmp, names[i]); // Backup the name
		strcpy(names[i], prefix); // Paste in the prefix, overwriting the name
		strcpy(names[i] + strlen(prefix), tmp); // Then paste in the backup after the prefix
	}
	
	printf("The prefixed names are:\n");
	for(i=0; i<NAME_NUMBERS; i++) printf("%s\n", names[i]);
	_pause();
	return 0;
}
