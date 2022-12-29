#include<stdio.h>
void main(){
    int n,i,j,k=1;
    printf("Input: \n");
    scanf("%d",&n);
    for(j=0;j<n;j++){
      for(i=0;i<n;i++){
        if(i>n-(j+2)){
            printf("%d",k);
            k++;
        }
        else
            printf(" ");
      }
      printf("\n");
      k=1;
    }
}


