#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000 // size indicates total number of phone numbers. 
void write(char *file){
	// write to file
	FILE *fp = fopen(file, "w+"); // w+ is for write mode for file writing
	unsigned long upper = 9999999999, lower = 1111111111;
	srand(time(0));
	for (int i = 1; i <= SIZE; i++){
		unsigned long phoneno = (rand() % (upper - lower + 1)) + lower;
		if (i % 5 == 0 && (i > 1 && i < SIZE))
			fprintf(fp, "%lu\n", phoneno);	
		else
			fprintf(fp, "%lu\t", phoneno);	
	}
    fclose(fp);
}
void load(char *file, unsigned long *arr){
	// load all the phone numbers from the file into the array arr. 
	int c = 0;
	FILE *fp = fopen(file, "rb"); // rb is for read mode for file reading
	while ((c=fgetc(fp)) != EOF) { // fgetc is for getting characters from file directly than std stream. 
        // develop your logic here to build each phone number and add it to the array.
    	// refer to how we read integers and build integers from characters in ascii.c in week2/code folder. 
    }
    
}
void report(unsigned long *arr){
	// produce a report by starting digit in the phone number to list the total number of phone numbers that starts with the digit. 
	// this method is expected to print the output on the console. See lab sheet for more information! 
	

	/*
	// The code below allows you to simply print the array contents. You may use it for testing purpose. 
	for (int i = 0 ; i < SIZE; i++){
		printf("%lu\t", arr[i]);
	}
	printf("\n");
	*/
}

int main(){
	char *file = "data.txt";
	unsigned long *arr = (unsigned long *) malloc(SIZE*sizeof(unsigned long));
	write(file);
	load(file, arr);
	report(arr);
	return 0;
}