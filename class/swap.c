#include <stdio.h> 
int main() 
{ 
    int a , b ; scanf("%d %d",&a,&b); 
    b=(a+b)-(a=b);
    printf("After Swapping values of x and y are %d %d", 
            a, b); 
    return 0; 
}
