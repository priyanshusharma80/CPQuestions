#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int minIndex=0,maxIndex=0;
    for(int i=1;i<n;i++){
        if(v[minIndex]>v[i]) minIndex=i;
        else if(v[maxIndex]<v[i]) maxIndex=i;
    }
    if(abs(maxIndex-minIndex)==1) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
