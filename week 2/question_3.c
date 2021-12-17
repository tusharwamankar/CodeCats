#include<stdio.h>
int main()
{
    int a, p, s=0, r;
    printf("Enter the number=\n");
    scanf("%d", &a);
    for ( p=a; a!=0; a/10 )
        r = a % 10;
        s = s + (r*r*r);
        if (a==s)
        {
            printf("This is a armstrong number");  
        }
        else
        {
            printf("This is not a armstrong number");
        }
    return 0;
}