#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fpic -c *.c
gcc -Wall -Werror -Wextra -pedantic -shared -fPIC -o liball.so *.o
