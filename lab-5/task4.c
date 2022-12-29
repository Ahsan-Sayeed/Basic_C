#include <stdio.h>
int i;
int sum(int a[])
{
int summ=0;
for(i=0;i<7;i++){
summ=summ+a[i];
}
float average=summ/7;
printf("Sum=%d\nAverage=%.2f",summ, average);
return 0;
}
int main()
{
int a;
int x[]={10,15,7,25,11,13,12};
sum(x);
return 0;
}
