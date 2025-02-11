#include<stdio.h>
float main()
{
    float a,b;
    printf("tapez un nombre\n a=");
    scanf("%f",&a);
    printf("tapez un nombre\n b=");
    scanf("%f",&b);
    if((a>0 && b<0) ||(a<0 && b>0))
    {
        printf("le produit est negatif\n ");
    }
    else
    {
        printf("le produit est positif\n");
    }
}