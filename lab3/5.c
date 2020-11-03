//multiplication table
#include <stdio.h>
int i,a;
void main(){
  printf("Enter any number:");
  scanf("%d",&a);
  for(i=1;i<=10;i++){
    printf("%d X %d = %d\n",a,i,a*i);}
}
