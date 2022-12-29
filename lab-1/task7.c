#include<stdio.h>
void main(){
    int num1,num2,substr;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        substr= num1-num2;
    }
    else{
        substr = num2-num1;
    }
    printf("Result: %d",substr);
}

