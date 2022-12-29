#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("Input: \n");
    scanf("%d",&m);
    scanf("%d",&n);
    for(j=0;j<m;j++){
      for(i=0;i<n;i++){
        if(j==0||j==m-1||i==0||i==n-1){
          printf("*");
        }
        else{
            printf(" ");
        }
      }
      printf("\n");
    }
}
