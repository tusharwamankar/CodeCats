#include<stdio.h>
int main()
{
    int a, num, sum=0;
    printf("enter n=\n");
    scanf("%d", &num);

    printf("The natural numbers are =\n");

    for ( a=1; a<=num;a++ )
    {
        printf("\n%d\n", a);
        sum+=a;
    }
    
    printf("\nThe Sum =\n%d\n", sum);
    return 0;
}