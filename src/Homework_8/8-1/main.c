/*******************************************************************************
 * main.c
 * Copyright (C) 2017  Mel McCalla <melmccalla@gmail.com>
 *
 * This file is part of CIS_314_Code.
 *
 * CIS_314_Code is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CIS_314_Code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CIS_314_Code.  If not, see <http://www.gnu.org/licenses/>.
 *******************************************************************************/

#include "8-1.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Only needed for determining whether the terminal supports color *
 * Not actually used compiled unless -DHAVE_CURSES is passed to GCC and
 * -lcurses passed to the linker.
 */
#ifdef HAVE_CURSES
#include <term.h>
#endif /* HAVE_CURSES */

#define BOLD_RED "\033[1;31m"
#define NORMAL_COLOR "\033[0m"

int main() {
	int colors = 0;

	CacheBlock* cache = malloc(sizeof(CacheBlock)*16);
	for(size_t i = 0; i < 16; i++) {
		cache[i].is_valid = FALSE;
	}


	/*
	 * Note to grader:
	 * 	You can safely ignore this block of code.  All it does is use the terminfo
	 * 	library to determine how many colors the terminal supports, so it doesn't
	 * 	try to print colors the terminal can't handle.
	 *
	 * 	Overkill?  Sure.  But why not make my code work on machines from the 70's?
	 * 	(This also ensures that the Eclipse built-in terminal doesn't freak out about
	 * 	the color codes and spit gibberish to the screen.)
	 */
#ifdef HAVE_CURSES
	// Get terminal capabilities
	int error = 0;
	setupterm(NULL, 1, &error);
	colors = tigetnum("colors");
#endif /* HAVE_CURSES */

	for(;;) { /* The big loop */
		char buf = get_input_from_user();
		switch(buf) {
			case 'p': {
				print_values(cache);
				break;
			}
			case 'q': {
				free(cache);
				exit(0);
				break;
			}
			case 'r': {
				unsigned int address = get_address_from_user();
				read_byte(address, cache);
				break;
			}
			case 'w': {
				unsigned int address = get_address_from_user();
				unsigned int value = get_value_from_user();
				write_value(address, value, cache);
				break;
			}
			default: {
				if(colors > 8) {
					fprintf(stderr, BOLD_RED"Error: '%c' is not a valid option!\n"NORMAL_COLOR, buf);
				} else {
					fprintf(stderr, "Error: '%c' is not a valid option!\n", buf);
				}
				break;
			}
		}
	}
}

