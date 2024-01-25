#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(abs(a-b)%2) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();
}
