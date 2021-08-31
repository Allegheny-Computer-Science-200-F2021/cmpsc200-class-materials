#include <stdio.h>
int main() {
	int c; /* input character--assumed to be a digit */
 	int digit; /* the decimal digit corresponding to c */
 	int value = 0; /* value of the input string as an int */
 	while ((c = getchar()) != '\n') {
 		if (c < '0' || c > '9') { /* Check for error in input */
 			printf("Error--non-digit in input\n");
 			break;
 		}
 		digit = c - '0'; /* Convert ASCII to digit */
 		value = 10 * value + digit; /* Combine with previous digits */
 	}
 	printf("Value of string: %d\n",value);
 	return 0;
}