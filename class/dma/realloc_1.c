#include <stdio.h>
#include <stdlib.h>
struct std{
  char id[7];
  char name[10];
  int age;
  float cgpa;
  
} ;

void main(){
  struct std *ptr;
  int a,i,j;
  a=5;
  ptr=(struct std*)calloc(a,sizeof(struct std));
printf("Enter the ID Name age cgpa of %d students respectively.\n",a);
  for(i=0;i<a;i++){
    scanf("%s %s %d %f",&(ptr+i)->id,&(ptr+i)->name,&(ptr+i)->age,&(ptr+i)->cgpa);
  }
int new=10;
  ptr=realloc(ptr,new*sizeof(struct std));
  printf("Enter details of %d more students.\n",new);
  for(j=a;j<new+a;j++){
    scanf("%s %s %d %f",&(ptr+j)->id,&(ptr+j)->name,&(ptr+j)->age,&(ptr+j)->cgpa);
  }

printf("\n");printf("\n");printf("\n");  
printf("Date Loading Please wait.....!\n");
for(i=0;i<new+a;i++){
  printf("%s %s %d %f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->age,(ptr+i)->cgpa);
}
//printf("\n");

}
