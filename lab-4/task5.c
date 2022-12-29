#include<stdio.h>
void main(){
    int a[10],i;
    printf("Insert Numbers: \n");
    for(i=0;i<10;i++){
      scanf("%d",&a[i]);
    }
    for(i=9;i>=0;i--){
      if(a[i]%2){
            printf("Last odd number: %d",a[i]);
        break;
      }
    }
}
