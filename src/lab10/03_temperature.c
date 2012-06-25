/*
 * 03_temperature.c
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
 * Write a C Program to accept the average yearly temperature of the
 * past five years, for five cities. Display the maximum and minimum
 * temperature for each city. Use functions to determine the maximum
 * and minimum temperatures.
 * 
 */
 
#include "common.h"

#define CITY_NUMBERS 5
#define YEARS 5
#define NAME_LEN 10

struct {
	char name[NAME_LEN];
	double avg_temps[YEARS];
	} cities[CITY_NUMBERS];

double max_temp(double temps[]) {
	int len=YEARS-1;
	double max= temps[len];
	while(len >= 0) {
		if (max < temps[len]) max = temps[len];
		len--;
		}
	return max;
	}
	
double min_temp(double temps[]) {
	int len = YEARS -1;
	double min= temps[len];
	while(len >= 0) {
		if (min > temps[len]) min = temps[len];
		len--;
		}
	return min;
	}
	
int main() {
	int i,j;
	for(i=0; i<CITY_NUMBERS; i++) {
		printf("What is city %d's name? ", i+1);
		scanf("%s", cities[i].name);
		printf("And what are its average temperatures from the last %d years?\n", YEARS);
		for(j=0; j<YEARS; j++) {
			printf("Year %d:", j+1); 
			scanf("%lf", &cities[i].avg_temps[j]);
			}
		}
		
	for(i=0; i<CITY_NUMBERS; i++) {
		printf("City: %s\n", cities[i].name);
		printf("Max temp: %.1lf\n", max_temp(cities[i].avg_temps));
		printf("Min temp: %.1lf\n", min_temp(cities[i].avg_temps));
		printf("\n");
		}
	_pause();
	return 0;
	}
