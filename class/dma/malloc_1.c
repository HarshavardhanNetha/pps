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
  int a,i;
  a=5;
  ptr=(struct std*)malloc(a*sizeof(struct std));
  for(i=0;i<a;i++){
printf("Enter the ID Name age cgpa of %d students respectively.\n",a);
    scanf("%s %s %d %f",&(ptr+i)->id,&(ptr+i)->name,&(ptr+i)->age,&(ptr+i)->cgpa);
  }
  printf("\n");printf("\n");printf("\n");
printf("Date Loading Please wait.....!\n");
for(i=0;i<a;i++){
  printf("%s %s %d %f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->age,(ptr+i)->cgpa);
}
printf("\n");

}

/*
B166232 Badv34 6 3.2
B173833 Nbejf 7374 3.4
B17y3dd Hfbbaife 63 2.4
B28ubs2 NJbeufb 7 .3443
B1282rb Nsjdfbej 8 4.3
*/
