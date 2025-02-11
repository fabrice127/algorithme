#include <stdio.h>
float main()
{
    float n,i,S,j,fact;
    printf("donner un nombre");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=n;j++)
        {
            fact=fact*j;
        }
        S=S+(1/fact);
    }
    printf("la somme est %.2f",S);
    return (0);
}