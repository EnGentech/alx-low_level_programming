#!/bin/bash
gcc -c *.c
gcc *.o -shared -o liball.so
