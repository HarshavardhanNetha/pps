#include <stdio.h>

int fact(int n){

  if(n==1)
    return 1;
  return n*fact(n-1);
  
}
int num,res;
void main(){
  printf("Enter a number:");
  scanf("%d",&num);
  res=fact(num);
  printf("%d\n",res);
}
