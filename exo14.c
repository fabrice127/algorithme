#include<stdio.h>
float main()
{
    float n,S=0,i;
    
    printf("calcul de la somme 1/1+1/2+......+1/n\n");
    printf("tapez un nombre\n n=");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        S=S+(1/i);
    }
    printf("la somme est %.2f\n",S);
}