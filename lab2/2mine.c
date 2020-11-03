#include <stdio.h>
int a,x;
char b;
void main(){
printf("Enter any number:");
scanf("%d",&a);
//b=("%c",a);
//x=("%d",b);
printf("%d\n",(char)a);

if(a>0)
printf("%d is Positive\n",a);
else if(a<0)
printf("%d is Negative\n",a);
else if(a==0){
b=(char)a;
printf("%c\n",b);
x=("%d",b);
if("%d== 48 ",x){
printf("%d is Zero\n",a);}
else
printf("Please enter a Number\n");
}
else
printf("Please enter a Number\n");
}
