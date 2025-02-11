#include<stdio.h>
int main()
{
    int n,i,d;
    printf("donner un nombre");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d=n%i;
        
        if(d==0)
        {
            printf("%.0d\n",i);
        }
    }
}