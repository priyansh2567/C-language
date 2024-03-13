#include<stdio.h>
#include<math.h>

int main(){
    int n,a,b,c;
printf("enter the number of element of number");
scanf("%d",&n);
printf("enter the first elent of number");
scanf("%d",&a);
printf("enter the second elent of number");
scanf("%d",&b);
printf("enter the theird elent of number");
scanf("%d",&c);

int num1 = pow(a,n);
int num2 = pow(b,n);
int num3 = pow(c,n);
int add =num1 + num2 +num3;

if(add == a*100 +b*10+c*1){
    printf("givien number is anstorm number %d",add);
}
else{
 printf("givien value is not anstorm");
}




return 0;

}
    