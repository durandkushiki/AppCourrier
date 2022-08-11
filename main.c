#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,op;

    printf("entrer un premier nombre\n");
    scanf("%d",&a);
    printf("entrer un deuxieme nombre\n");
    scanf("%d",&b);
    printf("entrer un operateur");
    scanf("%d",&op);
switch (op)
    {
     case 1:printf("addition\n");
     printf("%d+%d=%d\n",a,b, a+b);
     break;
     case 2: printf("SOUSTRACTION\n");
         printf("%d-%d=%d",a,b, a-b);
     break;
     case 3: printf("modulo\n");
         printf("%dmodulo%d=%d",a,b,a%b);
     break;
     case 4: printf("multiplication\n");
         printf("%d*%d=%d",a,b,a*b);
     break;
     case 5: printf("division\n");
         printf("%d/%d=%d",a,b,a/b);
     break;

    }
    return 0;
}
