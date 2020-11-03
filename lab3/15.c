#include <stdio.h>
int a,b=1,i,c,j;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);
  c=a-1;
  while(a>0){
    for(i=1;i<=a;i++){printf(" ");}
    for(j=1;j<=b;j++){printf("* ");} 
	a--; b++; printf("\n"); 
  } b=1;
  while(c>0){
    for(i=1;i<=b;i++){printf(" ");}
    for(j=1;j<=c;j++){printf(" *");}  
    b++; c--; printf("\n");
  }
}

