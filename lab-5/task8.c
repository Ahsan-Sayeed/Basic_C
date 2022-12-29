#include <stdio.h>
void even_odd_checker(int number){
if(number%2==0){
printf("Even");
}
else{
printf("odd");
}
}
int main()
{
int i;
int a;
printf("\nEnter your number: \n");
scanf("%d",&a);
even_odd_checker(a);
return 0;
}
