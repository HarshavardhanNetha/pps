#include <stdio.h>
#include <string.h>

void main(){
   int i,j,k,vow=0,con=0;
  char v[] = {'a','e','i','o','u'};
  char c[]={'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
  char x[] = {"hello"};
  char *aa;
  aa=x;
  for(i=1;i<=strlen(x);i++,aa++){
    for(j=0;j<=strlen(v);j++)
	if(*aa==v[j]){vow++;break;}
    for(k=0;k<=strlen(c);k++)
	if(*aa==c[k]){con++;break;}
    }
printf("%d %d\n",vow,con);
}

