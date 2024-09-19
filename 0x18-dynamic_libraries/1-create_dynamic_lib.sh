#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC *.c -o liball.so
