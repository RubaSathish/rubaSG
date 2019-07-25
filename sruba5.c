#include<stdio.h>
int main()
{
    int r,sum=0,n,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
        
    }
    if(temp=sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
