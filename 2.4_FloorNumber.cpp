#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    /*
    
    // MATHS - 1 : Ichihime and triangle

    n -> apartment number of petya
    x -> no of apartment each floor contains


    */

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n>>x;
        int prev = 2;
        if(n==1 || n==2) cout<<"1"<<endl;
        else{
            int count = 1;
            while(1){
                count++;
                int second = prev+x;
                if(n>=prev and n<=second) break;
                prev = second;
            }
            cout<<count<<endl;
        }
    }
    return 0;

    
}
