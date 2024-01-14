#include <iostream>
using namespace std;
void solve() {
    int n;
    cin>>n;
    
    int temp = n/2;
    if(temp%2){
        cout<<"NO"<<endl;
        return;
    }
    
    cout<<"YES"<<endl;
    int sum1 = 0,sum2=0;
    for(int i=1;i<=n/2;i++) cout<<(2*i)<<" ",sum1+=2*i;
    for(int i=1;i<=n/2-1;i++) cout<<(2*i-1)<<" ",sum2+=(2*i-1);
    cout<<(sum1-sum2)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
