#include<stdio.h>
int main()
{
    int phy, math, chem, bio, cs;
    printf("Physics=\n");
    scanf("%d", &phy);
    
    printf("Maths=\n");
    scanf("%d", &math);
    
    printf("Biology=\n");
    scanf("%d", &bio);
    
    printf("chemistry=\n");
    scanf("%d", &chem);
    
    printf("Computer=\n");
    scanf("%d", &cs);

    int total = (phy + math + chem + bio + cs)/5;
    if ( total >= 90 ) 
    {
        printf(" Grade A ");
    }
    
    else if ( total >= 80 ) 
    {
        printf(" Grade B ");
    }
    else if ( total >= 70 ) 
    {
        printf(" Grade C ");
    }
    else if ( total >= 60 ) 
    {
        printf(" Grade D ");
    }
    else if ( total >= 40 ) 
    {
        printf(" Grade E ");
    }
    else if ( total < 40 ) 
    {
        printf(" Grade F ");
    }
    
    return 0;
}