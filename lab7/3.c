#include <stdio.h>
void main(){
  int a=20;
  int *aa;
  int **aaa;
  aa=&a;
  aaa=&aa;

  printf("Value %d\n",a);
  printf("Value %d\n",*aa);
  printf("Value %d\n",**aaa);
}
