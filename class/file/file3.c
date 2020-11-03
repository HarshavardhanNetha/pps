#include <stdio.h>
void main(){
  FILE *p,*f; char c;
  int character=0,space=0,newline=0,tabs=0;
  if(p==NULL){
    printf("Space is not sufficient.\n");
    exit(0);
  }
  else{
    p=fopen("ex3.txt","w+");
    f=fopen("ex3_1.txt","w+");
    printf("Enter any text to store in file.... INPUT ; to terminate:");
    while((c=getchar())!=';'){ putc(c,p); }
    rewind(p);
    //fclose(p);
    //p=fopen("ex3.txt","r");    
    while((c=getc(p))!=EOF){ putc(c,f); }
    rewind(f);
    //f=fopen("ex3_1.txt","r");
    while((c=getc(f))!=EOF){ 
        if(c=='\n') newline++;
	else if(c=='\t') tabs++;
	else if(c==' ') space++;
	else character++;
    /*  switch(c){
	case '\n': newline++;
	case ' ': space++;
        case '\t': tabs++;
	default: character++;} */
    }
    fclose(p);
    fclose(f);
    printf("Charcters Count = %d\nSpaces Count = %d\nTabs Count = %d\nNewlines Count = %d\n",character,space,tabs,newline);
  }
}
