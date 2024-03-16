#include<stdio.h>
#include<string.h>

int main(){

   char str[100];
  fgets(str,100,stdin);
  char atr[100];
  fgets(atr,100,stdin);

    int comparison_result = strcmp(str, atr);

// for(int i=0 , j=0; str[i] != '\0' && atr[i] != '\0'; i++,j++){
  if(comparison_result == 1){
    puts(str);
  }
  else if(comparison_result == -1){
    puts(atr);
  }
  else{
    printf("%s%s",str[i],atr[i]);
  }



  return 0;
}
