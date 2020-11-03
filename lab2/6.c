#include <stdio.h>
int a,b,c,d,e,total;
void main(){
printf("Enter marks of 5 subjects:(Maths,Science,Telugu,Social,English)");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
total = a+b+c+d+e;
if(a >=90)
printf("%d - A in Maths\n",a);
else if(a >=80 && a < 90)
printf("%d - B in Maths\n",a);
else if(a >=70 && a < 80)
printf("%d - C in Maths\n",a);
else if(a >=60 && a < 70)
printf("%d - D in Maths\n",a);
else if(a >=50 && a < 60)
printf("%d - E in Maths\n",a);
else
printf("%d - Fail in Maths\n",a);

if(b >=90)
printf("%d - A in Science\n",b);
else if(b >=80 && b< 90)
printf("%d - B in Science\n",b);
else if(b >=70 && b < 80)
printf("%d - C in Science\n",b);
else if(b >=60 && b < 70)
printf("%d - D in Science\n",b);
else if(b >=50 && b < 60)
printf("%d - E in Science\n",b);
else
printf("%d - Fail in Science\n",b);

if(c >=90)
printf("%d - A in sub Telugu\n",c);
else if(c >=80 && c< 90)
printf("%d - B in Telugu\n",c);
else if(c >=70 && c < 80)
printf("%d - C in Telugu\n",c);
else if(c >=60 && c < 70)
printf("%d - D in Telugu\n",c);
else if(c >=50 && c < 60)
printf("%d - E in Telugu\n",c);
else
printf("%d - Fail in Telugu\n",c);

if(d >=90)
printf("%d - A in Social\n",d);
else if(d >=80 && d< 90)
printf("%d - B in Social\n",d);
else if(d >=70 && d < 80)
printf("%d - C in Social\n",d);
else if(d >=60 && d < 70)
printf("%d - D in Social\n",d);
else if(d >=50 && d < 60)
printf("%d - E in Social\n",d);
else
printf("%d - Fail in Social\n",d);

if(e >=90)
printf("%d - A in English\n",e);
else if(e >=80 && e< 90)
printf("%d - B in English\n",e);
else if(e >=70 && e < 80)
printf("%d - C in English\n",e);
else if(e >=60 && e < 70)
printf("%d - D in English\n",e);
else if(e >=50 && e < 60)
printf("%d - E in English\n",e);
else
printf("%d - Fail in English\n",e);


printf("Total Score = %d\n",total);
}

