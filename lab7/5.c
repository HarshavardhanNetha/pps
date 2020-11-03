#include <stdio.h>
void main(){
  int a=20,b=40;
  int *aa,*bb;
  aa=&a;
  bb=&b;
  printf("Value is %d\n",*aa);
  printf("Value is %d\n",*bb);

  aa=&b;
  bb=&a;
  printf("Value is %d\n",*aa);
  printf("Value is %d\n",*bb);

}
