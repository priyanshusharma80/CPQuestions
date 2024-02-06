#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            mini = min(mini,i);
            maxi = max(maxi,i);
        }
    }

    cout<<(maxi-mini+1)<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
