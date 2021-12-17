#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter the number:-\n");
    scanf("%d", &num);
    
    for (int i=2; i<num/2; i++)
    {
        if(num%i==0)
        {
            flag = 1;
        }
    }
    if(num==1)
        printf(" 1 is neither prime nor composite \n");
    if(flag==1)
        printf("%d is a not a prime number \n", num);
    else
    printf("%d is a prime number \n", num);
    
    return 0;
}