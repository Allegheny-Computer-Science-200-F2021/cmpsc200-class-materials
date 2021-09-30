#!/bin/sh
cd cmpsc200-fall-21-lab03/src/
gcc basketball.c -o basketball.out >> ../../errors
gcc palindrome.c -o palindrome.out >> ../../errors
gcc file1.c -o file1.out >> ../../errors 
gcc file2.c -o file2.out >> ../../errors
