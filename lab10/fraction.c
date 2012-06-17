/*
 * fraction.c
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
 * Simplify a fraction 
 * 
 * Usage: The program accepts 2 integer arguments as the fraction's 
 * numerator and denominator successively. If nothing is given, it will
 * present a prompt to ask for input.
 * 
 */


#include "common.h"

typedef struct {
	int numerator;
	int denominator;
	} fraction;

/// Check if the denominator is zero
int is_valid_fraction(fraction f) {
	return f.denominator?1:0;
	}
	
/// Returns the greatest common divisor of the two numbers using Euclid's algorithm
int gcd(int a, int b) {
	if (a == b) return a;
	if (a > b) {
		return gcd(a-b, b);
		} 
	else {
		return gcd(a, b-a);
		}
	}

/// Simplifies a fraction
fraction simplify(fraction input) {
	int tmp = gcd(input.numerator, input.denominator);
	input.numerator /= tmp;
	input.denominator /= tmp;
	return input;
	}
	
int main(int argc, char **argv) {
	fraction f;
	if (argc != 3) {
		printf("Please enter the fraction's numerator: ");
		scanf("%d", &f.numerator);
		printf("And its denominator: ");
		scanf("%d", &f.denominator);
		}
	else {
		f.numerator = atoi(argv[1]);
		f.denominator = atoi(argv[2]);
		}
	if (!is_valid_fraction(f)) panic("Must be a valid fraction!\n");
	f = simplify(f);
	printf("The simplified fraction is: %d/%d\n", f.numerator, f.denominator);
	printf("%d\n", gcd(f.numerator, f.denominator));
	return 0;
	}
