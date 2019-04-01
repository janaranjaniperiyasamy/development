#include <stdio.h>

int main()
{
    int i,k,b[1000],c=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
for(i=0;i<k;i++)
{
    if(b[i]==i)
    {
    printf("%d ",b[i]);
    }
    else
    {
        c++;
    }
}
if(c==k)
{
    printf("-1");
}
    return 0;
}
