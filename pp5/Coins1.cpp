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

void solve(int N, const vector<double>& pr) {
    vector<double> dp(N + 1, 0.0);
    dp[0] = 1.0;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j >= 0; --j) {
            if (j == 0) {
                dp[j] = dp[j] * (1.0 - pr[i]);
            } else {
                dp[j] = dp[j] * (1.0 - pr[i]) + dp[j - 1] * pr[i];
            }
        }
    }

    double result = 0.0;
    for (int i = 0; i <= N; ++i) {
        int tails = N - i;
        if (i > tails) {
            result += dp[i];
        }
    }

    cout<< result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<double> pr(N);
    for (int i = 0; i < N; ++i) {
        cin >> pr[i];
    }

    solve(N, pr);

    return 0;
}