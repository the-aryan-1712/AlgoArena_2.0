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


bool cmpJ(const pair<pair<ll, ll>, ll>& j1, const pair<pair<ll, ll>, ll>& j2) {
    return j1.first.second < j2.first.second;
}

int binarySearch(const vector<pair<pair<ll, ll>, ll>>& jobs, ll index) {
    ll low = 0, high = index - 1;

    while (low <= high) {
        ll mid = (low + high) / 2;
        if (jobs[mid].first.second < jobs[index].first.first) {
            if (jobs[mid + 1].first.second < jobs[index].first.first)
                low = mid + 1;
            else
                return mid;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll num;
    cin >> num;

    vector<pair<pair<ll, ll>, ll>> jobs(num);
    for (ll i = 0; i < num; ++i)
        cin >> jobs[i].first.first >> jobs[i].first.second >> jobs[i].second;

    sort(jobs.begin(), jobs.end(), cmpJ);

    vector<ll> dp(num);
    dp[0] = jobs[0].second;

    for (ll i = 1; i < num; ++i) {
        ll MIC = jobs[i].second;
        ll PJI = binarySearch(jobs, i);
        if (PJI != -1)
            MIC += dp[PJI];

        dp[i] = max(dp[i - 1], MIC);
    }

    cout << dp[num - 1] << endl;

    return 0;
}
