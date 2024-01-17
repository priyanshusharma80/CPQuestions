#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int digitalRoot(int n){
    if(n<10) return n;
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum>9) return digitalRoot(sum);
    return sum;
}

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int k,dr;
        cin>>k>>dr;
        int j=dr;
        while(1){
            if(digitalRoot(j)==dr) k--;
            if(k==0){
                cout<<j<<endl;
                break;
            }
            j++;
        }
    }
}
