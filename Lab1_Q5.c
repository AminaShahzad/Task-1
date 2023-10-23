#include<stdio.h>
myfunction(a,b,n){
    int c= a+b;
    a=b;
    b=c;
    printf("%d,",c);
    n=n-1;
    if (n!=1){
        myfunction(a,b,n);
    }
}
void main(){
int a =0;
int b =1;
int n;
printf("Enter nth number:\n");
scanf("%d",&n);
printf("0,1,");
myfunction(a,b,n);

}
