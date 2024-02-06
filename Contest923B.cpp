#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string ans = "";
    vector<int> v(27,0);
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        for(int j=1;j<=26;j++){
            if(v[j]==e){
                ans+=('a'+j-1);
                v[j]++;
                break;
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
