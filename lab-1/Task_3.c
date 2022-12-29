#include<stdio.h>
void main(){
    float r,c,a;
    printf("Insert radius: ");
    scanf("%f",&r);
    c = 2*3.1416*r;
    a = 3.1416*r*r;
    printf(" circumference of the circle is: %.2f",c);
    printf("\n area of the circle is: %.2f",a);

}

