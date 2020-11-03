#include <stdio.h>
int a,b,c;
void main(){
printf("Enter quantity of Product:");
scanf("%d",&a);
printf("Enter the price of individual item:");
scanf("%d",&b);
printf("Rguktian..? (Press 0 if No or 1 if Yes):");
scanf("%d",&c);
if(a*b<5000){
printf("Total Amount : %d\n",a*b);}

else if(a*b>5000 && a*b<8000){
if(c==0)
printf("Total Amount : %2f - Discount = 10\n",a*b*0.9);
else
printf("Total Amount : %2f - Discount = 40\n",a*b*0.6);
}
else if(a*b>8000){
if(c==1)
printf("Total Amount : %2f - Discount = 50\n",a*b*0.5);
else
printf("Total Amount : %2f - Discount = 10\n",a*b*0.9);
}
}
