#include <stdio.h>
#include <string.h>

char a[100],b[100];
int p,i;

void res(char aa[100], char bb[100] , int pp){
int j=0;
  for(i=pp;i<=strlen(bb)+1;i++){
    aa[i]=bb[j];
    j++;
  }
  printf("%s\n",aa);
}

void main(){
  printf("Enter main string:");
  scanf("%s",&a);
  printf("Enter sub string:");
  scanf("%s",&b);
  printf("Position:");
  scanf("%d",&p);  
  res(a,b,p);
}
