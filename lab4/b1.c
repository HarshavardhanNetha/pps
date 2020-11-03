//sum of 100 evens and odds
#include <stdio.h>
int i=1,odd_sum=0,even_sum=0,cnt=0;
void main(){
 while(cnt<=100){
  if(i%2==0) {even_sum+=i; cnt++;}
  else {odd_sum+=i;}
  i++;
}
printf("Odd Sum is %d \nEven Sum is %d\n",odd_sum,even_sum);
}
