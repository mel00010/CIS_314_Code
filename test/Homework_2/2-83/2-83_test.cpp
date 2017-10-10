/*******************************************************************************
 * 2-83_test.cpp
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

#include <math.h>
#include <Homework_2/2-83/2-83.h>

TEST(Homework_2_2_83_2_83, float_le) {
	EXPECT_TRUE(float_le(1., 1.));
	EXPECT_TRUE(float_le(-1., -1.));
	EXPECT_TRUE(float_le(-0., 0.));
	EXPECT_TRUE(float_le(-1., 1.));
	EXPECT_TRUE(float_le(-2., -1.));
	EXPECT_TRUE(float_le(1., 2.));
	EXPECT_TRUE(float_le(-1, 2));
	EXPECT_TRUE(float_le(-2, 1));
	EXPECT_TRUE(float_le(-2000, 1));
	EXPECT_FALSE(float_le(1, -1));
	EXPECT_FALSE(float_le(-1, -2));
	EXPECT_FALSE(float_le(1, -2));
	EXPECT_FALSE(float_le(1, -2000));
}

