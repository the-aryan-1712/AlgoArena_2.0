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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,x;
    cin>>n>>x;

    vi page(n),price(n);
    int a,b;

    for(int i=0;i<n;i++){
        cin>>price[i];
    }

    for(int i=0;i<n;i++){
        cin>>page[i];
    }

    vector<vi> dp(n+1,vi(x+1,0));

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {            
            dp[i][j] = dp[i-1][j];
            if(j >= price[i-1])
            {
                dp[i][j] = max (dp[i][j],dp[i-1][j-price[i-1]] + page[i-1]);  
            }
        }
    }

    cout<< dp[n][x] <<endl;

    return 0;
}