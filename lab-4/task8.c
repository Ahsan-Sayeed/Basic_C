#include<stdio.h>
void main(){
    int a[5],i,largest=0,k=0;
    printf("Insert Numbers: \n");
    for(i=0;i<5;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
      if(largest<a[i]){
        largest=a[i];
        k=i;
      }
    }
    printf("largest number %d was found at location %d",largest,k);
}
