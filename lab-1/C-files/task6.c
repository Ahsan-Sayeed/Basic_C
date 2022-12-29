#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2){
        printf("first is greater");
    }
    else if(num1<num2){
        printf("second is greater");
    }
    else{
        printf("the numbers are equal");
    }
}

