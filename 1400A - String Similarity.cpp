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
        int n;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
            cout<<s[n-1];
        cout<<endl;
    }
    return 0;
}

