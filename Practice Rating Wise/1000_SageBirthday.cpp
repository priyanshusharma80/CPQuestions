#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    cout<<(n/2+n%2-1)<<endl;
    if(n==1){
        int element;
        cin>>element;
        cout<<element;
        return ;
    }
    vector<int> a,b;
    for(int i=1;i<=n/2;i++) a.push_back(i);
    for(int i=n/2+1;i<=n;i++) b.push_back(i);

    int i=0,j=0;
    while(i<a.size() and j<b.size()) cout<<b[j++]<<" "<<a[i++]<<" ";
    
    if(j<b.size()) cout<<b[j];
}

int main() {
    solve();
    return 0;
}
