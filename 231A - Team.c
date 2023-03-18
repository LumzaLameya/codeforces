#include<stdio.h>
int main()
{
    int i,n,a,b,c,m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>1)
            m++;
    }
    printf("%d\n",m);
    return 0;
}
