#include <stdio.h>
char a[100],b[100];
void main(){
  printf("Enter any two strings:");
  scanf("%s",a);
  scanf("%s",b);
  int c[100],k=0,i,j;
int len1,len2;
{ int i=0,j=0;
while(a[i]=='\0')
  len1++;
while(a[i]=='\0')
  len2++;
}
  for(i=0;i<len1;i++){
    c[k]=a[i];
    k++;}
  for(j=0;j<len2;j++){
    c[k]=a[j];
    k++;}
  
  for(i=0;i<sizeof(c);i++)
    printf("%d",c[i]);
}
