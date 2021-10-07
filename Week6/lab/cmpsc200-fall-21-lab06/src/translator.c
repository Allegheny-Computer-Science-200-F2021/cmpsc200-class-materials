#include <stdio.h>
#include <math.h>
void printDashes(){
	for (int i =0; i < 50; i++)
		printf("-");
	printf("\n");
}
int b2d(){
	printf("Welcome to binary to decimal converter...\n");
	unsigned long binary = 0;
	int bits = 0 ;
	int res = 0;
	printf("Enter a binary:");
	scanf("%lu", &binary);
	/* add your logic here .... */
	/* calculate the number of bits using a temp variable */
	/* note why we use temp variable, if we make changes to binary variable. then we will lose it. */
	/* we need the binary variable for actual translation */
	unsigned long temp = binary;
	while(temp > 0){
		temp /= 10;
		bits++;
	}
	temp = binary;
	while (bits){
		if (bits > 1)
			res = (res + temp/pow(10, bits-1)) * 2;
		else
			res = (res + temp/pow(10, bits-1));
		temp = temp % (unsigned long) pow(10, bits-1);
		bits--;	
	}
	return res;
}
unsigned long d2b(){
	printf("Welcome to decimal to binary converter...\n");	
	int decimal = 0;
	int bit = 0;
	unsigned long res = 0;
	printf("Enter a decimal:");
	scanf("%d", &decimal);
	/* add your logic here .... */
	unsigned long rem = 1;
	unsigned long temp = decimal;
	while(temp > 0){
		bit = temp % 2;
		temp = temp / 2;
		res += bit * rem;
		rem = rem * 10;
	}
	return res;
}
int main(){
	int choice = 0;
	while(1){
		printDashes();
		printf("Enter (1) to convert binary to decimal,\n(2) to convert decimal to binary,(3) for exit:");
		scanf("%d", &choice);
		getchar();
		if (choice == 1){
			int res = b2d();
			printf("%d\n", res);
			printDashes();
			printf("\n");			
		}
		else if (choice == 2){
			unsigned long res = d2b();
			printf("%lu\n", res);
			printDashes();
			printf("\n");			
		}
		else
			break;
		
	}
	return 0;
}