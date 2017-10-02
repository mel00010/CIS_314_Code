/*******************************************************************************
 * main.c
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

#include "2-68.h"

#include "../2-57/2-57.h"

/**
 * @dir src/Homework_1/2-68
 * @brief Holds all of the source files related to Homework 1 problem 2-68
 * @details For tests, see test/Homework_1/2-68
 * @author Mel McCalla
 */

/**
 * @file 	src/Homework_1/2-68/main.c
 * @author 	Mel McCalla
 * @brief 	Main file for Homework 1 problem 2-68
 * @details	This file contains the main function for Homework 1 problem 2-68.
 * 			For external function documentation and function declarations, see src/Homework_1/2-68/2-68.h.
 * 			For internal function documentation and function implementations, see src/Homework_1/2-68/2-68.c.
 * 			For unit tests, see test/Homework_1/2-68/2-68_test.cpp.
 */

int main(void) {
	show_int(lower_one_mask(1));	//Prints 0x00000001
	show_int(lower_one_mask(2));	//Prints 0x00000003
	show_int(lower_one_mask(3));	//Prints 0x00000007
	show_int(lower_one_mask(4));	//Prints 0x0000000F
	show_int(lower_one_mask(5));	//Prints 0x0000001F
	show_int(lower_one_mask(6));	//Prints 0x0000003F
	show_int(lower_one_mask(7));	//Prints 0x0000007F
	show_int(lower_one_mask(8));	//Prints 0x000000FF
	show_int(lower_one_mask(9));	//Prints 0x000001FF
	show_int(lower_one_mask(10));	//Prints 0x000003FF
	show_int(lower_one_mask(11));	//Prints 0x000007FF
	show_int(lower_one_mask(12));	//Prints 0x00000FFF
	show_int(lower_one_mask(13));	//Prints 0x00001FFF
	show_int(lower_one_mask(14));	//Prints 0x00003FFF
	show_int(lower_one_mask(15));	//Prints 0x00007FFF
	show_int(lower_one_mask(16));	//Prints 0x0000FFFF
	show_int(lower_one_mask(17));	//Prints 0x0001FFFF
	show_int(lower_one_mask(18));	//Prints 0x0003FFFF
	show_int(lower_one_mask(19));	//Prints 0x0007FFFF
	show_int(lower_one_mask(20));	//Prints 0x000FFFFF
	show_int(lower_one_mask(21));	//Prints 0x001FFFFF
	show_int(lower_one_mask(22));	//Prints 0x003FFFFF
	show_int(lower_one_mask(23));	//Prints 0x007FFFFF
	show_int(lower_one_mask(24));	//Prints 0x00FFFFFF
	show_int(lower_one_mask(25));	//Prints 0x01FFFFFF
	show_int(lower_one_mask(26));	//Prints 0x03FFFFFF
	show_int(lower_one_mask(27));	//Prints 0x07FFFFFF
	show_int(lower_one_mask(28));	//Prints 0x0FFFFFFF
	show_int(lower_one_mask(29));	//Prints 0X1FFFFFFF
	show_int(lower_one_mask(30));	//Prints 0x3FFFFFFF
	show_int(lower_one_mask(31));	//Prints 0x7FFFFFFF
	show_int(lower_one_mask(32));	//Prints 0xFFFFFFFF
}
