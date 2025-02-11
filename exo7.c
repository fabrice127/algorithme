#include<stdio.h>
float main()
{
    float a,b,c,max;
    printf("tapez a\n a=");
    scanf("%f",&a);
    printf("tapez b\n b=");
    scanf("%f",&b);
    printf("tapez c\n c=");
    scanf("%f",&c);
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    if(max<c)
    {
        max=c;

    }
    printf("%.0f est le maximum\n",max);
}