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

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test(t){
        int(n);
        string num;
        cin>>num;

        ll sum=0;
        ll ans=0;
        ml mp;
        mp[0]++;
        for(int i=0;i<n ;i++){
            sum+= num[i]-'0';
            ans+= mp[sum-(i+1)];
            mp[sum-(i+1)]++;

        } cout<<ans<<endl;




    }
    
    
    
    
    return 0;
}