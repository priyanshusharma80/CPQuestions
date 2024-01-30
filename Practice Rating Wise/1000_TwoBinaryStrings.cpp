#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    bool ok = false;
    for (int i=0;i<a.size()-1;++i)
        if (a[i]=='0' && a[i]==b[i] && a[i+1]=='1' && a[i+1]==b[i+1]) ok = true;
    
    if (ok) puts("YES");
    else puts("NO");
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
