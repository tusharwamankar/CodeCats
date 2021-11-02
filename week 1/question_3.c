#include<stdio.h>
int main()
{
    int a, b, c;
    printf("A=\n");
    scanf("%d", &a);

    printf("B=\n");
    scanf("%d", &b);

    printf("C=\n");
    scanf("%d", &c);

    if ( a>b && a>c )
    {
        printf("A is maximum");
    }
    
     if ( b>a && b>c )
    {
        printf("B is maximum");
    }

     if ( c>a && c>b )
    {
        printf("C is maximum");
    }
    return 0;
}