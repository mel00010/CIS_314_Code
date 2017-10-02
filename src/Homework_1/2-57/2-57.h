/*******************************************************************************
 * 2-57.h
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
#ifndef SRC_HOMEWORK_1_2_57_H_
#define SRC_HOMEWORK_1_2_57_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include <stddef.h>

/**
 * @dir src/Homework_1
 * @brief Holds all of the source files for problems in Homework 1
 * @details For tests, see test/Homework_1
 * @author Mel McCalla
 */

/**
 * @file 	src/Homework_1/2-57/2-57.h
 * @author 	Mel McCalla
 * @brief 	Header file for Homework 1 problem 2-57
 * @details	This file contains external function documentation and function declarations.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-57/2-57.c.
 * 			For unit tests, see test/Homework_1/2-57/2-57_test.cpp.
 * 			For the main function, see src/Homework_1/2-57/main.c
 */

/**
 * @brief Enables/disables the byte reordering feature of the show functions handling integral types.
 *
 * Value | State
 * ------|--------------------
 * 0     | Enabled (default)
 * 1     | Disabled
 */
extern int FORCE_SYSTEM_ENDIANNESS;


/**
 * @def SYSTEM_IS_LITTLE_ENDIAN
 * @brief Utility macro to determine if the system is big or little endian.
 * @details Evaluates to 1 if the system is little-endian, 0 if the system is big-endian.
 */
#define SYSTEM_IS_LITTLE_ENDIAN (1 == *(unsigned char *)&(const int){1})


/**
 * @brief Formats binary data into ASCII hex bytes for printing
 *
 * @details On little-endian systems, if @c is_integral_type is not zero, then
 * the ordering of the bytes that are output is reversed so that the hex output
 * makes sense in our standard positional notation, which is big-endian.
 *
 * @param[in] input @c void pointer to the data to be formatted as hex bytes.
 * @param[in] input_length Length in bytes of the data pointed to by @c input.
 * @param[out] out @c char* buffer to write formatted hex to.
 * @param[out] output_length Length in bytes of @c out
 * @param[in] is_integral_type Flag to determine whether @c input is a pointer to an integral type.
 * @return Returns the number of characters written to @c out.
 *
 * @test TEST(Homework_1_2_57_2_57, as_bytes)
 */
int as_bytes(void* input, size_t input_length, char* out, size_t output_length, int is_integral_type);

/**
 * @brief Prints a @c char to stdout as bytes.
 *
 * @param[in] input @c char to be printed
 */
void show_char(char input);

/**
 * @brief Prints a @c short to stdout as bytes.
 *
 * @details On little endian systems, the bytes are printed in reverse order to make more
 * makes sense in our standard positional notation, which is big-endian.
 * This behavior can be disabled by setting the global variable FORCE_SYSTEM_ENDIANNESS to one.
 *
 * @param[in] input @c short to be printed
 */
void show_short(short input);

/**
 * @brief Prints a @c int to stdout as bytes.
 *
 * @details On little endian systems, the bytes are printed in reverse order to make more
 * makes sense in our standard positional notation, which is big-endian.
 * This behavior can be disabled by setting the global variable FORCE_SYSTEM_ENDIANNESS to one.
 *
 * @param[in] input @c int to be printed
 */
void show_int(int input);

/**
 * @brief Prints a @c long to stdout as bytes.
 *
 * @details On little endian systems, the bytes are printed in reverse order to make more
 * makes sense in our standard positional notation, which is big-endian.
 * This behavior can be disabled by setting the global variable FORCE_SYSTEM_ENDIANNESS to one.
 *
 * @param[in] input @c long to be printed
 */
void show_long(long input);

/**
 * @brief Prints a @c double to stdout as bytes.
 *
 * The bytes printed to stdout always follow the system endianness.
 * @param[in] input @c double to be printed
 */
void show_double(double input);

/**
 * @brief Prints a generic type to stdout as bytes.
 *
 * @param[in] input @c void pointer to data to be printed
 * @param[in] length Length of the data pointed to by @c input
 */
void show_other(void* input, size_t length);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* SRC_HOMEWORK_1_2_57_H_ */
