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

const double EPS = 0.001;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N;
    int K;
    ll count;
    vl factors(20);

    cin>>N>>K;

    for (int i = 0; i < K; i++)
        cin>>factors[i];

    count = N;
    double logN = log(N) + EPS;

    for (int mask = 0; mask < (1 << K); mask++) {
        int bitCount = 0;
        for (int i = 0; i < K; i++) {
            if (mask & (1 << i)) {
                bitCount++;
            }
        }
        bool isOdd = (bitCount & 1);
        
        ll product = 1;
        double l = 0.0;

        for (int i = 0; i < K; i++) {
            if (mask & (1 << i)) {
                l += log(factors[i]);
                product *= factors[i];
            }
        }

        if (l < logN) {
            count += (isOdd ? 1 : -1) * (N / product);
        }
    }

    cout<<count;
}
