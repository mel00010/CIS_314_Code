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

#include "2-60.h"

#include <stdio.h>

/**
 * @dir src/Homework_1/2-60
 * @brief Holds all of the source files related to Homework 1 problem 2-60
 * @details For tests, see test/Homework_1/2-60
 * @author Mel McCalla
 */

/**
 * @file 	src/Homework_1/2-60/main.c
 * @author 	Mel McCalla
 * @brief 	Main file for Homework 1 problem 2-60
 * @details	This file contains the main function for Homework 1 problem 2-60.
 * 			For external function documentation and function declarations, see src/Homework_1/2-60/2-60.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-60/2-60.c.
 * 			For unit tests, see test/Homework_1/2-60/2-60_test.cpp.
 */

int main(int argc, char** argv) {
	// Prints "replace_byte(0x12345678, 0, 0xAB) = 0x123456AB"
	printf("replace_byte(0x12345678, 0, 0xAB) = 0x%08X\n", replace_byte(0x12345678, 0, 0xAB));
	// Prints "replace_byte(0x12345678, 1, 0xAB) = 0x1234AB78"
	printf("replace_byte(0x12345678, 1, 0xAB) = 0x%08X\n", replace_byte(0x12345678, 1, 0xAB));
	// Prints "replace_byte(0x12345678, 2, 0xAB) = 0x12AB5678"
	printf("replace_byte(0x12345678, 2, 0xAB) = 0x%08X\n", replace_byte(0x12345678, 2, 0xAB));
	// Prints "replace_byte(0x12345678, 3, 0xAB) = 0xAB345678"
	printf("replace_byte(0x12345678, 3, 0xAB) = 0x%08X\n", replace_byte(0x12345678, 3, 0xAB));
}
