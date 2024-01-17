#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,m,k;
    cin>>n>>m>>k;

    int max1=INT_MIN,max2=INT_MIN;
    for(long long i=0;i<n;i++){
        long long element;
        cin>>element;
        if(max1<element){
            max2=max1;
            max1=element;
        }
        else if(max2<element) max2=element;
    }

    long long t = m/3;
    long long s = m-t;
    long long total = t*max2+s*max1;
    cout<<total<<endl;
    return 0;
}
