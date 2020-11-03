#include <stdio.h>
#include <string.h>
char str[10],name[10];
int i; 
void main(){
gets(name);
puts(name);
  //for(i=0;i<10;i++)
  //scanf("%s",str); //scans only until white space is obtained

  scanf("%[^\n]s",str); // scans until \n is obtailed
  //for(i=0;i<10;i++)
    printf("%s",str);

printf("%s",strlen(name));
printf("\n");
}
