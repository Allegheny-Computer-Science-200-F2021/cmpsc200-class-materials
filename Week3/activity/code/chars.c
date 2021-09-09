#include <stdio.h>
int getSize(char *str){
	int res = 0;
	while(str[res] != '\0')
		res += 1;
	return res;
}
void display(char *str, int size){
	printf("-----------------------------------\n");
	for (int i = 0; i < size; i++){
		if (str[i] != ' ' && str[i] != '\0')
			printf("%c\t", *(str+i));
		else
			printf("\n");
	}
	printf("\n-----------------------------------\n");
}
void reverse(char **str, int size){
	char reverse[size];
	for (int i = size-1; i >= 0; i--){
		reverse[(size-1)-i] = *(*str+i);
	}
	
	*str = reverse;
}

int main(){
	char *str = "Hello World!";
	printf("%s\n", str);
	int size = getSize(str);
	display(str, size);
	reverse(&str, size);
	display(str, size);
}