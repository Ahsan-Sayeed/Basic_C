#include<stdio.h>
void main(){
    int m,n,i,j;
    printf("Input: \n");
    scanf("%d",&m);
    scanf("%d",&n);
    for(j=0;j<m;j++){
      for(i=0;i<n;i++){
        printf("%d",i+1);
      }
      printf("\n");
    }
}
