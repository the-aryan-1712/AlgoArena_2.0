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
{   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int(x);
    int(n);
    set<pair<int, int>> mp;
    multiset<int> ms;
    mp.insert({0,x});
    ms.insert(x);
    fori(i,0,n){
        ll(p);
        auto iter = mp.upper_bound({p,0});
        iter--;
        int start = (*iter).first;
        int end = (*iter).second;
        mp.erase(iter);
        ms.erase(ms.find(end-start));
        mp.insert({start,p});
        mp.insert({p,end});
        
        ms.insert(p-start);
        ms.insert(end-p);
       
       
        cout<<*ms.rbegin()<<" ";


    }
    
    
    
    
    
    return 0;
}