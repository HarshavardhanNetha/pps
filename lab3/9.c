//polindromes in range
#include <stdio.h>
int a,b,rem,r=0,i;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);

for(i=1;i<=a;i++){
  b = i;
  r = 0;
  while(b>0){
    rem = b%10;     
    b/=10;
    r = r * 10 + rem;}
if(r == i){
printf("%d ",i);}
}
printf("\n");
}
