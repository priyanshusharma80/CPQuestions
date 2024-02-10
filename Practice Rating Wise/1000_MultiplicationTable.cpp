#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n,x;
    cin>>n>>x;

    int ans = 0;

    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            if(i<=n and x/i<=n){
                if(i!=x/i) ans++;
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}

int main() {
    solve();
    return 0;
}
