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

    int n,mod=1e9+7;
    cin>>n;

    int S = n*(n+1)/2; 
    int s = S/2; 

    vector<vi> dp(n+1,vi(s+1,0)); 


    
        dp[0][0] = 1;

        for(int add=0;add<=s;add++)
        {
            
            for(int i=1;i<n;i++)
            {
                dp[i][add] = dp[i-1][add];
                if(add - i >= 0)
                {
                    dp[i][add] = dp[i-1][add] + dp[i-1][add-i];

                    dp[i][add] %= mod;
                }
            }
        }
        (S%2 != 0) ? (cout<<0<<endl) : (cout<<dp[n-1][s]<<endl);
    
    return 0;
}