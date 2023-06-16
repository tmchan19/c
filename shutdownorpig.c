/*
shutdown the computer, or input "you are handsome".
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20] = {0};
    system("shutdown -s -t 60");
    anotherchance:
    printf("The computer will be closed in one minute.\nIf input \"youarehandsome\",the shutdown will be cancelled.\n");    
    scanf("%s",input);
    if (strcmp(input, "youarehandsome") == 0){
        system("shutdown -a");
    }
    else{
        printf("another chance.\n");
        goto anotherchance;
    }
    
    return 0;
}