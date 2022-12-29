#include<stdio.h>
#include <limits.h>
void main(){
    int a[5],i,largest=-INT_MAX,k=0,smallest=INT_MAX,l=0;
    printf("Insert Numbers: \n");
    for(i=0;i<5;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
      if(largest<a[i]){
        largest=a[i];
        k=i;
      }
      if(smallest>a[i]){
        smallest=a[i];
        l=i;
      }
    }
    printf("smallest number %d was found at location %d \n",smallest,l);
    printf("largest number %d was found at location %d",largest,k);
}
