
#include <stdio.h>

int main()

{
    int n,i,a,b,n1;
    scanf("%d%d",&n,&a);
    n1=n;
    for(i=1;i<a;i++)
    {
        n=n*n1;
    }
    printf("%d",n);
    return 0;
}
    
