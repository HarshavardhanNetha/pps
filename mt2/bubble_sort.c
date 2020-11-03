#include <stdio.h>
void main(){
  int i,j,a[10],n;
  printf("Enter size :");
  scanf("%d",&n);
  for(i=0;i<n;i++){scanf("%d",&a[i]);}
  
  i=0; j=n-1;
while(j!=0){
  while(i<j){
    if(a[i]>a[i+1]) a[i+1]=(a[i]+a[i+1])-(a[i]=a[i+1]);
    i++;} j--;i=0;
  }
  for(i=0;i<n;i++){printf("%d ",a[i]);}  
}
