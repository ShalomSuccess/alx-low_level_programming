#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *
ar -rc liball.a *.c
ranlib liball.a

