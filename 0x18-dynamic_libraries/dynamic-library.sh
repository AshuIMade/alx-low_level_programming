#!/bin/bash
gcc -fPIC -c 100-operations.c
gcc -shared -o 100-operations.so *.o
