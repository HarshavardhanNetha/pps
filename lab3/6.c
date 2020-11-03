//prime or not
#include <stdio.h>
int i,a,cnt=0;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);
  for(i=2;i<=a/2;i++){
    if(a%i==0){cnt=1;break;}
    }
  if(cnt==1)
    printf("%d is not prime.\n",a);
  else
    printf("%d is prime.\n",a);
}
