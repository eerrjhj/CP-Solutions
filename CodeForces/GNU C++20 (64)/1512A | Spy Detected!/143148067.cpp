#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define debug(x) cout << x << endl;
#define ll long long
#define mod 1000000007
 
//fast factors
//count distinct array
// fast prime
// XOR(num & string)
 
 
int main()
{
 
    #ifndef ONLINE_JUDGE
    freopen("IN.txt","r",stdin);
    freopen("OUT.txt","w",stdout);
    #endif 
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
     ll t;
     cin >> t;
     while(t--)
     {
        ll n;
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        if(a[0]!=a[1] && a[0]!=a[2])
        {
            cout << 1 << endl;
            continue;
        }
        if(a[n-1]!=a[n-2] && a[n-1]!=a[n-3])
        {
            cout << n << endl;
            continue;
        }
        for(ll i=1;i<n-1;i++)
        {
            if(a[i]!=a[i-1] && a[i]!=a[i+1])
            {
                cout << i+1 << endl;
                break;
            }
        }
 
     }
    
 
 
}