#include<bits/stdc++.h>

using namespace std;

#define test(t) int t;cin>>t;while(t--)
#define int(t) int t;cin>>t
#define MOD 1000000007
#define vi vector<int>
#define endl '\n' 
#define PI 3.141592653589793238460
#define ll(t) long long t;cin>>t
#define fori(i, a, b) for (int i = a; i < b; i++)
#define ford(i, a, b) for (int i = a; i > b; i--)

int main()
{   
    ll(n);
    ll(m);
    multiset<long long>tp;
    for(long long i=0;i<n;i++){
        ll(x);
        tp.insert(x);
    }

    vector<long long> mp(m);
    for(long long i=0;i<m;i++){
        
        cin>>mp[i];
    }
    for(long long i=0;i<m;i++){
        auto iter =  tp.upper_bound(mp[i]);
        if(iter==tp.begin()){
            cout<<-1<<endl;
        }
        else{
            iter--;
            cout<<(*iter)<<endl;
            tp.erase(iter);
        }
        
    
    }



    
    return 0;
}