#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> 
using namespace std;

void solve(){
    int n;
    cin>>n;

    string a,b;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        a+=c;
    }

    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        b+=c;
    }

    // possible combinations 
    string p1 = a+b;
    string p2 = b+a;
    string temp = b;
    string p3 = a+string(temp.rbegin(),temp.rend());
    string p4 = string(a.rbegin(),a.rend())+b;

    vector<string> v = {p1,p2,p3,p4};

    // cout<<p1<<" "<<p2<<" "<<p3<<" "<<p4<<endl;
    int ans = 1;
    for(int i=0;i<4;i++){
        int maxlen = 1;
        int cnt = 1;
        string s = v[i];
        for(int j=0;j<2*n;j++){
            if(s[j]==s[j+1]) cnt++;
            else cnt=1;
            maxlen = max(maxlen,cnt);
        }
        ans = max(ans,maxlen);
    }

    cout<<ans<<endl;
    
}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    solve();
}