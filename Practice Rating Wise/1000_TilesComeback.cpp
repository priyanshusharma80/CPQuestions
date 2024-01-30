#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    int left = 0,right=0;
    int kleft=k,kright=k;

    if(v[0]==v[n-1]){
        kleft=k/2;
        kright=k-k/2;
    }
    int i=0,j=n-1;
    for(;i<n and left<kleft;i++) if(v[i]==v[0]) left++;
    for(;j>=0 and right<kright;j--) if(v[j]==v[n-1]) right++;
    
    i--; j++;
    if(i<j) cout<<"YES";
    else cout<<"NO";
    cout<<endl;

    // unordered_map<int,int> u;
    // int first,last;
    // for(int i=0;i<n;i++){
    //     int element;
    //     cin>>element;
    //     if(i==0) first = element;
    //     if(i==n-1) last = element;
    //     u[element]++;
    // }

    // if(u[first]>=k and u[last]>=k and (u[first]+u[last])%k==0) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
