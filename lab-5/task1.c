#include <stdio.h>
int sum(int a,int b){
int summation=a+b;
return summation;
}
int main()
{
int x,y;
printf("Enter two numbers to calculate the sum: \n");
scanf("%d%d",&x,&y);
printf("Sum=%d", sum(x,y));
return 0;
}
