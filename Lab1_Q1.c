#include<stdio.h>
void main(){
int ID;
int WH;
float salary;
printf("Enter your Id:\n");
scanf("%d",&ID);
printf("Enter your working hours in a month:\n");
scanf("%d",&WH);
printf("Enter amount per hour u get:\n");
scanf("%f",&salary);
printf("Your Id is %d\nYour working hrs is %d\nyour salary per hr is %.2f",ID,WH,salary);
}
