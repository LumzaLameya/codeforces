#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi(v) for (auto &it : v) cin >> it;
#define vo(v) for (auto it : v) cout << it << " "; cout << endl;
#define yout cout << "YES" << endl;
#define nout cout << "NO" << endl;
#define org(v) sort(v.begin(), v.end());
#define rorg(v) sort(v.rbegin(), v.rend());
#define rvr(v) reverse(v.begin(), v.end());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
const ll mod = 1e9+7;
const int N=1e5+5;
const ll inf=3e18+9;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);


    int tc;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        if(y<-1)
        {
            nout;
        }
        else
            yout;
    }
    return 0;
}
