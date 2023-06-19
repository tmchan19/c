#include <stdio.h>
#include <math.h>
int IsPrime(int x)
{
    int i;
    int ret = 1;
    for (i= 2; i <= sqrt(x); i++)
    {
        if(x%i==0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}
int main()
{
    int x, y;
    printf("please input two positive integer:");
    scanf("%d%d", &x, &y);
    if (x == 1){
        x += 2;
    } 
    if (x%2==0){
        x++;
    }
    int p = 0;    
    int flag = 0;
    int count = 0;
    for ( p = x; p <= y; p += 2)
    {
        flag = IsPrime(p);
        if(flag == 1)
        {
            count++;
            printf("%4d",p);
        }
    }
    printf("\nTotal %4d numbers of primes, between the two numbers\n", count);
    return 0;
}
