#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a) cin>>i;
    sort(a.begin(),a.end(),greater<int>());
    int evensum=0,oddsum=0;
    for(int i=0;i<n-2;i+=2){
        evensum+=a[i];
        k--;
        if(k==0) {
            oddsum+=a[i+1]+a[i+2];
            break;
        }
        else oddsum+=a[i+1];
    }
    int ans=max(oddsum,evensum);
    cout<<ans<<"\n";
}
signed main(){
  int t; cin>>t;
  while(t--){
    solve();
  }
  return 0;
}