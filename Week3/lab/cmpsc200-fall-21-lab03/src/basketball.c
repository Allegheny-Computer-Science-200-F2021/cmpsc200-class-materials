#include <stdio.h>
void report(char *names[], float rankings[], int size){
	/* add your logic here */
	for (int i = 0; i < size; i++){
		printf("%s\t%f\n", names[i], rankings[i]);
	}
}
void teamA(char *names[], float rankings[], int size){
	/* add your logic here */
}
void teamB(char *names[], float rankings[], int size){
	/* add your logic here */
}
int main(){
	/* Please don't edit the main method. All these code is required to complete this lab. */
	char *names[] = {"Peter", "Maximus", "Curtis", "Raphael", "Cale", "Omari", "Brayan", "Kaeden", "Wyatt", "Dwayne", "Alex", "Deon", "Teagan", "Emilin", "Triston", "Alonzo", "Ulises", "Regin", "Tommy", "Cannon"};
	float rankings[] = {4.2,5,3.2,5,5,1.5,2.6,2.8,1.9,4.3,4.8,3.2,3.3,4.5,3.1,4.7,4.4,2.9,4.9,2/7};
	int size = (int) (sizeof(rankings)/sizeof(rankings[0]));
	printf("There are %d players in the pool. \n", size);
	char prompt = 'x';
	while(1){
		printf("Do you want to show (1) Display Report on the Candidates Pool (2) Display Team-A (3) Display Team-B (4) exit:");
			scanf("%c", &prompt);
			getchar();
	
		if (prompt == '1'){
			report(names, rankings, size);
		}
		else if (prompt == '2'){
			teamA(names, rankings, size);
		}
		else if (prompt == '3'){
			teamB(names, rankings, size);
		}
		else
			break;
	}
	return 0;
}