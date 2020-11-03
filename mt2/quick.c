#include <stdio.h>

	int i,j,x,*aa,l,h,pivot;	int a[]={6,3,8,4,1};

void swap(int *a, int *b){
	*b=(*a+*b)-(*a=*b);
}

int partition(int l, int h){
	pivot=a[(l+h)/2];
	swap(&a[l],&a[(l+h)/2]);
	i=l+1;j=h;
  while(i<j){
    while(a[i]<=pivot) i++;
    while(a[j]>pivot) j--;
    swap(&a[i],&a[j]);
  }
  return j;
}

void quicksort(l,h){
 while(l<h){
	j=partition(l,h);
	quicksort(l,j-1);
	quicksort(j+1,h);	}
}

void main(){

	aa=&a;
	printf("Enter two numbers:");

	l=0;h=4;
//	scanf("%d%d",&l,&h);
//	for(x=0;x<h;x++){scanf("%d",a[x]);}
	quicksort(l,h);
}
