#include <stdio.h>
int getmax(int x, int y)
{
    return (x > y)? x : y;
}
int main()
{
    int a, b, max;
    scanf("%d%d", &a, &b);
    max = getmax(a, b);
    printf("max number is %d.\n", max);
    return 0;
}