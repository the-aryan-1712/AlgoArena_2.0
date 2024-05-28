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

#define n 1e4
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    vl isPrime(n,1);               // is prime or not 

    vl lpf(n,0); lpf[0]=0;lpf[1]=0;     // lowest prime factor 

    vl hpf(n);hpf[0]=0;hpf[1]=0;       // highest prime factor 

    vl primeFactors[10000];
    vl Divisor[10000];

    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i<n;i++){

        
        if(isPrime[i]==1){
            hpf[i]=i;
            lpf[i]=i;
            primeFactors[i].push_back(i);
            for(int j=i*2;j<n;j+=i){
                isPrime[j]=0;
                hpf[j]=i;
                if(lpf[j]==0){
                    lpf[j]=i;
                }
                primeFactors[j].push_back(i);
            }
        }
    }
    for(int i=2;i<n;i++){

        for(int j=i;j<n;j+=i){
            Divisor[j].push_back(i);
        }
    }
    
    for(int i=2;i<10;i++){
        cout<<isPrime[i]<<" "<<lpf[i]<<" "<<hpf[i]<<endl;
        for(auto ele : primeFactors[i]){
            cout<< ele <<" ";
        }
        cout<<endl;
        for(auto ele : Divisor[i]){
            cout<< ele <<" ";
        }
        cout<<endl;
    }
    
    
    






    // n/2 + n/3 + n/4 + ....
    // nlog(n)

    // n/2 + n/3 + n/5 + n/7 ....
    // n(log(log(n)))
    return 0;
}