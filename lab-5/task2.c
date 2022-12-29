#include <stdio.h>
float pi_change(float x){
float pi=3.1416;
x=pi;
return x;
}
int main(){
double Pi=3.14;
Pi=pi_change(Pi);
printf("%.4f",Pi);
return 0;
}
