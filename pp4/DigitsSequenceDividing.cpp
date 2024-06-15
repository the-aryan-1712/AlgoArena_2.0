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

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test(q){
        int n;
        cin>>n;
        string num;
        cin>>num;
        if(n&1){
            string ros = num.substr(0,n/2);
            string ros2 = num.substr(n/2);
            cout<<"YES\n2\n"<<ros<<" "<<ros2<<endl;
        }
        else if(n==2){
            if(num[0]==num[1])cout<<"NO\n";
            else 
                cout<<"YES\n2\n"<<num[0]<<" "<<num[1]<<endl;
        }  
        else{
            string ros = num.substr(0,n/2-1);
            string ros2 = num.substr(n/2-1);
            cout<<"YES\n2\n"<<ros<<" "<<ros2<<endl;
        } 

    }
    
    
    
    
    return 0;
}