#include <stdio.h>
  int main()
{
   int n,i,fact=1;
   printf("donner un nombre");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
        fact=fact*i;
   } 
   printf("%d!=%d\n",n,fact);
}