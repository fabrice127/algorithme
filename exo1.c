#include<stdio.h>
float main()
{
    float n;
    printf("tapez un nombre\n n=");
    scanf("%f",&n);
    if(n>0)
    {
        printf("ce nombre est positif\n");
    }
    else if(n=0)
    {
        printf("ce nombre est null\n");
    }
    else
    {
        printf("ce nombre est negatif\n");
    }
}