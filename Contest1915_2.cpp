#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<string> v(3);
    for(int i=0;i<3;i++) cin>>v[i];
    bool flag=false;
    for(int i=0;i<3;i++){
        int temp[3]={0};
        for(auto it:v[i]){
            if(it=='?') flag=true;
            else temp[it-'A']++;
        }

        if(flag){
            for(int i=0;i<3;i++) if(temp[i]==0){
                cout<<(char)(i+'A')<<endl;
                return;
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
