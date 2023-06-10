#include<bits/stdc++.h>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<iomanip>
using namespace std;
#define ll long long int
const ll mod=1e9+7;
ll z[10000005]= {0};
map<ll,ll>m;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n==1)
        {
            if(a[0]>1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            if(a[n-2]+1<a[n-1])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }

    }
    return 0;
}
