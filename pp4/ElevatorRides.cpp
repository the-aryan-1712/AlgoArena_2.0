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

typedef pair<int, ll> st;


int main() {
    int N;
    ll X;
    cin >> N >> X;
    
    vector<ll> wt(N);
    for (int i = 0; i < N; i++) {
        cin >> wt[i];
    }
    
    vector<st> dp(1 << N, {21, 0});
    dp[0] = {1, 0};

    for (int mask = 1; mask < (1 << N); mask++) {
        dp[mask] = {21, 0};
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                st prev = dp[mask ^ (1 << i)];
                if (prev.second + wt[i] <= X) {
                    prev.second += wt[i];
                } else {
                    prev.first++;
                    prev.second = wt[i];
                }
                dp[mask] = min(dp[mask], prev);
            }
        }
    }

    cout << dp[(1 << N) - 1].first << endl;

    return 0;
}
