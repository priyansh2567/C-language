#include <stdio.h>
#include <stdlib.h>


struct vector{
int x;
int y;
};
void add(struct vector v1,struct vector v2,struct vector sum);


int main(){
struct vector v1 = {4 ,8};
  struct vector v2 = {2 ,3};
  struct vector sum = {0};

  add(v1,v2,sum);
}

void add(struct vector v1,struct vector v2,struct vector sum){
  sum.x = v1.x + v2.x;
  sum.y = v1.y + v2.y;

  printf("sum of x is %d\n",sum.x);
  printf("sum of y is %d\n",sum.y);
}
  
