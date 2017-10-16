/*******************************************************************************
 * sort_test.cpp
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
#include <gmock/gmock.h>

#include <Homework_3/sort/sort.h>


TEST(Homework_3_sort, swap) {
	{
		int x = 10;
		int y = 3;
		int* xp = new int(x);
		int* yp = new int(y);
		swap(xp, yp);
		EXPECT_EQ(*xp, y);
		EXPECT_EQ(*yp, x);
	}
}

TEST(Homework_3_sort, sortArray) {
	{
		size_t buffer_size = 5;
		int buf[buffer_size] = { 1, 2, 3, 4, 5 };
		sortArray(buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 1, 2, 3, 4, 5 }));
	}
	{
		size_t buffer_size = 5;
		int buf[buffer_size] = { 5, 4, 3, 2, 1 };
		sortArray(buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 1, 2, 3, 4, 5 }));
	}
	{
		size_t buffer_size = 5;
		int buf[buffer_size] = { 5, 1, 4, 3, 2 };
		sortArray(buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 1, 2, 3, 4, 5 }));
	}
}

