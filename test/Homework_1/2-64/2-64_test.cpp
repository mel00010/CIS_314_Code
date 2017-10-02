/*******************************************************************************
 * 2-64_test.cpp
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

#include <Homework_1/2-64/2-64.h>


/**
 * @dir test/Homework_1/2-64
 * @brief Holds all of the tests related to Homework 1 problem 2-64
 * @details For source code, see src/Homework_1/2-64
 * @author Mel McCalla
 */

/**
 * @file 	test/Homework_1/2-64/2-64_test.cpp
 * @brief 	Unit test file for Homework 1 problem 2-64
 * @details	This file contains unit tests.
 * 			For external function documentation and function declarations, see src/Homework_1/2-64/2-64.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-64/2-64.c.
 * 			For the main function, see src/Homework_1/2-64/main.c
 * @author 	Mel McCalla
 */

TEST(Homework_1_2_64_2_64, any_odd_one) {
	EXPECT_FALSE(any_odd_one(0x00000000));
	EXPECT_FALSE(any_odd_one(0x00000001));
	EXPECT_TRUE(any_odd_one(0x00000002));
	EXPECT_TRUE(any_odd_one(0x00000003));
	EXPECT_FALSE(any_odd_one(0x00000004));
	EXPECT_FALSE(any_odd_one(0x00000005));
	EXPECT_TRUE(any_odd_one(0x00000006));
	EXPECT_TRUE(any_odd_one(0x00000007));
	EXPECT_TRUE(any_odd_one(0x00000008));
	EXPECT_TRUE(any_odd_one(0x00000009));
	EXPECT_TRUE(any_odd_one(0x0000000A));
	EXPECT_TRUE(any_odd_one(0x0000000B));
	EXPECT_TRUE(any_odd_one(0x0000000C));
	EXPECT_TRUE(any_odd_one(0x0000000D));
	EXPECT_TRUE(any_odd_one(0x0000000E));
	EXPECT_TRUE(any_odd_one(0x0000000F));
	EXPECT_TRUE(any_odd_one(0x00000020));
	EXPECT_TRUE(any_odd_one(0x00000080));
	EXPECT_TRUE(any_odd_one(0x00000200));
	EXPECT_TRUE(any_odd_one(0x00000800));
	EXPECT_TRUE(any_odd_one(0x00002000));
	EXPECT_TRUE(any_odd_one(0x00008000));
	EXPECT_TRUE(any_odd_one(0x00020000));
	EXPECT_TRUE(any_odd_one(0x00080000));
	EXPECT_TRUE(any_odd_one(0x00200000));
	EXPECT_TRUE(any_odd_one(0x00800000));
	EXPECT_TRUE(any_odd_one(0x02000000));
	EXPECT_TRUE(any_odd_one(0x08000000));
	EXPECT_TRUE(any_odd_one(0x20000000));
	EXPECT_TRUE(any_odd_one(0x80000000));
	EXPECT_FALSE(any_odd_one(0x55555555));
	EXPECT_TRUE(any_odd_one(0xAAAAAAAA));
	EXPECT_TRUE(any_odd_one(0xFFFFFFFF));

}
