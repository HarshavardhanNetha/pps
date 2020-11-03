#include <stdio.h>
int a;
void main(){
printf("Enter any number:");
scanf("%d",&a);
if(a>0)
printf("%d is Positive\n",a);
else if(a<0)
printf("%d is Negative\n",a);
else if(a==0)
printf("%d is Zero\n",a);
else
printf("Please enter a Number\n");
}
