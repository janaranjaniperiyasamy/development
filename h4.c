#include <stdio.h>

int main()
{
    int a[10000],i,j,n,k=0,b[1000],t,n1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n1=n;
    for(i=0;i<n;i++)
    {
        t=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]!=a[j])
            {
            t++;
        
            }
        }
       
       if(t==n1-1)
       {
           b[k]=a[i];
           k++;
       }
       n1--;
    }
for(i=0;i<k;i++)
{
    printf("%d ",b[i]);
}
    return 0;
}
