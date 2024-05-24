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
    int(n);
    ll(x);
    vector<long long> wt(n);
    fori(i,0,n){
        cin>>wt[i];
    }
    sort(wt.begin(),wt.end());
    int count = 0;
    for(int i=0,j=n-1;i<=j;  ){
        if(wt[i] + wt[j] <= x){
            count++;
            i++;
            j--;
        }
        else{
            count++;
            j--;
        }
    }
    cout<<count;

    
    
    
    
    return 0;
}