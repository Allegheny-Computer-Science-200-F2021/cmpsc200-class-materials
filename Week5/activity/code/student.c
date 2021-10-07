#include <stdio.h>
#include <stdlib.h>
struct student{
  int studentID;
  char *studentName;
  float studentGPA;
};
int getSize(char *file){
   int students_size = 0;
   int c = 0;
   FILE *fp = fopen(file, "rb"); // rb is for read mode for file reading
   int nameIndex = 0;
   while ((c=fgetc(fp)) != EOF) { // fgetc is for getting characters from file directly than std stream. 
        // develop your logic here to build each phone number && add it to the array.
      // refer to how we read integers && build integers from characters in ascii.c in week2/code folder. 
    if (c == '\n') {
      students_size++;
    }
   }
   return students_size;
}
void load(char *file, struct student* *student){
  // load all the phone numbers from the file into the array arr. 
  int c = 0;
  FILE *fp = fopen(file, "rb"); // rb is for read mode for file reading
  int studentID = 0;
  char *studentName = malloc(20*sizeof(char));
  int nameIndex = 0, studentIndex = 0;
  while ((c=fgetc(fp)) != EOF) { // fgetc is for getting characters from file directly than std stream. 
        // develop your logic here to build each phone number && add it to the array.
      // refer to how we read integers && build integers from characters in ascii.c in week2/code folder. 
    if (c != ' ' && (c >= '0' && c <= '9')){
      int digit = c - '0';
      studentID = 10*studentID + digit;
    } 
    else if (c != ' ' && ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'z'))){
        printf("%c\n", c);
        student[studentIndex]->studentID = studentID;
        studentID = 0;
        //studentName = realloc(studentName, nameIndex+1);
        *(studentName + nameIndex) = c;
        printf("%c\n", c);
        nameIndex++;
    }
    else {
      
      *(studentName + nameIndex) = 0;  
      nameIndex = 0;
      student[studentIndex]->studentName = studentName;
      
      studentIndex++;    
    }

  }
    
}
int main() {
  char *file = "data.txt";
  struct student* s;
  int size = getSize(file);
  s = (struct student*)
        malloc(size*sizeof(struct student));
  load(file, &s);
  for (int i = 0; i < size; i++){
    printf("%d\t%s\t%f\n", s[i].studentID, s[i].studentName, s[i].studentGPA);
  }
  return 0;
}