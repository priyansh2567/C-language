#include <stdio.h>
#include <stdlib.h>


struct student{
int roll_number ;
int addercard;
char name[100];
float marke;
};
void st(struct student s1);

int main(){
struct student s1[3];
  
  printf("enter the roll number of student");
  scanf("%d",&s1[0].roll_number);
  scanf("%d",&s1[0].addercard);
  scanf("%f",&s1[0].marke);
  scanf("%s",s1[0].name);
  printf("enter the roll number of student");
  scanf("%d",&s1[1].roll_number);
  scanf("%d",&s1[1].addercard);
  scanf("%f",&s1[1].marke);
  scanf("%s",s1[1].name);
  printf("enter the roll number of student");
  scanf("%d",&s1[2].roll_number);
  scanf("%d",&s1[2].addercard);
  scanf("%f",&s1[2].marke);
  scanf("%s",s1[2].name);



  
  st(s1[0]);
  st(s1[1]);
  st(s1[2]);
}

void st(struct student s1){
  printf("the roll number of student is %d\n",s1.roll_number);
  printf("the addercard of student is %d\n",s1.addercard);
  printf("the name of student is %s\n",s1.name);
  printf("the marke of student is %f\n",s1.marke);
}
  
