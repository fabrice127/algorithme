#include<stdio.h>
#include<math.h>
float main()
{
    float n,i,S=0;
    printf("calcul de la somme 1+10^1+10^2+.....+10^n\n");
    printf("tapez un nombre");
    scanf("%f",&n);
    for(i=0;i<=n;i++)
    {
        S=S+(pow(10,i));
    }
    printf("la somme est %f\n",S);
}