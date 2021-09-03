/* Add your honor code here ...*/
#include <stdio.h>
#include <math.h>
void buildTable(int rows){
	/* complete this method here */
	
}
int main(){
	int prompt = 0;
	while(1){
		printf("Please enter the number of rows, (0) for exit:");
			scanf("%d", &prompt);
			getchar();
	
		if (prompt > 0){
			buildTable(prompt);
		}
		else {
			break;
		}
	}	
	
	return 0;
}



