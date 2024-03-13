#include<stdio.h>

void pg(int *i);

int main() {
  int i;
  pg(&i);


  

  

  return 0;
}

void pg(int *i) {
  for(*i = 'A' ; *i <= 'Z' ; (*i)++) {
    printf("%c", *i);
  }

}