#include <stdio.h>
void replace(char **str){
	char *replace = "Greetings";
	*str = replace;
}
int main(){
	char *str = "Hello";
	printf("%s\n", str);
	replace(&str);
	printf("%s\n", str);
	return 0;
}