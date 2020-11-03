//factorial
#include <stdio.h>
long a,i,j,fact=0;
void main(){
  printf("Enter range number:");
  scanf("%ld",&a);
  for(i=1;i<=a;i++){ fact=1;
    for(j=1;j<=i;j++){fact*=j;}
  printf("Fact (%ld) = %ld\n",i,fact);
}
}
