//Addition
#include <stdio.h>

int a[10][10],b[10][10],sum[10][10];
int r,cc,i,j,one,two;


int main(){
  printf("Enter no of rows and columns:");
  scanf("%d%d",&r,&cc);
printf("Enter elements of matrix 1:\n");
  for(i=0;i<r;i++){
    for(j=0;j<cc;j++){
      scanf("%d",&a[i][j]);}
    }
printf("Enter elements of matrix 2:\n");
  for(i=0;i<r;i++){
    for(j=0;j<cc;j++){
      scanf("%d",&b[i][j]);}
    }


for(i=0;i<r;i++){
  for(j=0;j<cc;j++){
    sum[i][j]=a[i][j]+b[i][j];
	//printf("%d ",sum[i][j]);    
	} //
  }
printf("Result matrix:\n");
for(i=0;i<r;i++){
  for(j=0;j<cc;j++){
    printf("%d ",sum[i][j]);}printf("\n");}
return 0;
}

