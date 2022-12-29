#include<stdio.h>
void main(){
    int a,b,minus;
    printf("Insert numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        minus= a-b;
    }
    else{
        minus = b-a;
    }
    printf("Result: %d",minus);
}

