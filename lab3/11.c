//perfect number
#include <stdio.h>
int a,b,sum,i;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);
  //b=a;
for(b=1;b<=a;b++){
  sum=0;
  for(i=1;i<=b/2;i++){
    if(b%i==0){sum+=i;}
  }
  if(sum==b){printf("%d ",b);}
}
printf("\n");
}
