#include <stdio.h>
void main(){
  int a=20;
  int *aa;
  aa=&a;
  *aa=30;
  printf("Value is %d\n",*aa);
 printf("Value is %d\n",a);
}
