#include<stdio.h>
void main(){
    int i,j,n;
    printf("insert dimension: \n");
    scanf("%d",&n);
    int a[n][n],b[n],k;
    b[0] = 0;

    printf("Insert Numbers: \n");

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
      }
    }

    for(i=0;i<n;i++){
      for(j=0;j<n;j++) {
        b[i]+=a[i][j];
        //k+=a[i][j];
      }
    }

    for(i=0;i<n;i++) {
        printf("sum of row %d:%d\n",i+1,b[i]);
        //printf("%d\n",k);
    }
}





