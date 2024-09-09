#include<stdio.h>

void toh(int n,int a,int b,int c)
{
    if(n==1)
    {
        printf("move plate 1 from %d to %d via %d\n",a,b,c);
	return;
    }
    toh(n-1,a,c,b);
    printf("move plate %d from %d to %d via %d\n",n,a,b,c);
    toh(n-1,c,b,a);
}

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("INVALID INPUT\n");
		return 0;
	}
	toh(n,1,3,2);	
	return 0;
}