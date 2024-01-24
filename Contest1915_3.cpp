#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    long long sum = 0;
    for(long long i=0;i<n;i++){
        long long element;
        cin>>element;
        sum+=element;
    }

    long long ans = sqrt(sum);
    if(ans*ans==sum) cout<<"YES";
    else cout<<"NO";

    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
