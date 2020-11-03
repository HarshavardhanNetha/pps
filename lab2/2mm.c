#include <stdio.h>
char a;
int x;
void main(){
  a=getchar();
x=(int)a;
//printf("%d",x);
if(x == 45)
printf("Negative\n");
else if(x >= 49 && x <= 57)
printf("Positive\n");
else if(x == 48)
printf("Zero\n");
else
printf("Enter any Number\n");
}
