#include <stdio.h>
#include <stdbool.h>

bool rev(char aa[], int a, int b){
	if(a>b) return true;
	else {
		if(aa[a]==aa[b]) return rev(aa,a+1,b-1); 
		else return false; 
	}
}

void main(){
  char aa[100];
  scanf("%s",&aa);
    int i,j,l;
  if(rev(aa,0,strlen(aa)-1)) printf("Palindrome.\n");
  else printf("Null.\n");
}
