#include<stdio.h>
int main()
{
    int a, b;
    printf("A= \n");
    scanf("%d", &a);

    printf("B= \n");
    scanf("%d", &b);

    if ( a<b )
    {
    printf("B is Maximum ");
    }
    if( a>b )
    {
        printf("A is Maximum ");
    }

    return 0;
}