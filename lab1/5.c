#include <stdio.h>
int a; char b;
void main(){
printf("Enter any char:");
scanf("%c",&b);
a= b;
//printf("%d",a);
if(a<65 || a>122){printf("Please enter only Alphabet\n");}
else if(a > 64 && a < 91){
printf("%c\n",a+32);
}
else{
printf("%c\n",a-32);
}
}
