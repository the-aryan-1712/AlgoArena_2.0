#include<bits/stdc++.h>

using namespace std;

#define test(t) int t;cin>>t;while(t--)
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

#define s 5005

ll dp[s][s],a[s];
ll solve(ll i,ll j)
{
    if(i > j)
    return 0;

    if(dp[i][j] != -1)
    return dp[i][j];

    ll op1 = a[i] + min(solve(i+2,j), solve(i+1,j-1) );
    ll op2 = a[j] + min(solve(i+1,j-1), solve(i,j-2) );

    return dp[i][j] = max(op1,op2);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;

    for(ll i=0;i<n;i++)
    cin>>a[i];

    memset(dp,-1,sizeof(dp));
    cout<<solve(0,n-1)<<endl;

    return 0;

}