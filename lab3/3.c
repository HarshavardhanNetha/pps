#include <stdio.h>
void main(){
  int a, i=1,sum = 0;
  printf("Enter any integer: ");
  scanf("%d",&a);
  for(i;i<=a;i++){
  sum+=i;
  //printf("%d ",i);
  }
printf("Sum: %d\n",sum);
}
