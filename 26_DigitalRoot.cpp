#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;

    while(t--){
        long long k,x;
        cin>>k>>x;
        long long ans = 9*(k-1)+x;
        cout<<ans<<endl;
    }
    return 0;
}
