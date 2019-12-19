#!/bin/bash
gcc -Wall -Werror -fPIC -c *.c
gcc -shared -Wl,-soname,./liball.so -o ./liball.so *.o
