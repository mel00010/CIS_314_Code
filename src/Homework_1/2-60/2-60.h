/*******************************************************************************
 * 2-60.h
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
#ifndef SRC_HOMEWORK_1_2_60_H_
#define SRC_HOMEWORK_1_2_60_H_

#ifdef __cplusplus
extern "C" {
#endif
/**
 * @file 	src/Homework_1/2-60/2-60.h
 * @author 	Mel McCalla
 * @brief 	Header file for Homework 1 problem 2-60
 * @details	This file contains external function documentation and function declarations.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-60/2-60.c.
 * 			For unit tests, see test/Homework_1/2-60/2-60_test.cpp.
 * 			For the main function, see src/Homework_1/2-60/main.c
 */

/**
 * @brief	This function replaces a given byte in a @c int with another byte.
 * @param	input The @c int the function will operate on
 * @param	byte_to_replace An integer indicating which byte to replace,
 * 		 	with 0 being the last byte and 3 being the first.
 * 		 	Warning!  Exercise caution with values greater than 3 or less than 0, as they
 * 		 	will result in undefined behavior.
 * @param	replacement Byte to take the place of the byte being replaced.
 * @return	Returns a copy of @c input, but with the byte at position @c byte_to_replace
 * 			replaced with @c replacement.
 *
 * @test 	TEST(Homework_1_2_60_2_60, replace_byte)
 */
unsigned int replace_byte(unsigned int input, int byte_to_replace, unsigned char replacement);

#ifdef __cplusplus
}
#endif

#endif /* SRC_HOMEWORK_1_2_60_H_ */
