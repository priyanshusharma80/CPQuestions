#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp> 
using namespace std;

bool answer(int n,int m){
    if(n==m) return true;
    if(n%3) return false;
    return answer(n/3,m) or answer(2*n/3,m);
}

void solve(){
    int n,m;
    cin>>n>>m;
    string ans = answer(n,m)?"YES":"NO";
    cout<<ans<<endl;  
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}