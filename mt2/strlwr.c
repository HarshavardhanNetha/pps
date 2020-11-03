#include <stdio.h>
void main(){
  char a[20];
  int i=0,diff;
  printf("Enter a string in UPPERCASE:");
  scanf("%s",a);
  diff='a'-'A';
  while(a[i]!='\0'){
    a[i]=a[i]+diff; i++;
  }
  printf("%s\n",a);
}
