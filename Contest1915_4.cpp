#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans="";
    unordered_set<char> v={'a','e'};
    unordered_set<char> c={'b','c','d'};
    for(int i=n-1;i>0;i--){
        if(v.find(s[i])!=v.end() and c.find(s[i-1])!=c.end()){
            ans+=s[i];
            ans+=s[i-1];
            ans+='.';
            i--;
        }
        else ans+=s[i];
    }

    ans.pop_back();

    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
