#include <stdio.h>
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2){
        if(n>10)
           printf("An odd number greater than 10");
        else
           printf("An odd number lesser than 10");
    }
    else{
        if(n>10)
            printf("An even number greater than 10");
        else
            printf("An even number lessr than 10");
    }
}
