#include <stdio.h>
void main() {
    int n,m;
    printf("How many input you want to make: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        if(i==0)
            printf("Enter %dst integer: ",i+1);
        else if(i==1)
            printf("Enter %dnd integer: ",i+1);
        else if(i==2)
            printf("Enter %drd integer: ",i+1);
        else
            printf("Enter %dth integer: ",i+1);
        scanf("%d",&n);
        printf("Inserted value is: %d\n",n);
    }
}
