#include<stdio.h>
void main(){
    int num[3],i,sum = 0;
    printf("Insert Numbers: \n");
    for(i=0;i<3;i++){
      scanf("%d",&num[i]);
      sum+=num[i];
    }
    printf("sum: %d\n",sum);

    for(i=0;i<3;i++){
        printf("%d\n",num[i]);
    }
}
