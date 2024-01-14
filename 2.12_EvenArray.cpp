#include <iostream>
using namespace std;
void solve() {
    int n;
    cin>>n;
    

    int count=0;
    int odd=0;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        if(i%2==0 and element%2) count++;
        if(element%2) odd++;
    }
    int even = n-odd;

    if((n%2==0 and even!=odd) or (n%2 and even!=odd+1)) cout<<"-1"<<endl;
    else cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
