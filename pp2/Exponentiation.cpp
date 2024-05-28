#include<bits/stdc++.h>

using namespace std;

#define test(t) int t;cin>>t;while(t--)
#define int(t) int t;cin>>t
#define MOD 1000000007
#define endl '\n' 
#define PI 3.141592653589793238460
typedef long long ll ;

typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;

typedef vector<pair<int,int>> vpi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;

typedef map<int,int>mi;
typedef map<ll,ll> ml;

typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t){
        ll a,b;
        cin>>a>>b;
        ll product = 1;
        while(b){
            if(b%2){
                product*=a;
                product%=MOD;
                b--;
            }
            else{
                b/=2;
                a*=a;
                a%=MOD;
            }
        }
        cout<<product<<endl;


    }
    
    
    
    
    
    return 0;
}



ll power(ll x,   ll y, ll p)  
{  
    ll res = 1;      
    x = x % p;             
    while (y > 0)  
    {    
        if (y & 1)  
            res = (res*x) % p;   
        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res;  
} 



