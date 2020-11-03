#include <stdio.h>
void main(){
  FILE *f,*p;
  char c;
  f=fopen("file1.txt","w");
  if(f==NULL){
    printf("No Space");
    exit(0);
  }
  else{
    while((c=getchar())!=';'){
      putc(c,f);
    }
    fclose(f);
    p=fopen("file1_2.txt","w");
    f=fopen("file1.txt","r");
    while((c=getc(f))!=EOF){
      putc(c,p);
    }
    fclose(f);
    fclose(p);
    p=fopen("file1_2.txt","r");
    while((c=getc(p))!=EOF){
      printf("%c",c);
    } 
    
    fclose(p);
  }printf("\n");
}
