#include <stdio.h>
#include <stdlib.h>


struct student{
int roll_number ;
int addercard;
char name[100];
float marke;

};
void student(struct student s);

int main(void) {
  struct student s = {1,2,"rahul",90.5};
  student(s);
  
 
  
  return 0;
}

void student(struct student s){
  printf( "enter the roll number of student");
  printf("%d\n",s.roll_number);
  printf("%d\n",s.addercard);
  printf("%s\n",s.name);
  printf("%f\n",s.marke);

  
}