#include <stdio.h>
float main()
{
    float N1,N2,coef1,coef2,totalcoef,M,S;
    printf("tapez la premiere note\n");
    /*demander à l'utilisateur de
    saisir ses notes*/
    scanf("%f",&N1);
    printf("tapez la deuxieme note\n");
    scanf("%f",&N2);
    printf("donner le coefficient 1\n");
    scanf("%f",&coef1);
    printf("donner le coefficient 2\n");
    scanf("%f",&coef2);
    S=N1+N2;
    totalcoef=coef1+coef2;
    M=((N1*coef1)+(N2*coef2))/totalcoef;
    printf("votre moyenne est %.0f\n",M);
}
