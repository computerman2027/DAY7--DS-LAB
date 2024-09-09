#include<stdio.h>

int gcd(int a, int b)
{
    if (a == b)
        return b;
    if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}

int main()
{
	int a,b;
	printf("Enter 2 numbers : ");
	scanf("%d %d",&a,&b);
	printf("GCD of %d and %d is %d\n",a,b,gcd(a,b));
	return 0;
}