#include <stdio.h>
int a,b,c;
void main(){
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);

if(a>b){
  if(a>c){
  if(b>c)
    printf("Ascending order : %d %d %d\n",c,b,a);
  else
    printf("Ascending order : %d %d %d\n",b,c,a);
  }
 else
    printf("Ascending order : %d %d %d\n",b,a,c);
}

else if(b>c){
  if(b>a){
  if(a>c)
    printf("Ascending order : %d %d %d\n",c,a,b);
  else
    printf("Ascending order : %d %d %d\n",a,c,b);
  }
 else
    printf("Ascending order : %d %d %d\n",c,b,a);
}

else if(c>a){
  if(c>b){
  if(a>b)
    printf("Ascending order : %d %d %d\n",b,a,c);
  else
    printf("Ascending order : %d %d %d\n",a,b,c);
  }
 else
    printf("Ascending order : %d %d %d\n",a,c,b);
}

}
