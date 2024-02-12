#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    set<int> s;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        s.insert(element);
    }

    if(s.size()==n) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
