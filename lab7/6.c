#include <stdio.h>
void main(){
  int a=30;
  int *aa;
  aa=&a;
  aa=NULL;
  printf("%d\n",aa);
  printf("%d\n",*aa);
}
