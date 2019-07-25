#include<stdio.h>
int main()
{
    int r,sum=0,n,temp;
    scanf("%d",&n);
    n=temp;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
   
    if(temp==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
