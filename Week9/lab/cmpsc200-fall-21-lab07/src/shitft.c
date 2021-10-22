#include <stdio.h>
#define no_of_bits 16 // assume total number of bits is 16. 
void left(int input1, int input2, int* res){
	*res = input1 << input2;
	/* implement the logic here to develop the << operator */
	// step 1: convert (input1) decimal to binary
	// step 2: initialize an array using (no_of_bits) 
	//         and store the binary form in the array.
	// step 3: transform the array, by shuffling
    //		   contents to apply the left shift operator.
    // step 4: convert (array content) from 
    //         binary form back to decimal.
    // step 5: store final output in res.

}
void right(int input1, int input2, int* res){
	*res = input1 >> input2;
	/* implement the logic here to develop the >> operator */
	// step 1: convert (input1) decimal to binary
	// step 2: initialize an array using (no_of_bits) 
	//         and store the binary form in the array
	// step 3: transform the array, by shuffling
    //		   contents to apply the right shift operator.
    // step 4: convert (array content) from 
    //         binary form back to decimal.
    // step 5: store final output in res.
}
int main(){
	int input1 = 0, input2 = 0, input3 = 0, input4 = 0, res = 0;
	while(1){
		printf("Enter a positive number less than 1000:");
		scanf("%d", &input1);
		getchar();
		if (input1 > 0 && input1 < 1000){
			printf("Enter the number of bits to be shifted (less than 5):");
			scanf("%d", &input2);
			getchar();
			if (input2 > 0 && input2 < 5){
				printf("Enter 1 for left shift; 2 for right shift:");
				scanf("%d", &input3);
				getchar();
				if (input3 == 1)
					left(input1, input2, &res);
				else
					right(input1, input3, &res);
				
				printf("%d\n", res);
				printf("Do you want to try again? 1 for yes; 2 for no:");
				scanf("%d", &input4);
				getchar();

				if (input4 == 2)
					break;
			}
			else{
				printf("Incorrect input for number of bits. Please try again...\n");
				printf("Do you want to try again? 1 for yes; 2 for no:");
				scanf("%d", &input4);
				getchar();

				if (input4 == 2)
					break;
			}
		}
		else{
			printf("Incorrect input. Please try again...\n");
			printf("Do you want to try again? 1 for yes; 2 for no:");
			scanf("%d", &input4);
			getchar();
			if (input4 == 2)
					break;
		}
		
	} // end while
	
	return 0;
}