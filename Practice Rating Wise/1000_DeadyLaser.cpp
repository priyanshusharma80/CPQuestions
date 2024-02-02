#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;

    if((x+d>=n or y-d<=1) and (y+d>=m or x-d<=1)) cout<<"-1"<<endl;
    else cout<<n+m-2<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}