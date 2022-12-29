#include<stdio.h>
void main(){
    int m,n,i,j,k=1;
    printf("Input: \n");
    scanf("%d",&m);
    scanf("%d",&n);
    for(j=0;j<m;j++){
      for(i=0;i<n;i++){
        if(j==0||j==m-1||i==0||i==n-1){
          printf("%d",k);
        }
        else{
            printf(" ");
        }
        k++;
      }
      printf("\n");
      k=1;
    }
}

