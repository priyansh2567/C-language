#include<stdio.h>
#include<string.h>

int main(){

   char str[100];
  fgets(str,100,stdin);
  char atr[100];
  fgets(atr,100,stdin);

for(int i=0 , j=0; str[i] != '\0' && atr[i] != '\0'; i++,j++){
  if(str[i] > atr[i]){
    printf("%c",str[i]);
  }
  else if(atr[i] > str[i]){
    printf("%c",atr[i]);
  }

}

  return 0;
}
