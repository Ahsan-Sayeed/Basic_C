#include <stdio.h>
void main() {
    int n;
    for(int i=0;i<10;i++){
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
