#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("postive number");
    }
    else if (n<0)
    {
        printf("negative number");
    }
    
    else
    {
        printf("zero");
    }
    
    return 0;
}
