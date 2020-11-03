#include <stdio.h>
void main(){
  int fun(int a,int b){
    if(a==0) return b+1;
    else if(b==0) return fun(a-1,1);
    else return fun(a-1,fun(a,b-1));
  }
  int final;
  final=fun(2,3);
  printf("%d\n",final);
}
