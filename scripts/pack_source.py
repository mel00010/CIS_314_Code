#!/usr/bin/env python3

import os
import sys

with open(sys.argv[1]) as header_file:
	with open(sys.argv[2]) as source_file:
		with open(sys.argv[3]) as main_file:
			with open(sys.argv[4], 'w') as out_file:
				header_lines = header_file.readlines()
				source_lines = source_file.readlines()
				main_lines = main_file.readlines()
				out_file.write("".join(source_lines[0:20]))
				out_file.write("".join(header_lines[26:-5]))
				out_file.write("".join(source_lines[22:]))
				out_file.write("\n")
				out_file.write("".join(main_lines[22:]))
				out_file.write("\n")
