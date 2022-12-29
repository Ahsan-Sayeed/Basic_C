#include<stdio.h>
void main(){
    int n,i,j,k=1;
    printf("Input: \n");
    scanf("%d",&n);
    for(j=1;j<=n;j++){
      for(i=1;i<=2*n-1;i++){
        if(i<=n-j||i>=n+j)
         printf(" ");
        else{
         printf("%d",k);
         k++;
        }
      }
      printf("\n");
      k=1;
    }

    for(j=1;j<n;j++){
      for(i=2*n-1;i>=1;i--){
        if(i>=n+(n-j)||i<=n-(n-j))
          printf(" ");
        else{
          printf("%d",k);
          k++;
        }
      }
      printf("\n");
      k=1;
    }

}



