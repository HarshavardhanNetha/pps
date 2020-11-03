#include <stdio.h>
int a,b;
void main(){
printf("Enter any two numbers:");
scanf("%d%d",&a,&b);
if(a<b)
printf("UP\n");
else if(a>b)
printf("LOWER\n");
else if(a==b)
printf("EQUAL\n");
}
