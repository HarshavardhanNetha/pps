#include <stdio.h>
#include <string.h>
int rem=0,rev=0;
int rev_num(int a){
  if(a!='\0'){
    rem=a%10;
    rev=rev*10+rem;
    return rev_num(a/10);
  }
  else return rev;
} int x,res;

void main(){
  printf("Enter a number:");
  scanf("%d",&x);
  res= rev_num(x);
  printf("%d\n",res);
}
