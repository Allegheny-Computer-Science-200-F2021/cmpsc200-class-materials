// Altering numbers using a formula. 
#include <stdio.h>
int main() {
	int n = 17;
 	while (n > 1) {
 		printf("%3d\n",n);
 		if (n % 2 == 0){
 			n = n/2;
 		}
 		else {
 			n = 3*n+1;
 		}
 	}
 	return 0;
}
