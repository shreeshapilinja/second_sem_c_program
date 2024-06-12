#include<stdio.h>
int main()
{
    int a[10][10],sum=0,i,j,n;
    printf("trace is posibble only in square matrix\n");
    printf("enter any one order of matrix\n");
    scanf("%d",&n);
    printf("enter elements of matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
                break;
            }
        }
    }
    
    printf("trace is %d",sum);
    return 0;
}