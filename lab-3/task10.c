#include<stdio.h>
void main(){
    int n,i,j;
    printf("Input: \n");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
      for(i=1;i<=2*n-1;i++){
        if(i<=n-j||i>=n+j)
         printf(" ");
        else
         printf("*");
      }
      printf("\n");
    }
}

