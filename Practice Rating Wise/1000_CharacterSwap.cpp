#include <bits/stdc++.h>
using namespace std;

const int N=26;

void solve(){
    int n,count=1;
    cin>>n;
    string s,t;
    cin>>s>>t;
    unordered_map<char,char> u;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(u.find(s[i])!=u.end()){
                if(u[s[i]]==t[i]) count++;
            }
            else u[s[i]]=t[i];
        }
    }

    
    if(u.size()==1 and count==2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
