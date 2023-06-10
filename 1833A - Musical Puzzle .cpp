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
        string s;
        cin>>n>>s;
        set<string>a;
        for(ll i=0;i<n-1;i++)
            a.insert(s.substr(i,2));
        cout<<a.size()<<endl;
    }
    return 0;
}
