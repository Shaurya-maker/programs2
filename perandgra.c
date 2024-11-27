#include<stdio.h>
int main()
{float a,b,c,d,e,f;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=((a+b+c+d+e)/5);
printf("%f",f);
if(f>=90)
printf("percentage is %f%% and grade is A",f);
else if(f>=80&&f>90)
printf("percentage is %f%% and grade is B",f);
else if(f>=70&&f>80)
printf("percentage is %f%% and grade is C",f);
else if(f>=60&&f>70)
printf("percentage is %f%% and grade is D",f);
else if(f>=40&&f>60)
printf("percentage is %f%% and grade is E",f);
else 
printf("percentage is %f%% and grade is F",f);
return 0;
}
