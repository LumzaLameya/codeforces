#include<stdio.h>
int main()
{
    int n,m,s;
    scanf("%d %d",&n,&m);
    if(m>=1 && n<=16)
    s=(n*m)/2;
    printf("%d\n",s);
    return 0;
}
