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

#include "2-68.h"

#include <stdio.h>

/**
 * @dir src/Homework_1/2-68
 * @brief Holds all of the source files related to Homework 1 problem 2-68
 * @details For tests, see test/Homework_1/2-68
 * @author Mel McCalla
 */

/**
 * @file 	src/Homework_1/2-68/main.c
 * @author 	Mel McCalla
 * @brief 	Main file for Homework 1 problem 2-68
 * @details	This file contains the main function for Homework 1 problem 2-68.
 * 			For external function documentation and function declarations, see src/Homework_1/2-68/2-68.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-68/2-68.c.
 * 			For unit tests, see test/Homework_1/2-68/2-68_test.cpp.
 */

int main(void) {
	printf("lower_one_mask(1)  = 0x%08X\n", lower_one_mask(1));		// Prints "lower_one_mask(1)  = 0x00000001"
	printf("lower_one_mask(2)  = 0x%08X\n", lower_one_mask(2));		// Prints "lower_one_mask(2)  = 0x00000003"
	printf("lower_one_mask(3)  = 0x%08X\n", lower_one_mask(3));		// Prints "lower_one_mask(3)  = 0x00000007"
	printf("lower_one_mask(4)  = 0x%08X\n", lower_one_mask(4));		// Prints "lower_one_mask(4)  = 0x0000000F"
	printf("lower_one_mask(5)  = 0x%08X\n", lower_one_mask(5));		// Prints "lower_one_mask(5)  = 0x0000001F"
	printf("lower_one_mask(6)  = 0x%08X\n", lower_one_mask(6));		// Prints "lower_one_mask(6)  = 0x0000003F"
	printf("lower_one_mask(7)  = 0x%08X\n", lower_one_mask(7));		// Prints "lower_one_mask(7)  = 0x0000007F"
	printf("lower_one_mask(8)  = 0x%08X\n", lower_one_mask(8));		// Prints "lower_one_mask(8)  = 0x000000FF"
	printf("lower_one_mask(9)  = 0x%08X\n", lower_one_mask(9));		// Prints "lower_one_mask(9)  = 0x000001FF"
	printf("lower_one_mask(10) = 0x%08X\n", lower_one_mask(10));	// Prints "lower_one_mask(10) = 0x000003FF"
	printf("lower_one_mask(11) = 0x%08X\n", lower_one_mask(11));	// Prints "lower_one_mask(11) = 0x000007FF"
	printf("lower_one_mask(12) = 0x%08X\n", lower_one_mask(12));	// Prints "lower_one_mask(12) = 0x00000FFF"
	printf("lower_one_mask(13) = 0x%08X\n", lower_one_mask(13));	// Prints "lower_one_mask(13) = 0x00001FFF"
	printf("lower_one_mask(14) = 0x%08X\n", lower_one_mask(14));	// Prints "lower_one_mask(14) = 0x00003FFF"
	printf("lower_one_mask(15) = 0x%08X\n", lower_one_mask(15));	// Prints "lower_one_mask(15) = 0x00007FFF"
	printf("lower_one_mask(16) = 0x%08X\n", lower_one_mask(16));	// Prints "lower_one_mask(16) = 0x0000FFFF"
	printf("lower_one_mask(17) = 0x%08X\n", lower_one_mask(17));	// Prints "lower_one_mask(17) = 0x0001FFFF"
	printf("lower_one_mask(18) = 0x%08X\n", lower_one_mask(18));	// Prints "lower_one_mask(18) = 0x0003FFFF"
	printf("lower_one_mask(19) = 0x%08X\n", lower_one_mask(19));	// Prints "lower_one_mask(19) = 0x0007FFFF"
	printf("lower_one_mask(20) = 0x%08X\n", lower_one_mask(20));	// Prints "lower_one_mask(20) = 0x000FFFFF"
	printf("lower_one_mask(21) = 0x%08X\n", lower_one_mask(21));	// Prints "lower_one_mask(21) = 0x001FFFFF"
	printf("lower_one_mask(22) = 0x%08X\n", lower_one_mask(22));	// Prints "lower_one_mask(22) = 0x003FFFFF"
	printf("lower_one_mask(23) = 0x%08X\n", lower_one_mask(23));	// Prints "lower_one_mask(23) = 0x007FFFFF"
	printf("lower_one_mask(24) = 0x%08X\n", lower_one_mask(24));	// Prints "lower_one_mask(24) = 0x00FFFFFF"
	printf("lower_one_mask(25) = 0x%08X\n", lower_one_mask(25));	// Prints "lower_one_mask(25) = 0x01FFFFFF"
	printf("lower_one_mask(26) = 0x%08X\n", lower_one_mask(26));	// Prints "lower_one_mask(26) = 0x03FFFFFF"
	printf("lower_one_mask(27) = 0x%08X\n", lower_one_mask(27));	// Prints "lower_one_mask(27) = 0x07FFFFFF"
	printf("lower_one_mask(28) = 0x%08X\n", lower_one_mask(28));	// Prints "lower_one_mask(28) = 0x0FFFFFFF"
	printf("lower_one_mask(29) = 0x%08X\n", lower_one_mask(29));	// Prints "lower_one_mask(29) = 0x1FFFFFFF"
	printf("lower_one_mask(30) = 0x%08X\n", lower_one_mask(30));	// Prints "lower_one_mask(30) = 0x3FFFFFFF"
	printf("lower_one_mask(31) = 0x%08X\n", lower_one_mask(31));	// Prints "lower_one_mask(31) = 0x7FFFFFFF"
	printf("lower_one_mask(32) = 0x%08X\n", lower_one_mask(32));	// Prints "lower_one_mask(32) = 0xFFFFFFFF"
}
