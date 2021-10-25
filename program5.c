#include <stdio.h>

int main()
{
    int arr[10][10],n,m;
    int i,j;
    printf("enter no of rows:");
    scanf("%d",&n);
    printf("enter no of column:");
    scanf("%d",&m);

    printf("enter matrix elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Rotate Matrix by 90 degrees\n");
    for(i=2;i>=0;i--)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
