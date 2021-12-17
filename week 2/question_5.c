#include <stdio.h>
int main()
{
    int num, pow, ans = 1;
    printf("Enter the number and its power:-\n");
    scanf("%d %d", &num, &pow);
    for (int i = 1; i <= pow; i++)
    {
        ans = ans * num;
    }
    printf("%d", ans);
    return 0;
}