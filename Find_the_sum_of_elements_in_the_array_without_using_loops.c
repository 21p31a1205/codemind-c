#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,sum=0;
    if (n>=1 && n<=30)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for (i=0; i<n; i++)
        {
            sum+=arr[i];
        }
        printf("%d",sum);
    }
    return 0;
}