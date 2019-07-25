#include<stdio.h>
int main()
{
    int a,b,n,m,s=1,sum=0,j,i,c=0,r;
    scanf("%d%d",&a,&b);

    for(i=a;i<=b;i++)
    {
        n=i;
        m=i;
        c=0;
        s=1;
        sum=0;
        while(n)
        {
            c++;
            n=n/10;
        }
        while(m)
        {
            s=1;
            r=m%10;
        for(j=0;j<c;j++)
        {
           s=s*r; 
        }
        sum=sum+s;
        m=m/10;
        }
    if(sum==i)
    {
        printf("%d ",sum);
    }
}
    return 0;
}
