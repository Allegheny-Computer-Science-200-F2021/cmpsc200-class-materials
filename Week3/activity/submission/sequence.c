#include <stdio.h>
void filler(int sequence[], int cap){
	/* add logic here */
}
void display(int ratings[], int cap){
	printf("-------------------------------------\n");
	/* add logic here */
	printf("\n-------------------------------------\n");
}

int main(){
	int cap = 0;
	printf("Enter the sequence size: ");
	scanf("%d", &cap);
	int ratings[cap];
	filler(ratings, cap);
	display(ratings, cap);
	return 0;
}