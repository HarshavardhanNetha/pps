#include <stdio.h>
int fact(int a){
  int i,fact=1;
  for(i=1;i<=a;i++){
    fact*=i;
    } return fact;
}
int b;
void main(){
  printf("Enter a number:");
  scanf("%d",&b);
  b=fact(b);
  printf("%d\n",b);
}
