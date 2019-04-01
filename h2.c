#include <stdio.h>

int main()
{
    int i,j,k,b[1000],t,c=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
    }
for(i=0;i<k;i++)
{
for(j=i;j<k;j++)
{
    if(b[i]<b[j])
    {
        t=b[i];
        b[i]=b[j];
        b[j]=t;
    }
}
}
for(i=0;i<k;i++)
{
    if(b[i]==0)
    {
        c++;
    }
}
if(c==k)
{
    printf("0");
}
else
{
for(i=0;i<k;i++)
{
    printf("%d",b[i]);
}
}
    return 0;
}
