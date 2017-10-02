/*******************************************************************************
 * 2-60_test.cpp
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

#include <gtest/gtest.h>

#include <Homework_1/2-60/2-60.h>

/**
 * @dir test/Homework_1/2-60
 * @brief Holds all of the tests related to Homework 1 problem 2-60
 * @details For source code, see src/Homework_1/2-60
 * @author Mel McCalla
 */

/**
 * @file 	test/Homework_1/2-60/2-60_test.cpp
 * @brief 	Unit test file for Homework 1 problem 2-60
 * @details	This file contains unit tests.
 * 			For external function documentation and function declarations, see src/Homework_1/2-60/2-60.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-60/2-60.c.
 * 			For the main function, see src/Homework_1/2-60/main.c
 * @author 	Mel McCalla
 */

TEST(Homework_1_2_60_2_60, replace_byte) {
	EXPECT_EQ(0x123456AB, replace_byte(0x12345678, 0, 0xAB));
	EXPECT_EQ(0x1234AB78, replace_byte(0x12345678, 1, 0xAB));
	EXPECT_EQ(0x12AB5678, replace_byte(0x12345678, 2, 0xAB));
	EXPECT_EQ(0xAB345678, replace_byte(0x12345678, 3, 0xAB));
}
