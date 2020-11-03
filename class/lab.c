#include <stdio.h>
  struct aaa{
    int marks;
    char name[20];
  }std[4];

void main(){
  int i;
  char a[20];

  printf("Enter details of 10 students marks and name respectively:");
  for(i=0;i<2;i++){
    scanf("%d %s",&std[i].marks,&std[i].name);
    
  }
  printf("Enter key to search:");
  scanf("%s",&a);
  for(i=0;i<2;i++){
    if(strcmp(std[i].name,a)){ printf("%d\n",std[i].marks); break;}
  }
}
