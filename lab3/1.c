#include <stdio.h>

void main(){
int a , b;
char ch;
printf("Please enter operation:");
scanf("%c",&ch);
printf("Please enter 2 numbers:");
scanf("%d%d",&a,&b);
switch (ch){
  case '+' : printf("%d\n",a+b); break;
  case '-' : printf("%d\n",a-b); break;
  case '*' : printf("%d\n",a*b); break;
  case '/' : printf("%d\n",a/b); break;
  default : printf("\n");
}
}
