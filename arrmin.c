
#include <stdio.h>

int main()
{
    int n,a[1000],i,b[100000],j,c=0,c1=0,s,s1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && a[i+1]%2==0)
        {
            c++;
        }
        else
        {
            if(c1<c)
            {
                c1=c;
                s=i;
                c=0;
            }
        }
    }
    s1=a[s];
    for(i=s;i>=c1-s;i--)
    {
        if(s1>a[i])
        {
            s1=a[i];
        }
        printf("%d",a[i]);
    }
    printf("%d",s1);

    return 0;
}
