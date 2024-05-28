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
#define pre 1e-9

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n=2;
    ll p = 2;

    double low = 1;
    double high = 2;
    double ans ;
    while(high - low > pre){
        double mid = (high + low)/2;
        if( pow(mid,p) < n ){
            low = mid;
        }
        else{
            high=mid; 
        }
    }
    cout<<setprecision(10)<<high<<endl;
    cout<<setprecision(10)<<pow(2,0.5)<<endl;
    
    
    
    
    return 0;
}