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
        ll n,x,y,c=0;
        cin>>n;
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            c+=m[x-i];
            m[x-i]++;
        }
        cout<<c<<endl;
    }

}

