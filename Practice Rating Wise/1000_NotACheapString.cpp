#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int target,sum=0;
    cin>>target;

    string temp(s);
    sort(temp.rbegin(),temp.rend());

    int cost = 0;
    for(int i=0;i<s.length();i++) cost += s[i]-'a'+1;
    map<char,int> del;
    for(int i=0;i<s.length();i++){
        if(cost>target) del[temp[i]]++,cost-=temp[i]-'a'+1;
    }

    for(int i=0;i<s.length();i++){
        if(del[s[i]]>0){
            del[s[i]]--;
            continue;
        }
        cout<<s[i];
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
