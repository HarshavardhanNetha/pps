#include <stdio.h>
#include <string.h>

void main(){
  char a[]="rgukt",b[10];
	char copy(char a[], char b[]){
		int i=0;
		for(i=0;i<strlen(b);i++) a[i]=b[i];
		return b[i];
	}
	copy(b,a);
	printf("%s",b);
}
