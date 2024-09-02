#!/bin/sh -e
gcc -Wall -Wextra -Werror *.c
ar cr libft.a *.o
