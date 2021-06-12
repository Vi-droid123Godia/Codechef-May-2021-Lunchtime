#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k; cin>>n>>k;
    string s; cin>>s;
    int sum=n-1;
    for(int i=1;i<n;++i) sum+=(s[i]==s[i-1]);
    while(k--){
        int q; cin>>q; q--;
        if(s[q]=='1') s[q]='0';
        else s[q]='1';
        if(q<n-1){ 
            if(s[q]==s[q+1]) sum++;
            else sum--;
        }
        if(q>0){
            if(s[q]==s[q-1]) sum++;
            else sum--;
        }
        cout<<sum<<"\n";
    }
}
signed main(){
  int t; cin>>t;
  while(t--){
    solve();
  }
  return 0;
}