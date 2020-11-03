#include <stdio.h>
#include <string.h>

void res(char aa[100],int bb,int cc){
  char rr[100]; int i,k,j;
  for(i=0;i<=cc;i++){
    rr[i]=aa[i];
  }
  j=i-1;
  for(k=i+bb-1;k<=strlen(aa);k++){
    rr[j]=aa[k];
    j++;
}
  printf("%s\n",rr);
}

char a[100];
int b,c;

void main(){
  printf("Enter any string:");
  scanf("%s",a);
  printf("How many would u like to delete:");
  scanf("%d",&b);
  printf("From where to start:");
  scanf("%d",&c);
  res(a,b,c);
}
