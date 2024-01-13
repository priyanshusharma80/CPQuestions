#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    /*
    
    // MATHS - 1 : Ichihime and triangle

    Property of a triangle
    sum of any two sides should be greater than the 3rd side.


    */

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a*2>b) cout<<"-1 -1"<<endl;
        else cout<<a<<" "<<2*a<<endl;
    }
    return 0;
}
