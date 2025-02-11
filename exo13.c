#include<stdio.h>
int main()
{
    int n,i,produit=1;
    printf("donner un nombre");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        produit=produit*i;
    }
    printf("le produit est %d\n",produit);

}