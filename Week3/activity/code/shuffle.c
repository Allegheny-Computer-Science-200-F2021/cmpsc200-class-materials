#include <stdio.h>
void shuffle(int b1, int b2, int b3){
	printf("------------------------------------\n");
	printf("\tI am starting to shuffle\n");
	/* add our logic here */
	printf("\tI completed shuffling\n");
	printf("------------------------------------\n");
}
int main(){
	int b1 = 1, b2 = 2, b3 = 3;
	printf("%d\t%d\t%d\n", b1, b2, b3);
	shuffle(b1, b2, b3);
	printf("%d\t%d\t%d\n", b1, b2, b3);
	
	return 0;
}