//everytime invoking the function, make the num++ in main function.
#include <stdio.h>
void cntplus(int* pa)
{
	(*pa)++;
}
int main()
{
	int cnt = 0;
	int n;
	printf("input the number to decide howmuch time do you want to plus?");
	scanf("%d", &n);
	int i;
	for(i = 0; i < n; i++)
	{
		cntplus(&cnt);
		printf("the result is %d\n", cnt);
	}
	return 0;	
}
