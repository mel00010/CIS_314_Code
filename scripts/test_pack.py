#!/usr/bin/env python3

import os
import shlex
from subprocess import Popen, PIPE
import sys
import tempfile
import zipfile
with tempfile.TemporaryDirectory() as tmpdirname:
	with zipfile.ZipFile(sys.argv[1],"r") as zip_ref:
		zip_ref.extractall(tmpdirname)
		os.chdir(tmpdirname)
		for i in zip_ref.namelist():
			cmd = "gcc "+i+" -o" + os.path.splitext(os.path.basename(i))[0]
			process = Popen(shlex.split(cmd), stdout=PIPE)
			(output, err) = process.communicate()
			exit_code = process.wait()
			
			if(output):
				print(output)
				exit(1)
			if(err):
				print(err)
				exit(1)
			if(exit_code != 0):
				print("gcc exited with error code "+exit_code+"!")
				exit(exit_code)
			print("Compile ok for "+i+" in "+os.path.basename(sys.argv[1]))
			

		