#include <stdio.h>
void main(){
  char a[20];
  int i=0,diff;
  printf("Enter a string:");
  scanf("%s",a);
  diff='a'-'A';
  while(a[i]!='\0'){
  if(a[i]>='a' && a[i]<='z'){  a[i]=a[i]-diff; i++;  }
  else if(a[i]>='A' && a[i]<='Z') {a[i]=a[i]+diff; i++;}
  
  }
  printf("%s\n",a);
}
