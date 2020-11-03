#include <stdio.h>
void main(){
  int a[20];
  int i,n,key,mid,low,high;
  printf("Enter the size:");
  scanf("%d",&n);
  printf("Enter the data in sorted order.\n"); 
  for(i=0;i<n;i++){
    printf("Enter %d number:",i+1);
    scanf("%d",&a[i]);
  }
  printf("Enter key to search:");
  scanf("%d",&key);
  low=0;high=n-1;int flag=0;
  while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==key){printf("Found at %d index.\n",mid);flag=1;break;}
    else if(a[mid]>key){high=mid-1;}
    else low=mid+1;
  }
  if(flag==0) printf("Key not found.\n");
}
