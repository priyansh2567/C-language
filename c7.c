#include<stdio.h>

int main(){
int a[] = {1,3,4,5,8,6,3,6,3,6,3,6,7,3};
int x;
scanf("%d",&x);
int count = 0;
for(int i = 0 ; i <= 12; i++){
    if(a[i] == x ){
        count++;
    }
}
  printf("%d",count);

return 0;
}
