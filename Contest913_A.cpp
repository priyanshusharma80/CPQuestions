#include <iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;
    for(char i='a';i<='h';i++){
        if(i==s[0]) continue;
        cout<<i<<s[1]<<endl;
    }
    for(char i='8';i>'0';i--) if(i==s[1]) continue; else cout<<s[0]<<i<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
