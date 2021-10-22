#include <stdio.h>
#include <stdlib.h>
struct student{
  int studentID;
  char *studentName; // string, ascii translation, tolower and toupper.
  float studentGPA;
};
int main() {
  struct student s1; // regular variable (.) to reference the members
  s1.studentID = 1001;
  s1.studentName = "Maya";
  s1.studentGPA = 3.95;

  struct student s2;
  s2.studentID = 1002;
  s2.studentName = "Gary";
  s2.studentGPA = 3.94;

  print("%d\t%s\t%f\n", s1.studentID, s1.studentName, s1.studentGPA);
  print("%d\t%s\t%f\n", s2.studentID, s2.studentName, s2.studentGPA);

  
  return 0;
}