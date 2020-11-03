#include <stdio.h>
void main(){
  int a=20;
  int *aa;
  aa = &a;
 // pf("%x",&a);

  printf("Value of a is %d\n",*aa);
  printf("Value of a is %x\n",aa);     
}
