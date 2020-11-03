#include <stdio.h>
void main(){
  int a, i=1,esum = 0,osum = 0;
  printf("Enter any integer: ");
  scanf("%d",&a);
  for(i;i<=a;i++){
  if(i%2==0)
    esum+=i;
  else
    osum+=i;
  //printf("%d ",i);
  }
printf("Odd Sum: %d\nEven Sum: %d \n",osum,esum);
}
