//transpose of a matrix

#include <stdio.h>
int a[10][10],b[10][10],i,j,rr,cc,cnt;

void main(){
  printf("Enter rows and columns:");
  scanf("%d%d",&rr,&cc);
  for(i=0;i<rr;i++){
    for(j=0;j<cc;j++){
      scanf("%d",&a[i][j]);
  } printf("\n");}
cnt= rr < cc ? cc : rr; 
  for(i=0;i<cnt;i++){
    for(j=0;j<cnt;j++){
      b[i][j]=a[j][i];
  } printf("\n");}
  for(i=0;i<cc;i++){
    for(j=0;j<rr;j++){
      printf("%d ",b[i][j]);
  } printf("\n");}
}
