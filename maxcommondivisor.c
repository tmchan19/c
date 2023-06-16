#include <stdio.h>

int main()
{
    int x, y;
    int cnt;
    printf("please input two integers:");
    scanf("%d%d", &x, &y);
    (x > y)? (cnt = y) : (cnt = x);
    int i;
    for (i = cnt; i > 0; i--)
    {
        if(x%i==0&&y%i==0)
        {
            printf("the max common divesor is %d.\n", i);
            break;
        }
    }

    return 0;

}