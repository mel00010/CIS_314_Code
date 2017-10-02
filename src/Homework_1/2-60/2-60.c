/*******************************************************************************
 * 2-60.c
 * Copyright (C) 2017  Mel McCalla <melmccalla@gmail.com>
 *
 * This file is part of CIS_314_Homework_1.
 *
 * CIS_314_Homework_1 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * CIS_314_Homework_1 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with CIS_314_Homework_1.  If not, see <http://www.gnu.org/licenses/>.
 *******************************************************************************/

#include "2-60.h"

#include <stdlib.h>

/**
 * @file 	src/Homework_1/2-60/2-60.c
 * @author 	Mel McCalla
 * @brief 	Implementation file for Homework 1 problem 2-60
 * @details	This file contains internal function documentation and function implementations.
 * 			For external function documentation and function declarations, see src/Homework_1/2-60/2-60.h.
 * 			For unit tests, see test/Homework_1/2-60/2-60_test.cpp.
 * 			For the main function, see src/Homework_1/2-60/main.c
 */

unsigned int replace_byte(unsigned int input, int byte_to_replace, unsigned char replacement) {
	/*
	 * There would be guard clauses here to prevent undefined behavior if byte_to_replace is greater than 3 or less than 0...
	 * but since conditionals are forbidden, you get this comment instead.
	 *
	 * If they were allowed, I would have written:
	 * if(byte_to_replace < 0) {
	 * 		return 0x00000000;
	 * }
	 * if(byte_to_replace > 3) {
	 * 		return 0x00000000;
	 * }
	 */

	/*
	 * This statement is a bit complicated, so let's break it down.
	 *
	 * It consists of two primary parts.
	 *
	 * The first part is this expression:
	 * 		(input & ~(0x000000FF << (byte_to_replace * 8)))
	 * Even this is still complicated, so let's break it down further.
	 * This part of the expression:
	 *		~(0x000000FF << (byte_to_replace * 8))
	 * serves to generate a bit mask that is all ones except for the byte we want to replace.
	 * Example:
	 * 		If byte_to_replace is 2, it generates a bit mask like this:	0xFF00FFFF.
	 *
	 * It does this by first multiplying byte_to_replace by 8, since byte_to_replace is given in bytes,
	 * and the bit shift operators take their argument in bits.  Then, we take the result of that and
	 * left bit shift the constant 0x000000FF by that many bits.
	 * Example:
	 * 		Again, if byte_to_replace is 2, 0x000000FF << (byte_to_replace * 8) == 0x00FF0000.
	 *
	 * However, this isn't very useful to us as a bit mask yet.  We need the opposite of that,
	 * so we take the bitwise inverse of it.  That gives us our bit mask.
	 *
	 * The next step is to perform a bitwise and on input with the bit mask we just generated.
	 * This gives us a copy of our input, except that the byte given by byte_to_replace has been zeroed.
	 * Example:
	 * 		If input = 0x12345678 and byte_to_replace is 2, the first expression generates 0x120045678.
	 *
	 * Now we're almost done! All we have to do is replace those zeroes with the byte we have been given.
	 * We do this with the second expression:
	 * 		(replacement << (byte_to_replace * 8))
	 *
	 * We have to bit shift replacement left by byte_to_replace *8  bits,
	 * so that we put the byte in the right place.
	 * Example:
	 * 		If replacement = 0xAB and byte_to_replace = 2, then
	 * 		(replacement << (byte_to_replace * 8) == 0x00AB0000
	 *
	 * All that's left to do now is to marry the two values we generated together with the bitwise or operator!
	 * This gives us the final result, input with the selected byte replaced with replacement!
	 * Example:
	 * 		If input = 0x12345678, byte_to_replace = 2, and replacement = 0xAB, then
	 * 		(input & ~(0x000000FF << (byte_to_replace * 8))) | (replacement << (byte_to_replace * 8)) == 0x12AB45678
	 */
	return (input & ~(0x000000FF << (byte_to_replace * 8))) | (replacement << (byte_to_replace * 8));
}
