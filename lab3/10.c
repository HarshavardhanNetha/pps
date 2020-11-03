//perfect number
#include <stdio.h>
int a,b,sum,i;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);
  //b=a;
  for(i=1;i<=a/2;i++){
    if(a%i==0){sum+=i;}
  }
  if(sum==a){printf("%d is a perfect number.\n",a);}
  else
	printf("%d is not a perfect number.\n",a);
}
