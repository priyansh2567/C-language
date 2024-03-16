#include <stdio.h>

int main(void) {
  char str[100];
  int i,x;
  fgets(str, 100, stdin);

  for(i =0; str[i] != '\0'; i++){
    if(str[i] == ' '){
    
      str[i] = '-';
    }
  }
  puts(str);
  
}