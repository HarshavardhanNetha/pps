//str concatination
#include <stdio.h>
#include <string.h>

void main(){
  char a[20], b[20];
  int i=0,j=0,len_a=0;
  printf("Enter two strings:");
  scanf("%s",&a);
  scanf("%s",&b);
len_a=strlen(a);
 for(i=0;i<strlen(b);i++){
  a[len_a]=b[i]; len_a++;
 }
printf("%s\n",a);
}
