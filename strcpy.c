//strcpy function;
//memset function;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr1[20] = {0};
    char arr2[] = "hello world!";
    strcpy(arr1, arr2);
    printf("%s\n", arr1);
    memset(arr1, 'x', 5);
    printf("%s\n", arr1);
        
    return 0;
}