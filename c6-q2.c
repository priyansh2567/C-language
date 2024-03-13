#include<stdio.h>

void pg(int *a, int *b);

int main() {
  int a = 5;
  int b = 1;
   printf("%d%d",a,b);
   // printf("%d%d",b,a);
  pg(&a,&b);
  printf("%d%d",a,b);

  

  

  return 0;
}

void pg(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
  // *b = *a;
  
}