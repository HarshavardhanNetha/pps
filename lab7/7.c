#include <stdio.h>
#include <string.h>

void main(){
   int i;
  char a[10] = {'a','b','c','d'};
  char *aa;
  aa=&a;
  for(i=0;i<=strlen(a);i++){
    printf("%c",*aa);
    aa++;}
printf("\n");
}
