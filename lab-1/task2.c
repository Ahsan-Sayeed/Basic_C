#include<stdio.h>
void main(){
    int num1,num2,sum,mul,substr;
    printf("Enter two number:");
    scanf("%d%d",&num1,&num2);
    sum = num1+num2;
    mul = num1*num2;
    substr = num1-num2;
    printf(" sum of the numbers: %d \n product of the numbers: %d \n difference of the numbers: %d",sum,mul,substr);

}

