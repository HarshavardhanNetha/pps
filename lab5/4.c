#include <stdio.h>
char a[100];
int word=0,newline=0,character=0,i;
char x;
void main(){
  printf("Enter a string:");
  scanf("%[^\n]s",a);
  while(1){
i=0;
   // x=getchar();
    if(a[i]==EOF) break;
    else if(a[i]=='\n') newline++;
    else if(a[i]==' ' || x=='\t') word++;
    else character++; i++;}
 
printf("%d %d %d",word,newline,character) ;
}
