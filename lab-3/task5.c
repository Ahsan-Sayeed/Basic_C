#include<stdio.h>
void main(){
    int n,i,j;
    printf("Input: \n");
    scanf("%d",&n);
    for(j=0;j<n;j++){
      for(i=0;i<j+1;i++){
        printf("*");
      }
      printf("\n");
    }
}
