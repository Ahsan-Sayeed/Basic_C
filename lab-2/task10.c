#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>=90)
        printf("A");
    else if(n>=80&&n<=89)
        printf("B");
    else if(n>=70&&n<=79)
        printf("C");
    else if(n>=60&&n<=69)
        printf("D");
    else if(n>=50&&n<=59)
        printf("E");
    else
        printf("F");
}
