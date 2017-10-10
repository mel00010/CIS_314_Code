/*******************************************************************************
 * 2-71_test.cpp
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

#include <Homework_2/2-71/2-71.h>

TEST(Homework_2_2_71_2_71, xbyte) {
	EXPECT_EQ(0x00000034, xbyte(0x89ABCD34, 0));
	EXPECT_EQ(0xFFFFFFCC, xbyte(0x89ABCDCC, 0));
	EXPECT_EQ(0x00000034, xbyte(0x89AB34EF, 1));
	EXPECT_EQ(0xFFFFFFCC, xbyte(0x89ABCCEF, 1));
	EXPECT_EQ(0x00000034, xbyte(0x8934CDEF, 2));
	EXPECT_EQ(0xFFFFFFCC, xbyte(0x89CCCDEF, 2));
	EXPECT_EQ(0x00000034, xbyte(0x34ABCDEF, 3));
	EXPECT_EQ(0xFFFFFFCC, xbyte(0xCCABCDEF, 3));
}



