#include <stdio.h>
int main()
{int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c)
printf("equilateral");
else if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a)
printf("isocelles");
else
printf("scalene");
return 0;
}
