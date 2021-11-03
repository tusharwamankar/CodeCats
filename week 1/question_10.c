#include<stdio.h>
int main()
{
    int salary;
    printf("Your Salary=\n");
    scanf("%d", &salary);
    int hra, da, gross;

    if ( salary > 20000 )
    {
        //printf("HRA = 30% ,\t DA = 95% ");
        hra = (salary*0.3);
        da = ( salary*0.95 );
        

    }
    
    else if ( salary <= 20000 )
    {
        //printf("HRA = 25% ,\t DA = 90% ");
         hra = (salary*0.25);
        da = ( salary*0.90 );
    }
    
    else if ( salary >= 10000 )
    {
        //printf("HRA = 20% ,\t DA = 80% ");
         hra = (salary*0.20);
        da = ( salary*0.80 );
    }
    gross = salary + hra + da ;
    printf("Gross salary is = %d", gross);

    return 0;
}