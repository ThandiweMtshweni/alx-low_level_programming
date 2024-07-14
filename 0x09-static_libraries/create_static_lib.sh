#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -wertra -c *.c
ar -rc liball.a *.o
ranlib liball.a
