#include <stdio.h>
int a,b,x;
void main(){
printf("Enter Current Year:");
scanf("%d",&a);
printf("Enter Joining Year:");
scanf("%d",&b);
x= (a - b) /3;
printf("Total Salary he incurred is %d\n",30000+(x*50000));
}
