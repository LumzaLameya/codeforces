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
        ll n,x,ans=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            ans+=x;
        }
        cout<<(ans+n-1)/n<<endl;
    }
    return 0;
}
