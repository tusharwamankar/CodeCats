#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number=\n");
    scanf("%d", &a);
    for(int i=a+1; i--; i>=1)
    {
        for(int j=i; j--; j>=1)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}