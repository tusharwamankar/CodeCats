#include <stdio.h>
int main()
{
    int a[4] = {1, 2, 8, 5};
    printf("%d", a[4]);
    int temp;
    temp = a[0];
    a[1] = a[2];
    a[2] = a[3];
    a[3] = temp;
    
    return 0;
}
