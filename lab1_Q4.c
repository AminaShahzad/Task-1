#include<stdio.h>

int converter(dec){
    static res[32];
    static  i =0;
    while(1){

    res[i]=dec%2;
    if(dec ==1){
            for(int j =i;j>=0;j--){
                printf("%d",res[j]);
            }
        return res;
    }
    dec=((dec/2));
    i++;}

}
int main(){
    int dec,len;
printf("enter number:");
scanf("%d",&dec);
converter(dec);
return 0;

}
