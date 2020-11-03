#include <stdio.h>
int i=1,j,k,a;
void main(){
scanf("%d",&a);
while(a>=1){
  for(j=1;j<=i;j++) printf(" ");
  for(k=1;k<=a;k++) printf("* ");
i++;a--; printf("\n");

}
}
