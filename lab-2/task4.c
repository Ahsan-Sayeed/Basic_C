#include <stdio.h>
void main() {
    float n,m,sub;
    printf("Insert two numbers: ");
    scanf("%f%f",&n,&m);
    if(n>m)
        sub = n-m;
    else
        sub = m-n;

    printf("Result:%.2f",sub);
}
