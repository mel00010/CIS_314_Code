/*******************************************************************************
 * 8-1.h
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
#ifndef SRC_HOMEWORK_8_8_1_8_1_H_
#define SRC_HOMEWORK_8_8_1_8_1_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stddef.h>

#define FALSE 0
#define TRUE  1

typedef struct {
		unsigned char is_valid;
		unsigned int  tag;
		unsigned char value[4];
} CacheBlock;

void write_value(unsigned int address, unsigned int value, CacheBlock* blocks);
void read_byte(unsigned int address, CacheBlock* blocks);
void print_byte(unsigned char set_index, unsigned char offset, CacheBlock block);
void print_block(unsigned char  set_index, CacheBlock block);
void print_values(CacheBlock* blocks);

char get_input_from_user();
unsigned int get_address_from_user();
unsigned int get_value_from_user();


#ifdef __cplusplus
}
#endif

#endif /* SRC_HOMEWORK_8_8_1_8_1_H_ */
