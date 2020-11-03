//print first 100 prime numbers
#include <stdio.h>
int j,cnt=0,pcnt=0,i=2;
void main(){
  while(pcnt<=100){
    cnt=0;
    for(j==2;j<=i/2;j++){
      if(i%j==0){cnt=1;break;}
      }
	if(cnt==0){printf("%d ",i); pcnt++;}
  i++;}
}
