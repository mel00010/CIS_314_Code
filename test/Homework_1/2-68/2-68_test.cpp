/*******************************************************************************
 * 2-68_test.cpp
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

#include<Homework_1/2-68/2-68.h>

/**
 * @dir test/Homework_1/2-68
 * @brief Holds all of the tests related to Homework 1 problem 2-68
 * @details For source code, see src/Homework_1/2-68
 * @author Mel McCalla
 */

/**
 * @file 	test/Homework_1/2-68/2-68_test.cpp
 * @brief 	Unit test file for Homework 1 problem 2-68
 * @details	This file contains unit tests.
 * 			For external function documentation and function declarations, see src/Homework_1/2-68/2-68.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-68/2-68.c.
 * 			For the main function, see src/Homework_1/2-68/main.c
 * @author 	Mel McCalla
 */

TEST(Homework_1_2_68_2_68, lower_one_mask) {
	EXPECT_EQ(0b00000000000000000000000000000001, lower_one_mask(1));
	EXPECT_EQ(0b00000000000000000000000000000011, lower_one_mask(2));
	EXPECT_EQ(0b00000000000000000000000000000111, lower_one_mask(3));
	EXPECT_EQ(0b00000000000000000000000000001111, lower_one_mask(4));
	EXPECT_EQ(0b00000000000000000000000000011111, lower_one_mask(5));
	EXPECT_EQ(0b00000000000000000000000000111111, lower_one_mask(6));
	EXPECT_EQ(0b00000000000000000000000001111111, lower_one_mask(7));
	EXPECT_EQ(0b00000000000000000000000011111111, lower_one_mask(8));
	EXPECT_EQ(0b00000000000000000000000111111111, lower_one_mask(9));
	EXPECT_EQ(0b00000000000000000000001111111111, lower_one_mask(10));
	EXPECT_EQ(0b00000000000000000000011111111111, lower_one_mask(11));
	EXPECT_EQ(0b00000000000000000000111111111111, lower_one_mask(12));
	EXPECT_EQ(0b00000000000000000001111111111111, lower_one_mask(13));
	EXPECT_EQ(0b00000000000000000011111111111111, lower_one_mask(14));
	EXPECT_EQ(0b00000000000000000111111111111111, lower_one_mask(15));
	EXPECT_EQ(0b00000000000000001111111111111111, lower_one_mask(16));
	EXPECT_EQ(0b00000000000000011111111111111111, lower_one_mask(17));
	EXPECT_EQ(0b00000000000000111111111111111111, lower_one_mask(18));
	EXPECT_EQ(0b00000000000001111111111111111111, lower_one_mask(19));
	EXPECT_EQ(0b00000000000011111111111111111111, lower_one_mask(20));
	EXPECT_EQ(0b00000000000111111111111111111111, lower_one_mask(21));
	EXPECT_EQ(0b00000000001111111111111111111111, lower_one_mask(22));
	EXPECT_EQ(0b00000000011111111111111111111111, lower_one_mask(23));
	EXPECT_EQ(0b00000000111111111111111111111111, lower_one_mask(24));
	EXPECT_EQ(0b00000001111111111111111111111111, lower_one_mask(25));
	EXPECT_EQ(0b00000011111111111111111111111111, lower_one_mask(26));
	EXPECT_EQ(0b00000111111111111111111111111111, lower_one_mask(27));
	EXPECT_EQ(0b00001111111111111111111111111111, lower_one_mask(28));
	EXPECT_EQ(0b00011111111111111111111111111111, lower_one_mask(29));
	EXPECT_EQ(0b00111111111111111111111111111111, lower_one_mask(30));
	EXPECT_EQ(0b01111111111111111111111111111111, lower_one_mask(31));
	EXPECT_EQ(0b11111111111111111111111111111111, lower_one_mask(32));
}
