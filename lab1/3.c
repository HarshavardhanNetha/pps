#include <stdio.h>
int a,b,c;
void main(){
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d  %d\n",a,b);
}
