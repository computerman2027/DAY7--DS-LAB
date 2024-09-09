#include<stdio.h>

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n;
	printf("Enter term no of fibonacci : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("INVALID INPUT\n");
		return 0;
	}
	printf("fibonacci term no %d is %d\n",n,fibo(n));
	return 0;
}