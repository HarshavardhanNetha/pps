#include <stdio.h>
int a,b,c;
void main(){
printf("Please enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
a>b ? ( a>c ? printf("%d is greater\n",a) : printf("%d is greater\n",c)) : ( b>c ? printf("%d is greater\n",b) : printf("%d is greater\n",c));
}
