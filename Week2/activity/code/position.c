#include <stdio.h>
int main(){
	int c, position;
	c = getchar(); /* read in a character, e.g, ‘A’ */
	printf("char = '%c', ASCII value = %d\n",c,c);
	position = c - 'A';
	printf("position in alphabet: %d\n",position);	
	return 0;
}
