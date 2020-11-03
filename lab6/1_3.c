#include <stdio.h>
int a,b;
void swap(int a,int b){
  b=a+b-(a=b);
}
void main(){
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("%d %d\n",a,b);
}
