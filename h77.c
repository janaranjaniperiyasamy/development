#include <stdio.h>

int main()
{
    int a,b,n,e,c=0,sum=0,i,r;
    scanf("%d %d",&n,&e);
    if(e==1 || e==0)
    {
        printf("NO");
    }
    else
    {
    for(i=0;i<e;i++)
    {
        scanf("%d %d",&a,&b);
        if(c==0)
        {
            r=a;
        }
        sum=sum+b;
        c++;
    }
    if(sum==r)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    }

    return 0;
}
