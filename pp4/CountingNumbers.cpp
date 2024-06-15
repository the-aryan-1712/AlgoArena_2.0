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

const int M = 20;

vb b(M,0);
ll dp[10][M];

ll solve(ll x) {
    if (x <= 10) return x;

    vector<int> dig;
    memset(dp, 0, sizeof(dp));

    while (x > 0) {
        dig.push_back(x % 10);
        x /= 10;
    }
    reverse(dig.begin(), dig.end());
    int num = dig.size();

    b[0] = true;
    for (int i=1;i<num;i++) {
        b[i] = b[i - 1] && (dig[i] != dig[i - 1]);
    }

    for (int d = 1; d < dig[0]; d++) {
        dp[d][0] = 1;
    }

    for (int i=1;i<num;i++) {
        if (b[i - 1]) {
            for (int d = 0; d < dig[i]; d++) {
                if (d != dig[i - 1]) {
                    dp[d][i]++;
                }
            }
        }

        for (int d = 1; d <= 9; d++) {
            dp[d][i]++;
        }

        for (int prev = 0; prev <= 9; prev++) {
            for (int curr = 0; curr <= 9; curr++) {
                if (prev != curr) {
                    dp[curr][i] += dp[prev][i - 1];
                }
            }
        }
    }

    ll count = b[num-1];
    for (int d = 0; d <= 9; d++) {
        count += dp[d][num-1];
    }

    return count;
}

int main() {
    ll a, b;
    cin >> a >> b;
    cout << solve(b) - solve(a - 1) << endl;
    return 0;
}
