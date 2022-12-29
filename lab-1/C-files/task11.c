#include<stdio.h>
void main(){
    float num1,num2,num3,num4,num5;
    float avg;
    printf("Enter five number: ");
    scanf("%f%f%f%f%f",&num1,&num2,&num3,&num4,&num5);
    avg = (num1+num2+num3+num4+num5)/5;
    printf("average: %.2f",avg);
}

