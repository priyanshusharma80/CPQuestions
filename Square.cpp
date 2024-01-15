#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){

    vector<int> x(4),y(4);

    for(int i=0;i<4;i++) cin>>x[i]>>y[i];
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    int side = max(x[2]-x[1],y[2]-y[1]);

    cout<<side*side<<endl;

    // unordered_map<int,int> u;
    // int ans;
    // for(int i=0;i<4;i++){
    //     int a,b;
    //     cin>>a>>b;
    //     if(u.find(a)!=u.end()){
    //         int c1 = abs(u[a]-b);
    //         int c2 = abs(a-u[a]);
    //         int temp = max(c1,c2);
    //         ans = c1*c1;
    //         break;
    //     }
    //     else u[a]=b;
    // }
    // cout<<ans<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
