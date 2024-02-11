#include <iostream>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(a&1==1 && b&1==1) cout<<"No"<<endl;
    else if(a%2==0 && b%2==0) cout<<"Yes"<<endl;
    else if(a+b==3*min(a,b)) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
