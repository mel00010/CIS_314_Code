/*******************************************************************************
 * sort.c
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

#include "sort.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int* readArray(int length) {
	printf("Please input a sequence of %d newline seperated integers:\n", length);
	int* buf = malloc(length * 4);
	for (int i = 0; i < length; i++) {
		scanf("%d", buf + i);
	}
	return buf;
}

void swap(int* xp, int* yp) {
	int z = *yp;
	*yp = *xp;
	*xp = z;
}

void sortArray(int* array, int length) {
	for (int i = 0; i < length - 1; i++) {
		int minimum = i;
		for (int j = i + 1; j < length; j++) {
			if (*(array + j) < *(array + minimum)) {
				minimum = j;
			}
		}
		if (minimum != i) {
			swap(array + i, array + minimum);
		}
	}
}

void printArray(int* array, int length) {
	printf("[");
	for (int i = 0; i < length; i++) {
		printf("%d", *(array + i));
		if (i + 1 < length) {
			printf(", ");
		}
	}
	printf("]\n");
}
