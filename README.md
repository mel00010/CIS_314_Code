# CIS_314_CODE

## Overview
This is the master project for all of my homework for the University of Oregon
class CIS 314.  Currently, the only assignment it holds is Homework 1.


## Getting Started / Build Instructions
To build all of the files in this project, follow the steps below.   

1. Set up the build environment
```
mkdir build
cd build
cmake ..
```
2. Build the project
```
make all
```
This will place the compiled programs in directories by Homework assignment and 
problem number in src.  The test executable is located at test/tests

3. If you want documentation:
```
make doc
```
The html index file of the generated documentation is located under the
current directory at docs/docs-generated/html/index.html

## License
This project is released under the GNU General Public License version 3.0.
