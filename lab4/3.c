//roots
#include<stdio.h>
#include <math.h>
int a,b,c,d;
float x1,x2,y,x3,x4;
void main(){
  printf("Enter coefficients of x^2 , x and constant term: ");
  scanf("%d%d%d",&a,&b,&c);
  d=(b*b) - (4*a*c);
 // printf("%d",d);
  y=sqrt(d);
 // printf("%.2f",y);
  if(d>=0){
  x3 = -b + y;
  x4 = -b - y;
  x1 = (float)x3/(2*a);
  x2 = (float)x4/(2*a);
printf("Roots are %.2f %.2f\n",x1,x2);
}}
