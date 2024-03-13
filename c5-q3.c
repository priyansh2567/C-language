#include<stdio.h>

void temp(int a);

int main(){
    int a;
    printf("enter the value of a");
    scanf("%d",&a);



temp(a);

  return 0;
}
 void temp(int a){
if (a <= 0){
    printf("low");

}
else if (a >= 30 &&  a <= 50){
    printf("high");
}
else{
    printf(" v high");
}

 }