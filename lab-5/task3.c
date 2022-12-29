#include <stdio.h>
void max_min_finder(int x,int y){
if(x>y){
printf("%d is maximum\n %d is minimum",x,y);
}
else if(x<y){
printf("%d is maximum\n%d is minimum",y,x);
}
else{
printf("Both Numbers are equal");
}
}

int main(){
int a,b;
printf("Enter your two numbers: \n");
scanf("%d%d",&a,&b);
max_min_finder(a,b);
return 0;
}
