#include <stdio.h>

int x=3;
#define x x+x

void main(){
printf("%d",x*x);
}

