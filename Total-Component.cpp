#include<bits/stdc++.h>
using namespace std;

const int N=1e7+2;
vector<bool> prime(N,true);
vector<int> prefixPrime(N);

void sieve(){
    prime[0]=prime[1]=false;
    for(int i=2;i*i<N;++i){
        if(prime[i]){
            for(int j=i*i;j<=N;j+=i){
                prime[j]=false;
            }
        }
    }
}

void prec(){
    int cnt=0;
    for(int i=1;i<=N;++i){
        if(prime[i]) cnt++;
        prefixPrime[i]=cnt;
    }
}

void solve(){
    int n; cin>>n;
    if(n==2) cout<<"1\n";
    else if(n==3) cout<<"2\n";
    else{
        int lim=n/2;
        int extra=prefixPrime[n]-prefixPrime[lim];
        int groups=1+extra;
        cout<<groups<<"\n";
    }
}

int main(){
    sieve();
    prec();
    int t; cin>>t;
    while(t--){
        solve();
    }
}