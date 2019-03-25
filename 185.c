
#include <stdio.h>
#include<string.h>
int main()
{
    char a[1000000],b[100000];
    int i,j,c=0,s=1,t=0,c1,r,v=0;
    scanf("%s",a);
    c=strlen(a);
    c1=c;
    for(i=c-1;i>=0;i--)
    {
        strcpy(b,a);
        if(b[i]=='1')
        {
            b[i]='0';
        }
        j=c;
         while(c)
    {
        if(b[j]==48)
        {
            r=0;
        }
        else
        {
            r=1;
        }
        j--;
        c--;
        t=t+(s*r);
        s=s*2;
    }
    if(t%64==0)
    {
        v=1;
        break;
    }
    c=c1;
    s=1;
    t=0;
    }
    if(v==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
