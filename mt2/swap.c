#include <stdio.h>

void swap(int *a, int *b){
	*b=(*a+*b)-(*a=*b);
}

void main(){
	void swap(int *a , int *b);
	int i=0,j=1,*aa,*bb;
	
	int a[]={1,2,3,4,5};
	
	aa=&a; //bb=&b;
	//swap(&a[i],&a[j]);
	swap(a+i,a+j);
	printf("%d %d",a[i],a[j]);
}
