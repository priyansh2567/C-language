#include <stdio.h>
#include <stdlib.h>


struct student{
int roll_number ;
int addercard;
char name[100];
float marke;

};

int main(void) {
  printf("Hello World\n");

   // struct student s1;
  // s1.roll_number = 1;
  // s1.addercard = 1;
  // s1.marke = 1;
  // strcpy(s1.name,"priyansh");

   struct student s1 = {12,1246778,"priyansh",4.567};

  struct student *ptr = &s1;
  printf( "enter the roll number %d\n",(*ptr).roll_number);
  printf( "enter the addercard %d\n",(*ptr).addercard);

  printf("%s\n",ptr->name);
  printf("%f",ptr->marke);
  

  // printf("roll number is %d\n",s1.roll_number);
  // printf("addercard is %d\n",s1.addercard);
  // printf("marke is %f\n",s1.marke);
  // printf("name is %s\n",s1.name);
  
 
  
  return 0;
}