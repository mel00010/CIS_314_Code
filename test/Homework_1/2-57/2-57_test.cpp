/*******************************************************************************
 * 2-57_test.cpp
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

#include <stdlib.h>
#include <string.h>

#include <Homework_1/2-57/2-57.h>

/**
 * @dir		test/Homework_1
 * @brief	Holds all of the tests for problems in Homework 1
 * @details For source code, see src/Homework_1
 * @author	Mel McCalla
 */

/**
 * @dir		test/Homework_1/2-57
 * @brief	Holds all of the tests related to Homework 1 problem 2-57
 * @details	For source code, see src/Homework_1/2-57
 * @author	Mel McCalla
 */

/**
 * @file 	test/Homework_1/2-57/2-57_test.cpp
 * @brief 	Unit test file for Homework 1 problem 2-57
 * @details	This file contains unit tests.
 * 			For external function documentation and function declarations, see src/Homework_1/2-57/2-57.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-57/2-57.c.
 * 			For the main function, see src/Homework_1/2-57/main.c
 * @author 	Mel McCalla
 */

TEST(Homework_1_2_57_2_57, as_bytes) {
	{
		char data = 0x01;
		char test[100] = { '\0' };
		EXPECT_EQ(4, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 0));
		EXPECT_STREQ("0x01", test);
	}
	{
		char data = 0x01;
		char test[100] = { '\0' };
		EXPECT_EQ(4, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 1));
		EXPECT_STREQ("0x01", test);
	}
	{
		short data = 0x0123;
		char test[100] = { '\0' };
		EXPECT_EQ(6, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 0));
		EXPECT_STREQ("0x2301", test);
	}
	{
		short data = 0x0123;
		char test[100] = { '\0' };
		EXPECT_EQ(6, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 1));
		EXPECT_STREQ("0x0123", test);
	}
	{
		int data = 0x01234567;
		char test[100] = { '\0' };
		EXPECT_EQ(10, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 0));
		EXPECT_STREQ("0x67452301", test);
	}
	{
		int data = 0x01234567;
		char test[100] = { '\0' };
		EXPECT_EQ(10, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 1));
		EXPECT_STREQ("0x01234567", test);
	}
	{
		long data = 0x0123456789ABCDEF;
		char test[100] = { '\0' };
		EXPECT_EQ(18, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 0));
		EXPECT_STREQ("0xEFCDAB8967452301", test);
	}
	{
		long data = 0x0123456789ABCDEF;
		char test[100] = { '\0' };
		EXPECT_EQ(18, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 1));
		EXPECT_STREQ("0x0123456789ABCDEF", test);
	}
	{
		long double_data = 0x0123456789ABCDEF;
		double data;
		memcpy(&data, &double_data, sizeof(double));
		char test[100] = { '\0' };
		EXPECT_EQ(18, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 0));
		EXPECT_STREQ("0xEFCDAB8967452301", test);
	}
	{
		long double_data = 0x0123456789ABCDEF;
		double data;
		memcpy(&data, &double_data, sizeof(double));
		char test[100] = { '\0' };
		EXPECT_EQ(18, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 1));
		EXPECT_STREQ("0x0123456789ABCDEF", test);
	}
	{
		unsigned char data[16] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F };
		char test[100] = { '\0' };
		EXPECT_EQ(34, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 0));
		EXPECT_STREQ("0x000102030405060708090A0B0C0D0E0F", test);
	}
	{
		unsigned char data[16] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F };
		char test[100] = { '\0' };
		EXPECT_EQ(34, as_bytes((void* )&data, sizeof(data), test, sizeof(test), 1));
		EXPECT_STREQ("0x0F0E0D0C0B0A09080706050403020100", test);
	}
}
