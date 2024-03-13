#include<stdio.h>
#include<math.h>
 void fun(int a, int c,int d);

  int main(){
    int a ;
    int c,d;
    printf("enter the value of a ");
    scanf("%d",&a);
    printf("enter the value of d ");
    scanf("%d",&d);

    fun(a,c,d);


  }
   void fun(int a, int c,int d){
    c = sqrt(a);
    d = pow(d,c);
printf("%d\n",d);
    printf("%d",c);


   }