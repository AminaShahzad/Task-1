#include<stdio.h>
int dec,rem,ans=1,c=0;
 int myFunction(dec){
    if(dec>1 && dec%2 == 0){
        rem =0;
    }
    else{
        rem =1;
    }
    ans = ans*10+rem;
    dec=dec/2;
    if (dec==1){
        rem= 01;

        ans = ans*10+ rem;

        while(ans!=1){
        int digit =ans%10;

        printf("%d",digit);
        ans /=10;
    }}
    else{
        myFunction(dec);

    }

 }
int main(){
    printf("Enter a decimal number:\n");
    scanf("%d",&dec);

    myFunction(dec);

    return 0;
}
