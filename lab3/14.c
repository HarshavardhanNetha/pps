#include <stdio.h>
int a,i,j;
void main(){
  printf("Enter any number: ");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
    for(j=1;j<=i;j++){
	printf("%d ",j);}
    printf("\n");}
printf("\n");
    for(i=1;i<=a;i++){
    for(j=1;j<=i;j++){
	printf("%d ",i);}
    printf("\n");}
}

