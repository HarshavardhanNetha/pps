#include <stdio.h>
void main(int i,char* j[]){
	printf("No of args %d\n",i-1);
	int k;
	for(k=1;k<i;k++){
		printf("%s ",j[k]);
	}
	printf("\n");
}
