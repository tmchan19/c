#include <stdio.h>
void swapnumber(int* px, int* py)
{
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("origin: a = %d, b = %d\n", a, b);
    swapnumber(&a, &b);
    printf("swapped: a = %d, b = %d\n", a, b);
    return 0;
}
