#include<stdio.h>
int main()
{
    int i;
    for (i=3; i<=15; i+=3)
    {
        printf("%d", i);
        ++i;
    }
    return 0;
}