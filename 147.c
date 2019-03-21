#include <stdio.h>
#include<string.h>
int main()
{
    char a[100000],b[1000];
    int i,j,t,k=0,s=0,l;
    scanf("%[^\n]s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==" ")
        {
            t=i+1;
            k=0;
            for(j=t;j!=" ";j++)
            {
                b[k]=a[j];
                k++;
            }
            b[k]=NULL;
            s=t;
            for(j=k-1;j>=0;j--)
            {
                a[s]=b[j];
                s++;
            }
            
        }
    }
puts(a);
    return 0;
}
