#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> v;
    for(int i=1;i<=n;i++) v.push_back(i);

    reverse(v.begin(),v.begin()+n-k);
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
