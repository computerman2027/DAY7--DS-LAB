#include<stdio.h>


int fibo(int n)
{
  if(n==0 || n==1)
  return n;
  return fibo(n-1)+fibo(n-2);
}

int fact(int n)
{
if (n==0)
return 1;
return n*fact(n-1);
}

int maxarr(int *arr,int n)
{
if(n==1)
return arr[0];
//if(i==n-1)
//return arr[0];
int m= maxarr(arr+1,n-1);
return arr[0]>m?arr[0]:m;
}


int gcd(int a,int b)
{
if(a==b)
return b;

if(a>b)
return gcd(a-b,b);
else
return gcd(a,b-a);
}
