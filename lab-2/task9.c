#include<stdio.h>
void main(){
    int n;
    printf("Enter a mark:");
    scanf("%d",&n);
    if(n>50){
        printf("pass");
    }
    else{
        printf("You shall not pass");
    }
}
