#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -0 liball.so *.o
