#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve(){
    int n; 
    cin>>n; 
    vector<int> v(n); 
    int sum = 0; 
    for(int i=0;i<n;i++) cin>>v[i],sum+=v[i]; 

    int k = sum/n; 
    int total =0; 
    bool flag = true; 
    for(int i =0;i<n;i++){ 
        if(v[i]>k) total+=(v[i]-k); 
        else if(v[i]<k){
            total-=(k-v[i]);
            if(total<0){
                flag=false;
                break;
            }
        }
    } 
    if(flag) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl;
}


int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
