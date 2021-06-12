#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int a,b,c,d,k; cin>>a>>b>>c>>d>>k;
    k-=(abs(c-a)+abs(d-b));
    if(k<0) cout<<"no\n";
    else if(k==0) cout<<"yes\n";
    else{
        c=a;
        d=b;
        if(k%2==0) cout<<"yes\n";
        else cout<<"no\n";
    }
}
signed main(){
  int t; cin>>t;
  while(t--){
    solve();
  }
  return 0;
}