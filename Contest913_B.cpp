#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    // OPTIMAL
    int sm=0,c=0;
    string ans;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='b') sm++;
        else if(s[i]=='B') c++;
        else if(s[i]>='a' and s[i]<='z'){
            if(sm>0) sm--;
            else ans=s[i]+ans;
        } 
        else if(s[i]>='A' and s[i]<='Z'){
            if(c>0) c--;
            else ans=s[i]+ans;
        }

    }
    
    cout<<ans<<endl;

    // BRUTE

    // stack<char> m,c;

    // for(int i=0;i<s.length();i++){
    //     if(s[i]=='b'){
    //         while(!m.empty() and !(m.top()>='a' and m.top()<='z')){
    //             c.push(m.top());
    //             m.pop();
    //         }
    //         if(!m.empty()) m.pop();
    //         while(!c.empty()) m.push(c.top()),c.pop();
    //     }
    //     else if(s[i]=='B'){
    //         while(!m.empty() and !(m.top()>='A' and m.top()<='Z')){
    //             c.push(m.top());
    //             m.pop();
    //         }
    //         if(!m.empty()) m.pop();
    //         while(!c.empty()) m.push(c.top()),c.pop();
    //     }
    //     else m.push(s[i]);
    // }
    // string ans;
    // while(!m.empty()) ans+=m.top(),m.pop();
    // reverse(ans.begin(),ans.end());
    // cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
