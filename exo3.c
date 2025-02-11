#include <stdio.h>
 float main()
 {
    float a,b,temp;
    printf("tapez un nombre\n a=");
    scanf("%f",&a);
     printf("tapez un nombre\n b=");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%.0f",a);
    printf("b=%.0f",b);

 }