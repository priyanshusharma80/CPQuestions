#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long> ex;
    long long mini=INT_MAX,maxi=INT_MIN;
    for(long long i=0;i<n;i++){
        long long a,x;
        cin>>a>>x;
        if(a==1 and maxi<x) maxi=x;
        else if(a==2 and mini>x) mini=x;
        else ex.push_back(x);
    }

    if(maxi>mini){
        cout<<"0"<<endl;
        return ;
    }

    // cout<<"maxi "<<maxi<<" mini "<<mini<<endl;

    long long totalc = mini-maxi+1;
    for(long long i=0;i<ex.size();i++) if(ex[i]>=maxi and ex[i]<=mini) totalc--;
    cout<<totalc<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) solve();
}
