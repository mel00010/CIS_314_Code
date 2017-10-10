/*******************************************************************************
 * 2-72_test.cpp
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
#include <Homework_2/2-72/2-72.h>

TEST(Homework_2_2_72_2_72, copy_int) {
	{
		size_t buffer_size = 1;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x00 }));
	}
	{
		size_t buffer_size = 2;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x00, 0x00 }));
	}
	{
		size_t buffer_size = 3;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x00, 0x00, 0x00 }));
	}
	{
		size_t buffer_size = 4;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x78, 0x56, 0x34, 0x12 }));
	}
	{
		size_t buffer_size = 5;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x78, 0x56, 0x34, 0x12, 0x00 }));
	}
	{
		size_t buffer_size = 6;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x78, 0x56, 0x34, 0x12, 0x00, 0x00 }));
	}
	{
		size_t buffer_size = 7;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x78, 0x56, 0x34, 0x12, 0x00, 0x00, 0x00 }));
	}
	{
		size_t buffer_size = 8;
		uint8_t buf[buffer_size] = { 0 };
		copy_int(0x12345678, buf, buffer_size);
		EXPECT_THAT(std::vector<uint8_t>(buf, buf + buffer_size),
				::testing::ElementsAreArray( { 0x78, 0x56, 0x34, 0x12, 0x00, 0x00, 0x00, 0x00 }));
	}
}

