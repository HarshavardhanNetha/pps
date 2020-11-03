#include <stdio.h>
int cnt[10],i,sum=0;
void main()
{
  printf("Enter 10 numbers:");
  for(i=0;i<10;i++)
    scanf("%d",&cnt[i]);
i=0;
  for(i=0;i<10;i++)
    sum+=cnt[i];
printf("Sum = %d\n",sum);
}
