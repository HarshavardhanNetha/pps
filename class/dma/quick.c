#include <stdio.h>
#include <stdlib.h>


void main(){
  int *ll,*hh,j,i,l,h,*AA;
 
  printf("Lower and Higher limits:");
  scanf("%d %d",&l,&h);  
  ll=&l; hh=&h;
    printf("Storage:");
 // for(i=0;i<=h;i++){scanf("%d",arr[i]);}
  int arr[10]={4,3,5,6,1,2};  AA=arr; 
int partition(int l,int h){
  int pivot;
  pivot = (l+h)/2;
  swap(AA[0],AA[pivot]);
  i=l+1,j=h;
  while(i<j){
    while(AA[i]<=pivot) i++;
    while(AA[j]>pivot) j++;
    swap(AA[i],AA[j]);	
  }
  return j;
}

void swap(int a,int b){
  *ll=b;
  *hh=a;
}

void quicksort(int l, int h){
  while(l<h){
    j=partition(l,h);
    quicksort(l,j-1);
    quicksort(j+1,h);
  }
  quicksort(l,h);
}



}
