#include<stdio.h>
float main()
{
    float a,b,moyenne,somme;
    printf("entrez une note\n");
    scanf("%f",&a);
    printf("entrez une autre note\n");
    scanf("%f",&b);
    somme=a+b;
    moyenne=somme/2;
    printf("la somme de vos notes est %.0f\n",somme);
    printf("vous avez obtenu la moyenne de %.0f\n",moyenne);
}