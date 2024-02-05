#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);

    for (int i =1;i<=n;i++) cin>>a[i];
    int p = 1;
    while (p<n && a[p]<=a[p+1]) p++;
    int s = 1;
    while (s<n && a[n-s] >= a[n-s + 1]) s++;
    if (s+p>=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    // vector<int> v(n);
    // for(int i=0;i<n;i++) cin>>v[i];

    // int breaks = 0;
    // bool increasing = (v[0] < v[1]);

    // for (int i = 2; i < n; i++) {
    //     if ((v[i - 1] < v[i] && !increasing) || (v[i - 1] > v[i] && increasing)) {
    //         breaks++;
    //         increasing = !increasing;
    //     }
    // }

    // if(breaks<=1) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
