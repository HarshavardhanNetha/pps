//matrix add sub mul transpose
#include <stdio.h>

int a[10][10],b[10][10],sum[10][10];
int r,cc,i,j,one,two;

int read(int a, int b){
  int new[a][b],i,j,x;
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      scanf("%d",&x);
      new[i][j]=x;
      }
    }
return new;
}

int main(){
  printf("Enter no of rows and columns:");
  scanf("%d%d",&r,&cc);
  a=read(r,cc);
  b=read(r,cc);

for(i=0;i<r;i++){
  for(j=0;j<cc;j++){
    sum[i][j]=one[i][j]+two[i][j];
	//printf("%d ",sum[i][j]);    
	} //printf("\n");
  }

for(i=0;i<r;i++){
  for(j=0;j<cc;j++){
    printf("%d",sum[i][j]);}}
return 0;
}

