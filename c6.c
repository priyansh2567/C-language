#include<stdio.h>

void pg(int *a, int *b);

int main() {
  int a = 5;
  int b = 6;

  printf("%d%d", a, b);
  pg(&a, &b);
  

  return 0;
}

void pg(int *a, int *b) {
  if (*a > *b) {
    printf("a is greater than b");
  } else if (*b > *a) {
    printf("b is greater than a");
  } else {
    printf("a and b are equal");
  }
}