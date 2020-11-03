#include <stdio.h>
void main(){
  char a[10],b[10];
  scanf("%s",a);
  int i=0;
  while(a[i]!='\0') i++;
  int j;
  for(i=i-1,j=0;i>=0;i--,j++){b[j]=a[i];}
  b[j]='\0';
  printf("%s\n",b);
}
