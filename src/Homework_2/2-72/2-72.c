/*******************************************************************************
 * 2-72.c
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

#include <string.h>

void copy_int(int val, void *buf, int maxbytes) {
	/*
	 * The test in the code example given in the assignment always succeeds
	 * because sizeof(int) can never be negative, so the result of
	 * maxbytes - sizeof(int) will always be positive, and that is all the test
	 * is checking for, so it is always true.
	 */
	if (maxbytes - (int) sizeof(int) >= 0) {
		memcpy(buf, (void *) &val, sizeof(val));
	}
}

