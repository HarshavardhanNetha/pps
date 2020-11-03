#include <stdio.h>
void main(){
  int a=20;
  char b='A';
  float c=10.99;
  double d=12345;

  int *aa;
  aa=&a;
  float *cc;
  cc=&c;
  char *bb;
  bb=&b;
  double *dd;
  dd=&d;
  long *ll;
  short *ss;
  long double *ld; 

printf("Integer %d\n",sizeof(aa));
printf("Character %d\n",sizeof(bb));

printf("Float %d\n",sizeof(cc));

printf("Double %d\n",sizeof(dd));

printf("Long %d\n",sizeof(ll));


printf("Short %d\n",sizeof(ss));

printf("Long Double %d\n",sizeof(ld));


}
