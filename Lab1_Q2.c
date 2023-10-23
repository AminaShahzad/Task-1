#include<stdio.h>
float height;
float width;
void main(){
printf("Enter height of rectangle:\n");
scanf("%f",&height);
printf("Enter width of rectangle:\n");
scanf("%f",&width);
printf("Area of rectangle is %.2f\nPrimeter of rectangle is %.2f",height*width,2*(height+width));

}
