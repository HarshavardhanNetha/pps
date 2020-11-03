#include <stdio.h>
int a,b;
int *aa,*bb;
void swap(int a,int b){
  *aa=b;
  *bb=a;
}

void main(){

  scanf("%d%d",&a,&b);
  *aa=&a, *bb=&b;
  swap(a,b);
printf("%d%d",aa,bb);
}
