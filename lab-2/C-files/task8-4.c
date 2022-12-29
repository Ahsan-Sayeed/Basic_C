#include<stdio.h>
void main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2&&n%5){
        printf("%d",n);
    }
}
