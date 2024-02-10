#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,m;
    cin>>n>>m;
    unordered_map<string,string> u;
    for(int i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
        u[a]=b;
    }

    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        if(tmp.length()<=u[tmp].length()) cout<<tmp<<" ";
        else cout<<u[tmp]<<" ";
    }
}

int main() {
    solve();
    return 0;
}
