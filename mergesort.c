#include<stdio.h>
#define MAXITEM 20

void merge(int *arr,int lb, int mid, int ub)
{
    int s=ub-lb+1;
    int b[s];
    int i,j,k=0;
    for(i=lb,j=mid+1; i<=mid && j<=ub;)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(i=lb,k=0;i<=ub;i++,k++)
    {
        arr[i]=b[k];
    }
}

void mergesort(int *arr,int lb, int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=lb+((ub-lb)/2);
        mergesort(arr,lb,mid);
        mergesort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
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
    printf("ARRAY before sorting= ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    mergesort(arr,0,n-1);
    printf("ARRAY after sorting= ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
