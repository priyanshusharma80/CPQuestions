#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<n;j++) cin>>b[j];

    long long ans = 0;
    vector<long long> cnt1(2*n+1,0),cnt2(2*n+1,0);

    for(long long i=0;i<n;i++){
        long long j = i;
        while(j<n and a[j]==a[i]) j++;
        cnt1[a[i]] = max(cnt1[a[i]],j-i);
        i=j-1;
    }

    for(long long i=0;i<n;i++){
        long long j =i;
        while(j<n and b[j]==b[i]) j++;
        cnt2[b[i]]=max(cnt2[b[i]],j-i);
        i=j-1;
    }

    for(long long i=1;i<=2*n;i++) ans = max(ans,cnt1[i]+cnt2[i]);
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
