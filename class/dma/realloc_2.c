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
  
  a=(struct std*)calloc(n,sizeof(struct std));

  for(i=0;i<n;i++){
    printf("Enter ID Name cgpa branch of student %d :",i+1);
    scanf("%d %s %f %s",&(a+i)->id,(a+i)->name,&(a+i)->cgpa,(a+i)->branch);
  }
  
  int new,x; printf("Enter how many to extend:"); scanf("%d",&new);
  for(x=i;x<n+new;x++){
    printf("Enter ID Name cgpa branch of student %d :",x+1);
    scanf("%d %s %f %s",&(a+x)->id,(a+x)->name,&(a+x)->cgpa,(a+x)->branch);
  }  
  
do{
  printf("Whose ID to search I/P 0 to exit:");
  scanf("%d",&j);
  int flag=0;
  for(i=0;i<n+new;i++){
    if(j==(a+i)->id){ printf("\t%d %s %f %s\n",(a+i)->id,(a+i)->name,(a+i)->cgpa,(a+i)->branch); flag=1;}
  }
  if(flag==0 && j!=0){printf("\tNo results found.\n");}
  else if(j==0)exit(0);}while(j!=0);
}
