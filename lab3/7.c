//prime or not
#include <stdio.h>
int j,i,a,cnt=0;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);
for(j=2;j<=a;j++){
cnt=0;
  for(i=2;i<=j/2;i++){
    if(j%i==0){cnt=1;break;}
    } 
  if(cnt==0)
    printf("%d ",j);
}

printf("\n");}
