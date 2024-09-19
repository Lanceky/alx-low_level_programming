0x18. C - Dynamic libraries
This project focuses on creating and using dynamic libraries in C. It covers the following key concepts:

Creating dynamic libraries
Using dynamic libraries
Understanding the differences between static and shared libraries

Files

libdynamic.so: A dynamic library containing various C functions
main.h: Header file with function prototypes
1-create_dynamic_lib.sh: Shell script to create a dynamic library from all .c files in the current directory
100-operations.so: A dynamic library that can be called from Python
101-make_me_win.sh: Shell script for a more advanced task involving code injection

Compilation
To compile the dynamic library:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC *.c -o libdynamic.so


