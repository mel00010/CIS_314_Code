/*******************************************************************************
 * InnerVectorProduct.c
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

#include "7-1.h"

void inner(float *u, float *v, int length, float *dest) {
	float sum = 0.0f;
	for (int i = 0; i < length; ++i) {
		sum += u[i] * v[i];
	}
	*dest = sum;
}

void inner2(float *u, float *v, int length, float *dest) {
	float sum1 = 0.0f;
	float sum2 = 0.0f;
	float sum3 = 0.0f;
	float sum4 = 0.0f;
	int left_over = (length % 4);
	int repeats = (length / 4);
	int i = 0;
	while (repeats--) {
		sum1 += u[i] * v[i];
		sum2 += u[i + 1] * v[i + 1];
		sum3 += u[i + 2] * v[i + 2];
		sum4 += u[i + 3] * v[i + 3];
		i += 4;
	}
	switch (left_over) {
		case 3:
			sum1 += u[i + 2] * v[i + 2];
		case 2:
			sum1 += u[i + 1] * v[i + 1];
		case 1:
			sum1 += u[i] * v[i];
		case 0:
			;
	}
	*dest = sum1 + sum2 + sum3 + sum4;
}

