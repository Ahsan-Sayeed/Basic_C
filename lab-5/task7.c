#include<stdio.h>
int main(){
char a[25];
int i;
printf("Enter the string between 24 character: ");
gets(a);
for(i=0;i<=25;i++){
if(a[i]>=65 && a[i]<=90)
a[i]=a[i]+32;
}
printf("\nLower Case String is: %s",a);
return 0;
}
