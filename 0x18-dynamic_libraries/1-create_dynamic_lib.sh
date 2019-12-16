#!/bin/bash
gcc -Wall -Werror -fPIC -c *.c
gcc -shared -Wl,-soname,libholberton.so -o libholberton.so *.o
