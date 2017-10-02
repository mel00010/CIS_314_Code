/*******************************************************************************
 * 2-57.c
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

#include "2-57.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @file 	src/Homework_1/2-57/2-57.c
 * @author 	Mel McCalla
 * @brief 	Implementation file for Homework 1 problem 2-57
 * @details	This file contains internal function documentation and function implementations.
 * 			For external function documentation and function declarations, see src/Homework_1/2-57/2-57.h.
 * 			For unit tests, see test/Homework_1/2-57/2-57_test.cpp.
 * 			For the main function, see src/Homework_1/2-57/main.c
 */


/* Initialize global variable FORCE_SYSTEM_ENDIANNESS to 0 */
int FORCE_SYSTEM_ENDIANNESS = 0;

/*
 * Note to grader.  External function documentation for the functions in this file can be
 * found in this file's matching header.  Comments in this file are internal function documentation.
 * Unit tests for the functions in this file can be found in test/Homework_1/2-57_test.cpp
 */


int as_bytes(void* input, size_t input_length, char* out, size_t output_length, int is_integral_type) {

	/* Write the leading 0x to out with snprintf, and store the number of characters written in chars_written. */
	size_t chars_written = snprintf(out, output_length, "0x");

	/* INITIALIZER:
	 * 		Initialize i with input_length if is_integral_type is not 0 and the system is little-endian.
	 * 		Otherwise, initialize i with 1.
	 *
	 * CONDITION:
	 * 		If is_integral type is not 0 and the system is little-endian, loop while i > 0.
	 * 		Otherwise, loop while i <= input_length.
	 *
	 * ADVANCE_ITERATOR:
	 * 		If is_integral_type is not 0 and the system is little-endian, decrement i after every loop.
	 * 		Otherwise, increment i after every loop.
	 */
	for (size_t i = (is_integral_type && SYSTEM_IS_LITTLE_ENDIAN ? input_length : 1);
			(is_integral_type && SYSTEM_IS_LITTLE_ENDIAN ? i > 0 : i <= input_length);
			(is_integral_type && SYSTEM_IS_LITTLE_ENDIAN ? i-- : i++)) {

		/* Call snprintf with the arguments below, and add the number of characters written to chars_written. */
		chars_written += snprintf(
				out + chars_written, 		   // Use pointer arithmetic to write get a pointer to the first unwritten char in out

				output_length - chars_written, // Subtract chars_written from output_length so that out will not overflow

				"%02hhX", 					   // Format string that instructs snprintf to write a zero padded uppercase hex string
											   // with a minimum length of 2 chars representing the next argument which will be interpreted
											   // as unsigned char.
				*((char*) input + i - 1));	   // Use pointer arithmetic to obtain a pointer to the byte i - 1 bytes after the
											   // beginning of input, then cast that pointer to a char pointer, then dereference it to
											   // get a char.
	}

	/* Return the number of characters written to out */
	return chars_written;
}


void show_char(char input) {
	/* Allocate a char buffer on the stack to hold the output of as_bytes.
	 * This is calculated as 3 plus the length in bytes of the input multiplied by 2.
	 * 2 characters for the 0x at the beginning, and 2 characters per byte in input,
	 * and one byte for the null terminator at the end.
	 */
	char out[(sizeof(input) * 2) + 3];

	/* Call as_bytes() with arguments input, the length in bytes of input, the char buffer we just allocated,
	 * the size of that buffer, and 1 since char is an integral type.   Then we use the comma operator to discard
	 * the result of that call, and use printf to print out to stdout, followed by a newline.
	 * We do this since we don't need the return value of as_bytes(), we only need the data it wrote into out,
	 * and the comma operator is a very convenient way of doing that in a single expression.
	 */
	printf("%s\n", (as_bytes(&input, sizeof(input), out, sizeof(out), !FORCE_SYSTEM_ENDIANNESS), out));
}


void show_short(short input) {
	/* See comments in show_char for explanation. */
	char out[(sizeof(input) * 2) + 3];
	printf("%s\n", (as_bytes(&input, sizeof(input), out, sizeof(out), !FORCE_SYSTEM_ENDIANNESS), out));
}


void show_int(int input) {
	/* See comments in show_char for explanation. */
	char out[(sizeof(input) * 2) + 3];
	printf("%s\n", (as_bytes(&input, sizeof(input), out, sizeof(out), !FORCE_SYSTEM_ENDIANNESS), out));
}


void show_long(long input) {
	/* See comments in show_char for explanation. */
	char out[(sizeof(input) * 2) + 3];
	printf("%s\n", (as_bytes(&input, sizeof(input), out, sizeof(out), !FORCE_SYSTEM_ENDIANNESS), out));
}


void show_double(double input) {
	/* See comments in show_char for explanation. */
	char out[(sizeof(input) * 2) + 3];

	/* 0 is passed as the last argument of as_bytes instead of 1 because double is not an integral type.
	 * See comments in show_char for further explanation of the rest of this statement.
	 */
	printf("%s\n", (as_bytes(&input, sizeof(input), out, sizeof(out), 0), out));
}


void show_other(void* input, size_t length) {
	/* Allocate a char buffer on the stack to hold the output of as_bytes.
	 * This is calculated as 2 plus the length in bytes of the input multiplied by 2.
	 * 2 characters for the 0x at the beginning, and 2 characters per byte thereafter.
	 */
	char out[(length * 2) + 3];

	/* 0 is passed as the last argument of as_bytes instead of 1 because it is assumed that input is not an integral type.
	 * See comments in show_char for further explanation of the rest of this statement.
	 */
	printf("%s\n", (as_bytes(input, length, out, sizeof(out), 0), out));
}

