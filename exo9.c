#include<stdio.h>
int main()
{
    int a,i,j;
    printf("affichage ds nombres pairs");
    printf("tapez un nombre");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        j=i%2;
        if(j==0)
        {
            printf("%d\n",i);
        }
    }

}