#include<stdio.h>
int main()
{
    char a;
    printf("Give the input=\n");
    scanf("%c", &a);
     
    if ( (a>='a' && a<='z')  || (a>='A' && a<='Z') )
    {
        printf("given input is a character\n");
    }
    
    else if ( a>='0' && a<='9' )
    {
        printf("given input is a number\n");
    }
    else
    {
        printf("given input is a special character");
    }    

    return 0;
}