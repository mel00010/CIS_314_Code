/*******************************************************************************
 * 2-68.h
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
#ifndef SRC_HOMEWORK_1_2_68_2_68_H_
#define SRC_HOMEWORK_1_2_68_2_68_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file 	src/Homework_1/2-68/2-68.h
 * @author 	Mel McCalla
 * @brief 	Header file for Homework 1 problem 2-68
 * @details	This file contains external function documentation and function declarations.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-68/2-68.c.
 * 			For unit tests, see test/Homework_1/2-68/2-68_test.cpp.
 * 			For the main function, see src/Homework_1/2-68/main.c
 */

/**
 * @brief Generates a bitmask where the @c n least significant bits are 1.
 * @details Note:  Values of @c n less than or equal to 0 or greater than 32
 * are not supported and may lead to undefined behavior.
 * @param n An @c int indicating the number of bits set in the generated bitmask.
 * @return Returns a bitmask where the @c n least significant bits are set to 1.
 * @author Mel McCalla
 * @test TEST(Homework_1_2_68_2_68, lower_one_mask)
 */
int lower_one_mask(int n);

#ifdef __cplusplus
}
#endif

#endif /* SRC_HOMEWORK_1_2_68_2_68_H_ */
