#include <stdio.h>
#define STRLEN 20
void palindrome(char word[]){
	// The following line is provided so we can see how the word can be Printed. 
	//printf("The word is %s\n", word);
	// Do the computation here ....
}
int main(){
	char word[STRLEN];
	//Prompts the user for a string input and compute if the given word is a Palindrome!
	printf("Enter the word to check Palindrome: ");
	scanf("%s", &word[0]);
	palindrome(word);
  return 0;
}
