#include <stdio.h>
int main()
{
    int n,i,S=0;
    printf("tapez un nombre");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        S+=i;
    }
    printf("la somme de n premier terme est %d\n",S);
}