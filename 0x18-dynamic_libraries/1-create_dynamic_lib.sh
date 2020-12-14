#!/bin/bash
gcc *.c -Wall -Werror -Wextra -pedantic -c -fPIC 
gcc *.o -shared -o liball.so
