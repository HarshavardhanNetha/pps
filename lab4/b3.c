//number of units , hundreds, tens
#include <stdio.h>
int a,u,t,h;
void main(){
  printf("Enter any 3 digit number:");
  scanf("%d",&a);
  u=a%10; a/=10; t=a%10; a/=10;h=a%10;
printf("%d Units %d Tens %d Hundreds\n",u,t,h);
}
