#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(auto it:s) if(it=='+') cnt++; else cnt--;
    cout<<abs(cnt)<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();
}
