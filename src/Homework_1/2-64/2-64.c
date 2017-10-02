/*******************************************************************************
 * 2-64.c
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

#include "2-64.h"

/**
 * @file 	src/Homework_1/2-64/2-64.c
 * @author 	Mel McCalla
 * @brief 	Implementation file for Homework 1 problem 2-64
 * @details	This file contains internal function documentation and function implementations.
 * 			For external function documentation and function declarations, see src/Homework_1/2-64/2-64.h.
 * 			For unit tests, see test/Homework_1/2-64/2-64_test.cpp.
 * 			For the main function, see src/Homework_1/2-64/main.c
 */

int any_odd_one(unsigned int input) {
	/*
	 * This expression is composed of two parts:
	 * 		1) The expression inside the parentheses, input & 0xAAAAAAAA, and
	 * 		2) The !! at the beginning.
	 * Let us start with the first part.  This is simply a bitwise and with input
	 * and the magic constant 0xAAAAAAAA.  0xAA == 0b10101010, so 0xAAAAAAAA is
	 * four repeated bytes of 0b10101010.  This is a bitmask only passing the odd
	 * bits of input, replacing the others with zeroes.
	 *
	 * Then, the second part comes in to play.  This is a double negation, used
	 * to convert any non-zero value into a 1, and leave 0 as is.  Since the
	 * bitmask converts input into a value with all of it's even bit's zeroed,
	 * the only way that expression can have a non-zero value is if one of the
	 * odd bits is set.
	 */
	return !!(input & 0xAAAAAAAA);
}
