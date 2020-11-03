#include <stdio.h>
int a;
float hra,da;
void main(){
printf("Enter base Salary:");
scanf("%d",&a);
if(a<20000){
hra = 0.15 * a;
da = 0.7 * a;
printf("Gross Salary : %2f\n",a+hra+da);
}
else
{
hra = 0.2 * a;
da = 0.8 * a;
printf("Gross Salary : %2f\n",a+hra+da);
}
}
