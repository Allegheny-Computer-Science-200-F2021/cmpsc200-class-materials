#include <stdbool.h> 
#include <stdio.h>
void printline(){
  for(int i =0; i < 50; i++){
    printf("-");
  }
  printf("\n");
}
void start(){
  int first = 0;
  int second = 0;
  printf("Did you complete Intro courses? (1 for yes; and 0 for no)\n");
  scanf("%d", &first);
  printf("Did you complete Core courses? (1 for yes; and 0 for no)\n");
  scanf("%d", &second);
  if (first && second){
    printf("get ready to take advanced courses...\n");
  }
  else if (first && !second){
    printf("get ready to take core courses...\n"); 
  }
  else if (!first && second){
    printf("you are a transfer student, get ready to take advanced courses...\n"); 
  }
  else if (!first){
    printf("get ready to take intro courses...\n"); 
  }
  
}
int main(){
  printf("Welcome to the course planning program\n");
  printline();
  start();

  return 0;
}