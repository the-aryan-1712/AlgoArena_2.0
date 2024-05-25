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
    ll(k);
    vector<long long> da(n);
    vector<long long> a(m);
    for(long long i=0;i<n;i++){
        cin>>da[i];
    }
    for(long long i=0;i<m;i++){
        cin>>a[i];
    }
    sort(da.begin(),da.end());
    sort(a.begin(),a.end());
    long long count=0;
    for(int i=0,j=0;i<n && j<m;   ){
        if(da[i]-k <= a[j] && da[i]+k >= a[j]){
            count++;i++;j++;
    
        }
        else if(da[i]-k > a[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<count;
 
    return 0;
}