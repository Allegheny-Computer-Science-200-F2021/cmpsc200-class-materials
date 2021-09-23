#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10 // size indicates total number of products. 
struct product{
  int p_no;
  int p_quantity;
  float p_rank;
};
void write(char *file){
	// write to file
	FILE *fp = fopen(file, "w+"); // w+ is for write mode for file writing
	int upper = 100, lower = 1;
	float rank = 5.0;
	srand(time(0));
	for (int i = 1; i <= SIZE; i++){
		// The following two lines are used to randomly generate the quantity and ranking data points. 
		int product_qty = (rand() / (double)RAND_MAX) * (upper - lower) + lower;
		float product_rank = (float)rand()/(float)(RAND_MAX/rank);
		if (i % 5 == 0 && (i > 1 && i < SIZE))
			fprintf(fp, "%d,%d,%.2f\n",i, product_qty, product_rank);	
		else
			fprintf(fp, "%d,%d,%.2f\t",i, product_qty, product_rank);	
	}
    fclose(fp);
}
void load(char *file, struct product* prod){
	// load all the product details from the file and extract product no, quantity, and ranking. 
	int c = 0, index = 0;
	int product_no = 0, product_quantity = 0;
	float product_rank = 0.0, multiplier = 0.1;
	int f1 = 1, f2 = 0, f3 = 0;
	FILE *fp = fopen(file, "rb"); // rb is for read mode for file reading
	while ((c=fgetc(fp)) != EOF) { // fgetc is for getting characters from file directly than std stream. 
        // develop your logic here to build each product and add it to the struct array.
		if (c == '\t' || c == '\n'){ // logical question 
			//printf("%d\t%d\t%.2f\n", product_no, product_quantity, product_rank);
			prod[index].p_no = product_no;
			prod[index].p_quantity = product_quantity;
			prod[index].p_rank = product_rank;
			product_no = 0, product_quantity = 0, product_rank = 0.0;
			f1 = 1, f2 = 0, f3 = 0;
			multiplier = 0.1; // reset all the flags and supporting variables ....
			index++;

		}
		else{
			if (f1 && c != ',' && !f2){
				// build product no
				int digit = c - '0';
				product_no = 10*product_no + digit;
			}
			else if (f1 && c == ',' && !f2)
				f2 = 1, f1 = 0;
			else if (f2 && c != ',' && !f1){
				// build the quantity
				int digit = c - '0';
				product_quantity = 10*product_quantity + digit;
			}
			else if (f2 && c == ',' && !f1)
				f2 = 0, f1 = 0;
			else if (!f1 && !f2){
				// build rank
				int digit = c - '0';
				if (f3){
					product_rank = product_rank + digit*multiplier;	
					multiplier /= 10;
				}
				else if (!f3 && c != '.'){
					product_rank = 10*product_rank + digit;	
				}
				if (c == '.')
					f3 = 1;
			}
			
		}
	}
}
void report(struct product* prod){
	// add your logic here ....
}

int main(){
	char *file = "data.txt";
	struct product* prod;
  	prod = (struct product*)
        malloc(SIZE*sizeof(struct product));
  	write(file);
	load(file, prod);
	report(prod);
	return 0;
}