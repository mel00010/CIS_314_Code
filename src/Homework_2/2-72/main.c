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

#include "2-72.h"

#include <stdio.h>

int main() {

	{
		unsigned char buf[4] = { 0x12, 0x34, 0x56, 0x78 };
		copy_int(0x12345678, buf, 4);
		printf("copy_int(0x12345678, buf, 4); buf = 0x%08X\n", *((unsigned int*) buf));
	}

	return 0;
}
