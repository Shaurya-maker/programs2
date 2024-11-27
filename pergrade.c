#include<stdio.h>
int main()
{float a,b,c,d,e,f;
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
f=(a+b+c+d+e)/5;
if(f>=90&&f<=100)
printf("Grade is A");
else if(f>=80&&f<90)
printf("Grade is B");
else if(f>=70&&f<80)
printf("Grade is C");
else if(f>=60&&f<70)
printf("Grade is D");
else if(f>=40&&f<60)
printf("Grade is E");
else
printf("Grade is F");
printf("\nthe percentage is %f%%",f);
return 0;
}
