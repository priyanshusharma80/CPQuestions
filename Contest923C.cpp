#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,m;
    cin>>n>>m>>k;

    vector<int> a(n),b(m);
    
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    unordered_set<int> u(a.begin(),a.end());
    unordered_set<int> v(b.begin(),b.end());

    vector<int> c(a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    sort(c.begin(),c.end());
    unique(c.begin(),c.end());

    // cout<<"vector c: ";
    // for(auto it:c) cout<<it<<" ";

    // cout<<endl;

    // cout<<"set u: ";
    // for(auto it:u) cout<<it<<" ";

    // cout<<endl;

    // cout<<"set v: ";
    // for(auto it:v) cout<<it<<" ";

    // cout<<endl;
    


    bool flag = 1;
    int cnt1=0,cnt2=0;
    for(int i=0;i<k;i++){
        if(c[i]!=i+1) flag=0;
        if(u.find(c[i])!=u.end()) cnt1++;
        if(v.find(c[i])!=v.end()) cnt2++;
    }

    // cout<<cnt1<<" "<<cnt2<<endl;
    // cout<<n<<" "<<m<<endl;

    if(flag==0) cout<<"NO"<<endl;
    else if(cnt1>=k/2 and cnt2>=k/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
