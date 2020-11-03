#include <stdio.h>

void swap(int *a,int *b){
  *b=(*a+*b)-(*a=*b);
}

void main(){
	int a[10],i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=0; j=n;
	int x,temp;
	while(i<j){
	  temp=a[i];
		for(x=0;x<j;x++){
			if(temp<a[x]){
				swap(&a[i],&a[x]);
			}
		}
		i++;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
