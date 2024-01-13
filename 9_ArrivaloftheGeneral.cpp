#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int mini=INT_MAX,miniInd,maxi=INT_MIN,maxInd;
    for(int i=1;i<=n;i++){
        int element;
        cin>>element;
        if(mini>=element) mini=element,miniInd=i;
        if(maxi<element) maxi=element,maxInd=i;
    }

    int ans = maxInd-1+n-miniInd;
    if(maxInd>miniInd) ans--;
    cout<<ans;
    return 0;
}
