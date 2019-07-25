#include<stdio.h>
int main()
{
    int c=0,i,n;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=0;
        if(n%i==0)
        {
            c++;
        }
        
    }
    if(c==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
