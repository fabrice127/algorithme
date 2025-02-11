#include <stdio.h>
float main()
{
    float n,i,S=0,j,fact;
    printf("tapez un nombre");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        S=S+fact;
        
    }
    printf("la somme est %.0f",S);
    return (0);
}