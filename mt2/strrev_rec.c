#include <stdio.h>
#include <string.h>
void rec(char a[],int i,int j,char bb[]){
  if(j<=0) { return;}
  else {
    bb[i]=a[j];
    return rec(a,i+1,j-1,bb);
  }
}

void main(){
	char a[20];
	int i,j;
	static char bb[20];
  //b=bb;
	i=0;j=strlen(a)-1;
	scanf("%s",a);
	rec(a,i,j,bb);
	printf("%s\n",bb);
}
