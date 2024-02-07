#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int l=0,r=n-1;
    while(l<n-1 and v[l]>=v[l+1]) l++;
    while(l<r and r>0 and v[r]>=v[r-1]) r--;
    
    if(l==r) cout<<"YES"<<endl;
    else{
        while(l<r) if(v[l]!=v[l+1]){
            cout<<"NO"<<endl;
            break;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
