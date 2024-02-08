
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,m;
    cin>>n>>m;
    long long ans = 0;
 
    long long prev = 1;
    for(int i=0;i<m;i++){
        long long e;
        cin>>e;
        if(e<prev) ans+=(n-prev+e);
        else ans+=(e-prev);
        prev = e;
    }

    cout<<ans<<endl;
    return 0;
}