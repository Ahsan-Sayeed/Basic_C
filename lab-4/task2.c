#include<stdio.h>
void main(){
    int a[10],i;
    printf("Insert Numbers: \n");
    for(i=0;i<10;i++){
      scanf("%d",&a[i]);
    }
    printf("Index number: ");
    scanf("%d",&i);
    printf("%d",a[i]);
}

