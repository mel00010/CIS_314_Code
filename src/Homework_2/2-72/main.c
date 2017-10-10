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
	// Format strings get a little hairy, because printf does not have a good way
	// to print an arbitrary length integer type
	{
		unsigned char buf[1] = { 0 };
		copy_int(0x12345678, buf, 1);
		// Prints copy_int(0x12345678, buf, 1); buf = 0x00
		printf("copy_int(0x12345678, buf, 1); buf = 0x%02hhX\n", *buf);
	}
	{
		unsigned char buf[2] = { 0 };
		copy_int(0x12345678, buf, 2);
		// Prints copy_int(0x12345678, buf, 2); buf = 0x0000
		printf("copy_int(0x12345678, buf, 2); buf = 0x%04hX\n", *((unsigned short*) buf));
	}
	{
		unsigned char buf[3] = { 0 };
		copy_int(0x12345678, buf, 3);
		// Prints copy_int(0x12345678, buf, 3); buf = 0x000000
		printf("copy_int(0x12345678, buf, 3); buf = 0x%02hhX%04hX\n", *(buf + 2), *((unsigned short*) buf));
	}
	{
		unsigned char buf[4] = { 0 };
		copy_int(0x12345678, buf, 4);
		// Prints copy_int(0x12345678, buf, 4); buf = 0x12345678
		printf("copy_int(0x12345678, buf, 4); buf = 0x%08X\n", *((unsigned int*) buf));
	}
	{
		unsigned char buf[5] = { 0 };
		copy_int(0x12345678, buf, 5);
		// Prints copy_int(0x12345678, buf, 5); buf = 0x0012345678
		printf("copy_int(0x12345678, buf, 5); buf = 0x%02hhX%08X\n", *(buf + 4), *((unsigned int*) buf));
	}
	{
		unsigned char buf[6] = { 0 };
		copy_int(0x12345678, buf, 6);
		// Prints copy_int(0x12345678, buf, 6); buf = 0x000012345678
		printf("copy_int(0x12345678, buf, 6); buf = 0x%04hX%08X\n", *((unsigned short*) (buf + 4)), *((unsigned int*) buf));
	}
	{
		unsigned char buf[7] = { 0 };
		copy_int(0x12345678, buf, 7);
		// Prints copy_int(0x12345678, buf, 7); buf = 0x00000012345678
		printf("copy_int(0x12345678, buf, 7); buf = 0x%02hhX%04hX%08X\n", *(buf + 6), *((unsigned short*) (buf + 4)), *((unsigned int*) buf));
	}
	{
		unsigned char buf[8] = { 0 };
		copy_int(0x12345678, buf, 4);
		// Prints copy_int(0x12345678, buf, 8); buf = 0x0000000012345678
		printf("copy_int(0x12345678, buf, 8); buf = 0x%016lX\n", *((unsigned long*) buf));
	}
	return 0;
}
