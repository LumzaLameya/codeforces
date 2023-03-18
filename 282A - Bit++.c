#include<stdio.h>
int main()
{
    int n,m=0;
    char x[5];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",&x);
        if((strcmp(x,"X++")==0)||(strcmp(x,"++X")==0))
           m++;
        else
            m--;
    }
    printf("%d\n",m);
    return 0;
}
