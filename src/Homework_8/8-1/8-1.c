/*******************************************************************************
 * 8-1.c
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

#include "8-1.h"

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void write_value(unsigned int address, unsigned int value, CacheBlock* blocks) {
	unsigned int  tag_bits    =  address >> 6;
	unsigned char set_bits    = (address << 26) >> 28;
	if(blocks[set_bits].is_valid) {
		printf("evicting block - ");
		print_block(set_bits, blocks[set_bits]);
		printf("\n");
	}
	blocks[set_bits].is_valid = TRUE;
	blocks[set_bits].tag      = tag_bits;
	memcpy(blocks[set_bits].value, &value, 4);
	printf("wrote ");
	print_block(set_bits, blocks[set_bits]);
	printf("\n");
}
void read_byte(unsigned int address, CacheBlock* blocks) {
	unsigned int  tag_bits    =  address >> 6;
	unsigned char set_bits    = (address << 26) >> 28;
	unsigned char offset_bits = (address << 30) >> 30;
	printf("looking for set: %u - tag: %u\n", set_bits, tag_bits);
	if(!blocks[set_bits].is_valid) {
		printf("no valid set found - miss!\n");
		return;
	}
	printf("found ");
	print_byte(set_bits, offset_bits, blocks[set_bits]);
	printf("\n");
	if(blocks[set_bits].tag != tag_bits) {
		printf("tags don't match - miss!\n");
		return;
	}
	printf("hit!\n");

}
void print_byte(unsigned char set_index, unsigned char offset, CacheBlock block) {
	printf("set: %hhu - tag: %u - offset: %hhu - valid: %hhu - value: %02hhX", set_index, block.tag, offset, block.is_valid, block.value[offset]);
}
void print_block(unsigned char set_index, CacheBlock block) {
	printf("set: %hhu - tag: %u - valid: %hhu - value:", set_index, block.tag, block.is_valid);
	for(size_t j = 0; j < 4; j++) {
		printf(" %02hhX",block.value[j]);
	}
}
void print_values(CacheBlock* blocks) {
	for(size_t i = 0; i < 16; i++) {
		if(blocks[i].is_valid) {
			print_block(i, blocks[i]);
			printf("\n");
		}
	}
}

char get_input_from_user() {
	printf("Enter 'r' for read, 'w' for write, 'p' for print, 'q' to quit: ");
	char buf = '\0';
	scanf(" %c", &buf);
	return buf;
}
unsigned int get_address_from_user() {
	printf("Enter 32-bit unsigned hex address: ");
	unsigned int buf = '\0';
	scanf(" %x", &buf);
	return buf;
}
unsigned int get_value_from_user() {
	printf("Enter 32-bit unsigned hex value: ");
	unsigned int buf = '\0';
	scanf(" %x", &buf);
	return buf;
}

