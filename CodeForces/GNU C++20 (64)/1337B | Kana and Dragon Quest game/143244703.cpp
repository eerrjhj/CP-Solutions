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
        ll x,n,m;
        cin >> x >> n >> m;
        while(n>0 && ((x/2)+10)<x && x>0) 
        {
            // debug(x);
            x=(x/2) +10;
            n--;
        }
        
        if(x<=(10*m)) cout << "YES" << endl;
        else cout << "NO" << endl;
 
    }  
            
        
 
 
 
}                   