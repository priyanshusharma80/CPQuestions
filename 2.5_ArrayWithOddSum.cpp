#include <iostream>
using namespace std;
void solve() {
    int n;
    cin>>n;
    long sum = 0,odd=0,even=0;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        sum+=element;
        if(element%2) odd++;
        else even++;
    }

    if(sum%2) cout<<"YES"<<endl;
    else{
        if(odd>=1 and even>=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
