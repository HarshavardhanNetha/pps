#include <stdio.h>
void main(){
  int a[10];
  int i,n,key;
  printf("Enter the size of array:");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter %d element:",i+1);
    scanf("%d",&a[i]);
  }
  printf("Enter key to saerch:");
  scanf("%d",&key);
  int flag=0;
  for(i=0;i<n;i++){
    if(key==a[i]) {printf("Key found at %d index.\n",i); flag=1;}
  }
    if(flag==0) printf("Key not found.\n");
}
