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
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int currmax = 0;
        int omax = 0;
        for(int i=0;i<21;i++){
            currmax=0;
            int temp = 0;
            for(int j=0;j<n;j++){
                
                if(  (arr[j]>>i) & 1  ){
                    currmax = max(currmax,temp);
                    temp=0;
                    
                }
                else{
                    temp++;
                }

            }
            omax = max(currmax, omax) ;
        }
        cout<<omax+1<<endl;


    }
    
    
    
    
    return 0;
}