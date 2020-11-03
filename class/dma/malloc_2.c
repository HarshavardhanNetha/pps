#include <stdio.h>
#include <stdlib.h>

void main(){
  
  struct std{
    int id;
    char name[20];
    float cgpa;
    char branch[5];
  }*a;
  
  int i,j,n;
  printf("Enter Number of students:");
  scanf("%d",&n);
  
  a=(struct std*)malloc(n*sizeof(struct std));

  for(i=0;i<n;i++){
    printf("Enter ID Name cgpa branch of student %d :",i+1);
    scanf("%d %s %f %s",&(a+i)->id,(a+i)->name,&(a+i)->cgpa,(a+i)->branch);
  }
  
  printf("Whose ID to search:");
  scanf("%d",&j);
  int flag=0;
  for(i=0;i<n;i++){
    if(j==(a+i)->id){ printf("%d %s %f %s\n",(a+i)->id,(a+i)->name,(a+i)->cgpa,(a+i)->branch); flag=1;}
  }
  if(flag==0){printf("No results found.\n");}
}
