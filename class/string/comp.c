#include <stdio.h>
#include <string.h>
char str[10],name[10]; 
void main(){
//gets(str);
//gets(name);

scanf("%s",str);
scanf("%s",name);

if(strcmp(str,name))  //return zero if strings are equal
	printf("Not Same\n");
else
printf("Same\n");

}
