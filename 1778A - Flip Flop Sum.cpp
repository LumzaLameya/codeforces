#include<bits/stdc++.h>
#include<numeric>
using namespace std;
#define ll long long int
char a[10][10];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,p=0,ne=0,m=0;
        cin>>n;
        int a[n+5];
        cin>>a[0];
        if(a[0]==-1)
            ne++;
        else
            p++;
        sum+=a[0];
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==a[i-1] && a[i]==-1)
                m++;
            if(a[i]==-1)
                ne++;
            else
                p++;
            sum+=a[i];
        }
        if(m>0)
            cout<<sum+4<<endl;
        else
        {
            if(ne==0)
                cout<<sum-4<<endl;
            else
                cout<<sum<<endl;
        }
    }
    return 0;
}

