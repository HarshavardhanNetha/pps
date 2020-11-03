#include <stdio.h>
#include <string.h>
char str[20],name[10]; //concatinating str sizes must be one above the other
void main(){
//gets(str);
//gets(name);

scanf("%s",str);
scanf("%s",name);

strcat(name,str);  //siignts second to firstt (new,old)
	printf("%s\n",name);printf("%s\n",str);
}
