#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n =5;
    int arr[n][n];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                cout<<(abs(i-2)+abs(j-2))<<endl;
                return 0;
            }
        }
    }

    return 0;
}
