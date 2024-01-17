#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    unordered_map<int,int> u;
    int ans;
    for(int i=0;i<4;i++){
        int a,b;
        cin>>a>>b;
        if(u.find(a)!=u.end()){
            int c1 = abs(u[a] - b);
            int c2 = abs(a - u[a]);
            ans = c1*c2;
            break;
        }
        else u[a]=b;
    }
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
