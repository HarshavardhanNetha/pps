#include <stdio.h>
int a=10;

void main(){
printf("%d\n",sizeof(a));
printf("%d %d %d\n",++a,a++,++a);
printf("%d\n",a);

a=10;
printf("%d %d %d %d %d\n",++a,++a,a++,++a,++a);
printf("%d\n",a);

a=10;
printf("%d %d %d %d %d\n",++a,++a,a++,--a,++a);
printf("%d\n",a);

}
