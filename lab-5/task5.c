#include <stdio.h>
int dca();
int main()
{
int r;
printf("Enter circle's radius: \n");
scanf("%d",&r);
dca(r);
return 0;
}
int dca(int x){
int diameter=2*x;
float circumference=2*3.1416*x;
float area=3.1416*x*x;
printf("Diameter=%d\nCircumference=%.2f\nArea=%.2f",diameter,
circumference,area);
return 0;
}
