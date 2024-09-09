#include<stdio.h>
#define MAXITEM 20

int maxarr(int *arr, int n)
{
    if (n == 1)
        return arr[0];
    // if(i==n-1)
    // return arr[0];
    int m = maxarr(arr + 1, n - 1);
    return arr[0] > m ? arr[0] : m;
}

int main()
{
    int i,n;
    int arr[MAXITEM];
    printf("Enter size of array : ");
    scanf("%d", &n);
    if (n < 1 || n > MAXITEM)
    {
        printf("INVALID SIZE\n");
        return 0;
    }
    printf("Enter %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ARRAY = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Max = %d\n",maxarr(arr,n));
    return 0;
}