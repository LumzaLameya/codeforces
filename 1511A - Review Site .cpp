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
        ll n,sum=0;
        cin>>n;
        ll a[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1 || a[i]==3)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
