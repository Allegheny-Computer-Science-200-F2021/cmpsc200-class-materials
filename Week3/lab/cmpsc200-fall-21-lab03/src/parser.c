/**
 * Professor Mohan
 * Sample program (based on K & R page 17):
 * Copy a file, printing only every other character
 * (not including \n, which is always copied).
 *
 * To compile and run this on a data file named "myfile.txt", type:
 *
 *      gcc parser.c -o parser.out
 *      ./parser.out < ritchie.txt
 */
#include <stdio.h>
int main() {
    int c, count = 0;
    while ((c=getchar()) != EOF) {
        /* Don't count the newline! */ 
        if (c == '\n') {
            putchar(c); /* What is putchar? you might be wondering, we did not discuss 
            this in class. putchar is opposite to getchar, it puts character on console.
            putchar is similar to printf, but can only work with single character. */
        }
        else if (count%2 == 0) { /* Print and count */
            putchar(c);
            count++;
        }
        else { /* Don't print, but count */
            count++;
        }
    }
    return 0;
}
