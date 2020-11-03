#include <stdio.h>
int n,i;
int fib(int a){
  if(a<=1)
    return 1;
  return fib(a-1)+fib(a-2);
}
void main(){
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    printf("%d ",fib(i));
printf("\n");
}
