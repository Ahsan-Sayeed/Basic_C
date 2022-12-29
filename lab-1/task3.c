#include<stdio.h>
#include<math.h>
void main(){
    float radius,circumference,area;
    printf("Insert radius of a circle: ");
    scanf("%f",&radius);
    circumference = 2*radius*M_PI;
    area = radius*radius*M_PI;
    printf(" circumference of the circle is: %.2f \n area of the circle is: %.2f",circumference,area);

}

