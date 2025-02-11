#include<stdio.h>
int main()
{
    int a,b,pgcd,r;
    printf("tapez un nombre\n a=");
    scanf("%d",&a);
    printf("tapez un nombre\n b=");
    scanf("%d",&b);
    r=a%b;
    while(r!=0)
    {
        
        a=b;
        b=r;
        r=a%b;
    }
    pgcd=b;
    printf(" le pgcd (a,b)= %d\n",pgcd);
}