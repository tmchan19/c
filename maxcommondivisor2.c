#include <stdio.h>

int main()
{
    int x, y;
    printf("please input two integers:");
    scanf("%d%d", & x, &y);
    int t;
    while (t=x%y)
    {
        x = y;
        y = t;
    }
    printf("the max common divisor is %d.\n", y);
    return 0;
}