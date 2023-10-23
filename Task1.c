#include<stdio.h>
int main(){
int a,b;
printf("Enter a number:\n");
scanf("%d",&a);
printf("Enter second number:\n");
scanf("%d",&b);
if (a>5 && b>5){
int c=a+b;
printf("Sum of numbers is %d",c);
}else if (a>5 || b>5){
int c = a*b;
printf("Product of numbers is %d",c);
}
else if(a<5 && b<5){
printf("Your numbers are modified to %d and %d",a+1,b+1);}
else{
    printf("Hello world");

}
return 0;
}
