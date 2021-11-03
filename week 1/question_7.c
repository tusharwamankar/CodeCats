#include<stdio.h>
int main()
{
    int a, note2000, note500, note100, note50, note20, note10, note5, note2, note1 ;
    note2000 = note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0 ;

    printf("Amount=\n");
    scanf("%d", &a);

    if( a>=2000 )
    {
        note2000 = (a/2000);
        a -= 2000*note2000 ;
    }
    if( a>=500 )
    {
        note500 = (a/500);
        a -=500*note500;
    }
    if( a>=100 )
    {
        note100 = (a/100);
        a -= 100*note100 ;
    }
    if( a>=50 )
    {
        note50 = (a/50);
        a -= 50*note50 ;
    }
    if( a>=20 )
    {
        note20 = (a/20);
        a -= 20*note20 ;
    }
    if( a>=10 )
    {
        note10 = (a/10);
        a -= 10*note10 ;
    }
    if( a>=5 )
    {
        note5 = (a/5);
        a -= 5*note5 ;
    }
    if( a>=2 )
    {
        note2 = (a/2);
        a -= 2*note2 ;
    }
    if( a>=1 )
    {
        note1 = (a/1);
        a -= 1*note1 ;
    }

    printf("2000 ki note =%d\n", note2000);
    printf("500 ki note =%d\n", note500);
    printf("100 ki note =%d\n", note100);
    printf("50 ki note =%d\n", note50);
    printf("20 ki note =%d\n", note20);
    printf("10 ki note =%d\n", note10);
    printf("5 ki note =%d\n", note5);
    printf("2 ki note =%d\n", note2);
    printf("1 ki note =%d\n", note1);
    

    return 0;
}