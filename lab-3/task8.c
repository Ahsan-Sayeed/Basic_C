#include<stdio.h>
void main(){
    int n,i,j;
    printf("Input: \n");
    scanf("%d",&n);
    for(j=0;j<n;j++){
      for(i=0;i<n;i++){
        if(i>n-(j+2))
            printf("%d",i+1);
        else
            printf(" ");
      }
      printf("\n");
    }
}

