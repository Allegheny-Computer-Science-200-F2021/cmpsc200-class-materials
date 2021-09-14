#include <stdio.h>
#define STRLEN 20
void palindrome(char word[]){
	int i, j = 0, flag = 1;
	while(word[i] != '\0'){
		i++;
	}
	while(j < i/2 && flag == 1){
		j++;
	}
	
}
int main(){
	char word[STRLEN];
	//Prompts the user for a string input and compute if the given word is a Palindrome!
	printf("Enter the word to check Palindrome: ");
	scanf("%s", &word[0]);
	palindrome(word);
  return 0;
}
