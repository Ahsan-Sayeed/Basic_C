#include<stdio.h>
void main(){
    int a[5],i,largest=0;
    printf("Insert Numbers: \n");
    for(i=0;i<5;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
      if(largest<a[i]){
        largest=a[i];
      }
    }
    printf("largest number is: %d",largest);
}

