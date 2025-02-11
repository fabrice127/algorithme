#include <stdio.h>
int main()
{
    int N1,N2,R,pcgd;
    printf("tapez un nombre\n N1=");
    scanf("%d",&N1);
    printf("tapez un autre nombre\n N2=");
    scanf("%d",&N2);
    do
    {
        R=N1%N2;
        N1=N2;
        N2=R;
    }while(R!=0);
    pcgd=N1;
    if(pcgd==1)
    {
        printf("ils sont premier entre eux");
    }
    else
    {
        printf("ils ne sont pas premier entre eux");
    }
    
}