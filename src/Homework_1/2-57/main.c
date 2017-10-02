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

#include "2-57.h"

/**
 * @dir src
 * @brief Holds all of the source of CIS_313_Code
 * @details For tests, see test/
 * @author Mel McCalla
 */

/**
 * @dir src/Homework_1/2-57
 * @brief Holds all of the source files related to Homework 1 problem 2-57
 * @details For tests, see test/Homework_1/2-57
 * @author Mel McCalla
 */

/**
 * @file 	src/Homework_1/2-57/main.c
 * @author 	Mel McCalla
 * @brief 	Main file for Homework 1 problem 2-57
 * @details	This file contains the main function for Homework 1 problem 2-57.
 * 			For external function documentation and function declarations, see src/Homework_1/2-57/2-57.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-57/2-57.c.
 * 			For unit tests, see test/Homework_1/2-57/2-57_test.cpp.
 */


/**
 * @brief  Main function for 2-57
 * @return Returns 0
 */
int main(void) {
	char char_test = 0x01;
	short short_test = 0x0123;
	int int_test = 0x01234567;
	long long_test = 0x0123456789ABCDEF;
	double double_test = *((double*) &long_test);
	unsigned char other_test[16] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F };

	show_char(char_test);		// Outputs 0x01
	show_short(short_test);		// Outputs 0x0123
	show_int(int_test);			// Outputs 0x1234567
	show_long(long_test);		// Outputs 0x123456789ABCDEF
	show_double(double_test);	// Outputs 0xEFCDAB8967452301 (Note:  This is intentional. double is not an integral type, so I made the decision
								// 							          that the bytes it holds should be shown in the order they are stored in memory.)
	show_other(other_test, 16); // Outputs 0x000102030405060708090A0B0C0D0E0F

	/* It is also possible to display the integral types in their native byte order too.  */
	FORCE_SYSTEM_ENDIANNESS = 1;
	show_char(char_test);		// Outputs 0x01
	show_short(short_test);		// Outputs 0x2301
	show_int(int_test);			// Outputs 0x67452301
	show_long(long_test);		// Outputs 0xEFCDAB8967452301

	return 0;
}
