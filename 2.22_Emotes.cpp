#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,m,k;
    cin>>n>>m>>k;

    long long max1=INT_MIN,max2=INT_MIN;
    for(long long i=0;i<n;i++){
        long long element;
        cin>>element;
        if(max1<element){
            max2=max1;
            max1=element;
        }
        else if(max2<element) max2=element;
    }

    long long t = m/(k+1);
    long long cost = k*max1+max2;
    cost = cost*t;
    cost+=(m%(k+1)*max1);
    cout<<cost<<endl;
    return 0;
}
