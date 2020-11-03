#include <stdio.h>
int i,j,k,a,t=1;
void main(){
scanf("%d",&a);
i=a;
while(t<=a){
  for(k=1;k<=a;k++) printf(" ");
  for(j=1;j<=i;j++) printf(" *");
  
i--;t++; printf("\n");

}
}
