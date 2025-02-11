#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float main()
{
    float a,b,c,det,x0,x1,x2,k,q;
    printf("donner la valeur de a\n a=");
    scanf("%f",&a);
    printf("donner la valeur de b\n b=");
    scanf("%f",&b);
    printf("donner la valeur de c\n c=");
    scanf("%f",&c);
    det=(b*b)-(4*a*c);
    if(det>0)
    {
        x1=(-b-sqrt(det))/(2*a);
        x2=(-b+sqrt(det))/(2*a);
        printf("les deux solutions sont %f\n et %f\n",x1,x2);

    }
    else if(det<0)
    {
        k=-b/2*a;
        q=(sqrt(-det))/2*a;
        printf("les deux solutions sont %.0f+%.0fi\n et %.0f-%.0fi\n",k,q,k,q);
    }
    else
    {
        x0=-b/2*a;
        printf("%.0f est la solution",x0);
    }
   

}