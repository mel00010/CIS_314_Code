/*******************************************************************************
 * 2-83.c
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

#include "2-83.h"

unsigned f2u(float input) {
	return *((unsigned*) &input);
}
int float_le(float x, float y) {
	unsigned ux = f2u(x);
	unsigned uy = f2u(y);
	/* Get the sign bits */
	unsigned sx = ux >> 31;
	unsigned sy = uy >> 31;
	/* Give an expression using only ux, uy, sx, and sy */
	return (sx >= sy) && ((sx && (ux >= uy)) || (!sx && (ux <= uy)));
}
