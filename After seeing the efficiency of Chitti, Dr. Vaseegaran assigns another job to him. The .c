#include<stdio.h>
 int main()
 {
    int arr[10],n;
    printf("enter no of array elements:");
    scanf("%d",&n);

    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
 }