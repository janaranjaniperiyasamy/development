#include <stdio.h>

int main()
{
    int a[10000],i,j,n,k=0,b[1000],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='*')
        {
        for(j=i+1;j<n;j++)
        {
            if(a[j]!='*')
            {
            if(a[i]==a[j])
            {
                b[k]=a[i];
                k++;
                a[j]='*';
                 a[i]='*';
        
            }
            }
        }
       
       
        }
    }
for(i=0;i<k;i++)
{
for(j=i;j<k;j++)
{
    if(b[i]>b[j])
    {
        t=b[i];
        b[i]=b[j];
        b[j]=t;
    }
}
}
if(k==0)
{
    printf("unique");
}
else
{
for(i=0;i<k;i++)
{
    printf("%d ",b[i]);
}
}
    return 0;
}
