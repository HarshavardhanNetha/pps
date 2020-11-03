#include <stdio.h>
int a,b;
float x;
void main(){
printf("Enter any 2 numbers:");
scanf("%d%d",&a,&b);
x=(float)a/b*100.0;
//printf("%f",x);
printf("%2f is percentage of %d in %d.\n",x,a,b);
}
