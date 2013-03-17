/*	sieve, a command-line utility for finding prime integers.
	Copyright (C) 2013 Cormac O'Brien

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if(argc != 2)							// If the command does not consist of "sieve" and the range,
		printf("Usage: %s [RANGE]...\n", argv[0]);		// Print the correct usage for the program and exit.

	else if(! isdigit(argv[1][0]))					// If the first character of argv[1] is not a number.
		printf("Range must be a number.\n");			// Return an error message and exit.

	else{								// Otherwise,
		static int set[2000000];				// Create an array of 2,000,000 integers.

		long i = 0;						// Initialize our index variable. We'll use this for multiplication later.

		for(i = 0; i < 2000000; i++)				// Set all values in the array to 1.
			set[i] = 1;

		long pos = 0;						// Initialize our position variable. Position n represents number n+1.
		int count = 0;
		long sum = 0;
		for(pos = 2; pos < 2000000; pos++){ 			// Starting at 2, incrementing by 1, and ending at 2,000,000,
			if(set[pos - 1] != 0){				// Determine if this address has a nonzero value. If so,
				for(i = 2; (i * pos) < 2000000; i++)	// Multiply this address by incrementing integers until the product exceeds 2,000,000,
					set[(i * pos - 1)] = 0;		// And set all of these addresses equal to zero.
				count++;
				sum = sum + pos;
			}
		}
		printf("There are %d primes below 2,000,000.\n", count);
		printf("The sum of these primes is %ld.\n", sum);
	}
	return 0;
}
