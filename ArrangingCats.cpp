#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int p;
    cin>>p;
    string a,b;
    cin>>a>>b;

    int m=0,n=0;
    for(int i=0;i<p;i++){
        if(a[i]=='0' and b[i]=='1') m++;
        if(a[i]=='1' and b[i]=='0') n++;
    }

    int ans = max(m,n);
    cout<<ans<<endl;
    // int ans = 0;
    // for(int i=0;i<n;i++) ans+=((a[i]-'0')^(b[i]-'0'));
    // sort(a.begin(),a.end());
    // sort(b.begin(),b.end());

    // int count1=0,count2=0;
    // for(int i=0;i<n;i++){
    //     if(a[i]=='1') count1++;
    //     if(b[i]=='1') count2++;
    // }
    
    
    // ans+=abs(count2-count1);
    // cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
