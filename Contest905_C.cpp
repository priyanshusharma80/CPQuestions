#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    int ans = k;
    int even =0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%k==0) ans=0;
        if(v[i]%2==0) even++; 
        ans = min(ans,k-v[i]%k);
    }

    if(k==4){
        if(even>=2) ans=0;
        else if(even==1) ans=min(ans,1);
        else ans=min(ans,2);
    }

    

    cout<<ans<<endl;
    
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
