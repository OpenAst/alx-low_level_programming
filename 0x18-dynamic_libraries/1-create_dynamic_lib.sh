#!/bin/bash
gcc -c -fPIC *.c   # Compile all .c files as position-independent code
gcc -shared -o liball.so *.o   # Link all .o files to create the shared library

