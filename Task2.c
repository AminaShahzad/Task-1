#include<stdio.h>
int a,n=1;
 int myFunction(a,n){

 printf("%dx%d=%d\n",a,n,a*n);
 n=n+1;
 if(n!=11){
 myFunction(a,n);
 }else{
 return 0;}}



int main (){
printf("Enter a number:\n");
scanf("%d",&a);
if(a>0){
myFunction(a,n);
}else{
printf("You have entered negative number or 0");}
return 0;
}
