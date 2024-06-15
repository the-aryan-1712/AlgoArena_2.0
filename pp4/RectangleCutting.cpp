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

int solve(int a, int b, vector<vi>& m) {
    if (a > b) swap(a, b);
    if (a == b) return 0;
    if (m[a][b] != -1) return m[a][b];

    int res = INT_MAX;
    for (int i = 1; i <= a / 2; ++i) {
        res = min(res, 1 + solve(i, b, m) + solve(a - i, b, m));
    }
    for (int j = 1; j <= b / 2; ++j) {
        res = min(res, 1 + solve(a, j, m) + solve(a, b - j, m));
    }

    m[a][b] = res;
    return res;
}

int main() {
    int A, B;
    cin >> A >> B;
    vector<vi> m(A + 1, vi(B + 1, -1));
    cout<<solve(A, B, m)<<endl;
    return 0;
}
