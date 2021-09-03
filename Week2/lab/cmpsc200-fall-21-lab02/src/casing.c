/* Add your honor code here ...*/
#include <stdio.h>
void toCamel(){
	/* complete this method here */
}
void toLower(){
	/* complete this method here */
}
void toUpper(){
	char c;
	while ((c = getchar()) != '\n') {
		 if (c >= 97 && c <= 122)
		 	printf("%c", c-32);
		 else 
		 	printf("%c", c);
	}
	printf("\n");
}
int main(){
	char prompt = 'x';
	while(1){
		printf("Do you want to show (1) upper (2) lower (3) camel (4) exit:");
			scanf("%c", &prompt);
			getchar();
	
		if (prompt == '1'){
			toUpper();
		}
		else if (prompt == '2'){
			toLower();
		}
		else if (prompt == '3'){
			toCamel();
		}
		else
			break;
	}
	
	return 0;
}



