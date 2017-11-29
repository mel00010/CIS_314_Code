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

#include "7-1.h"

#include <stdio.h>

int main() {
	{
		float u[5] = { 1.2f, 3.4f, 5.6f, 7.8f, 9.0f };
		float v[5] = { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f };
		float dest = 0;

		dest = 0;
		inner(u, v, 5, &dest);
		printf("dest = %f\t// inner ({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f }, 5, &dest) \n", dest);

		dest = 0;
		inner2(u, v, 5, &dest);
		printf("dest = %f\t// inner2({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f }, 5, &dest) \n", dest);
	}

	{
		float u[6] = { 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f };
		float v[6] = { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f };
		float dest = 0;

		dest = 0;
		inner(u, v, 6, &dest);
		printf("dest = %f\t// inner ({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f }, 6, &dest) \n", dest);

		dest = 0;
		inner2(u, v, 6, &dest);
		printf("dest = %f\t// inner2({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f }, 6, &dest) \n", dest);
	}

	{
		float u[7] = { 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f, 2.8f };
		float v[7] = { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f, 8.2f };
		float dest = 0;

		dest = 0;
		inner(u, v, 7, &dest);
		printf("dest = %f\t// inner ({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f, 2.8f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f, 8.2f }, 7, &dest) \n", dest);

		dest = 0;
		inner2(u, v, 7, &dest);
		printf("dest = %f\t// inner2({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f, 2.8f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f, 8.2f }, 7, &dest) \n", dest);
	}

	{
		float u[8] = { 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f, 3.7f };
		float v[8] = { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f, 7.3f };
		float dest = 0;

		dest = 0;
		inner(u, v, 8, &dest);
		printf("dest = %f\t// inner ({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f, 2.8f, 3.7f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f, 8.2f, 7.3f }, 8, &dest) \n", dest);

		dest = 0;
		inner2(u, v, 8, &dest);
		printf("dest = %f\t// inner2({ 1.2f, 3.4f, 5.6f, 7.8f, 9.0f, 1.9f, 2.8f, 3.7f }, { 0.9f, 8.7f, 6.5f, 4.3f, 2.1f, 9.1f, 8.2f, 7.3f }, 8, &dest) \n", dest);
	}
}
