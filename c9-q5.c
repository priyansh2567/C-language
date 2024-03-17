#include <stdio.h>
#include <stdlib.h>


struct vector{
int math ;
int phy;
int chem;
int pr;

};

void CGP(struct vector );


int main(){
  struct vector v1[100];
  
  printf("enter the value of subject heir");
  scanf( "%d", &v1[0].math);
  scanf( " %d", &v1[0].phy);
  scanf( " %d", &v1[0].chem);
  scanf( " %d ", &v1[0].pr);
  
  printf("enter the value of subject heir2");
  scanf( " %d", &v1[1].math);
  scanf( " %d", &v1[1].phy);
  scanf( "  %d", &v1[1].chem);
  scanf( "  %d ", &v1[1].pr);
  
  printf("enter the value of subject heir3");
  scanf( " %d", &v1[2].math);
  scanf( " %d", &v1[2].phy);
  scanf( "  %d", &v1[2].chem);
  scanf( "  %d ", &v1[2].pr);
  
  printf("enter the value of subject heir4");
  scanf( " %d", &v1[3].math);
  scanf( " %d", &v1[3].phy);
  scanf( "  %d", &v1[3].chem);
  scanf( "  %d ", &v1[3].pr);

  CGP(v1[0]);
  
  CGP(v1[1]);
  
  CGP(v1[2]);
  
  CGP(v1[3]);
  return 0;

}

void CGP(struct vector v1){
  printf( "math %d\n", v1.math);
  printf( "phycies %d\n", v1.phy);
  printf( " chemistry %d\n", v1.chem);
  printf( " programing %d \n", v1.pr);
  printf( "CGP %d\n",(v1.math + v1.phy + v1.chem + v1.pr)/4);

  
}

  