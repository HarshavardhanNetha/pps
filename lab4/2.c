#include<stdio.h>
#include<math.h>
int x,n,i,j,inter,temp;
float a,sum=0,fact,t;
void main(){
  inter = 1;
  printf("Enter value of 'x' and number of digits 'n':");
  scanf("%d%d",&x,&n);
  //temp = n-1;
  while(inter<=n-1){
    i=2;
    if(inter%2==0) {a=1;}
    else {a=-1;}
    t=pow(x,i);
//printf("%.2f\n",t);
    fact=1;
    for(j=1;j<=i;j++){fact*=j;}
    sum+=(float)(a*t)/(float)fact;
    i+=2;  
    inter++;
  }
//printf("%f\n",sum);
sum= 1 + sum;
printf("%.2f\n",sum);

sum=0;
  inter = 1;
  printf("Enter value of 'x' and number of digits 'n':");
  scanf("%d%d",&x,&n);
  temp = x;
  while(inter<=n-1){
    i=3;
    if(inter%2==0) {a=1;}
    else {a=-1;}
    t=pow(x,i);
//printf("%.2f\n",t);
    fact=1;
    for(j=1;j<=i;j++){fact*=j;}
    sum+=(float)(a*t)/(float)fact;
    i+=2;  
    inter++;
  }
//printf("%f\n",sum);
sum= temp + sum;
printf("%.2f\n",sum);

sum=0;
  inter = 1;
  printf("Enter value of 'x' and number of digits 'n':");
  scanf("%d%d",&x,&n);
  //temp = x;
  while(inter<=n-1){
    i=1;
    //if(inter%2==0) {a=1;}
   a=1;    
//else {a=-1;}
    t=pow(x,i);
//printf("%.2f\n",t);
    fact=1;
    for(j=1;j<=i;j++){fact*=j;}
    sum+=(float)(a*t)/(float)fact;
    i+=1;  
    inter++;
  }
//printf("%f\n",sum);
sum= 1 + sum;
printf("%.2f\n",sum);

}


