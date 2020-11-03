#include <stdio.h>
int i,n,x,j,ind=-2;
int a[10];
void main(){
  printf("Enter 10 numbers in array:");
  //scanf("%d",&n);

  for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
  printf("Enter any number to search:");
  scanf("%d",&x);
  for(j=0;j<10;j++){
    if(a[j]==x){
      ind=j; break;}
}  
if(ind==-2)
 printf("Element not found.\n");
else
  printf("Element found at %dth index.\n",ind);
//printf("%d",a[-5]);
}

