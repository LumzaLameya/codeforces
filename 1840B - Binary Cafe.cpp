#include<bits/stdc++.h>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<iomanip>
using namespace std;
#define ll long long int
const ll mod=1e9+7;
ll z[10000005]= {0};

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans;
        cin>>n>>k;
        if(n>=pow(2,k)-1)
            ans=pow(2,k);
        else
            ans=n+1;
        cout<<ans<<endl;
    }
    return 0;
}
