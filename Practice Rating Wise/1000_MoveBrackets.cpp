#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int opened=0;
    int count = 0;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='(') opened++;
        else if(opened>0) opened--;
        else count++;
    }
    cout<<count<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
