Static Libraries Project
This repository contains the implementation of a static library and related files for the ALX Low-Level Programming curriculum.
Files in this repository:

main.h

Header file containing all function prototypes used in the library.


libmy.a

The static library containing compiled object files of various utility functions.


create_static_lib.sh

Bash script to automate the creation of a static library named liball.a from all .c files in the current directory.


Various .c files (not listed individually)

Source code files for the functions declared in main.h and compiled into libmy.a.



Function list:
The libmy.a library includes implementations for the following functions:

_putchar
_islower
_isalpha
_abs
_isupper
_isdigit
_strlen
_puts
_strcpy
_atoi
_strcat
_strncat
_strncpy
_strcmp
_memset
_memcpy
_strchr
_strspn
_strpbrk
_strstr

Compilation
All files are compiled on Ubuntu 20.04 LTS using gcc with the following flags:

