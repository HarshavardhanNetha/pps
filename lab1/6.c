#include <stdio.h>
int a,i=0,b,j=10,x;
void main(){
printf("Enter a number:");
scanf("%d",&a);
b=a;
while(i<=10){ 
  printf("%d * 2 ^ %d = %d\n",a,i,b);
  b=b<<1;
  i++;
}
printf("\n");
i=0;
b=b>>1;
x=b;
while(j>0){
  printf("%d / %d^%d = %d\n",x,a,i,b);
  b=b>>1;
  i++;
  j--;
}}
