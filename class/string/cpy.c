#include <stdio.h>
#include <string.h>
char str[10],name[10]; 
void main(){
//gets(str);
//gets(name);

scanf("%s",str);
//scanf("%s",name);

strcpy(name,str);  //siignts second to firstt (new,old)
	printf("%s\n",name);
}
