#include <stdio.h>
double gpa_cal(float a[]){
double sum=0,avg;
int i;
for(i=0;i<6;i++){
sum=sum+a[i];}
avg=sum/6;
return avg;
}
int main(){
float a[6],b[6];
int i;
float GPA;
for(i=0;i<6;i++){
printf("Enter your Subject-%d valid Marks: ",i+1);
scanf("%f",&a[i]);
}
for(i=0;i<6;i++){
if(a[i]<=100 && a[i]>=80){
b[i]=4.00;
}
if(a[i]<=79 && a[i]>=75){
b[i]=3.75;
}
if(a[i]<74 && a[i]>=70){
b[i]=3.50;
}
if(a[i]<=69 && a[i]>=65){
b[i]=3.25;
}
if(a[i]<=64 && a[i]>=60){
b[i]=3.00;
}
if(a[i]<=59 && a[i]>=55){
b[i]=2.75;
}
if(a[i]<=54 && a[i]>=50){
b[i]=2.50;
}
if(a[i]<=49 && a[i]>=45){
b[i]=2.25;
}
if(a[i]<=44 && a[i]>=40){
b[i]=2.00;
}
if(a[i]<40){
b[i]=0.00;
}
}
GPA=gpa_cal(b);
printf("Your first semester GPA is %.2f",GPA);
return 0;
}
