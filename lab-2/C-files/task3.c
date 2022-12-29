#include <stdio.h>
void main() {
    int n,m,sum;
    float avg;
    printf("How many input you want to make: ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        sum += n;
    }
    avg = (float) sum/m;
    printf("Summation is: %d and Average value is: %.2f",sum,avg);
}
