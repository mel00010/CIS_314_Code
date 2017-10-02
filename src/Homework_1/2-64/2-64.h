/*******************************************************************************
 * 2-64.h
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
#ifndef SRC_HOMEWORK_1_2_64_2_64_H_
#define SRC_HOMEWORK_1_2_64_2_64_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file 	src/Homework_1/2-64/2-64.h
 * @author 	Mel McCalla
 * @brief 	Header file for Homework 1 problem 2-64
 * @details	This file contains external function documentation and function declarations.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-64/2-64.c.
 * 			For unit tests, see test/Homework_1/2-64/2-64_test.cpp.
 * 			For the main function, see src/Homework_1/2-64/main.c
 */

/**
 * @brief 	Determines if any odd bits are set
 * @details "Odd bit" is defined to be the most-significant bit,
 * 			third-most-significant bit, and so on, all the way to the
 * 			second-least-significant bit.  All other bits are considered even.
 * @param 	input @c int to process
 * @return	Returns 1 if any odd bit of @c input == 1.
 * 			Otherwise, it returns 0.
 * @test	TEST(Homework_1_2_64_2_64, any_odd_one)
 */
int any_odd_one(unsigned int input);


#ifdef __cplusplus
}
#endif

#endif /* SRC_HOMEWORK_1_2_64_2_64_H_ */
