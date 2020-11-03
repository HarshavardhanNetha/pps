#include <stdio.h>
void main(){
  FILE *f;
  char c;
  f=fopen("std.txt","w");
  if(f==NULL){
    printf("No Space");
    exit(0);
  }
  else{
    while((c=getchar())!=';'){
      putc(c,f);
    }
    fclose(f);
    f=fopen("std.txt","r");
    while((c=getc(f))!=EOF){
      printf("%c\n",c);
    } 
    fclose(f);
  }
}
