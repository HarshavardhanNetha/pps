#include <stdio.h>
void main(){
int b,i=1,x=1;
printf("Enter any number:");
scanf("%d",&b);
for(i=1;i<=b;i++){
if(i%2==0) x=0;
else x=1;
for(int j=1;j<=i;j++){
printf("%d",x);

}printf("\n");}}
