#include <stdio.h>
void main(){
	int i,j,a[]={6,1,2,4,3,5}, min, min_ind,temp;
	for(i=0;i<6;i++){
		min=a[i];
		min_ind=i;

		for(j=i;j<6;j++){
			if(min>a[j]){
				min=a[j];
				min_ind=j;
			}
		}
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<6;i++)
		printf("%d    ", a[i]);
}
			

