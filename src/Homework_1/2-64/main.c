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

#include <stdio.h>

#include "2-64.h"

/**
 * @dir src/Homework_1/2-64
 * @brief Holds all of the source files related to Homework 1 problem 2-64
 * @details For tests, see test/Homework_1/2-64
 * @author Mel McCalla
 */

/**
 * @file 	src/Homework_1/2-64/main.c
 * @author 	Mel McCalla
 * @brief 	Main file for Homework 1 problem 2-64
 * @details	This file contains the main function for Homework 1 problem 2-64.
 * 			For external function documentation and function declarations, see src/Homework_1/2-64/2-64.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-64/2-64.c.
 * 			For unit tests, see test/Homework_1/2-64/2-64_test.cpp.
 */

int main(void) {
	/*
	 * Examples shown for the first 16 values of n
	 */
	printf("any_odd_one(0x00000000) = %i\n", any_odd_one(0x00000000)); // Prints "any_odd_one(0x00000000) = 0"
	printf("any_odd_one(0x00000001) = %i\n", any_odd_one(0x00000001)); // Prints "any_odd_one(0x00000001) = 0"
	printf("any_odd_one(0x00000002) = %i\n", any_odd_one(0x00000002)); // Prints "any_odd_one(0x00000002) = 1"
	printf("any_odd_one(0x00000003) = %i\n", any_odd_one(0x00000003)); // Prints "any_odd_one(0x00000003) = 1"
	printf("any_odd_one(0x00000004) = %i\n", any_odd_one(0x00000004)); // Prints "any_odd_one(0x00000004) = 0"
	printf("any_odd_one(0x00000005) = %i\n", any_odd_one(0x00000005)); // Prints "any_odd_one(0x00000005) = 0"
	printf("any_odd_one(0x00000006) = %i\n", any_odd_one(0x00000006)); // Prints "any_odd_one(0x00000006) = 1"
	printf("any_odd_one(0x00000007) = %i\n", any_odd_one(0x00000007)); // Prints "any_odd_one(0x00000007) = 1"
	printf("any_odd_one(0x00000008) = %i\n", any_odd_one(0x00000008)); // Prints "any_odd_one(0x00000008) = 1"
	printf("any_odd_one(0x00000009) = %i\n", any_odd_one(0x00000009)); // Prints "any_odd_one(0x00000009) = 1"
	printf("any_odd_one(0x0000000A) = %i\n", any_odd_one(0x0000000A)); // Prints "any_odd_one(0x0000000A) = 1"
	printf("any_odd_one(0x0000000B) = %i\n", any_odd_one(0x0000000B)); // Prints "any_odd_one(0x0000000B) = 1"
	printf("any_odd_one(0x0000000C) = %i\n", any_odd_one(0x0000000C)); // Prints "any_odd_one(0x0000000C) = 1"
	printf("any_odd_one(0x0000000D) = %i\n", any_odd_one(0x0000000D)); // Prints "any_odd_one(0x0000000D) = 1"
	printf("any_odd_one(0x0000000E) = %i\n", any_odd_one(0x0000000E)); // Prints "any_odd_one(0x0000000E) = 1"
	printf("any_odd_one(0x0000000F) = %i\n", any_odd_one(0x0000000F)); // Prints "any_odd_one(0x0000000F) = 1"

	/*
	 * And of course it works for values higher than 0x0000000F
	 */
	printf("any_odd_one(0x00000020) = %i\n", any_odd_one(0x00000020)); // Prints "any_odd_one(0x00000020) = 1"
	printf("any_odd_one(0x00000080) = %i\n", any_odd_one(0x00000080)); // Prints "any_odd_one(0x00000080) = 1"
	printf("any_odd_one(0x00000200) = %i\n", any_odd_one(0x00000200)); // Prints "any_odd_one(0x00000200) = 1"
	printf("any_odd_one(0x00000800) = %i\n", any_odd_one(0x00000800)); // Prints "any_odd_one(0x00000800) = 1"
	printf("any_odd_one(0x00002000) = %i\n", any_odd_one(0x00002000)); // Prints "any_odd_one(0x00002000) = 1"
	printf("any_odd_one(0x00008000) = %i\n", any_odd_one(0x00008000)); // Prints "any_odd_one(0x00008000) = 1"
	printf("any_odd_one(0x00020000) = %i\n", any_odd_one(0x00020000)); // Prints "any_odd_one(0x00020000) = 1"
	printf("any_odd_one(0x00080000) = %i\n", any_odd_one(0x00080000)); // Prints "any_odd_one(0x00080000) = 1"
	printf("any_odd_one(0x00200000) = %i\n", any_odd_one(0x00200000)); // Prints "any_odd_one(0x00200000) = 1"
	printf("any_odd_one(0x00800000) = %i\n", any_odd_one(0x00800000)); // Prints "any_odd_one(0x00800000) = 1"
	printf("any_odd_one(0x02000000) = %i\n", any_odd_one(0x02000000)); // Prints "any_odd_one(0x02000000) = 1"
	printf("any_odd_one(0x08000000) = %i\n", any_odd_one(0x08000000)); // Prints "any_odd_one(0x08000000) = 1"
	printf("any_odd_one(0x20000000) = %i\n", any_odd_one(0x20000000)); // Prints "any_odd_one(0x20000000) = 1"
	printf("any_odd_one(0x80000000) = %i\n", any_odd_one(0x80000000)); // Prints "any_odd_one(0x80000000) = 1"
	printf("any_odd_one(0x55555555) = %i\n", any_odd_one(0x55555555)); // Prints "any_odd_one(0x55555555) = 0"
	printf("any_odd_one(0xAAAAAAAA) = %i\n", any_odd_one(0xAAAAAAAA)); // Prints "any_odd_one(0xAAAAAAAA) = 1"
	printf("any_odd_one(0xFFFFFFFF) = %i\n", any_odd_one(0xFFFFFFFF)); // Prints "any_odd_one(0x0000000F) = 1"
}
