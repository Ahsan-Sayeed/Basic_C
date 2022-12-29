#include <stdio.h>
void main() {
    int n;
    printf("Insert how many input you want to make: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m;
        printf("\n Enter a number: ");
        scanf("%d",&m);
        if(m%2)
            printf("The number is odd\n");
        else
            printf("The number is even\n");
    }
}
