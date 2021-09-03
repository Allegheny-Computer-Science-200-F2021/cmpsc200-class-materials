/* Add your honor code here ...*/
#include <stdio.h>
void diamond(){
	int rows = 0;
	printf("Enter the number of rows:");
	scanf("%d", &rows);
	getchar();
	/* add your logic here */	
}
void pyramid(){
	int rows = 0;
	printf("Enter the number of rows:");
	scanf("%d", &rows);
	getchar();
	int mid = rows - 1;
	for (int i = 0; i < rows; i++){
		for (int j = 0; j < 2*rows; j++){
			if (j >= (mid-i) && j <= (mid+i))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
int main(){
	char prompt = 'x';
	while(1){
		printf("Do you want to show (1) pyramid (2) diamond (3) for exit:");
			scanf("%c", &prompt);
			getchar();
	
		if (prompt == '1'){
			pyramid();
		}
		else if (prompt == '2'){
			diamond();
		}
		else
			break;
	}
	
	return 0;
}



