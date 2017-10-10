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

#include "2-71.h"

#include <stdio.h>
/* For coloring the input to xbyte to make it easier to read*/
#define ANSI_BOLD_RED	"\x1b[1;31m"
#define ANSI_RESET		"\x1b[0m"

int main() {
	printf("xbyte(0x89ABCD"	ANSI_BOLD_RED"34"ANSI_RESET		  ", 0) = 0x%08X\n", xbyte(0x89ABCD34, 0));	// Prints xbyte(0x89ABCD34, 0) = 0x00000034
	printf("xbyte(0x89ABCD"	ANSI_BOLD_RED"CC"ANSI_RESET		  ", 0) = 0x%08X\n", xbyte(0x89ABCDCC, 0));	// Prints xbyte(0x89ABCDCC, 0) = 0xFFFFFFCC
	printf("xbyte(0x89AB"	ANSI_BOLD_RED"34"ANSI_RESET	    "EF, 1) = 0x%08X\n", xbyte(0x89AB34EF, 1));	// Prints xbyte(0x89AB34EF, 1) = 0x00000034
	printf("xbyte(0x89AB"	ANSI_BOLD_RED"CC"ANSI_RESET     "EF, 1) = 0x%08X\n", xbyte(0x89ABCCEF, 1));	// Prints xbyte(0x89ABCCEF, 1) = 0xFFFFFFCC
	printf("xbyte(0x89"		ANSI_BOLD_RED"34"ANSI_RESET   "CDEF, 2) = 0x%08X\n", xbyte(0x8934CDEF, 2));	// Prints xbyte(0x8934CDEF, 2) = 0x00000034
	printf("xbyte(0x89"		ANSI_BOLD_RED"CC"ANSI_RESET   "CDEF, 2) = 0x%08X\n", xbyte(0x89CCCDEF, 2));	// Prints xbyte(0x89CCCDEF, 2) = 0xFFFFFFCC
	printf("xbyte(0x"		ANSI_BOLD_RED"34"ANSI_RESET "ABCDEF, 3) = 0x%08X\n", xbyte(0x34ABCDEF, 3));	// Prints xbyte(0x34ABCDEF, 3) = 0x00000034
	printf("xbyte(0x"		ANSI_BOLD_RED"CC"ANSI_RESET "ABCDEF, 3) = 0x%08X\n", xbyte(0xCCABCDEF, 3));	// Prints xbyte(0xCCABCDEF, 3) = 0xFFFFFFCC
	return 0;
}
