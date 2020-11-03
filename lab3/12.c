#include<stdio.h>
void main(){
int a, b,carry;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    while (b)  {
        carry = a & b;
        a = (a ^ b);
        b = carry << 1; 
    }
    printf("Sum: %d\n",a);
}
