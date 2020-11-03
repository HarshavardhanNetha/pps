//polindrome
#include <stdio.h>
int a,b,rem,r=0;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);	
  b = a;
  while(a>0){
    rem = a%10;
    r = r * 10 + rem; a/=10;}
if(r == b)
printf("%d is a polindrome.\n",b);
else
printf("%d is a not polindrome.\n",b);

}
