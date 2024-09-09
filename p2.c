#include<stdio.h>

int decitobi(int n)
{
    if(n==0 || n==1)
    return n;
    return (decitobi(n/2)*10)+(n%2);
}

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("INVALID INPUT\n");
		return 0;
	}
	printf("binary of %d is %d\n",n,decitobi(n));
	return 0;
}