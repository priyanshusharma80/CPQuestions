#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    string temp="";
    vector<string> v;
    int n=s.length();
    for(int i=n-1;i>=0;i--){
        if(s[i]!='0'){
            temp=s.substr(i,n-i);
            v.push_back(temp);
            s[i]='0';
        }
    }

    cout<<v.size()<<endl;
    for(auto it:v) cout<<it<<" ";
    cout<<endl;


}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
}
