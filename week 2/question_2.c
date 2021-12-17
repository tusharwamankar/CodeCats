#include<stdio.h>
int main()
{
    int a, n, f=1;
    printf("Enter the no =\n");
    scanf("%d", &n);
    printf("The factorial is =\n");
    for ( a=1; a<=n; a++ )
    {
        //printf("%d\n", a);
        f = f*a;
    }
    printf("%d", f);
    return 0;
}