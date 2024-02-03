#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m,ans=0;
    cin>>n>>m;

    vector<long long> v(n+m);
    for(int i=0;i<n+m;i++) cin>>v[i];

    sort(v.begin(),v.end()-1);
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++) ans+=v[i];
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
