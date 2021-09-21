#include <stdio.h>
#include <stdlib.h> // library used for dynamic memory allocation
#include <time.h> // library used for generating random number seeds. 
void display(int *grid, int size){
	printf("--------------------------------------------\n");
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			// change the print logic to accomodate both integers and characters. 
			// that is for grid1 and grid2 it should print characters and for grid3 it should print decimals. 
			// also the key challenge here is that we are not directly provided the information about the grid
			// we can only infer that through logic. 
			printf("%c\t", *(grid + i*size + j));			
		}
		printf("\n");
	}
	printf("--------------------------------------------\n");
}
void generate(int *grid1, int *grid2, int *grid3, int size){
	// complete your logic here to generate the new grid with 1's and 0's inside grid3.
	// use pointer arithmetic for computing the new grid.
	
}
float report(int *grid, int size){
	/* compute the percentage for the number of correct results that matches with 1's in grid3*/
	float res = 0.0;
	return res;
}
void load(int *grid1, int *grid2, int size){
	int upper = 64+size, lower = 65;
	srand(time(0));
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			*(grid1 + i*size + j) = (rand() % (upper - lower + 1)) + lower;
			*(grid2 + i*size + j) = (rand() % (upper - lower + 1)) + lower;
		}
	}
}


int main(){
	int size = 0;
	// (we assume the grid to have equal number of rows and cols.)
	printf("Enter grid size: ");
	scanf("%d", &size);
	int *grid1 = (int*) malloc(size*size*sizeof(int));
	int *grid2 = (int*) malloc(size*size*sizeof(int));
	int *grid3 = (int*) malloc(size*size*sizeof(int));
	load(grid1, grid2, size);
	display(grid1, size);
	display(grid2, size);
	generate(grid1, grid2, grid3, size);
	display(grid3, size);
	printf("--------------------------------\n");
	printf("Percentage: %f\n", report(grid3, size));
	printf("--------------------------------\n");

	return 0;
}